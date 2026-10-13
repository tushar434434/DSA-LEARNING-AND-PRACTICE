class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        // First position where target could be inserted (or is found)
        auto lower = lower_bound(nums.begin(), nums.end(), target);        
        // If target is not found
        if (lower == nums.end() || *lower != target)
            return {-1, -1};
        // First element greater than target
        auto upper = upper_bound(nums.begin(), nums.end(), target);
        int start = lower - nums.begin();
        int end = upper - nums.begin() - 1;

        return {start, end};
    }
};
