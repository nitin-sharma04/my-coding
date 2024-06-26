// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter Number of Rows: ";
//   cin >> n;
//   // upper trinagle
//   for (int i = 0; i < n; i++) {
//     for (int k = 1; k < n - i; k++) {
//       cout << " ";
//     }
//     for (int j = 0; j < 2 * i + 1; j++) {
//       cout << "*";
//     }
//     cout << endl;
//   }

//   // reverse triangle
//   for (int i = 0; i < n; i++) {
//     for (int k = 0; k < i; k++) {
//       cout << " ";
//     }
//     for (int j = i + 1; j <= 2 * n - i - 1; j++) {
//       cout << "*";
//     }
//     cout << endl;
//   }

//   return 0;
// }