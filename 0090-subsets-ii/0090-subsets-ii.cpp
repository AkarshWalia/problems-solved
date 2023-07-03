// class Solution {
// public:
//     void sub( int ind , vector<int> & nums , int n , set < vector < int >> & res ,vector<int> & ds){
//         if(ind == n){
//             sort(ds.begin() , ds.end());
//             res.insert(ds);
//             return;
//         }
        
//         ds.push_back(nums[ind]);
//         sub(ind + 1 , nums , n , res , ds);
        
//         ds.pop_back();

//                 sub(ind + 1 , nums , n , res , ds);

        
        
//     }    
    
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//        vector<vector<int>>ans;
//         int n = nums.size();
//         set<vector<int>>a;
//         vector<int>ds;
//         sub(0 , nums , n , a , ds);
//         for(auto it = a.begin() ; it!= a.end() ; it++){
//             ans.push_back(*it);
//         }
//         return ans;
//     }
// };


class Solution{
public:
    
    void solve(vector<int>&nums, int i, vector<int>ds, set<vector<int>>&st) 
    {
        if(i == nums.size()) 
        {
            sort(ds.begin(), ds.end());
            st.insert(ds);
            return;
        }
        
        ds.push_back(nums[i]);
        solve(nums, i + 1, ds, st);
        ds.pop_back();
        solve(nums, i + 1, ds, st);
    }
    
    vector<vector<int>>subsetsWithDup(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        set<vector<int>>st;
        vector<int>ds;
        
        solve(nums, 0, ds, st);
        for(auto &v : st) 
            ans.push_back(v);
        return ans;
    }
};