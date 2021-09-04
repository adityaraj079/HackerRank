#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin>>n;
    string inp;
    int num;
    map <string,int> m;
    for (int i=0; i<n; i++)
    {
        cin>>inp>>num;
           m.insert({inp,num});
    }
    string fin;
    while(cin>>fin)
    {
        if(m.find(fin) != m.end())
            cout <<fin<< "=" << m.find(fin)->second << endl;
        else
            cout<<"Not found"<<endl;
    }
    
    return 0;
}
