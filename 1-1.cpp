#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int a , b;
//     cin >> a >> b;
//     cout << "The value of a is : " << a << " and the value of b is : " << b << endl;
// }

// int main()
// {
//     string str;
//     // cin >> str;
//     getline(cin , str);
//     cout << str;
// }

// int main()
// {
//     int age;
//     cin >> age;
//     if(age > 0 && age < 18)
//     {
//         cout << "Not an adult!\n";
//     }
//     else if(age >= 18)
//     {
//         cout << "Adult\n";
//     }
//     else if (age <= 0)
//     {
//         cout << "Invalid age!\n";
//     }
// }

// int main()
// {
//     int marks;
//     cin >> marks;
//     if(marks < 25)
//     {
//         cout << 'F';
//     }
//     else if(marks <= 44)
//     {
//         cout << 'E';
//     }
//     else if (marks <=49)
//     {
//         cout << 'D';
//     }
//     else if(marks <= 59)
//     {
//         cout << 'C';
//     }
//     else if(marks <= 79)
//     {
//         cout << 'B';
//     }
//     else if(marks <= 100)
//     {
//         cout << 'A';
//     }
// }

// int main()
// {
//     int age;
//     cin >> age;
//     if(age < 18)
//     {
//         cout << "Not Eligible";
//     }
//     else if(age <= 57)
//     {
//         cout << "Eligible";
//         if(age >= 55)
//             cout << ", but retirement soon";
//     }
//     else 
//     {
//         cout << "Not Eligible , Retirement Time!";
//     }
// }

// int main(){
//     int day;
//     cin >> day;
//     switch(day){
//         case 1:
//             cout << "Monday"<< endl;
//             break;
//         case 2:
//             cout << "Tuesday" << endl;
//             break;
//         case 3:
//             cout << "Wednesday" << endl;
//             break;
//         case 4:
//             cout << "Thursday" << endl;
//             break;
//         case 5:
//             cout << "Friday" << endl;
//             break;
//         case 6:
//             cout << "Saturday" << endl;
//             break;
//         case 7:
//             cout << "Sunday" << endl;
//             break;
//         default:
//             cout << "Wrong Choice!";
//     }
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // int arr[n] is a 'n' size integer array.
//     // Here 'arr' is the pointer to first element of the array
//     // Hence 'arr' store the address of the first element of array
//     // And *(arr) represent the value stored at the first element of array
//     // since int takes 4 byte of space hence second element can 
//     // be accessed by (arr + 4) [Address of second element]
//     // *(arr + 4) value of second element of array
//     // OR *(arr + sizeof(data type of array) * n - 1) is the 
//     // value at the nth index of array named arr!

//     cout << arr << "->"; // address of first element
//     cout << *arr << endl; // value of first element
//     cout << (arr + sizeof(int)) << "->"; // address of first element
//     cout << *(arr + sizeof(int)) << endl; // value of Second element
// }


// int main(){
//     int n, i;
//     cin >> n;
//     for (i = 1; i <= n; ++i)
//     {
//         cout << "Harsh" << endl;
//     }
//     cout << i;
// }

// int main()
// {
//     for (int i = 0; i < 5; ++i)
//     {
//         if(i==1)
//         {
//             cout << "Increased first then executes!" << endl;
//             break;
//         }
//         else
//         {
//             cout << "Increased after execution!" << endl;
//             break;
//         }
//     }
    
// }