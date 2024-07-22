#include<iostream>
using namespace std;
bool check(int nums[], int n){
    int count=0; //init variable count as zero
    for(int i=0;i<n;i++){ //traversing through the array
        if(nums[i-1]>nums[i]){ //checking if element at i-1 th index is greater than at i th index,
            count++; //if true, increasing count by 1
        }
    }
    if(nums[n-1]>nums[0]){ // if the last element is greater than the first element,
        count++; // increase count by one
    }
    if(count>1){ // if prev element is greater than the next element more than once ,
        return false ; // then return that the array is not rotated and sorted
    }

    return true; // else return that the array is rotated and sorted
}

int main(){
    int nums[]={3,4,5,1,2};
    int n=sizeof(nums)/sizeof(nums[0]);
    bool ans=check(nums,n);
    cout<<ans<<endl;
    return 0;
}