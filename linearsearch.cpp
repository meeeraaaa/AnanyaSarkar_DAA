#import<iostream>
using namespace std;
void find(int k,int a[])
{
    for(int i=1;i<=a.size;i++)
    {
        if(a[i]==k)
        {
            cout<<"found";
            return;
        }
    }
    cout<<"not found";
}
int main()
{
    int t,i,k,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            cin>>a[j-1];
            cin>>k;
            find(k,a);
        }
    }

}