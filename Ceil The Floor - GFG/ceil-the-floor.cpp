//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends

int getfloor(int arr[], int n, int x){
    int s=0,e=n-1;
    int mid, ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]<=x){
            ans=mid;
            s=mid+1;
        } else {
            e=mid-1;
        }
    }
    if (ans == -1) {
        return -1; // x is less than the first element of the array
    }
    return arr[ans];
}

int getceil(int arr[], int n, int x){
    int s=0,e=n-1;
    int mid, ans=-1;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]>=x){
            ans=mid;
            e=mid-1;
        } else {
            s=mid+1;
        }
    }
    if (ans == -1) {
        return -1; // x is greater than the last element of the array
    }
    return arr[ans];
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    pair<int,int>ans;
    sort(arr,arr+n);
    int a= getfloor(arr,n,x);
    int b= getceil(arr,n,x);
   
    ans.first=a;
    ans.second=b;
    return ans;
}
