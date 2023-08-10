#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char *ptr_bytes;


void show_bytes(ptr_bytes value, size_t len){
    int i;
    for (i = 0; i<len; i++){
        printf("%.2X ",value[i]);
    }
    printf("\n");
}
void show_int(int value){
    show_bytes((ptr_bytes) &value, sizeof(int));
}

int main(int argc, char *argv[]){
    int  tmp;
    if (argc >=1){
        tmp = (int)atoi(argv[1]);
    }else{
        tmp = 100;        
    }
    show_int(tmp);
    printf("%ld\n",sizeof(int));
    return 0;
}