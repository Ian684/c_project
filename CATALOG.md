# 50 題練習目錄

題號代表獨立實作單元，不把測試案例、重複輸入或程式行數算成額外題目。原本的專案檔案仍保留，以下是這次有說明及驗證的 50 個單元。

## 執行與驗證

    python check.py
    gcc -std=c11 -Wall -Wextra -Werror practice/13_csv_quote.c -o csv_quote
    ./csv_quote /tmp/csv-practice.dat

## 題目

| 題號 | 任務／學習重點 | 來源 | 入口 |
|---|---|---|---|
| 01 | 動態陣列 | [vector.c](practice/vector.c) | main |
| 02 | 環狀佇列 | [ring_queue.c](practice/ring_queue.c) | main |
| 03 | 鏈結串列 | [linked_list.c](practice/linked_list.c) | main |
| 04 | 嚴格整數加總 | [int_sum.c](practice/int_sum.c) | main |
| 05 | 有界字串複製: 回傳原始長度，呼叫者可判斷是否截斷 | [05_bounded_copy.c](practice/05_bounded_copy.c) | main |
| 06 | 原地反轉: 雙指標不越過中點 | [06_reverse_bytes.c](practice/06_reverse_bytes.c) | main |
| 07 | 回文判定: 空字串與偶數長度 | [07_palindrome.c](practice/07_palindrome.c) | main |
| 08 | 字串循環移位: 位移對長度取餘數 | [08_rotate_string.c](practice/08_rotate_string.c) | main |
| 09 | 暴力字串搜尋: 最後一個可能起點 | [09_substring_search.c](practice/09_substring_search.c) | main |
| 10 | 空白分詞計數: unsigned char 與 ctype | [10_word_count.c](practice/10_word_count.c) | main |
| 11 | 字串兩端修剪: memmove 支援重疊 | [11_trim_text.c](practice/11_trim_text.c) | main |
| 12 | 連續壓縮: 輸出容量與數字寬度 | [12_rle.c](practice/12_rle.c) | main |
| 13 | CSV 欄位輸出: 引號必須成對跳脫 | [13_csv_quote.c](practice/13_csv_quote.c) | main |
| 14 | 位元組轉十六進位: 一 byte 對兩個 nibble | [14_hex_encode.c](practice/14_hex_encode.c) | main |
| 15 | 十六進位還原: 非法字元與奇數長度 | [15_hex_decode.c](practice/15_hex_decode.c) | main |
| 16 | Base64 三位元組: 六位元分組 | [16_base64_three.c](practice/16_base64_three.c) | main |
| 17 | 設定位元數: 每輪清除最低的 1 | [17_popcount.c](practice/17_popcount.c) | main |
| 18 | 奇偶檢查: XOR 累積 | [18_parity.c](practice/18_parity.c) | main |
| 19 | 32 位元循環移位: 避免右移 32 的未定義行為 | [19_rotate32.c](practice/19_rotate32.c) | main |
| 20 | 大端序封包: 不依賴主機 byte order | [20_network_u32.c](practice/20_network_u32.c) | main |
| 21 | 8 位元符號擴展: 以算術表示避免實作定義轉型 | [21_signed_byte.c](practice/21_signed_byte.c) | main |
| 22 | 旗標操作: 設定、切換、清除與測試 | [22_bit_flags.c](practice/22_bit_flags.c) | main |
| 23 | 排序陣列搜尋: 半開區間邊界 | [23_binary_search.c](practice/23_binary_search.c) | main |
| 24 | 插入排序: 移動元素再放回 key | [24_insertion_sort.c](practice/24_insertion_sort.c) | main |
| 25 | 合併有序序列: 剩餘尾段 | [25_merge_sorted.c](practice/25_merge_sorted.c) | main |
| 26 | 排序陣列去重: 讀寫指標分離 | [26_dedup_sorted.c](practice/26_dedup_sorted.c) | main |
| 27 | 數字頻率: 索引界限與拒絕非法值 | [27_histogram.c](practice/27_histogram.c) | main |
| 28 | 前綴和查詢: 前導 0 消除左端特例 | [28_prefix_sum.c](practice/28_prefix_sum.c) | main |
| 29 | 矩陣轉置: 連續陣列索引換算 | [29_transpose.c](practice/29_transpose.c) | main |
| 30 | 二階矩陣乘法: 累積乘積與輸出初始化 | [30_matrix_product.c](practice/30_matrix_product.c) | main |
| 31 | 質數篩: 從 p*p 開始劃記 | [31_prime_sieve.c](practice/31_prime_sieve.c) | main |
| 32 | 歐幾里得演算法: 0 的邊界 | [32_gcd.c](practice/32_gcd.c) | main |
| 33 | 非負整數乘法: 乘之前檢查界限 | [33_checked_multiply.c](practice/33_checked_multiply.c) | main |
| 34 | 分數約分: 正分母與公因數 | [34_reduce_fraction.c](practice/34_reduce_fraction.c) | main |
| 35 | 結構排序: 比較器不以相減避免溢位 | [35_sort_records.c](practice/35_sort_records.c) | main |
| 36 | 標準庫二分搜尋: 空回傳與指標差 | [36_stdlib_bsearch.c](practice/36_stdlib_bsearch.c) | main |
| 37 | 完整字串轉型: errno 與尾端字元 | [37_strict_strtol.c](practice/37_strict_strtol.c) | main |
| 38 | 欄位寬度讀取: 限制字串大小與檢查轉換數 | [38_bounded_scan.c](practice/38_bounded_scan.c) | main |
| 39 | 二進位檔案往返: fwrite/fread 元素數 | [39_binary_file.c](practice/39_binary_file.c) | main |
| 40 | 檔案行數: 最後一行沒有換行 | [40_line_count.c](practice/40_line_count.c) | main |
| 41 | 隨機存取: 位移與 ftell | [41_file_seek.c](practice/41_file_seek.c) | main |
| 42 | 固定格式紀錄: 序列化不直接寫 struct padding | [42_portable_record.c](practice/42_portable_record.c) | main |
| 43 | 物件表示法: unsigned char 可檢視物件 bytes | [43_byte_representation.c](practice/43_byte_representation.c) | main |
| 44 | 函式指標表: 操作碼界限 | [44_function_dispatch.c](practice/44_function_dispatch.c) | main |
| 45 | 狀態機: 狀態轉移與非法事件 | [45_state_machine.c](practice/45_state_machine.c) | main |
| 46 | 小型集合: 位元位置與範圍 | [46_bitset.c](practice/46_bitset.c) | main |
| 47 | 固定物件池: 配置失敗與歸還重用 | [47_object_pool.c](practice/47_object_pool.c) | main |
| 48 | 最小堆積: 上浮與下沉 | [48_min_heap.c](practice/48_min_heap.c) | main |
| 49 | 圖最短步數: 入列就標記 | [49_graph_bfs.c](practice/49_graph_bfs.c) | main |
| 50 | 最少硬幣: 狀態初始化與無解 | [50_coin_dp.c](practice/50_coin_dp.c) | main |

每個新增單元的正常值與邊界案例可在 tests/、check.py 或 testbench 找到。先預測輸出，再執行，再修改輸入觀察；不是把通過單一範例視為正式部署或線上 AC。
