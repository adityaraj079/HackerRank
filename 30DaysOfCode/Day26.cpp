#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int d1,d2,m1,m2,y1,y2;
    cin>>d1>>m1>>y1;   //return
    cin>>d2>>m2>>y2;   //due
    if (y2 < y1)
    {
        cout<<10000;
        return 0;
    }
    else if (y2 == y1)
    {
        if (m2 < m1)
        {
            int out = 500 * abs(m2-m1);
            cout<<out;
            return 0;
        }
        else if (m2 == m1)
        {
            if (d2 < d1)
            {
                int out = 15 * abs(d2-d1);
                cout<<out;
                return 0;
            }
        }
        else 
        {
            cout<<0;
            return 0;
        }
    }
    else 
        {
            cout<<0;
            return 0;
        }
    return 0;
}
