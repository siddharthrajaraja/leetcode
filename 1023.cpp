//
// Created by Siddhartha Raja on 24/06/23.
//
#include "bits/stdc++.h"

using namespace  std;

class Solution {
public:

    bool stringMatcher(string s,string p){

        int i=0;
        int j=0;

        while(s[i]&&p[j]){
            if(s[i]==p[j]){
                j++;
                i++;
            }else {
                if(s[i]>='A'&&s[i]<='Z')
                    return false;
                i++;
            }
        }

        if(p[j]=='\0'){

            while (s[i]){
                if(s[i]>='A'&&s[i]<='Z')
                    return false;
                i++;
            }

            return true;
        }
        return false;
    }

    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool>ans;

        for(auto q:queries){
            ans.push_back(stringMatcher(q,pattern));
        }

        return ans;
    }
};