#include<iostream>

using namespace std;

int main(void)
{
 int n, temp;
 cin >> n;
 int A[n];
 for(int i = 0; i < n; i++)
   cin >> A[i];

for(int i = 0; i < n; i++)
  for(int j = 0; j < n-1; j++)
     if(A[j] > A[j+1])
     {
       temp = A[j];
       A[j] = A[j+1];
       A[j+1] = temp;

     }

for(int i = 0; i < n; i++)
  cout<<A[i]<<" ";

cout << "\n";

}
