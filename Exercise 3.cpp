#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/**
 * Checks if word is a palindrome
 * https://repl.it/@SaraLatorre/Tuesday-EDE-Exercise-3
 */

string readWord()
{
  string str;
  cin >> str;
  return str;
}

bool palindromeChecker(string str)
{
  int n = str.length();
  bool isPalindrome = true;

  // j = n - 1 This ignores the carriage return from the end of the word
  for (int i = 0, j = n - 1; i < n / 2; i++, j--)
  {
    if (tolower(str[i]) != tolower(str[j]))
    {
      isPalindrome = false;
      break;
    }
  };

  return isPalindrome;
}

int main()
{
  cout << "Is your word a palindrome? Write a word, please: \n";
  if (palindromeChecker(readWord()))
  {
    cout << "Your word is a palindrome!"
         << "\n";
  }
  else
  {
    cout << "Your word is not a palindrome, sorry."
         << "\n";
  }
  return 0;
}
