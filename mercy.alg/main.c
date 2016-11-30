#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MERCY_STR "Hello Algospot!"
#define MERCY_SIZE sizeof("Hello Algospot!")

int main (){
        int count;
        scanf("%d",&count);

        if(count){
                char* str,*str_t;
                str_t = str = (char*)malloc(MERCY_SIZE*count + count +1);
                for(;count--;){
                        strcpy(str_t,MERCY_STR);
                        str_t += MERCY_SIZE-1;
                        str_t[0] = '\n';
                        str_t++;
                }
                str_t[0]=0;
                printf("%s",str);
                free(str);
        }
        return 0;
}
