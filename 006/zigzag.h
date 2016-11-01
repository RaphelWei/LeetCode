#pragma once
#ifndef ZIGZAG_H
#define ZIGZAG_H
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string convert(string s, int numRows) {
		string ans;
		int n = s.length();
		if (numRows == 1) return s;

		for (int i = 0; i < numRows; i++) {
			int j = i;
			int r = 2 * i;
			int k = 2 * (numRows - 1);
			while (j < n) {
				ans += s[j];
				if (i == 0 || i == (numRows - 1)) { // - First and last row.
					j += k;
				}
				else { //Alternatively change the increment. - Other rows.
					r = k - r;
					j += r;
				}
			}
		}
		return ans;
	}
};
#endif // !ZIGZAG_H
