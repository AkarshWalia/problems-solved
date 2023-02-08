class Solution {
public:
    int jump(vector<int>& nums) {
       int maxsofar =0;
        int currmax = 0;
        int j=0;

        for(int i=0;i<nums.size()-1;i++){
            maxsofar = max(maxsofar,i+nums[i]);

            if(i == currmax){
                
                j++;
                currmax = maxsofar;
            }
        }
        return j;
    }
};