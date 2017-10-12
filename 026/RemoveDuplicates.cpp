class Solution{
    int removeDuplictes(vector<int>& nums) {
        int n = nums.size();
        if (n < 2)
            return n;
        int len = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i-1] != nums[i])
                nums[len++] = nums[i];
        }
        return len;
    }
};
