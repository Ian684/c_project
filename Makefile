CC ?= cc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic
LDFLAGS ?=

PROGRAMS := hello malloc StringToOther array_reverse array_sort array_stats average binary_search bit_count bit_toggle char_count collatz countdown csv_sum enum_day even_numbers factorial factorial_recursive fibonacci file_copy frequency gcd hex_print lcm leap_year linear_search linked_list matrix_trace palindrome parse_int pointer_swap power power_recursive prime_check queue reverse_string stack struct_point union_size uppercase word_count
SOURCES := array_reverse.c array_sort.c array_stats.c average.c binary_search.c bit_count.c bit_toggle.c char_count.c collatz.c countdown.c csv_sum.c enum_day.c even_numbers.c factorial.c factorial_recursive.c fibonacci.c file_copy.c frequency.c gcd.c hello.c hex_print.c lcm.c leap_year.c linear_search.c linked_list.c malloc.c matrix_trace.c palindrome.c parse_int.c pointer_swap.c power.c power_recursive.c prime_check.c queue.c reverse_string.c stack.c StringToOther.c struct_point.c union_size.c uppercase.c word_count.c
BIN_DIR := bin

.PHONY: all check clean

all: $(PROGRAMS:%=$(BIN_DIR)/%)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/hello: hello.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

$(BIN_DIR)/malloc: malloc.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

$(BIN_DIR)/StringToOther: StringToOther.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

$(BIN_DIR)/%: %.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

check: all
	@echo "Built $(words $(SOURCES)) C exercises successfully."

clean:
	rm -rf $(BIN_DIR)
