

// In a sorted array, find if there exists any two elements of the array such that their sum is equal to a given number.



/*

Brute Force/ Naive Approach :

      For each element of the array, check with every other elements of the array whether their sum equals to given target.

      for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
          if(arr[i]+arr[j]==TargetValue){
            return true;
          }
        }
      }
      return false;


      Time Complexity: O(n2)
     Space complexity: O(1)

*/




//Two Pointers Approach

//Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream>
using namespace std;

bool sumsEqualsTarget(int arr[], int n, int targetValue){
          int i=0,j=n-1;
          while(i<j){
            if(arr[i]+arr[j] == targetValue){
              return true;
            }
            else if(arr[i]+arr[j] > targetValue){
              j--;
            }
            else{
              i++;
            }
          }
          return false;
}

int main() {

	int arr[6]={1,8,24,0,6,9};
	int targetValue=30;

	if(sumsEqualsTarget(arr,6,targetValue)) cout<<"True";
	else cout<<"No";

	return 0;
}



/*  If the array was not sorted, it would take O(nlogn) time complexity - O(log n) from sorting and O(n) for traversing all the elements.
    In this case , using HashMap will be a better approach with respect to time complexity.

    HashMap -    Time complexity : O(n)
                Space complexity : O(n)


    CONCLUSION : Use Two Pointers method if the given array is a sorted one and HashMap for otherwise.  */
