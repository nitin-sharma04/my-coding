// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter no Of rows ";
//   cin >> n;
//   // uppar half
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j <= i; j++) {
//       cout << "* ";
//     }
//     for (int k = 0; k < n - (i + 1); k++) {
//       cout << "    ";
//     }
//     for (int j = i; j >= 0; j--) {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   // lower half

//   for (int i = 0; i < n - 1; i++) {
//     for (int j = 1; j < n - i; j++) {
//       cout << "* ";
//     }
//     for (int k = i; k <= 2*i; k++) {
//       cout <<"    ";
//     }
//     for (int j = 1; j < n - i; j++) {
//       cout << "* ";
//     }
//     cout << endl;
//   }

//   return 0;
// }