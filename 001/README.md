# TwoSum的一点思路小总结
### 时间：2017-10-11
---
对`vector`的使用完全不熟练，为了方便以后读懂代码，这里做一点笔记。

首先，定义了两个`vector`

```
vector<int> map;
vector<int> ind;
```
其中`map`用于存储该位置上是否有`nums`中的数，如果有，记为1，否则记为0.

而`ind`用于记录`map`中记为1的数在`nums`中的序号。

如何输出符合条件的两个数的序号？

- 首先，判断是否有这两个数。
- 其次，找到第一个数的序号。
- 最后，必须是不同的两个数。


`target - min`是以`nums`最小值为基准，`target`在`map`中的序号。将其与`nums`中的数依次相减，只有当差小于`map`的总长度时，第二个数才有可能存在。
```
target - nums[i] -min < map.size()
```
究竟是否存在还需要判断`map`中该序号所对应的值是否为1
```
map[target - nums[i] -min]
```
最后，为保证两个数不同，`ind`中对应的序号必须不等于i
```
ind[target - nums[i] -min] != i
```
将这三个条件相与`&&`，就得到了最终i的序号，而另一个数的序号则由`ind`提供
```
ind[target - nums[i] -min]
```
将结果保存到一个新的`vector`中，输出即可。
