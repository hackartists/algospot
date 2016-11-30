#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCOUNT 10000

int main(){
        int count;
        unsigned int input;
        unsigned int temp;
        char* input_s=(char*)(&input);
        scanf("%d", &count);


        for(;count;count--){
                scanf("%d",&input);
                temp = ((input_s[0]&0xff)<<24) | ((input_s[1]&0xff)<<16) | ((input_s[2]&0xff)<<8) | (input_s[3]&0xff);
                printf("%u\n",  temp);
        }
        return 0;
}
