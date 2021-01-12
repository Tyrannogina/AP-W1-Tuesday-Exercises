#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/**
 * Reads a line from the terminal and prints it all lowercase.
 * https://repl.it/@SaraLatorre/Tuesday-EDE-Exercise-2
 */

string readLine()
{
  string str;
  getline(cin, str);
  return str;
}

string wordToLowerCase(string str)
{
  int n = str.length();

  for (int i = 0; i < n; i++)
  {
    str[i] = tolower(str[i]);
  };

  return str;
}

int main()
{
  cout << "Write a word you want displayed in lower case: \n";
  string str = wordToLowerCase(readLine());
  cout << str << "\n";
  return 0;
}