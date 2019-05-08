# Description

サメのもふふ君は、とあるパーティのために $P$ リットルのコーラが必要になりました。

そこで、近所のスーパーでコーラを準備することになりました。

スーパーでは、 $A$ リットル、 $B$ リットルのコーラが十分な個数売られています。

もふふ君は、 $A$ リットルのコーラを $x$ 個、 $B$ リットルのコーラを $y$ 個買うことで、 $P$ リットルちょうどのコーラを準備することにしました。

それぞれのコーラを少なくとも1本は買うことにしたとき、考えられる $(x,y)$ の組み合わせの個数を求めてください。

# Constraints

* 入力は全て整数である。

## 共通

* $1 \leq A, B \leq 10$

## Small

* $1 \leq P \leq 10$
* $T = 10$

## Medium

* $1 \leq P \leq 100$
* $T = 50$
 
## Large

* $1 \leq P \leq 5 \times 10\^{5} $
* $T = 50$

# Input
1つの入力ファイルは複数のテストケースからなる。

入力ファイルの最初の1行目にはテストケースの個数 $T$ が記される $(1 \leq T \leq 50)$ 。

2行目以降には、 $T$ 個のテストケースが記述されており、各テストケースは次の形式で表される。

```
$A B P$
```

# Output
各テストケースに対して、問題の条件を満たす数字の組 $(x,y)$ の個数を1行ずつ出力せよ。

# Sample Input
```
3
1 2 4
3 9 1
2 4 10

```

# Sample Output
```
1
0
2

```
入力例は3つのテストケースからなります。

1つめのテストケースでは、 $(2,1)$ が問題の条件を満たします。

2つめのテストケースでは、 問題の条件を満たす $(x,y)$ の組み合わせは存在しません。じゃんけんをしてもコーラが増えることはありません。

3つめのテストケースでは、 $(1,2),(3,1)$ の2個の数字の組が問題の条件を満たします。