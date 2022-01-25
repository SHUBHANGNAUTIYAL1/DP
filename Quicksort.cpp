#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int u)
{
    int i=l;
    int j=u;
    int pivot=a[l];
    while(i<j)
    {
        while(pivot>=a[i])// check from left to right whether pivot element is greater than other or not
        i++;
        while(pivot<a[j])// check from right to left whether the pivot element is lesser or not 
        j--;
        if(i<j)          //swaping the element after checking for first iteration
        swap(a[i],a[j]);
    }
    swap(a[l],a[j]);//final swapping so that all the left elemnt is smaller than pivot and right elements are greater than pivot
    return j;
}
    
void quicksort(int a[],int l,int u)
{
    
    if(l<u)
    {
      int j=partition(a,l,u);
      quicksort(a,l,j-1);//sorting for left part
      quicksort(a,j+1,u);//sorting for right part
      
    }
}
int main()
{
    int a[]={9,3,7,5,6,4,8,2};
    quicksort(a,0,7);
    for(int i=0;i<=7;i++)
    cout<<a[i]<<" ";
    
}