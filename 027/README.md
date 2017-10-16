<<<<<<< HEAD
# 关于Remove Element的思路小总结

### 时间：2017-10-12
---

我的想法很简单，就是遍历整个vector，当遇到与val相同的数时，将其从vector中删除。

vector类提供了这样的函数，erase()。

先来看看C++11中对于erase这个函数的描述。

一共有两种输入参数
```
iterator erase (const_iterator position);
iterator erase (const_iterator first, const_iterator last);
```
值得注意的是，这里的first和last是[first,last),前闭后开，也就是说first对应的数会被删除，而last对应的数不会被删除。

算法部分的代码如下：
```
vector<int>::iterator iter = nums.begin();
while(iter != nums.end()) {
	if(val == *iter)
		iter = nums.erase(iter);
	else
		++iter;
}
```
这里如果采用这种书写方式是错误的
```
for(vector<int>::iterator iter = nums.begin(); iter != nums.end(); iter++) {
	if(*iter == val)
		nums.erase(iter);
}
```
因为使用`nums.erase(iter)`之后，iter就成为了一个野指针，不能再进行iter++操作

我的代码因为用了erase()方法的缘故(应该是这个原因吧？)，导致运行时间花了9ms，因此这里再记录一个3ms的优秀算法。
```
int removeElement(vector<int>& nums, int val) {
    if (nums.empty() || (nums.size() == 1 && nums[0] == val))
        return 0;
    int ret = 0;
    int front = 0;
    int back = nums.size() - 1;

    while(front <= back) {
        while(front <= back && nums[back] == val) {
            --back;  
        } 
        if (front <= back) {
            if (nums[front] == val) {
                nums[front] = nums[back];
                --back;
            }   
            ++front;
            ++ret;
        }
    }
    return ret;
}
```
