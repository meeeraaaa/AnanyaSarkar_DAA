#include <iostream>
using namespace std;
class okay{
    public:
void find(int k,int a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]==k)
        {
            cout<<"found";
            return;
        }
    }
    cout<<"not found";
}
};
int main()
{
    int t,i,k,n;
    int a[100];
    cout<<"test cases";
    cin>>t;
    okay dd;
    for(i=1;i<=t;i++)
    {cout<<"\n no. of elements";
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cout<<"\n element";
            cin>>a[j-1];
            
        }cin>>k;
            dd.find(k,a,n);
    }

}