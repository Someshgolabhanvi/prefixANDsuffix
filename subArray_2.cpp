#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int maxiSubArray(vector<int>v)
{
    int maxi=INT_MIN;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        int prefix=0;
        for(int j=i;j<n;j++)
        {
            prefix+=v[j];
            maxi=max(maxi,prefix);
        }
    }
    return maxi;

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
    cout<<maxiSubArray(arr);
}