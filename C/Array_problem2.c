#include<stdio.h>
int SecondLargest(int arr[],int n){
    int largest=arr[0]; // init first element as largest
    int slargest=-1; //init second largest element as -1
        for(int i=1;i<n;i++){ //traversing from the second element to the last element
            if(arr[i]>largest){ // check if element at ith index is greater than max, 
                slargest=largest; // if true then assign second largest as largest
                largest=arr[i]; // assign largest as element at ith index
            }
            else if(arr[i]!=largest && arr[i]>slargest){ //check if ith element is not largest but greater than second largest,
                slargest=arr[i]; // then assign second largest as that element
            }
        }
        return slargest; // returning the second largest element from the array
}
int main(){
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]); // calculating the length of the array
    int sL=SecondLargest(arr,n);
    printf("%d",sL);
    return 0;
}