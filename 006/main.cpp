#include"zigzag.h"
int main() {
	Solution zig;
	string s ;
	cin >> s;
	string v = zig.convert(s, 3);
	cout << v << endl;
	return 0;
}