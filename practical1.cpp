#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int lb=0,ub=n,key,mid,flag=0,c=1;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>key;
    while(lb<ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==key)
        {
            flag=1;
            break;
        }
        if(a[mid]<key)
        {
            lb=mid+1;
        }
        else
        {
            ub=mid-1;
        }
    }
    if(flag==0)
        cout<<"Not Present\n";
    else
    {
        cout<<"Present\n";
        cout<<a[mid];
        if(a[mid+1]==key)
        {
            while(a[mid]==a[mid+1])
            {
                c++;
                mid=mid+1;
            }
        }
        else if(a[mid-1]==key)
        {
            while(a[mid]==a[mid-1])
            {
                c++;
                mid=mid-1;
            }
        }
        cout<<"->"<<c;
    }
}
