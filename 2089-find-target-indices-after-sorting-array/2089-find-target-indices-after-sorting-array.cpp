class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int lessThanCount = 0;
        int targetCount = 0;

        for (int num : nums) {
            if (num < target) {
                lessThanCount++;
            } else if (num == target) {
                targetCount++;
            }
        }

        vector<int> ans;
        for (int i = 0; i < targetCount; i++) {
            ans.push_back(lessThanCount + i);
        }

        return ans;
    }
};