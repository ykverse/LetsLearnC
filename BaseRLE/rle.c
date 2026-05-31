#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void compress(){



}

void decompress(){


    
}

int main(int argc, char *argv[])
{
        if(argc != 2){

            printf("Usage: %s <compress | decompress> <filename>" , argv[0]);
            exit(-1);
        }

        if (strcmp(argv[1] , "compress") == 0){

            printf("compressing....\n");
            compres();
        }

        else if (strcmp(argv[1] , "decompress") == 0){

            printf("decompressing....\n");
            decompress();

        }
        else{

            printf("Usage: %s <Compression | Decompression> <filename>" , argv[0]);
            exit(-1);

        }



    return 0;
}
