#ifndef LEETCODE_H
#define LEETCODE_H

#include<iostream>
using namespace std;
class Solution{
public:
	int reverse(int x) {
		int temp = 0;
		while (x != 0) {
			temp = temp * 10 + x % 10;
			x = x / 10;
		}
		return temp;
		
	}
};
		
#endif