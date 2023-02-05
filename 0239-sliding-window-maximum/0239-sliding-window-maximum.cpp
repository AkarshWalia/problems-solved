/*class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      int i=0;
        int j =0;
        vector<int>ans;
        vector<int>v;
        while(j<nums.size()){
           
             if (j-i+1<k) {
                  ans.push_back(nums[i]);
                  ans.push_back(nums[j]);
                 j++; 
                 ans.push_back(nums[j]);
             }
            
            if(j-i+1==k){
                int a= max(ans.begin(),ans.end());
                v.push_back(a);
                j++;
                i++;
                ans.pop_back();
                 ans.pop_back();
                 ans.pop_back();
                }
            for(int l=i;l<=j;l++){
                ans.push_back(nums[l]);
            }
            
            
        }
        return v;
        
    }
};
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i=0;
        int j =0;
        vector<int>ans;
        vector<int>v;
        while(j<nums.size()){
            if (j-i+1 == k) {
                int a = *max_element(nums.begin() + i, nums.begin() + j + 1);
                v.push_back(a);
                i++;
            }
            j++;
        }
        return v;
    }
};
*/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> result;
        int i = 0, j = 0;
        while (j < nums.size()) {
            while (!q.empty() && nums[q.back()] <= nums[j]) q.pop_back();
            q.push_back(j);
            if (q.front() <= j - k) q.pop_front();
            if (j >= k - 1) result.push_back(nums[q.front()]);
            j++;
        }
        return result;
    }
};


