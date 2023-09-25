# C++ StringUtil Class

This repository contains a C++ `StringUtil` class for string manipulation. The `StringUtil` class includes methods to work with strings, count words, count vowels, check for vowels, append strings, and more.

## Introduction

The `StringUtil` class is designed to simplify common string operations in C++ programs. It provides a range of methods to manipulate strings, count words, count vowels, and check for the presence of vowels in a given string.

## Getting Started

To use the `StringUtil` class in your C++ program, follow these steps:

1. **Clone the Repository:** Clone this repository to your local machine using `git clone`.

2. **Include the `StringUtil.h` Header File:** Include the `StringUtil.h` header file in your C++ project to access the `StringUtil` class.

3. **Instantiate `StringUtil` Objects:** Create `StringUtil` objects and use the provided methods to perform various string operations.

4. **Compile and Run:** Finally, compile your C++ program and run it.

## Class Structure

### `StringUtil` Class

The `StringUtil` class includes the following methods:

- `string GetValue()`: Get the current value of the string.
- `void SetValue(const string& value)`: Set the value of the string.
- `int CountWords() const`: Count words in the string.
- `bool IsEmpty() const`: Check if the string is empty.
- `void Clear()`: Clear the string.
- `void Append(const string& value)`: Append a string to the current value.
- `bool Contains(const string& substring) const`: Check if the string contains a substring.
- `void ReplaceAll(const string& oldStr, const string& newStr)`: Replace all occurrences of a substring with another string.
- `void Trim()`: Trim leading and trailing whitespace from the string.
- `int CountVowels() const`: Count vowels in the string.
- `bool ContainsVowels() const`: Check if the string contains any vowels.

## Example

Here's an example of how to use the `StringUtil` class:

```cpp
#include <iostream>
#include "StringUtil.h"

int main()
{
    StringUtil str("Hello, World!");

    // Count words in the string
    int wordCount = str.CountWords();
    std::cout << "Word Count: " << wordCount << std::endl;

    // Check if the string is empty
    bool isEmpty = str.IsEmpty();
    std::cout << "Is Empty: " << (isEmpty ? "Yes" : "No") << std::endl;

    // Append a string
    str.Append(" Welcome!");
    std::cout << "Appended String: " << str.Value << std::endl;

    // Check if the string contains a substring
    bool contains = str.Contains("Hello");
    std::cout << "Contains 'Hello': " << (contains ? "Yes" : "No") << std::endl;

    // Replace a substring
    str.ReplaceAll("World", "Universe");
    std::cout << "Replaced String: " << str.Value << std::endl;

    // Trim whitespace
    str.Trim();
    std::cout << "Trimmed String: " << str.Value << std::endl;

    // Count vowels in the string
    int vowelCount = str.CountVowels();
    std::cout << "Vowel Count: " << vowelCount << std::endl;

    // Check if the string contains any vowels
    bool containsVowels = str.ContainsVowels();
    std::cout << "Contains Vowels: " << (containsVowels ? "Yes" : "No") << std::endl;

    return 0;
}
```
