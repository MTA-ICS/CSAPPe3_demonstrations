#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(u8val)\
  ((u8val) & 0x80 ? '1' : '0'), \
  ((u8val) & 0x40 ? '1' : '0'), \
  ((u8val) & 0x20 ? '1' : '0'), \
  ((u8val) & 0x10 ? '1' : '0'), \
  ((u8val) & 0x08 ? '1' : '0'), \
  ((u8val) & 0x04 ? '1' : '0'), \
  ((u8val) & 0x02 ? '1' : '0'), \
  ((u8val) & 0x01 ? '1' : '0') 
 
int main(int argc, char* argv[]){
    unsigned char tmp = (unsigned char) atoi(argv[1]);
    printf("%d = 0b"BYTE_TO_BINARY_PATTERN"\n",tmp, BYTE_TO_BINARY(tmp));
    printf("%d = Ox%x\n",tmp, tmp);
    printf("%d = 0o%o\n",tmp, tmp);
  }