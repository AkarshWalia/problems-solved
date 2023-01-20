/*class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int i=0,j=0
            long long subsum=0 , z=0;
        long long count=0;
        while(j<nums.size()){
            
            subsum+=nums[j];
            z=subsum*(j-1+1);
            if(z<k){
               count += j - i + 1;
        }
            }
            else if(z>=k && i<=j){
                while(z>=k){
                    subsum=subsum-nums[i];
                    i++;
                }
            }
        }
        return count ;
    }
};
*/
class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long ret=0;
        int n=nums.size(), i=0, j=0;
        if(n==1) return nums[0]<k?1:0;
        long long sum=0;
        for(j=0; j<n; j++){
            sum+=nums[j];
            while(sum*(j-i+1)>=k) sum-=nums[i++];
            ret += (j-i+1);
        }
        return ret;
    }
};








