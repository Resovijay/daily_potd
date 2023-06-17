//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int n, int k) {
        // code here
        
        EXPLAINATION : In the problem we have to delete the K element from last and from the first 
        and so .....but one thing they not mention that if we have only 3 element and our K = 4;
        we can delete the remainig element whether they are eual to or not;
        
        REQUIRED DATA STRUCTURE: since we have to do operation from front and back so we can think ...
        ....in which data structure we can do this.....Now it comes "DEQUE" in which we can do front and back operation both
        
        IMPLEMENTATION: since we have to first pop from front and then from back ...so we 
        can take bool var for front and back ....then do pop opertion ans store the ans every time ...
        till the queue not become empty......
        
        TIME COMPLEXITY: 
          since first we have to push all the n element on the queue so in queue push opertion take 
          o(1) for 1 element ...  hence for n element  ===> n*o(1)=o(n);
         SPACE COMPLEXITY:
            for storing all n element int queue take o(n) operation in worst case;
            
            
        CODE:    
        
        deque<int>q;
        for(int i = 1;i<=n;i++){
            q.push_back(i);
        }
        int t = k;
        int total = k;
        bool check1 = true;
        bool check2 = false;
        int ans = 0;
        while(!q.empty()){
            
            //age se pop karo phele
            if(check1 = true && !q.empty()){
            while(t>0 && q.size()>0){
                ans = q.front();
                q.pop_front();
                t--;
            }
            check2 = true;
            check1 = false;
            t = k;
            }    
            
            ///pichce se pop karo
            if(check2=true && !q.empty()){
                 while(t>0 && q.size()>0){
                     ans =q.back();
                     q.pop_back();
                     t--;
            }
            check2 = false;
            check1 = true;
            t = k;
            }
            
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends