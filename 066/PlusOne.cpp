#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:	
	vector<int> plusOne(vector<int>& digits){
		int n = digits.size();
		for(int i = n-1; i >= 0; --i){
			if(digits[i] == 9)
				digits[i] = 0;
			else{
				digits[i]++;
				return digits;
			}
		}
		digits.push_back(0);
		digits[0] = 1;
		return digits;
	}
};

int main() {
	Solution s;
	int n;
	vector<int> digits;
	while(cin >> n)
		digits.push_back(n);
	cin.clear();
	cin.ignore();
	digits = s.plusOne(digits);
	for(int i = 0; i < digits.size(); i++)
		cout << digits[i] << ' ';
	cout << endl;
	return 0;
}
