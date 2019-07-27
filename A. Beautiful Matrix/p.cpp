#include<iostream>
#include<math.h>

using namespace std;


int main(void)
{
 int matrix[5][5];
 int row , colume, sum;
 for(int i = 0; i < 5; i++)
   for(int j = 0; j < 5; j++)
   {
     cin >> matrix[i][j];
     if(matrix[i][j] == 1)
     {
     row = i;
     colume = j;
     }
   }
  sum =abs(2-row)+abs(2-colume);
  cout << sum << "\n";
}
