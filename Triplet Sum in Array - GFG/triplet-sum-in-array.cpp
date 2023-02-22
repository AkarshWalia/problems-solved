//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {   
        sort(A,A+n);
        for(int i=0;i<n-2;i++){
            int sum = X-A[i];
            int j=i+1,k=n-1;
            while(j<k){
               if(A[j]+A[k]==sum){
                   return 1;
                   } 
                   
                  else if(A[j]+A[k]>sum){
                      k--;
                  }
                  else if(A[j]+A[k]<sum){
                      j++;
                  }
              
               
            }
            
        }
        return 0;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends