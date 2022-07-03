// https://leetcode.com/problems/longest-common-prefix/

#include <iostream>
#include<vector>
#include <string>
using namespace std;

int main()
{
    vector<string> s={"dog","racecar","car"};

    //answer here
    string str="";
    string ans="";
    bool stop=false;
    int i;
    for (i = 0; i <= s[0].length(); i++)
    {

        str=s[0].substr(0,i);
    
        for(int j=1;j<s.size();j++){
            
            if(str==(s[j].substr(0,i))){
                ans=str;
            }
            else{
                stop=true;
                break;
            }
        }

        if (stop)
            break;
            
    }
    cout<<s[0].substr(0,i-1);


return 0;
}