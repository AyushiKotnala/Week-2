#include<iostream>
using namespace std;
#define MAX 10
void sum(int *i,int *j,int *k,int a[],int *f)
{
    int m,n;*f=0;
    for(m=0;m<(*i);m++)
    {
        for(n=m+1;n<(*j);n++)
        {
            if((a[m]+a[n])==a[*k])
            {
                cout<<m<<" "<<n<<" "<<(*k)<<endl;
                f++;
                break;
            }
        }
    }
}
int main()
{
    int a[MAX];
    int n,t,i,j,k,l,f=0;
    cout<<"enter the no of test cases"<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"enter the no of elements in the array"<<endl;
        cin>>n;
        f=0;
        cout<<"enter the elements"<<endl;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        i=n,j=n;
        for(k=n-1;k>0;k--)
        {
            sum(&i,&j,&k,a,&f);
            i--,j--;
            if(f!=0)
            {
            break;
            }   
        }
        if(f==0)
        {
            cout<<"no sequence found";
        }
     }
     return 0;
}
        
