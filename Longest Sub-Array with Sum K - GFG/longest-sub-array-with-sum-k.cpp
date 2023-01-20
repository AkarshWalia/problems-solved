//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
         /* int i=0,j=0,cnt=0;
    long long sum=0;

    while(j<N){
        sum+=A[j];

        if(sum<K){
            j++;
        }else if(sum>=K){
            while(sum>K && i<j){
                sum-=A[i];
                  i++;
            }

            if(sum==K){
                int size=j-i+1;
                cnt=max(cnt,size);
                 
            }

           j++;
        }
    }

    return cnt;
    } 
    */
     unordered_map<int,int> mp;
        int max=0,sum=0;
        for(int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K) { 
                if(i+1>max) 
                    max=i+1;
            }

            if(mp.find(sum-K)!=mp.end())      {
                int len=i-mp[sum-K];
                if(len>max) max=len;
            }
            if(mp.find(sum)==mp.end())
            mp[sum]=i;
        }
        return max;
    }

};



//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends