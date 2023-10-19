#include<bits/stdc++.h>
using namespace std;

void Problem1()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

void Problem2()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

void Problem3()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
    
}

void Problem4()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i+1;
        }
        cout << endl;
    }
    
}

void Problem5()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n-i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

void Problem6()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << j+1;
        }
        cout << endl;
    }
    
}

void Problem7()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // Print Spaces 
        for (int s = 0; s < n-1-i; s++)
        {
            cout << " ";
        }
        // Print *
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

void Problem8()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // Print spaces
        for (int s = 0; s < i; s++)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2*n - 2*i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

void Problem9()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // Print Spaces 
        for (int s = 0; s < n-1-i; s++)
        {
            cout << " ";
        }
        // Print *
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        // Print spaces
        for (int s = 0; s < i; s++)
        {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2*n - 2*i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Problem10()
{
    int n;
    cin >> n;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
}

void Problem11()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
           if((i+j) % 2 == 0)
           {
            cout << "1 ";
           }
           else{
            cout << "0 "; 
           }
        }
        cout << endl;
    }
    
}

void Problem12()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // Print Numbers
        for (int j = 0; j <= i; j++)
        {
            cout << (j+1);
        }
        // Print Spaces
        for (int s = 0; s < 2 * (n - 1) - 2*i; s++)
        {
            cout << " ";
        }
        for (int k = i; k >= 0; k--)
        {
            cout << (k+1);
        }
        cout << endl;
    }
    
}

void Problem13()
{
    int n;
    cin >> n;
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ++num << " ";  
        }
        cout << endl;
    }
    
}

void Problem14()
{
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << ch++;
        }
        cout << endl;
    }
    
}
void Problem15()
{
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = n-1; i >= 0; i--)
    {
        ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << ch++;
        }
        cout << endl;
    }
    
}

void Problem16()
{
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
    
}

void Problem17()
{
    int n;
    cin >> n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        ch = 'A';
        // Print Spaces
        for (int s = 0; s < (n-1) - i; s++)
        {
            cout << " ";
        }
        // Print Characters
        for (int j = 0; j <= i; j++)
        {
            cout << ch++;
        }
        ch--;
        for (int k = 0; k <= i - 1; k++)
        {
            cout << --ch;
        }
        cout << endl;
    }
    
}

void Problem18()
{
    int n;
    cin >> n;
    char ch;
    for (int i = 0; i < n; i++)
    {
        ch = 'A' + n - 1;
        ch-=i;
        for (int j = 0; j <= i; j++)
        {
            cout << (ch++)<< " ";
        }
        cout << endl;
    }
    
}

void Problem19()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        // Print Stars
        for (int j = 0; j <= n - i; j++)
        {
            cout << "*";
        }
        // Print Space
        for (int s = 0; s < 2*i; s++)
        {
            cout << " ";
        }
        // Print Stars
        for (int j = 0; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 0; i--)
    {
        // Print Stars
        for (int j = 0; j <= n - i; j++)
        {
            cout << "*";
        }
        // Print Space
        for (int s = 0; s < 2*i; s++)
        {
            cout << " ";
        }
        // Print Stars
        for (int j = 0; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

void Problem20()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        //Print Stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // Print Spaces
        for (int s = 0; s < 2*(n-1) - 2*i; s++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 1; i < n; i++)
    {
        //Print Stars
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        // Print Spaces
        for (int s = 0; s < 2*i; s++)
        {
            cout << " ";
        }
        for (int k = 0; k <n-i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void Problem21()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if(i==0 || i== n-1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int k = 0; k < n-2; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout <<  endl;
    }
    
}

void Problem22()
{
    int n;
    cin >> n;
    for (int i = 0; i < 2*n; i++)
    {
        
    }
    
}

int main()
{
    // Problem1();
    // Problem2();
    // Problem3();
    // Problem4();
    // Problem5();
    // Problem6();
    // Problem7();
    // Problem8();
    // Problem9();
    // Problem10();
    // Problem11();
    // Problem12();
    // Problem13();
    // Problem14();
    // Problem15();
    // Problem16();
    // Problem17();
    // Problem18();
    // Problem19();
    // Problem20();
    // Problem21();
    Problem22();
    return 0;
}
