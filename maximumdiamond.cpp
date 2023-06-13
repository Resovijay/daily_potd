//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        
        Explanation:  since we have to find the maximum no diamond so what  greedy 
        approach comes in my mind is that every time i take the maximum bag of diamond
        so here .....
        
        REQUIRED DATA STRUCTURE: Since we have to take maximum bag at every time....so
        here i think to use max heap  (max priority queue) so that  all time give 
         max priorty to bag with most diamond......so that how i think this...
         
         Time complexity: o(nlogn)      since total n element we have to push in pq and push in pq 
                take  logn complexity....
          Space complexity: O(n)            
        
        priority_queue<int>pq;
        for(int i = 0;i<N;i++){
            pq.push(A[i]);
        }
       long long  ans = 0;
        while(K>0){
           long long dia = pq.top();
            pq.pop();
            ans+=dia;
            pq.push(dia/2);
            K--;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends