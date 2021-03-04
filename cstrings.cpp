#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main ()
{
// Declaring my variables
  char array[100];

  cout << "Enter a word of at least 5 characters: " << endl;
  cin.getline(array,4);
  cout << "Whoops: " << array << endl;

  return 0;
}
