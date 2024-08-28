#include<stdio.h>

int heap[100];
int size=0;

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void insert(int value){
    int index; // acts as a pointer for going to the parent node of a particular child node
    heap[size]=value;
    size=size+1;
    index=size-1; 
    while(index>=1){
        int parent = (index-1)/2;
        if(heap[parent] < heap[index]){
            swap(&heap[parent], &heap[index]);
            index=parent;
        }
        else{
            return;
        }
    }

}

void delete(){
    if(size==0){
        printf("Heap is empty, nothing to delete \n");
    }
    else{
        heap[0]=heap[size-1];
        heap[size-1]=0;
        --size;
        int index=0;
        while(index<size-1){
            int left_child_ind=(2*index)+1;
            int right_child_ind=(2*index)+2;

            if(heap[left_child_ind] > heap[right_child_ind] && heap[left_child_ind]>heap[index]){
                swap(&heap[left_child_ind], &heap[index]);
                index=left_child_ind;
            }

            else if(heap[right_child_ind] > heap[left_child_ind] && heap[right_child_ind]>heap[index]){
                swap(&heap[right_child_ind], &heap[index]);
                index=right_child_ind;
        }
        else{
            return;
        }
    }
    
}
}

void print(){
    for(int i=0;i<size;i++){
        printf("%d ",heap[i]);
    }
}

int main(){
    insert(50);
    insert(55);
    insert(53);
    insert(52);
    insert(54);
    print();
    printf("\n");
    delete();
    print();
    return 0;
    }



    
    
    
