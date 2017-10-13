#include <iostream>
using namespace std;

void klarge(int A[], int n, int k)
{
    int e;
    for(int i=0;i<n;i++)
       { for (int j=i;j<n;j++)
             { if (A[j]>A[j+1])
                 { e=A[j];
                   A[j]=A[j+1];
                   A[j+1]=e;
                 }
             }
       }
    int f, j;
    j=n-1;
    f=0;
    while (f<k-1)
    {
        if (A[j]=A[j-1])
        {
           f++;
        }
        j--;
    }
   cout<<A[j]<<endl;
}

void ksmall(int A[], int n, int k)
{
    int e;
    for(int i=0;i<n;i++)
       { for (int j=i;j<n;j++)
             { if (A[j]>A[j+1])
                 { e=A[j];
                   A[j]=A[j+1];
                   A[j+1]=e;
                 }
             }
       }
    int f, j;
    j=0;
    f=0;
    while (f<k-1)
    {
        if (A[j]=A[j+1])
        {
           f++;
        }
        j++;
    }
   cout<<A[j];

}

int main()
{
   int n;
   cout<<"enter the size : ";
   cin>>n;
   int array[n];
   for(int i=0;i<n;i++)
   {
       cout<<"element "<<i+1<<": ";
       cin>>array[i];
   }
   int k, j;
   cout<<"Enter the rank of largest number you want : ";
   cin>>k;
   cout<<"The "<<k<<"th largest number of the array is : ";
   klarge(array, n, k);
   cout<<"Enter the rank of smallest number you want : ";
   cin>>j;
   cout<<"The "<<j<<"th smallest number of the array is : ";
   ksmall(array,n, j);

return 0;
}
