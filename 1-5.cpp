#include<bits/stdc++.h>
using namespace std;

void PrintNames5(int count)
{
    // base condition
    if(count == 5) return;
    cout << " Harsh vardhan yadav" << endl;
    count++;
    PrintNames5(count);
}

void print1toN(int count, int N)
{
    if(count > N)
        return;
    cout << count << " ";
    count++;
    print1toN(count , N);
}

// void printNto1(int N)
// {
//     if(N == 0)
//         return;
//     cout << N << " ";
//     N--;
//     printNto1(N);
// }

void print1toNBacktrack(int N)
{
    if(N == 0)
    {
        return;
    }
    print1toNBacktrack(N-1);
    cout << N << " ";
}

void printNto1Backtrack(int count, int N)
{
    if(count > N)
    {
        return;
    }
    printNto1Backtrack(count+1, N);
    cout << count << " ";
}
int main()
{
    int N;
    cin >> N;
    // PrintNames5(0);
    // print1toN(0,N);
    // printNto1(N);
    // print1toNBacktrack(N);
    printNto1Backtrack(0, N);
    return 0;
}
