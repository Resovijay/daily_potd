//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    
	    1. brute force soln is sort th array and take the first k elemtnt..so
	      time complexity-o(n+nlogn);
	      space complexity for storing ans - o(k);
	      
	     sort(arr,arr+n);
	     reverse(arr,arr+n);
	     vector<int>ans;
	     for(int i = 0;i<k;i++){
	         ans.push_back(arr[i]);
	     }
	     return ans;
	     
	     
	     2.optimsied approach 
	     using priority queue ........by using min_heap
	   
	    priority_queue<int,vector<int>,greater<int>>pq;
	     for(int i = 0;i<n;i++){
	         pq.push(arr[i]);
	         if(pq.size()>k){
	             pq.pop();
	         }
	     }
	     
	     vector<int>ans;
	     while(!pq.empty()){
	         ans.push_back(pq.top());
	         pq.pop();
	     }
	     reverse(ans.begin(),ans.end());
	      return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends