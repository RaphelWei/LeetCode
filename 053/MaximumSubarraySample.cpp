#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
	public:
		int maxSubArray(vector<int>& nums) {
			int ans = nums[0];
			int sum = 0;
			for (int i = 0; i < nums.size(); i++) {
				sum += nums[i];
				ans = max(ans, sum);
				sum = max(sum, 0);
			}
			return ans;
		}
};

