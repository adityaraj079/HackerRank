#include <bits/stdc++.h>

using namespace std;



int main()
{

    int mat[6][6];
    for(int i=0; i<6;i++)
    {
        for(int j=0; j<6;j++)
        {
            cin>>mat[i][j];
        }
    }
    int sum[16],a=0;
    for (int i=0; i<4;i++)
    {
        for(int j=0; j<4;j++)
        {
            sum[a] = mat[i][j] +mat[i][j+1] + mat[i][j+2] +mat[i+1][j+1] +mat[i+2][j] +mat[i+2][j+1] +mat[i+2][j+2];
            a++;
        }
    }
    int n = sizeof(sum) / sizeof(sum[0]);
    sort(sum,sum+a);
    cout<<sum[15];
    
    return 0;
}
