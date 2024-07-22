#include<stdio.h>
int main(){
    int arr[]={12,35,1,10,34,1};
    int max; // init a max variable 
    max=arr[0]; // init the element at zeroeth index as maximum
    for(int i=1;i<6;i++){ // running a loop from the first index to the last index
        if(arr[i]>max){ // checking if element at ith index is greater than max
            max=arr[i]; // assigning it to max if true
        }
    }
    printf("%d",max); // printing maximum from among the array
    return 0;
}