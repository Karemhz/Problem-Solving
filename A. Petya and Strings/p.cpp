#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
  char str1[101];
  char str2[101];

  cin.getline(str1,101);
  cin.getline(str2,101);
  const int x = strlen(str1);

 for(int i = 0; i < x ; i++)
 {
   str1[i] = tolower(str1[i]);
   str2[i] = tolower(str2[i]);
 }

  if(strcmp(str1, str2) == 0)
   cout << 0 << "\n";
  else if(strcmp(str1, str2) > 0)
   cout << 1 << "\n";
  else
   cout << -1 << "\n";

    return 0;
}
