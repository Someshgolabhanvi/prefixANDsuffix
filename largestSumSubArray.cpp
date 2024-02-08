// Kadane's Algorithm
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int largestSumSubArray(vector<int>v)
{
    int maxi=INT_MIN;
    int n=v.size();
    int prefix =0;
    for(int i=0;i<n;i++)
    {
        prefix+=v[i];
        maxi=max(maxi,prefix);
        if(prefix<0)
        prefix=0;
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
    cout<<largestSumSubArray(arr);
}