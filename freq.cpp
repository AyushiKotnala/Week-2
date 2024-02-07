#include<iostream>
using namespace std;
#define MAX 10
int main()
{
    int a[MAX];
    int key,t,i,j,n;
    cout<<"Input the no. of test cases"<<endl;
    cin>>t;
    for(i=0;i<t; i++)
    {
        cout<<"enter size of array"<<endl;
        cin>>n;
        cout<< "input the elements in the array"<<endl;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cout<<"enter the element to be searched"<<endl;
        cin>>key;
        int lb=0;
        int ub=n-1;
        int c=0;
        while (lb <= ub)
        {
            int mid =(lb+ub)/2;
            if(key==a[mid])
            {
                c=1;
                int u=mid-1;
                while(u>=0&&a[u]==key)
                {
                    c++;
                    u--;
                }
                int l=mid+1;
                while(l<n&&a[l]==key)
                {
                    c++;
                    l++;
                }
                break;
            }
            else if(key>a[mid])
            {
                lb=mid+1;
            }
            else if(key<a[mid])
            {
                ub=mid-1;
            }
            
        }
        cout<<"frequency of "<<key<<":"<<c<<endl;
    }
    return 0;
}

