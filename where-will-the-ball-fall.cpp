// https://leetcode.com/problems/where-will-the-ball-fall/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<vector<int>> a = {{1,1,1,1,1,1},
    //                         {-1,-1,-1,-1,-1,-1},
    //                         {1,1,1,1,1,1},
    //                         {-1,-1,-1,-1,-1,-1}};
    vector<vector<int>> a = {{1}};

    //ans from here
    vector <int> ans;
    int m=a.size(),n=a[0].size();

    int i,j,flag;
    for(int ball=0;ball<n;ball++){
        i=0;
        j=ball;
        flag=1;

        while(i<m && j<n){
            if(j==0){
                if(a[i][j]==-1)
                    {
                        flag=0;
                        break;
                    }
                else{
                    if(a[i][j+1]==-1)
                        {
                            flag=0;
                            break;
                        }
                    else{
                        i++;
                        j++;
                    }
                }
            }
            else if(j==n-1){
                if(a[i][j]==1)
                    {
                        flag=0;
                        break;
                    }
                else{
                    if (a[i][j-1]==1)
                        {
                            flag=0;
                            break;
                        }
                    else{
                        i++;
                        j--;
                    }
                }
            }
            else{
                if(a[i][j]==1 && a[i][j+1]==-1)
                    {
                        flag=0;
                        break;
                    }
                else if(a[i][j]==-1 && a[i][j-1]==1)
                    {
                        flag=0;
                        break;
                    }
                else if(a[i][j]==-1 && a[i][j-1]==-1)
                    {
                        i++;
                        j--;
                    }
                else if(a[i][j]==1 && a[i][j+1]==1)
                    {
                        i++;
                        j++;
                    }
            }
        }
    
        if (flag)
            ans.push_back(j);
        else
            ans.push_back(-1);

    }

    for (auto &&i : ans)
    {
        cout<<i<<" ";
    }
    

    return 0;
}