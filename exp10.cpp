#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){
while (l <= r) {
int m = l + (r - l) / 2;

if (arr[m] == x)
return m; //middle element

if (arr[m] < x)
l = m + 1; //left half

else
r = m - 1; //right half
}

return -1; //element not prsent
}

int main(){

int n;
cout<<"Enter number of elements: ";
cin>>n;
int arr[n];
cout<<"Enter array elements in sorted order: ";
for(int i=0;i<n;i++){
cin>>arr[i];
}
int x;
cout<<"Enter the number to be searched: ";
cin>>x;
int result = binarySearch(arr, 0, n - 1, x);
if(result == -1)
cout << "Element is not present in array";
else
cout << "Element is present at index " << result;
return 0;
}
