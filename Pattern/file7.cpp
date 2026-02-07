#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the order of the pattern: "<<endl;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1);k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}