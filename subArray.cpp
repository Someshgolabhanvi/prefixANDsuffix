#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divede(vector<int>arr)
{
    int prefix=0,sum=0,n=arr.size();
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        prefix+=arr[i];
        if(sum-prefix==prefix)
        return 1;
    }
    return 0;

}
int main()
{
    int n;
    cout<<"Enter the length of a vector :"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the values of an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<divede(arr);
}