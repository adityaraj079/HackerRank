#include <bits/stdc++.h>

using namespace std;

void decToBinary(int n) 
{ 
    int binaryNum[32]; 
    int i = 0; 
    while (n > 0) 
    { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    int count=0, result=0;
    for (int i=0; i<=32; i++)
    {
        if (binaryNum[i] == 1)
            count++;
        else {
            if(count>result)
                result=count;
            count=0;
        }
    }
    cout<<result<<endl;
} 
int main()
{
    int n;
    cin>>n;
    decToBinary(n);
    
    return 0;
}
