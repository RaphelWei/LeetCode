#include <iostream>
#include <vector>
using namespace std;

class Solution{
	public:
		int searchInsert(vector<int>& nums, int target) {
			vector<int>::iterator iter = nums.end()-1;
			if(*iter < target)
				return nums.size();
			else if(nums[0] >= target)
				return 0;
			else{
				for(int i = 1; i < nums.size(); i++) {
					if(nums[i-1] < target && nums[i] >= target)
						return i;
				}
			}
		}
};

int main() {
	Solution s;
	cout << "Please input the vector: " << endl;
	int n;
	vector<int> nums;
	while(cin >> n)
		nums.push_back(n);
	cin.clear();
	cin.ignore();
	int target;
	cout << "Please input the target: " << endl;
	cin >> target;
	cout << "target = " << target << endl;
	cout << "The index of the inserted integer is :" << 
	s.searchInsert(nums, target) << endl;
	return 0;
}
