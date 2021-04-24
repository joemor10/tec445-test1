#include <iostream>
using namespace std;

int 
main ()
{
  int number;

  cout << "Guess what number I am thinking of: " << endl;
  cin >> number;

  if (number == 10) {
    cout << "You guessed correct!" << endl;
  }
  else {
    cout << "That is incorrect. The correct number was 10." << endl;
  }

  return 0;
}
