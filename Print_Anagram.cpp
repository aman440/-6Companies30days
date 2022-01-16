// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& s) {
        //code here
        multiset<string> ms;
        
        int n = s.size();
        for(int i=0;i<n;i++){
            ms.insert(s[i]);
        }
        
        vector<vector<string>> mt;
        
        for(int i=0;i<n;i++){
            auto it1 = ms.find(s[i]);
            if(it1 == ms.end()){
                continue;
            }
            
            vector<string> v1;
            string a1 = s[i];
            
            sort(a1.begin(),a1.end());
            v1.push_back(s[i]);
            ms.erase(ms.find(s[i]));
            
            for(int j=0;j<n;j++){
                if(i != j){
                    string a2 = s[j];
                    sort(a2.begin(),a2.end());
                    auto it = ms.find(s[j]);
                    if(a1 == a2 && it != ms.end()){
                        v1.push_back(s[j]);
                        ms.erase(it);
                    }
                }
                
            }
            mt.push_back(v1);
            
        }
        return mt;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends