
/*
pattern10
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * 
* * * * 
* * * 
* * 
*
*/

#include<iostream>
using namespace std;
void pattern1();
void pattern2();
int main()
{
    pattern1();
    pattern2();
}
void pattern1()
{
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2()
{
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=5-i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl; 
    }
}
