// class Solution {
// public:
//     char nextGreatestLetter(vector<char>& letters, char target) {
        
//         int s=0,e=letters.size()-1;
//         char ans =letters[0];
//         while(s<=e){
//             int mid = s+(e-s)/2;
//             if(letters[mid]==target){
//                 ans= letters[mid+1];
//                 return ans;
//             }
//             else if(letters[mid]>target){
//                 ans=letters[mid];
//                 e=mid-1
//             }
//             else if(letters[mid]<target){
//                 s=mid+1
//             }
            
//         }
//         return ans;
//     }
// };

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0;
        int end = letters.size() - 1;
        char smChar = letters[0];
        
        while (start <= end) {
            int mid = (start + end) / 2;
            if (letters[mid] > target) {
                end = mid - 1;
                smChar = letters[mid];
            } else {
                start = mid + 1;
            }
        }
        
        return smChar;        
    }
};





















































