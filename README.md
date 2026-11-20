# C 語言練習

**目前共 50 個實作練習單元。** 完整題號、來源與執行方式見 [CATALOG.md](CATALOG.md)，機器可讀清單見 [EXERCISES.json](EXERCISES.json)。

以下保留起步練習的說明；其餘題目按完整目錄閱讀。

原本 hello.c、malloc.c、StringToOther.c 保留在根目錄。新增 [practice/](practice/) 練習動態配置、指標、環狀索引與嚴格輸入轉型。

需要 C11 編譯器與 Python 3：

    python check.py
    gcc -std=c11 -Wall -Wextra -Wpedantic practice/vector.c -o vector
    ./vector

Windows 可執行 vector.exe。check.py 在暫存資料夾編譯。

| 檔案 | 練習內容 | 實際檢查 |
|---|---|---|
| vector.c | 容量倍增、realloc 與失敗時的舊指標 | 100 筆數值、順序與容量 |
| ring_queue.c | 固定容量佇列與環狀指標 | 空、滿、繞回與 FIFO 順序 |
| linked_list.c | Node** 刪除與釋放 | 頭、尾與不存在的值 |
| int_sum.c | strtoll、errno 與溢位 | 正負數、非法輸入與 LLONG 邊界 |

## 指標筆記

直接把 realloc 結果存回舊指標，失敗時會失去原有配置。這份練習先存到 grown，成功才更新；容量倍增也先檢查 size_t 上限。

鏈結串列的 Node** 指向「目前連結」，因此刪除頭節點不需另一套邏輯。成功配置的節點最後都有 free。

環狀佇列的 head==tail 可能代表空或滿，因此另存 count。dequeue 失敗時不能使用輸出參數。

## 轉型範例

    gcc -std=c11 practice/int_sum.c -o int_sum
    ./int_sum 2 -3 5

輸出 4。若輸入 9223372036854775807 1，stderr 為 sum overflow，結束碼 2。

新增四份練習以 -Werror 編譯並檢查行為；舊範例與舊執行檔保留作紀錄，未宣稱全部經過本次驗證。

題號 13、39、40、41 的檔案 I/O 練習需要一個可覆寫的練習檔路徑；完整測試會傳入獨立暫存路徑，不碰現有資料。
