#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class StringUtil
{
private:
    string _value;

public:
    // Constructors
    StringUtil() : _value("") {}
    StringUtil(const string& value) : _value(value) {}

    // Getter and Setter for _value
    string GetValue() const
    {
        return _value;
    }

    void SetValue(const string& value)
    {
        _value = value;
    }

    // Property for _value
    __declspec(property(get = GetValue, put = SetValue)) string Value;

    // Count words in the current _value
// Count words in the current _value
    int CountWords() const
    {
        stringstream ss(_value);
        string word;
        int count = 0;

        while (ss >> word)
        {
            count++;
        }

        return count;
    }


    // Check if the string is empty
    bool IsEmpty() const
    {
        return _value.empty();
    }

    // Clear the string
    void Clear()
    {
        _value.clear();
    }

    // Append a string to the current value
    void Append(const string& value)
    {
        _value += value;
    }

    // Check if the string contains a substring
    bool Contains(const string& substring) const
    {
        return _value.find(substring) != string::npos;
    }

    // Replace all occurrences of a substring with another string
    void ReplaceAll(const string& oldStr, const string& newStr)
    {
        size_t pos = 0;
        while ((pos = _value.find(oldStr, pos)) != string::npos)
        {
            _value.replace(pos, oldStr.length(), newStr);
            pos += newStr.length();
        }
    }

    // Trim leading and trailing whitespace from the string
    void Trim()
    {
        size_t first = _value.find_first_not_of(" \t\n\r");
        size_t last = _value.find_last_not_of(" \t\n\r");

        if (first != string::npos && last != string::npos)
        {
            _value = _value.substr(first, (last - first + 1));
        }
        else
        {
            // String contains only whitespace
            _value.clear();
        }
    }
    // Count vowels in the current _value
    int CountVowels() const
    {
        int count = 0;
        for (char c : _value)
        {
            char lowerC = tolower(c); // Convert to lowercase for case-insensitivity
            if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u')
            {
                count++;
            }
        }
        return count;
    }


    // Check if the current _value contains any vowels
    bool ContainsVowels() const
    {
        for (char c : _value)
        {
            char lowerC = tolower(c); // Convert to lowercase for case-insensitivity
            if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u')
            {
                return true;
            }
        }
        return false;
    }

};
