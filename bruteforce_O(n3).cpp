#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
     int n=s.size();
     string best="";
     for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            string substring =s.substr(i,j-i+1);
            bool duplicate=false;
            unordered_set<char> charset;
            for(auto c:substring){
                if(charset.count(c)){
                    duplicate=true;
                    break;
                }
                charset.insert(c);
            }
            if(!duplicate && substring.length()>best.length())
            best=substring;

        }
     }
     return best.length();
        
 };