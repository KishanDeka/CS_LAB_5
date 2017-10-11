#include <iostream>
using namespace std;

int sum_array(int array[], int size)
{ int a, s;
  s=0;
  for(a=0;a<size;a++)
  {
    s=s+array[a];
  }
return s;
}
int main()
{
    int siz, sum;
    cout << "enter the size of array : ";
    cin >> siz;
    int ARRAY[siz];
    cout<<"enter the elements of array : "<<endl;
    for(int p=0;p<siz;p++)
       { cin >> ARRAY[p]; }
    sum = sum_array( ARRAY , siz);
    cout<<"sum of the elements of array : "<<sum;

return 0;
}
