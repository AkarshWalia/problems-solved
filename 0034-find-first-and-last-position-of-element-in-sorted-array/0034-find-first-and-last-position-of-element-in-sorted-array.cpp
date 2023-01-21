class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
   vector<int> v;

    int f=-1,l=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(f==-1){
                    f=i;
                    l=i;
                }
                else{
                    l=i;
                }
            }
        }
       v.push_back(f);
        v.push_back(l);
        return v;
    }
};

