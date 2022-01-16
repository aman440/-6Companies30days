// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string s)
{     
  //Your code here 
  int n = s.size();
  int i = 0;
  
  string res = "";
  
  while(i < n){
      char a1 = s[i];
      int cnt = 0;
      char prev = s[i];
      while(a1 == s[i]){
          cnt++;
          i++;
      }
      res += prev;
      string num = to_string(cnt);
      res += num;
  }
  return res;
}     
 
