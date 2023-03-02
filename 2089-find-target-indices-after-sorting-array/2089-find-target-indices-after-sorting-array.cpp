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
   vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
          int n = nums.size();
         int a = binaryfirst(nums, target, n);
        int b = binarylast(nums, target, n);
        if(a==-1&&b==-1) return ans;
        for(int i=a; i<=b; i++){
            ans.push_back(i);}
             return ans;
      
    }
};