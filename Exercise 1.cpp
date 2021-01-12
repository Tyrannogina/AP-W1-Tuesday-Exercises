#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

/**
 * Reads a line from the terminal and prints it reversed.
 * https://repl.it/@SaraLatorre/Tuesday-EDE-Exercise-1
 */

string readLine() {
  string str;
  getline(cin, str);
  return str;
}

string reverseWord(string str) {
  int n = str.length();

  for (int i = 0; i < n / 2; i++) {
    swap(str[i], str[n - i - 1]);
  };

  return str;
}

int main() {
  cout << "Write a word you want reversed: \n";
  string str = reverseWord(readLine());
  
  cout << str << "\n";
  return 0;
}