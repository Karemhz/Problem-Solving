#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(void)
{
  int size,count = 0;
  vector<string> M;
  string str;
  cin >> size;
  for(int i = 0; i < size; i++)
  {
  cin >> str;
  M.push_back(str);
  }

  for(int i = 0; i < M.size(); i++)
  {
    count++;
    while(M[i] == M[i+1])
     i++;
  }

  cout << count << "\n";


  return 0;
}
