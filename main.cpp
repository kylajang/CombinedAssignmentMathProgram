#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;
using std::right;
using std::left;
using std::setprecision;
using std::cin;
using std::string;

int main ()
{
// Declaring my variables
  int a;
  int b;
  int c;
  double my_precision_test = 0.123456789;

  char str[4];
  string word;
  char ch1;
  char ch2;

  string header_message;
  string header2;

// Assigning my variables in one statement
  a = b = c = 5;

// Incrementing variables using combined assignment
  a += 1;
  cout << "Printing the results: " << endl;
  cout << a << endl;

  b -= 3;
  cout << b << endl;

  c *= 2;
  cout << c << endl;

// Printing the message for Part 3
  cout << "Printing part 2 results in right and left justified format: " << endl;
  cout << setw(20) << right << a << setw(20) << right << b << setw(20) << right << c << endl;
  cout << setw(20) << left << a << setw(20) << left << b << setw(20) << left << c << endl;

// My_precision my_precision_test
  cout << "Printing your variable right justified with precision: " << endl;
  cout << std::fixed << setw(20) << right << setprecision(10) << my_precision_test << endl;
  cout << std::fixed << setw(20) << right << setprecision(2) << my_precision_test << endl;

// 3 character long input
  cout << "Enter a word at least 3 letters long: " << endl;
  ch1 = cin.get();
  ch2 = cin.get();
  cout << "The first character you typed was " << ch1 << ", and the third character you typed was " << ch2 << endl;
  cin.ignore(100,'\n');

// 5 character long input
  cout << "Enter a word at least 5 letters long: " << endl;
  ch1 = cin.get();
  cin.ignore(3);
  ch2 = cin.get();
  cout << "The first character you typed was " << ch1 << ", and the fifth character you typed was " << ch2 << endl;

// Making a Header
  header2 = "This would be sweet to use";
  header_message.assign(50,'=');
  cout << header_message << endl;
  header_message.assign(50,'=');
  cout << header_message << endl;
  header_message.assign(10,'=');
  cout << header_message << header2 << endl;
  header_message.assign(50,'=');
  cout << header_message << endl;
  header_message.assign(50,'=');
  cout << header_message << endl;
// Printing the second half of the header_message
  header2 += ", if only I were ready to create functions!";
  header_message.assign(50,'=');
  cout << header_message << endl;
  header_message.assign(50,'=');
  cout << header_message << endl;
  header_message.assign(10,'=');
  cout << header_message << header2 << endl;
  header_message.assign(50,'=');
  cout << header_message << endl;
  header_message.assign(50,'=');
  cout << header_message << endl;

  return 0;
}
