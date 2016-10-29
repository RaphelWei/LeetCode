#pragma once
#ifndef TWOSUM_H
#define TWOSUM_H
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int max = nums[0];
		int min = nums[0];
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i] > max)
				max = nums[i];
			if (nums[i] < min)
				min = nums[i];
		}
		vector<int> map;
		vector<int> ind;
		map.resize(max - min + 1, 0);
		ind.resize(max - min + 1, 0);
		for (int i = 0; i < nums.size(); i++) {
			map[nums[i] - min] = 1;
			ind[nums[i] - min] = i;
		}
		vector<int> ans;
		for (int i = 0; i < nums.size(); i++)
			if (target - nums[i] - min < map.size()
				&& map[target - nums[i] - min]
				&& ind[target - nums[i] - min] != i) {
				ans.push_back(i);
				ans.push_back(ind[target - nums[i] - min]);
				break;
			}
		return ans;
	}
};
#endif // !TWOSUM_H
