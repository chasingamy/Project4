#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{ 
  if (argv[10] == "")
    cout << "Hello there, no name!" << endl;
  else   
    cout << "Hello there, " << argv[10] << endl;
  return 0;
}
