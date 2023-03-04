class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>lp;
        vector<int>hp;
        vector<int>pv;
        
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                lp.push_back(nums[i]);
            }
             else if(nums[i]>pivot){
                hp.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                pv.push_back(nums[i]);
            }
        }
        
          for(int i=0;i<lp.size();i++){
    nums[i] = lp[i];
}
for(int i=0;i<pv.size();i++){
    nums[lp.size() + i] = pv[i];
}
for(int i=0;i<hp.size();i++){
    nums[lp.size() + pv.size() + i] = hp[i];
}

        
        return nums;
    }
};














