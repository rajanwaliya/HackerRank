#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

void to_lower(string &s1){
    for(int i=0;i<s1.size();i++){
        if(s1[i]==' '){continue;}
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i] = s1[i]-('A'-'a');
        }
    }
}

int main()
{
 	string s;
	getline(cin,s);
    to_lower(s);
    
    int freq[26]={0};
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
            continue;
        freq[s[i]-97]++;
    }
    bool res=true;
   for(int i=0;i<26;i++)
   {
       if(freq[i]==0)
       {
           res=false;
           break;
       }
   }
    if(res)cout<<"pangram";
    else cout<<"not pangram";
    return 0;
}