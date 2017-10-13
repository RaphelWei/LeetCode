#include <iostream>
#include <vector>
using namespace std;

public:
	int removeElement(vector<int>& nums, int val) {
		if (nums.empty() || (nums.size() == 1 && nums[0] ==val))
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
};
