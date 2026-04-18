#include <stdio.h>
int main(){
    int arr [4]={10,20,30,40};
    int brr []={10,20,30,40,50};
    int crr [6]={10,20,30};


    printf("size of arr:%lu\n",sizeof(arr));//16bytes
    printf("size of brr:%lu\n",sizeof(brr));//20bytes
    printf("size of crr:%lu\n",sizeof(crr));//24bytes

    return 0;
}