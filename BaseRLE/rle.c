#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void compress(){

    int f_char = getchar();
    int repeter_counter = 1;
    int n_char;

    while((n_char = getchar()) != EOF){

        if (n_char == f_char){

            repeter_counter++;

            if(repeter_counter >= 255){

                putchar(f_char);
                putchar(repeter_counter);
                repeter_counter = 0;
            }

        }
        else{
            putchar(f_char);
            putchar(repeter_counter);
            repeter_counter = 1;
           f_char = n_char;
        }

    }

    putchar(f_char);
    putchar(repeter_counter);

}

void decompress(){

    printf("lets decompress...\n");



}

int main(int argc, char *argv[])
{
        if(argc != 2){

            printf("Usage: %s <compress | decompress> <filename>" , argv[0]);
            exit(-1);
        }

        if (strcmp(argv[1] , "compress") == 0){

            
            compress();
        }

        else if (strcmp(argv[1] , "decompress") == 0){

            
            decompress();

        }
        else{

            printf("Usage: %s <Compression | Decompression> <filename>" , argv[0]);
            exit(-1);

        }



    return 0;
}
