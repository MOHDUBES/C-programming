// Ques : find the minimum value out of all the elements in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,6,7,34,9,230,2,8,3,6,11};
    int n = sizeof(arr)/4;
    int mn = arr[0];
    for(int i=1; i<n; i++){
        // if(arr[i]<mn) mn = arr[i];
        mn = min(mn,arr[i]);
    }
    cout<<mn;
}

// How
// Ques : what is the difference between the 5's in these two expression?
// int num[5];
// num[5]=11;

// 1. first is particular element, second is type
// 2. first is array size, second is particular element
// 3. first is particular element, second is array size
// 4. both specify array size


// How 
// Ques : Given an intege n. Create an array containing squares of all 
// natural numbers till n and print the elements of the array.

// Ques: Count the number of elements in given array greater than a given number x.

// How
// Ques : Given an array of integers, change the value of all add indexed elements 
// to its second multiple and increment all even indexed value by 10.

// Ques : Find the difference between the sum of elements at even
// indices to the sum of elements at odd indices.

