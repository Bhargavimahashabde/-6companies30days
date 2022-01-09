Question:
6. Given two strings str1 and str2. We say that str2 divides str1 if it's possible
   to concatenate multiple str2 to get str1. For example, ab divides abab. 
   if str2 does not divide str1, return -1. Otherwise, return the smallest string 
   str3 such that str3 divides both str1 and str2.
     
Solution:
// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        while(true)
        {
            if(str1+str2!=str2+str1)
                return "";
            if(str1==str2)
                return str1;
            if(str1.size()>str2.size())
                str1 = str1.substr(str2.size());
            if(str2.size()>str1.size())
                str2 = str2.substr(str1.size());
            
        }
        return "";
    }
};

// { Driver Code Starts.

int main()
{
	string str1;
	string str2;
	cin>>str1>>str2;
	Solution ob;
	string ans = ob.gcdOfStrings(str1, str2);
	cout<<ans<<endl;
	return 0;
}

// } Driver Code Ends

