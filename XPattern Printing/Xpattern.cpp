#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[15];
    int len,i,j;
    cout<<"Enter the string : ";
    cin>>a;
    len=strlen(a);
    for ( i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (i==j || i+j == len-1)
            {
                cout<<a[j];
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<"\n";
        
    }
    cout<<"\n";
    system("pause");
    return 0;
}
