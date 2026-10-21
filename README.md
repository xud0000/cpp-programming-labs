# TAICA_基礎程式設計(C++)｜Introduction to Programming

[繁體中文](./README.md) | [English](./README.en.md)

記錄國立臺灣海洋大學（NTOU）115 學年度第 1 學期「基礎程式設計（C++）」課程的個人上機練習，依照 Lab 編號整理 C++ 原始碼和必要的測試輸入資料。

## 課程資訊

| 項目 | 內容 |
| --- | --- |
| 學校 | 國立臺灣海洋大學（National Taiwan Ocean University） |
| 開課單位 | 電機資訊學院 |
| 課程名稱 | 基礎程式設計（C++）／Introduction to Programming (C++) |
| 課程代碼 | B60015SW |
| 學期 | 115 學年度第 1 學期（Fall 2026） |
| 授課教師 | 曾韻華 |
| 學分 | 3 |
| 課程性質 | 選修 |
| 課程合作計畫 | 臺灣大專院校人工智慧學程聯盟（TAICA） |

## 上機練習紀錄

以下為各 Lab 的學習主題與練習概述。

| Lab | 主題 | 練習內容 |
| --- | --- | --- |
| [Lab 1](./lab1/) | 初識 C++ 與基本輸出 | 輸出指定文字、使用 `cout` 印出三角形 |
| [Lab 2](./lab2/) | 常數與變數（Literals & Variables） | 計算 2×2 反矩陣、三科成績平均數與變異數 |
| [Lab 3](./lab3/) | 輸入輸出串流（IOStream） | 從檔案讀取矩形資料並計算面積與周長、格式化成績表 |
| [Lab 4](./lab4/) | 數學運算（Mathematical Operations） | 計算 ReLU／Sigmoid／Softsign 激活函數、恆星視星等差 |
| [Lab 5](./lab5/) | 條件判斷（Conditional Statements） | 驗證算式是否正確、依指令選擇輸出資訊 |
| [Lab 6](./lab6/) | 重複敘述（Repetition Statements） | 產生曼哈頓距離矩陣、統計對戰勝負與勝率 |
| [Lab 7](./lab7/) | 函式（Functions） | 模擬德州撲克下注回合、計算撲克牌組合數 |

## 專案結構

```text
.
├── README.md
├── README.en.md
├── .gitignore
├── lab1/
│   ├── lab1_1.cpp
│   └── lab1_2.cpp
├── lab2/
│   ├── lab2_1.cpp
│   └── lab2_2.cpp
├── lab3/
│   ├── data.txt
│   ├── lab3_1.cpp
│   └── lab3_2.cpp
├── lab4/
│   ├── lab4_1.cpp
│   └── lab4_2.cpp
├── lab5/
│   ├── lab5_1.cpp
│   └── lab5_2.cpp
├── lab6/
│   ├── lab6_1.cpp
│   └── lab6_2.cpp
└── lab7/
    ├── input1.txt
    ├── input2.txt
    ├── input3.txt
    ├── lab7_1.cpp
    └── lab7_2.cpp
```


## 開發環境與執行方式

- **語言：** C++
- **編輯器：** Visual Studio Code
- **作業系統：** macOS
- **編譯器：** Clang++ 或 G++（以下指令以 `g++` 為例）

在儲存庫根目錄編譯並執行：

```bash
g++ -std=c++17 lab1/lab1_1.cpp -o lab1_1
./lab1_1
```

## 參考資料

- Walter Savitch，*Problem Solving with C++*, Global Edition, 10th Edition（2018）。
- 課程提供之教材與上機練習。

## 聲明

本儲存庫為個人學習紀錄，並非學校的官方資源。為尊重智慧財產權，**不公開上傳課程原始 PDF 講義**。
