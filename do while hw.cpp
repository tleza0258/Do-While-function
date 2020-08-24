#include <iostream>
using namespace std;
int main() {

  char ch;
  int gpa = 0, round = 0;
  do{
    cout << "Enter the letter grade(Enter 'X' to exit)" << endl;
    cin >> ch;
    if (ch == 'x' || ch == 'X' ) 
      break;
    else if (ch == 'a'|| ch == 'A')
      gpa += 4;
    else if (ch == 'b' || ch == 'B')
      gpa += 3;
    else if (ch == 'c' || ch == 'C')
      gpa += 2;
    else if (ch == 'd' || ch == 'D')
      gpa += 1;
    else if (ch == 'f' || ch == 'F')
      gpa += 0;
    else {
      cout << "Enter A B C D F Only OK?" << endl;
      round--;
    }
    round++;

  } while(ch != 'x' && ch !='X');

  cout << "Total Grade Points : " << gpa << endl;
  cout << "GPA : " << gpa/round << endl;

  return 0;
}