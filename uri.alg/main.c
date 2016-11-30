#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 80
#define MAXCOUNT 100
#define ARR_SIZE MAXSIZE * MAXCOUNT +MAXCOUNT

int main(){
        int count;
        char input[ARR_SIZE];
        char out[ARR_SIZE];
        char* input_t,*out_t;

        scanf("%d", &count);

        if (count < 1 || count >MAXCOUNT){
                return -1;
        }

        input_t = input;

        for(;count;count--){
                scanf("%s",input_t);
                input_t += strlen(input_t);
                input_t[0] ='\n';
                input_t++;
        }
        input_t[0] =0;
        input_t = input;
        out_t = out;
        //printf("%s",input);
        while(input_t[0]) {
                if(input_t[0]=='%') {
                        if(input_t[2]=='a') {
                                out_t[0]='*';
                        } else {
                                out_t[0]=(char)( 0x20 ^ (input_t[2]^0x30));
                        }
                        out_t++;
                        input_t +=3;
                }
                else{
                        out_t[0] = input_t[0];
                        out_t++;
                        input_t++;
                }
        }
        out_t[0]=0;

        printf("%s",out );

}
