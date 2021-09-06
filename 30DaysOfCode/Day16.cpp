#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    
    try {
    int no;
    no=stoi(S);
    cout<<no<<endl;
    } catch (exception a) {
    cout<<"Bad String"<<endl;
    }
    return 0;
}
