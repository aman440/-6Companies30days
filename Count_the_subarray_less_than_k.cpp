// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int ans = 0;
        int i = 0;
        int j = 0;
        long long res = 1;
        
        while(j < n){
            res *= a[j];
            if(res < k){
                ans += (j-i+1);
            }
            else{
                while(res >= k){
                    res /= a[i];
                    i++;
                }
                ans += (j-i+1);
            }
            j++;
            
            // if(res >= k){
            //     long long a1 = pow(2,j-i)-1;
            //     ans += a1;
                
            //     while(res >= k){
            //         res /= a[i];
            //         i++;
            //     }
                
            // }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends