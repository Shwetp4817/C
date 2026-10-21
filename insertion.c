//insertion
#include <stdio.h>
int main(){
    int arr[100]={1,2,3,4,5};

    int n= 5;

    int  index= 2;

    int value = 10;


    for(int i=n;i>index;i--){
        arr[i]=arr[i-1]; //Only for cheaking element

    }
    //inserting value at index
    arr [index]=value;
    n++;
    
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
