#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        string inp, even, odd;
        cin>>inp;
        int test=inp.length(),a=0,b=1;
        for (int i=0; i<test; i+=2)
        {
            cout<<inp[i];
        }cout<<" ";
        for (int i=1; i<test; i+=2)
        {
            cout<<inp[i];
        }cout<<endl;
        
    }
    return 0;
}
