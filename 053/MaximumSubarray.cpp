#include <iostream>
#include <vector>
using namespace std;

class Solution{
	public:
		int getMax(vector<int>& a){
			int max = a[0];
			for (int i = 1; i < a.size(); i++) {
				if(a[i] > max)
					max = a[i];
			}
			return max;
		}

		int maxSubArray(vector<int>& nums) {
			vector<int> ans;
			for(int i = 0; i < nums.size(); i++) {
				vector<int> test;
				int sum = nums[i];
				test.push_back(sum);
				for(int j = i + 1; j < nums.size(); j++) {
					sum += nums[j];
					test.push_back(sum);
				}
				ans.push_back(getMax(test));
			}
			return getMax(ans);
		}
};

int main() {
	Solution s;
	vector<int> nums{-2,1,-3,4};
	cout << s.maxSubArray(nums) << endl;
	return 0;
}
