
// Given two sorted arrays and a number x, find the pair whose sum is closest to x


#include<iostream>
#include<climits>
using namespace std;

void closestPairs(int arr1[], int arr2[], int m, int n, int targetValue){

    int i=0,j=n-1,min_index1,min_index2,min_value=INT_MAX;

    while(i<m && j>=0){
        if(abs((arr1[i]+arr2[j])-targetValue) < min_value){
          	min_value=abs((arr1[i]+arr2[j])-targetValue);
          	min_index1=i;
          	min_index2=j;
        }
        if(abs((arr1[i]+arr2[j]) < targetValue)){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<arr1[min_index1]<<" "<<arr2[min_index2];
}

int main() {

	int arr1[] = {1, 4, 5, 7};
  int arr2[] = {10, 20, 30, 40};
  int m = sizeof(arr1)/sizeof(arr1[0]);
  int n = sizeof(arr2)/sizeof(arr2[0]);
  int targetValue = 38;

  closestPairs(arr1,arr2,m,n,targetValue);

	return 0;
}



// For more details : https://www.geeksforgeeks.org/given-two-sorted-arrays-number-x-find-pair-whose-sum-closest-x/
