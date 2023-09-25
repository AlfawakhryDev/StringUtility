#include <iostream>
#include "StringUtil.h" // Include the header file for StringUtil

int main()
{
    StringUtil str("   Hello, World!   ");

    // Print the original string
    cout << "Original String: " << str.Value << endl;
        
    // Count words in the string
    int wordCount = str.CountWords();
    cout << "Word Count: " << wordCount << endl;

    // Check if the string is empty
    bool isEmpty = str.IsEmpty();
    cout << "Is Empty: " << (isEmpty ? "Yes" : "No") << endl;

    // Append a string
    str.Append(" Welcome!");
    cout << "Appended String: " << str.Value << endl;

    // Check if the string contains a substring
    bool contains = str.Contains("Hello");
    cout << "Contains 'Hello': " << (contains ? "Yes" : "No") << endl;

    // Replace a substring
    str.ReplaceAll("World", "Universe");
    cout << "Replaced String: " << str.Value << endl;

    // Trim whitespace
    str.Trim();
    cout << "Trimmed String: " << str.Value << endl;

    // Count vowels in the string
    int vowelCount = str.CountVowels();
    cout << "Vowel Count: " << vowelCount << endl;

    // Check if the string contains any vowels
    bool containsVowels = str.ContainsVowels();
    cout << "Contains Vowels: " << (containsVowels ? "Yes" : "No") << endl;

    return 0;
}
