#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
int i, key, j;
for (i = 1; i < n; i++)
{
key = arr[i];
j = i - 1;
while (j >= 0 && arr[j] > key)
{
arr[j + 1] = arr[j];
j = j - 1;
}
arr[j + 1] = key;
}
}
void printArray(int arr1[], int n)
{
int i;
for (i = 0; i < n; i++)
cout << arr1[i] << " ";
cout << endl;
}
void countSort(int a[], int n)
{
int output[n+1];
int max = a[0];
for(int i = 1; i<n; i++)
if(a[i] > max)
max = a[i];
int count[max+1];
for (int i = 0; i <= max; ++i)
count[i] = 0;
for (int i = 0; i < n; i++)
count[a[i]]++;
for(int i = 1; i<=max; i++)
count[i] += count[i-1];
for (int i = n - 1; i >= 0; i--)
{
output[count[a[i]] - 1] = a[i];
count[a[i]]--;
}
for(int i = 0; i<n; i++)
{
a[i] = output[i];
}
}
int main()
{
int arr[25],arr1[25];
int no,no1;
int element;
cout<<"\nEnter the number of elements in the array:\n";
cin>>no;
no1=no;
int i;
for(i=0;i<no;i++)
{
cout<<"\nEnter the element:";
cin>>element;
arr[i]=element;
}
for(i=0;i<no;i++)
{
arr1[i]=arr[i];
}
int option;
do
{
cout<<"\n\tMain Menu:\n";
cout<<"\t1.Insertion Sort\n";
cout<<"\t2.Counting sort\n";
cout<<"\t3.Exit";
cout<<"\nEnter the option:";
cin>>option;
switch(option)
{
case 1:
insertionSort(arr, no);
printArray(arr, no);
break;
case 2:
countSort(arr1,no1);
printArray(arr1,no1);
break;
case 3:
break;
}
}
while(option!=3);
return 0;
}
