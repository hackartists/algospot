#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

//#define MAXCOUNT 10000
#define ALPHA_NUMBER 21

typedef unsigned int input_t;



int main(){
        int count,total;
        //input_t input[21][21]={0,};
        char str_input[1000]={0,};
        char* str_t;
        int *(alpha_heads[ALPHA_NUMBER])={0,};
        int f_ind,s_ind;

        scanf("%d", &count);

        while(count--){
                scanf("%s",str_input);
                printf("%s\n",str_input);

                total =0;
                while(str_input[total]) {
                        printf("%c%c",str_input[total],str_input[total+1]);
                        f_ind = str_input[total]^0x60;

                        if(!alpha_heads[f_ind]) {
                                alpha_heads[f_ind] = (int*)malloc(sizeof(int)*ALPHA_NUMBER);
                                f_ind = ALPHA_NUMBER;
                                for(f_ind=0;f_ind<ALPHA_NUMBER;f_ind++)
                                        alpha_heads[f_ind]=0;
                        }
                        alpha_heads[f_ind][str_input[total+1]^0x60]++;
                }

                for(f_ind=0;f_ind<ALPHA_NUMBER;f_ind++) {
                        if(alpha_heads[f_ind]){
                        for(s_ind=0;s_ind<ALPHA_NUMBER;s_ind++) {
                                while(alpha_heads[f_ind][s_ind]){
                                        printf("%c%c", f_ind^0x60,s_ind^0x60);
                                        alpha_heads[f_ind][s_ind]--;
                                }
                        }
                        free(alpha_heads[f_ind]);
                        alpha_heads[f_ind]=NULL;
                        }
                }
                printf("\n");




        }


        return 0;
}
