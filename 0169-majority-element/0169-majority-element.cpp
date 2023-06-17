class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        
        for(auto it: mpp){
            if(it.second > (nums.size()-1)/2){
                int ans =it.first;
                return ans;
                    
            }
        }
        return -1;
    }
};



