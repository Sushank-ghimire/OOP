# C++ Inheritance: A Complete Guide

Inheritance is one of the core features of **Object-Oriented Programming (OOP)** in C++. It allows a class (derived class) to **inherit** the properties and behaviors (data members and member functions) of another class (base class), promoting **code reuse**, **extensibility**, and **polymorphism**.

---

## 📚 Table of Contents

- [What is Inheritance?](#what-is-inheritance)
- [Why Use Inheritance?](#why-use-inheritance)
- [Basic Syntax](#basic-syntax)
- [Types of Inheritance](#types-of-inheritance)
  - [Single Inheritance](#1-single-inheritance)
  - [Multiple Inheritance](#2-multiple-inheritance)
  - [Multilevel Inheritance](#3-multilevel-inheritance)
  - [Hierarchical Inheritance](#4-hierarchical-inheritance)
  - [Hybrid Inheritance](#5-hybrid-inheritance)
- [Access Specifiers in Inheritance](#access-specifiers-in-inheritance)
- [Virtual Inheritance](#virtual-inheritance)
- [Common Use Cases](#common-use-cases)
- [Best Practices](#best-practices)

---

## What is Inheritance?

Inheritance is a mechanism where a **derived class** acquires the **properties** and **behaviors** of a **base class**. It helps achieve **code reusability** and supports **polymorphism** in C++.

---

## Why Use Inheritance?

- **Reusability**: Write once, use multiple times.
- **Extensibility**: Build on existing code without modifying it.
- **Maintainability**: Easier to update and debug.
- **Polymorphism**: Enables runtime method binding and interfaces.

---

## Basic Syntax

```cpp
class Base {
public:
    void display() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class" << endl;
    }
};
```

## Types of Inheritance

### 1. Single Inheritance

A derived class inherits from one base class.

```cpp
class A {
public:
    void display() { cout << "Class A" << endl; }
};

class B : public A {
public:
    void show() { cout << "Class B" << endl; }
};
```

### 2. Multiple Inheritance

A derived class inherits from **more than one** base class.

```cpp
class A {
public:
    void displayA() { cout << "Class A" << endl; }
};

class B {
public:
    void displayB() { cout << "Class B" << endl; }
};

class C : public A, public B {
public:
    void displayC() { cout << "Class C" << endl; }
};
```

### 3. Multilevel Inheritance

A class inherits from a class which in turn inherits from another class.

```cpp
class A {
public:
    void displayA() { cout << "Class A" << endl; }
};

class B : public A {
public:
    void displayB() { cout << "Class B" << endl; }
};

class C : public B {
public:
    void displayC() { cout << "Class C" << endl; }
};
```

### 4. Hierarchical Inheritance

Multiple classes inherit from a single base class.

```cpp
class A {
public:
    void displayA() { cout << "Class A" << endl; }
};

class B : public A {};
class C : public A {};
```

### 5. Hybrid Inheritance

A combination of two or more types of inheritance.

```cpp
// Combination of multiple and multilevel
class A {};
class B : public A {};
class C : public A {};
class D : public B, public C {};  // Ambiguity can occur
```

---

## Access Specifiers in Inheritance

| Base Class Access | `public` Inheritance | `protected` Inheritance | `private` Inheritance |
| ----------------- | -------------------- | ----------------------- | --------------------- |
| `public`          | public               | protected               | private               |
| `protected`       | protected            | protected               | private               |
| `private`         | not inherited        | not inherited           | not inherited         |

Example:

```cpp
class Base {
public:
    int pub;
protected:
    int prot;
private:
    int priv;
};

class Derived : public Base {
    // pub → public
    // prot → protected
    // priv → not accessible
};
```

---

## Virtual Inheritance

Used to resolve the **diamond problem** in hybrid inheritance.

```cpp
class A {
public:
    void msg() { cout << "Class A"; }
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};
```

Without virtual inheritance, `D` would inherit two copies of `A`.

---

## Common Use Cases

- Base class `Shape` → Derived: `Circle`, `Rectangle`, `Triangle`
- Base class `Employee` → Derived: `Manager`, `Engineer`
- UI frameworks (base component class)

---

## Best Practices

- Prefer **composition over inheritance** unless inheritance models a true “is-a” relationship.
- Use `protected` members sparingly.
- Favor `virtual` functions for polymorphic behavior.
- Use **`virtual` destructors** in base classes when polymorphism is involved.

---

## Conclusion

Inheritance in C++ is a powerful mechanism for building extensible and reusable code. Understanding its various forms and access levels helps design robust object-oriented systems.
