#include"TwoSum.h"
#include<vector>
using namespace std;
int main() {
	Solution s;
	vector<int> v1;
	int num;
	while (cin >> num) {
		v1.push_back(num);
	}
	vector<int> v2 = s.twoSum(v1, 9);
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << ' ';
	cout << endl;
	return 0;
}