#include <iostream>

using namespace std;

int main() {
  // -----------------------------
  // WHILE LOOP
  // -----------------------------
  int i = 10;
  // The while loop will not run because the condition (i != 10) is false at the start.
  // While loops check the condition before entering the loop body.
  while (i != 10) {
    cout << "While loop value: " << i << endl;
    i++;
  }

  // -----------------------------
  // DO-WHILE LOOP
  // -----------------------------
  // Unlike while, do-while executes at least once, even if the condition is false.
  // Here, it will print 10, then decrement i to 9, and continue until i becomes 0.
  do {
    cout << "Do-while loop value: " << i << endl;
    i--;
  } while (i != 0);

  // -----------------------------
  // FOR LOOP
  // -----------------------------
  // For loop is used when you know how many times to run.
  // This prints numbers from 0 to 24.
  for (int i = 0; i < 25; i++) {
    cout << "For loop value: " << i << endl;
  }

  // -----------------------------
  // NESTED FOR LOOP
  // -----------------------------
  // The outer loop runs 2 times, and the inner loop runs 3 times per outer iteration.
  // So total inner loop executions = 2 * 3 = 6
  for (int i = 1; i <= 2; ++i) {
    cout << "Outer loop iteration: " << i << "\n";

    for (int j = 1; j <= 3; ++j) {
      cout << "  Inner loop iteration: " << j << "\n";
    }
  }

  // -----------------------------
  // RANGE-BASED FOR LOOP (C++11+)
  // -----------------------------
  // Loops through each element in the array directly.
  // It prints all values of the array.
  int arr[5] = {1, 2, 3, 4, 5};
  for (int i : arr) {
    cout << "Foreach loop value: " << i << endl;
  }

  return 0;
}
