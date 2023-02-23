class Solution {
public:
    int lengthOfLongestSubstring(string s) {

    unordered_set<char> ans;
        int value=0;
        int i=0,j=0;
        while(j<s.length()){
            if(ans.find(s[j])==ans.end())
		
			{
                ans.insert(s[j]);
                j++;

                value=max(value,j-i);
            }
            else{
			
                ans.erase(s[i]);
                i++;
            }
        }
		
        return value;
    }
};