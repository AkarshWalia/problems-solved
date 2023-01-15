class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=1, n=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(n==nums[i])
                c++;
            else
                c--;
            if(c<0)
            {
                c=1;
                n=nums[i];
            }
        }
    return n;
    }
};



