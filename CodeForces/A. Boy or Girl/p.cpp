#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

bool isOdd(int sum)
{
  bool flag;
  flag = (sum % 2 == 0) ? false : true;
  return flag;
}

int main(void)
{

  char name[150];
  int sum = 0;
  cin.getline(name,150);
  int x = strlen(name);
   sort(name, name+x);
  for(int i = 0; i < x; i++)
       if(name[i] != name[i+1])
         sum++;

  if(isOdd(sum))
   cout << "IGNORE HIM!" << "\n";
  else
   cout << "CHAT WITH HER!" << "\n";
}
