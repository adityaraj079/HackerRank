#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin>>t;
    string test = "@gmail";
    vector<string> ans;
    while(t--)
    {
        string name, email;
        cin>>name>>email;
        size_t found = email.find(test);
        if (found != string::npos)
            ans.push_back(name);
            
        
            
    }
    sort(ans.begin(),ans.end());
        for(int i=0; i<ans.size();i++)
        {
            cout<<ans[i]<<endl;
        }
    return 0;
}

