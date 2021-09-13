#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int n = 0;
    printf("enter the number of elements ");
    scanf("%d", &n);
   
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    int a[n];
    cout<<"Enter the  elements of the array\n";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"The elements of the array\n";
for(int i=0;i<n;i++)
cout<<a[i]<<"\n";
cout<<"The elements of the array in reverse order\n";
for(int i=(n-1);i>=0;i--)
{
cout<<a[i]<<endl;
}
    getch();
}