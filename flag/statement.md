# Description
カトー君は旗上げゲームをしています．両手に旗を持っていて，最初は両手ともに下げています．

だーやま君が $N$ 回，4種類のどれかの指示を出します．指示は長さ $N$ の数列 $a$ で与えられ，各要素 $a_i$ は以下の指示に対応しています．

0 = なにもしない
1 = 右手を反転（挙げていたら下げて，下げていたら挙げる）
2 = 左手を反転
3 = 両手を反転

ゲームの終了時に，カトー君の左右の手は，上がっているか，下がっているか，教えてください．

# Constraints

* $1 \leq N \leq 500$
* $0 \leq a_i \leq 3$
* 入力は全て整数

# Input
1つの入力ファイルは複数のテストケースからなる。

入力ファイルの最初の1行目にはテストケースの個数 $T$ が記される $(1 \leq T \leq 100)$。

2行目以降には、$T$ 個のテストケースが記述されており、各テストケースは次の形式で表される。

```
N
a_1 a_2 a_3 \dots a_N
```

$a_i$ は0はなにもせず，1のとき右手反転，2のとき左手反転，3のとき両手反転の指示である．

# Output
各テストケースに対して、右手左手それぞれを空白区切りで順に，上がっているとき `U` を，下がっているとき `D` を1行ずつ出力せよ．

# Sample Input
```
3
3
1 2 2
5
1 2 3 1 3
10
0 0 0 0 0 0 0 0 0 0
```

# Sample Output
```
U D
D U
D D
```