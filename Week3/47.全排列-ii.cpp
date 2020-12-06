/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> perms;
        permute(nums, 0, perms);
        return perms;
    }

    void permute(vector<int> nums, int start, vector<vector<int>>& perms) {
        int n = nums.size();
        if (start == n - 1) {
            perms.push_back(nums);
        } else {
            for (int i = start;i < n; i++) {
                if ((i == start) || (nums[i] != nums[start])) {
                    swap(nums[i], nums[start]);
                    permute(nums, start + 1, perms);
                }
            }
        }
    }
};
// @lc code=end

