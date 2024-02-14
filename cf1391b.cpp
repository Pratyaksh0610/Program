#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;

        char dir[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> dir[i][j];
            }
        }

        int arr[r][c] = {0};

        int changes=0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                // if(arr[i][j]==1){
                //     continue; THIS GIVES ONE LESS VALUE THAN CORRECT IN A TEST CASE;
                // }
                int k=i,l=j;
                while (k < r && l < c)
                {
                    
                    if (dir[k][l] == 'R')
                    {
                        arr[k][l] = 1;
                        l++;
                        if (l == c)
                        {
                            dir[k][l - 1] = 'D';
                            l--;
                            changes++;
                        }
                    }
                    else if (dir[k][l] == 'D')
                    {
                        arr[k][l]=1;
                        k++;
                        if (k == r)
                        {
                            dir[k-1][l]='R';
                            k--;
                            changes++;
                        }
                    }
                    else if(dir[k][l]=='C'){
                        break;
                    }
                }
            }
        }
        cout<<changes<<endl;
    }
    return 0;
}