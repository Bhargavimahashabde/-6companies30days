Question:
4. Given a string, your task is to complete the function encode that returns the run length encoded string for the given string.

Solution:
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
}

// } Driver Code Ends

/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string ans="";
  //src+='#';
  int count=0;
  for(int i=1; i<=src.length(); i++)
  {
      if(src[i-1]!=src[i])
      {
          count++;
          ans += src[i-1];
          ans += to_string(count);
          count=0;
      }
      else
      {
          count++;
      }
      
  }
  return ans;
}     

