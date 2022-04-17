#include <iostream>
using namespace std;
  
// Merges two subarrays of array[].
// First subarray is a[begin..mid]
// Second subarray is a[mid+1..end]
void merge(int aay[], int const l, int const mid, int const r)
{
    int const x1 = mid - l + 1;
    int const x2 = r - mid;
  
    // Create temp arrays
    int *left = new int[x1],
         *right = new int[x2];
  
    // Copy data to temp aays leftarray[] and rightarray[]
    for (int i = 0; i < x1; i++)
        left[i] = aay[l + i];
    for (int j = 0; j < x2; j++)
        right[j] = aay[mid + 1 + j];
  
    int indexOfx1 = 0, // Initial index of first sub-array
        indexOfx2 = 0; // Initial index of second sub-array
    int indexOfMergedaay = l; // Initial index of merged array
  
    // Merge the temp arrays back into array[left..right]
    while (indexOfx1 < x1 && indexOfx2 < x2) {
        if (left[indexOfx1] <= right[indexOfx2]) {
            aay[indexOfMergedaay] = left[indexOfx1];
            indexOfx1++;
        }
        else {
            aay[indexOfMergedaay] = right[indexOfx2];
            indexOfx2++;
        }
        indexOfMergedaay++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfx1 < x1) {
        aay[indexOfMergedaay] = left[indexOfx1];
        indexOfx1++;
        indexOfMergedaay++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfx2 < x2) {
        aay[indexOfMergedaay] = right[indexOfx2];
        indexOfx2++;
        indexOfMergedaay++;
    }
}
  
// begin is for left index and end is
// right index of the sub-aay
// of a to be sorted */
void mergeSort(int aay[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
  
    int mid = begin + (end - begin) / 2;
    mergeSort(aay, begin, mid);
    mergeSort(aay, mid + 1, end);
    merge(aay, begin, mid, end);
}
  
int main()
{
    int i,j,n,loc,temp,comp=0,shift=0,min;
    int t;
    cin>>t;
    while(t--)
    {
    //cout<<"\nno. of elements:";
    cin>>n;
    int a[n];
    //cout<<"\nelements\n";

    for(i=0;i<n;i++)
        cin>>a[i];

    mergeSort(a, 0, n- 1);
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {cout<<"YES";break;}
    }
    if(i==n-2)cout<<"NO";
    return 0;
    }
}

