// class Solution {
// public:
//     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//         int i= 0 ,j=0;
//         int n =candidates.size;
//         vector<int>a;
//         vector<vector<int>>ans;
//         while(j<n){
//            int sum +=candidates[j] ;
            
//             if(sum<target){
//                j++; 
//             }
//             if(sum==target){
//                for(int k=i;k<=j;k++){
//                    a.push_back(candidates[k]);
//                } 
                
//             }
//             if(sum>target){
//                 i++;
//             }
//         }
//     }
// };

class Solution {
public:
    vector<vector<int>> ans;
    
    vector<int> temp;
    void solve(vector<int> candidates, int target,int order){
      
        if(target<0) return;
        
        if(target==0){
            ans.push_back(temp);
            return;
        }

        for(int i=order;i<candidates.size();i++){
            
            if(i  > order && candidates[i] == candidates[i-1])
                continue;

            temp.push_back(candidates[i]);
           
            solve(candidates,target-candidates[i],i+1);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        solve(candidates,target,0);
        return ans;
    }
};