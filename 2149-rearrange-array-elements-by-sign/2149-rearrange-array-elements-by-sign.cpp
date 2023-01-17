class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int i=0 , j=1;
        
        for(int k=0;k<nums.size();k++){
            
            if(nums[k]>0){
                ans[i]=nums[k];
                i=i+2;
            }
            else if(nums[k]<0){
                ans[j]=nums[k];
                j=j+2;
                
            }
        }
        return ans;
        
       
    }
};



