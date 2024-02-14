

// A C++ program to generate palindromic numbers
// less than n.

#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int n)
{
    string str = to_string(n);
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
            return false;
    }
    return true;
}

// Function to generate and print palindromic numbers less than n
void generatePalindromes(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (isPalindrome(i))
            cout << i << " ";
    }
}

int main()
{
    int n = 1e9;
    generatePalindromes(n);
    return 0;
}