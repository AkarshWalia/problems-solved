//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    vector<int> leftSmaller(long long arr[], int n) {
        vector<int> v;
        stack<int> s;
        for(int i=0;i<n;i++){
            while(s.size()>0 && arr[s.top()] >= arr[i]){
                s.pop();
            }
            if(s.empty()){
              v.push_back(-1);
            }else{
              v.push_back(s.top());
            }
            s.push(i);
        }
        return v;
    }

    vector<int> rightSmaller(long long arr[], int n) {
        vector<int> v;
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            while(s.size()>0 && arr[s.top()] >= arr[i]){
                s.pop();
            }
            if(s.empty()){
              v.push_back(n);
            }else{
              v.push_back(s.top());
            }
            s.push(i);
        }
        reverse(v.begin(), v.end());
        return v;
    }
    long long getMaxArea(long long arr[], int n) {
        vector<int> width(n);
        vector<int> ls = leftSmaller(arr, n);
        vector<int> rs = rightSmaller(arr, n);
        long long max_area = 0;
        for(int i=0; i<n; i++) {
            width[i] = rs[i] - ls[i] - 1;
            long long area = arr[i] * width[i];
            max_area = max(max_area, area);
        }
        return max_area;
    }
};



//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends