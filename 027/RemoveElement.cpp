#include <iostream>
#include <vector>
using namespace std;

class Solution {
	public:
		int removeElement(vector<int>& nums, int val) {
			vector<int>::iterator iter = nums.begin();
			while(iter != nums.end()) {
				if(val == *iter)
					iter = nums.erase(iter);
				else
					++iter;
			}
			return nums.size();
		}
};

int main() {
	Solution s;
	vector<int> v{3, 2, 2 ,3};
	cout << s.removeElement(v, 3) << endl;
	return 0;
}

