// class Solution {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) {
//         int n = nums.size();
//         int sum = 0;int ans = 0;
//         for(int i=0;i<n;i++){
//             int sum =0;
            
//             for(int j=i;j<n;j++){
//                 sum += nums[j];
                
//                 if(sum%k==0)
//                     ans++;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map <int,int> mp;
        int n=nums.size();
        int count=0,totalSum=0;
        mp[0]++; 
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
            int rem=(totalSum%k+k)%k; 
            count+=mp[rem]++; 
        }
        return count;
    }
};