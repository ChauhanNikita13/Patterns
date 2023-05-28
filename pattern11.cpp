#include<iostream>
using namespace std;
void pattern11(int);
int main()
{
    pattern11(5);
    return 0;
}
void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i%2==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
cout<<endl;
    }
    
}
