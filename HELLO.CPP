// Question 01

//  #include <iostream>
//  using namespace std;

//  int main() {
//     int a;
//     cout << "Enter Number: ";
//     cin>>a;
//     if(a>0){
//         cout << "Positive Number: "<< a << endl;
//     }
//         if(a<0){
//         cout << "Negative Number: "<< a << endl;
//     }
//         if(a==0){
//         cout << "Zero: "<< a << endl;
//         return 0;
//     }
// }



// // Question 02
//  #include <iostream>
//  using namespace std;

//  int main() {
//     int a, b, c, sum;
//     cout << "Marks of maths: ";
//     cin>>a;
//     cout << "Marks of Science: ";
//     cin>>b;
//     cout << "Marks of english: ";
//     cin>>c;
//     sum=a+b+c;
//     if(100>=sum>=33){
//         cout << "Pass: ";
//     }
//      else{
//          cout << "fail: ";


//     }
// }


// Question 03
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;

//     if (a >= b && a >= c)
//         cout << a << " is largest";
//     else if (b >= a && b >= c)
//         cout << b << " is largest";
//     else
//         cout << c << " is largest";
//     return 0;
// }



// // Question 04
// #include <iostream>
// using namespace std;
// int main() {
//     int n, rev = 0, rem;
//     cout << "Enter a number: ";
//     cin >> n;

//     while (n != 0) {
//         rem = n % 10;
//         rev = rev * 10 + rem;
//         n /= 10;
//     }
//     cout << "Reversed = " << rev;
//     return 0;
// }


// question 05


// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 4; i++) {
//         for (int j = 1; j <= (2*i - 1); j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }







