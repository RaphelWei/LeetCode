# Search Insert Position的思路小总结
### 时间：2017-10-14
---
这道题比较简单，只要遍历容器中的元素，与所给的数作比较就行。这里主要记录几个数据结构的知识。

`vector.begin()`和`vector.end()`两个方法返回的也是容器，可以理解为指针。区别在于，`vector.begin()`指向的是第一个元素，而`vector.end()`指向的是最后一个元素的下一个元素。

因此，要取得第一个元素的值
```
vector<int>::iterator iter1 = nums.begin();
int m = *iter1;
```
而要取得最后一个元素的值
```
vector<int>::iterator iter2 = nums.end();
int n = *(--iter2);
```
关于之前一直困惑的为什么`cin`输入结束后不能继续输入的问题也解决了。主要是因为，之前`cin`是用`while`循环输入，退出输入的方式是输入一个非`int`类型的字符。这会使`cin`的状态标识符`failbit`置为1，产生异常。同时当再次使用`cin`时，会先从缓冲区读取已有的字符，当读到先前输入的非`int`型字符时，会自动结束。因此产生了不可继续输入的情况。

解决的方法很简单，在退出`while`循环后，加上这两句代码：
```
cin.clear(); //用于将failbit标识符置回0
cin.ignore(); //用于清除缓冲区的内容
```
之后就可以用`cin`正常输入了。
