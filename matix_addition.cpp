#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m], arr1[n][m], arr2[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr1[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr2[i][j]=arr[i][j]+arr1[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }
}