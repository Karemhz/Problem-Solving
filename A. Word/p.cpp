#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;

int main(void)
{
  char word[150], c;
  int lower = 0,upper = 0,n;
  cin.getline(word,150);
  n = strlen(word);
  for(int i = 0; i < n; i++)
    if(islower(word[i]))
      ++lower;

  upper = n - lower;
  if(lower >= upper)
  {
   for(int i = 0; i < n; i++)
     {
      c = tolower(word[i]);
      putchar(c);
     }
   }
   else
    {
      for(int i = 0; i < n; i++)
        {
         c = toupper(word[i]);
         putchar(c);
        }
    }

  cout << "\n";



  return 0;
}
