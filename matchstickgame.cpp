//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int matchGame(long long N) {
        // code here
      
      1.explanation:
      since this is a gamw theory question so we have to think optimally ....so in this every one is try 
      to win the game ......
      
      2.Approach:
       
       since every one can pick the number between [1-4]... so here is the idea...
       1. "A" will try that he we not get a number divisible by 5 because  suppose at last remaining match 
         stick is 5 so if alice turn ....then at worst he can choose 4 ....the  1 left then bob take the turn
         and win the game.
       2. similarly if "B" has chance and the remaining is 5 ....then he can choose any number between[1-4]
          the remaining left will always less than 5 after bob chance ...so after alice take and won ..
        
        so..we concluded that .....every player try that his opponent get number divisible by 5 ...so the 
        he can win the game...This is the how i will think this problem.....
       
      3. Time and Space complexity:
        since we just use if and else statment .....to check ...hence its..
        t.c = o(1);
        s.c = o(1);
          
      4.code:
        
      if(N%5==0) return -1;
      else return N%5;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.matchGame(N) << endl;
    }
    return 0;
}
// } Driver Code Ends