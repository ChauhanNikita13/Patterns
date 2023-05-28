/*
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *

*/  
  
    

#include <iostream>
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
    int n;
    cout << "enter n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern2()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= 10 - (2 * i - 1); j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
