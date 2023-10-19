#include<bits/stdc++.h>
using namespace std;

void CountDigits()
{
    int n , count = 0;
    cin >> n;
    while (n)
    {
        n = n / 10;
        count++;
    }
    cout << count << endl;
}

void CountDigitsLog()
{
    int n;
    cin >> n;
    cout << int(log10(n) + 1) << endl;
}

void reverseNum()
{
    int n, lastDigit, revNum = 0;
    cin >> n;
    while (n)
    {
        lastDigit = n % 10;
        n = n/ 10;
        revNum = revNum * 10 + lastDigit;   
    }
    cout << revNum << endl;
}

void Palindrome()
{
    int n;
    cin >> n;
    int lastDigit, temp, revNum = 0;
    temp = n;
    while (n)
    {
        lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n = n / 10;
    }
    if(revNum == temp)
    {
        cout << "Palindrome";
    }
    else{
        cout << "Not a Palindrome";
    }
}

void Armstrong()
{
    int n, lastDigit, sumNum = 0;
    cin >> n;
    int temp = n;
    while (n)
    {
        lastDigit = n % 10;
        sumNum = sumNum + (lastDigit * lastDigit * lastDigit);
        n = n /10;
    }
    cout << sumNum << endl;
    if(sumNum == temp)
    {
        cout << "Armstrong" ;
    }
    else{
        cout << "Not a Armstrong"; 
    }
}

void AllDivisors()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            if(n/i != i)
            {
                v.push_back(i);
                v.push_back(n/i);
            }
            else 
            {
               v.push_back(i);
            }
        }
    }
    sort(v.begin(), v.end());
    for(auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

void prime()
{
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            cout << "0";
            return;
        }
    }
    cout  << "1";
    return;
}

void GCD()
{
    int n1, n2, N;
    cin >> n1, n2;
    N = min(n1, n2);
    cout << N << " ";
    for (int i = N; i >= 1; i--)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            cout << i;
            return;
        }
    }
}

void GCD_Euclidian()
{
    int a, b;
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        if(a > b) a %= b;
        else b %= a;
    }
    if(a == 0) cout << b;
    else cout << a;
}

int main()
{
    // CountDigits();
    // CountDigitsLog();
    // revArmstrongerseNum();
    // Palindrome();
    // Armstrong();
    // AllDivisors();
    // prime();
    // GCD();
    GCD_Euclidian();
    return 0;
}
