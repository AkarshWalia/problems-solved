class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.length() != goal.length())
            return false;

        string ans = s + s;
        int n = ans.length();
        int m = goal.length();
        bool found = false;
        for (int i = 0; i < n - m + 1; i++) {
            if (ans.substr(i, m) == goal) {
                found = true;
                break;
            }
        }
        return found;

    }
};
