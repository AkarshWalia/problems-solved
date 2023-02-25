class Solution {
public:
    int binaryfirst(vector<int>& nums, int target, int n) {
        int s = 0, e = n - 1, a = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                a = mid;
                e = mid - 1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return a;
    }

    int binarylast(vector<int>& nums, int target, int n) {
        int s = 0, e = n - 1, a = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                a = mid;
                s = mid + 1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return a;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int a = binaryfirst(nums, target, n);
        int b = binarylast(nums, target, n);
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};


