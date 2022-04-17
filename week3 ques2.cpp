#include<iostream>

using namespace std;

int main()
{
    int i,j,n,loc,temp,comp=0,shift=0,min;
    int t;
    cin>>t;
    while(t--)
    {
    //cout<<"\nno. of elements:";
    cin>>n;
    int a[n];
    //cout<<"\nelements\n";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                
                min=a[j];
                loc=j;
            }
            comp=comp+1;
        }

        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
        shift=shift+1;
    }

    //cout<<"\nSorted list\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"shifts= "<<shift ;
    cout<<"\ncomparisons = "<<comp;
    }
    return 0;
}
