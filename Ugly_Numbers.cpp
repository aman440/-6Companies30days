// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    set<long long> st;
	    st.insert(1);
	    n--;
	    
	    while(n){
	        auto it = st.begin();
	        long long x = *it;
	        
	        st.erase(it);
	        st.insert(2*x);
	        st.insert(3*x);
	        st.insert(5*x);
	        n--;
	    }
	    return *st.begin();
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends