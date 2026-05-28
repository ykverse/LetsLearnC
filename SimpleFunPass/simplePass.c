#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 int main(){
    
	srand(time(NULL));
	int pass_len = 10;
	char password[pass_len + 1];
	char pass_char[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
 	for (int i = 0; i<pass_len;i++){

		int random = rand() % sizeof(pass_char)-1;
		password[i] = pass_char[random];
		
		
		
	}
	password[pass_len] = 0;

	printf("\nYour Fun Password is: %s",password);
	
		 
    }
