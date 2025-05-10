# C++ Learning Cheat Sheet (Beginner to Advanced)

A comprehensive guide to learning **C++ from scratch**. This sheet is ideal for **beginners** and **intermediate** programmers looking to build strong foundations and advance to object-oriented and STL programming.

---

## 📌 Getting Started with C++

- C++ is a **compiled**, **statically-typed**, and **object-oriented** language.
- Popular for **system/software development**, **games**, **high-performance apps**.

### 🛠 Setup

- Install [GCC](https://www.mingw-w64.org/) or use [online compilers](https://www.onlinegdb.com/online_c++_compiler)
- Use IDEs like **VS Code**, **Code::Blocks**, **CLion**

### First Program

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}
```

---

## 🧮 Basic Concepts

### Variables & Data Types

- `int`, `float`, `double`, `char`, `bool`, `string`

```cpp
int a = 10;
float b = 3.14;
char c = 'A';
bool flag = true;
```

### Input / Output

```cpp
int x;
cin >> x;
cout << "Value is: " << x;
```

### Operators

- Arithmetic: `+ - * / %`
- Comparison: `== != < > <= >=`
- Logical: `&& || !`
- Assignment: `= += -= *= /=`

### Control Flow

- `if`, `else`, `switch`, `case`

```cpp
if (x > 0) cout << "Positive";
else cout << "Non-positive";
```

### Loops

- `for`, `while`, `do-while`

```cpp
for (int i = 0; i < 5; i++) {
    cout << i << " ";
}
```

---

## 📦 Functions

```cpp
int add(int a, int b) {
    return a + b;
}
```

- Function Overloading
- Default Arguments
- Recursion

---

## 📚 Arrays & Strings

```cpp
int arr[5] = {1, 2, 3, 4, 5};
string name = "John";
```

- 2D Arrays
- Array manipulation
- String functions: `length()`, `substr()`, `find()`

---

## 📂 Structures & Enums

```cpp
struct Student {
    int id;
    string name;
};
```

```cpp
enum Color { RED, GREEN, BLUE };
```

---

## 🧠 Pointers & References

```cpp
int x = 10;
int *ptr = &x;
```

- `&` (Address-of)
- `*` (Dereferencing)
- Pointer Arithmetic
- `nullptr`
- References (`int &ref = x;`)

---

## 🧱 Object-Oriented Programming (OOP)

### Classes & Objects

```cpp
class Car {
public:
    string brand;
    void drive() { cout << "Driving"; }
};
```

- Constructors
- Destructors
- Access Specifiers: `public`, `private`, `protected`

### Inheritance

```cpp
class Animal {
public:
    void speak() {}
};
class Dog : public Animal {};
```

### Polymorphism

- Function Overriding
- Virtual Functions

### Encapsulation & Abstraction

- Use getters/setters
- Hide internal details

### Static Members, Friend Functions

---

## 📚 File Handling

```cpp
#include <fstream>
ofstream out("file.txt");
out << "Hello";
out.close();
```

- `ifstream`, `ofstream`, `fstream`
- Reading and writing line by line

---

## ⚙️ Templates

```cpp
template <typename T>
T maxVal(T a, T b) {
    return a > b ? a : b;
}
```

- Function Templates
- Class Templates

---

## 🧰 Standard Template Library (STL)

- **Containers:** `vector`, `list`, `deque`, `stack`, `queue`, `map`, `set`
- **Algorithms:** `sort()`, `find()`, `binary_search()`, `count()`
- **Iterators:** begin, end, rbegin

### Example:

```cpp
#include <vector>
#include <algorithm>
vector<int> v = {3, 1, 4};
sort(v.begin(), v.end());
```

---

## 🛡️ Exception Handling

```cpp
try {
    throw 404;
} catch (int e) {
    cout << "Error: " << e;
}
```

- `try`, `catch`, `throw`

---

## 🧪 Advanced Topics

- Lambda Expressions
- Smart Pointers (`unique_ptr`, `shared_ptr`)
- Namespaces
- Type Casting
- Move Semantics
- Dynamic Memory Management (`new`, `delete`)

---

## 🔁 Practice Ideas

- Calculator
- Tic-Tac-Toe
- Student Record System
- Bank Account Manager
- Library System (OOP + Files)
- _Contact Book (STL + File Handling)_

---

## 📚 Resources

- [cplusplus.com](https://www.cplusplus.com/)
- [GeeksForGeeks C++](https://www.geeksforgeeks.org/c-plus-plus/)
- [W3School C++](https://www.w3schools.com/cpp/)

---

Happy Coding! 🚀
