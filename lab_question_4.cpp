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

void merge(int A[],int m,int B[],int n)
{
    int o;
    o=m+n;
    int array[o];
    for(int i=0;i<o;i++)
    {   if(i<m)
           { array[i]=A[i];}
        else if(m<=i<o)
             { array[i]=B[i-m];}
    }
    cout<<"The new array after emerging this two arrays is : {";
    for(int k=0;k<o-1;k++)
    {
        cout<<array[k]<<", ";
    }
    cout<<array[o-1]<<"}"<<endl;
    cout<<"Maximum element of all the elements in both arrays : "<<Max(array, o)<<endl;
    cout<<"Minimum element of all the elements in both arrays : "<<Min(array, o);
}

int main()
{
    int m, n, o;
    cout<<"Enter the size of 1st array : ";
    cin >> m;
    int C[m];
    cout<<"Enter the elements of 1st array : "<<endl;
    for(int i=0;i<m;i++)
    {
        cout <<"Element "<<i+1<<" : ";
        cin>>C[i];
    }
    cout<<"Enter the size of 2nd array : ";
    cin >> n;
    int D[n];
    cout<<"Enter the elements of 2nd array : "<<endl;
    for(int j=0;j<n;j++)
    {
        cout <<"Element "<<j+1<<" : ";
        cin>>D[j];
    }
    merge(C, m, D, n);

return 0;
}
