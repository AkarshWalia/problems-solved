/*class Solution {
public:
    vector<int> leftSmaller(int n, vector<int>arr) {
        vector<int> v;
        stack<int> s;
        for(int i=0;i<n;i++){
            if(s.size()==0){
                v.push_back(-1);
            }
            else if(s.size()>0 && s.top()<arr[i]){
                v.push_back(s.top());
            }
            else if(s.size()>0 && s.top()>=arr[i]){
                while(s.size()>0&& s.top()>=arr[i]){
                    s.pop();
                }
                if(s.size()==0)
                {
                v.push_back(-1);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
        return v;
    }
    
    vector<int> rightSmaller(vector<int> arr, int n){
        vector<int> v;
        stack<int> s;
        for(int i=arr.size()-1;i>=0;i--){
            if(s.size()==0){
                v.push_back(-1);
            }
            else if(s.size()>0 && s.top()<arr[i]){
                v.push_back(s.top());
            }
            else if(s.size()>0 && s.top()>=arr[i]){
                while(s.size()>0&& s.top()>=arr[i]){
                    s.pop();
                }
                if(s.size()==0)
                {
                v.push_back(-1);
                }
                else{
                    v.push_back(s.top());
                }
            }
            s.push(arr[i]);
        }
        reverse(v.begin(), v.end());
        return v;
    }
    
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>width(heights.size());
        vector<int>area(heights.size());
        vector<int>ls=leftSmaller(n,heights);
        vector<int>rs=rightSmaller(heights,n);
        int w=0;
        for(int i=0;i<heights.size();i++){
            width[i]= rs[i]-ls[i] -1;
            area[i]=heights[i]*width[i];
            w=max(area[i],w);
        }
        return w;
    }
};

*/
class Solution {
public:
    vector<int> leftSmaller(vector<int>& arr) {
        int n = arr.size();
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
    
    vector<int> rightSmaller(vector<int>& arr) {
        int n = arr.size();
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
    
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> width(n);
        vector<int> ls = leftSmaller(heights);
        vector<int> rs = rightSmaller(heights);
        int max_area = 0;
        for(int i=0; i<n; i++) {
            width[i] = rs[i] - ls[i] - 1;
            int area = heights[i] * width[i];
            max_area = max(max_area, area);
        }
        return max_area;
    }
};

