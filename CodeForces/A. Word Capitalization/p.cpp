#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(void)
{
  string w;
  cin >> w;

  if(islower(w.at(0)))
    w[0] = toupper(w[0]);


  cout << w << "\n";
  return 0;
}
