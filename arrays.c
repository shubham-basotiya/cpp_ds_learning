#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[5] = {100,200,300,400,500};
    int (* ptr)[5] = &arr;

    printf("Address of arr element :- \n");
    printf("%p \n", arr+1);
    printf("%p \n", arr+2);
    for(int i = 0; i < 5; i++){
        printf("arr[%d] = %p\n",i,*ptr+i);
    }

    for (int i = 5; i < 10; i++)
    {
        printf("arr[%d] = %p\n",i,*ptr+i);
    }
    
    for (int  i = 0; i < 5; i++)
    {
        printf("arr[%d] = %p\n",i,*(ptr+i));
    }
    
    return 0;
}