# 问题描述


>	p 为给定的二维平面整数点集。定义P中某点x，如果满足P中任意点都不在x的右上方区域内（横纵坐标都大于x），则称其为“最大的”。求出所有“最大的”点的集合。（所有点的横坐标和纵坐标都不重复，坐标表轴范围在[0, 1e9]内）

### 输入
>	第一行输入点集的个数N，加下来N行，每行两个数字代表点的X轴和Y轴

### 样例输入
```
5
1 2
5 3
4 6
7 5
9 0

```

### 样例输出
```

输出结果按照X轴排序，如上例输出为:
4 6
7 5
9 0

```

### Hint
```

对于50%的数据，1 <= n <= 10000;
对于100%的数据，1 <= n <= 500000;

```