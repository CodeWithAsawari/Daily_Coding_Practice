//Linear Search
#include <stdio.h>

int main() {
    int arr[]={10,20,30,40};
    int key=30, found=0;

    for(int i=0;i<4;i++){
        if(arr[i]==key){
            found=1;
            break;
        }
    }

    if(found)
        printf("Found");
    else
        printf("Not Found");
}
