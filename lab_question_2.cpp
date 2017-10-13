#include <iostream>
using namespace std;

int Max(int A[], int n)
{
    if (n == 1)
        return A[0];
    return max(A[n-1], Max(A, n-1));
}

int Min(int A[], int n)
{
    if (n == 1)
        return A[0];
    return min(A[n-1], Min(A, n-1));
}

double mean(int A[], int n)
{ int a;
  float mean, s;
  s=0;
  for(a=0;a<n;a++)
  {
    s=s+A[a];
  }
return mean=s/n;
}

void median(int A[], int n)
{   int e;
    for(int i=0;i<n;i++)
       { for (int j=i;j<n;j++)
             { if (A[j]>A[j+1])
                 { e=A[j];
                   A[j]=A[j+1];
                   A[j+1]=e;
                 }
             }
       }

    int p, q;
    if(n==1) {cout<<"median = "<<A[0];}
    else if(n%2==0) { p=(n/2)-1;
                 q=n/2;
                 cout<<"median = "<<A[p]<<" and " <<A[q]<<endl;}
    else { p=(n-1)/2;
           cout<<"median = "<<A[p]<<endl;}
}
int main()
{    int n;
    cout << "enter the size of array : ";
    cin >> n;
    int A[n];
    cout<<"enter the elements of array : "<<endl;
    for(int p=0;p<n;p++)
        {
          cout<< "Element "<<p+1<<" : ";
          cin >> A[p];
        }
    cout <<"max = "<< Max(A, n)<<endl;
    cout <<"min = "<< Min(A,n)<<endl;
    cout<<"mean = "<<mean(A,n)<<endl;
    median(A,n);
    return 0;
}
