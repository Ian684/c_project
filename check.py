"""Build in a temporary directory; original beginner examples remain independent."""
from pathlib import Path
import os
import subprocess
import tempfile

root = Path(__file__).resolve().parent
with tempfile.TemporaryDirectory() as temporary:
    executables = {}
    for source in sorted((root / 'practice').glob('*.c')):
        executable = Path(temporary) / (source.stem + ('.exe' if os.name == 'nt' else ''))
        subprocess.run([os.environ.get('CC', 'gcc'), '-std=c11', '-Wall', '-Wextra', '-Wpedantic', '-Werror', str(source), '-o', str(executable)], check=True)
        executables[source.stem] = executable
    for name in sorted(set(executables) - {'int_sum'}):
        arguments = [str(Path(temporary) / (name + '.dat'))] if name in {'13_csv_quote','39_binary_file','40_line_count','41_file_seek'} else []
        subprocess.run([str(executables[name]), *arguments], check=True)
    executable = str(executables['int_sum'])
    for args, status, output in [(['2', '-3', '5'], 0, '4'), (['0'], 0, '0'), (['9223372036854775807'], 0, '9223372036854775807'), (['9223372036854775807', '1'], 2, ''), (['-9223372036854775808', '-1'], 2, ''), (['3oops'], 2, ''), ([''], 2, ''), ([], 2, '')]:
        result = subprocess.run([executable, *args], capture_output=True, text=True)
        assert result.returncode == status and result.stdout.strip() == output, (args, result)
assert len(executables) == 50
print('50 C programs: build, behavior and overflow checks passed')
