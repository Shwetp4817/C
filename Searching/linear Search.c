#include <stdio.h>
int main(){
    int arr[100]={1,2,3,4,5};
    int n=5;
    int key = 1;
    
    int index = 2;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            index = i;
            break;
        }
    }
    if(index!=-1){
        printf("Element found at index %d\n",index);
    }
    else{
        printf("Element not found\n");
    }
    return 0;
}
