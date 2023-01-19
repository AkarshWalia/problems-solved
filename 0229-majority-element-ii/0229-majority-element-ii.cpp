class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size() / 3;
        sort(nums.begin(), nums.end());
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                if (count > n) {
                    ans.push_back(nums[i - 1]);
                }
                count = 1;
            }
        }
        if (count > n) {
            ans.push_back(nums[nums.size() - 1]);
        }
        return ans;
    }
};





