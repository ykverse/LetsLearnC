#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 int main(){
    
	srand(time(NULL));
	int pass_len;

	while(1){

		printf("Enter length of the password: \n");
	     	if(scanf("%d", &pass_len) == 0 ){
			   printf("Thats not even a number buddy\n");
			   while(getchar() != '\n');
			   continue;
	   			}
			if (pass_len <=0){
				printf("You are breaking the math budd.!! Really 0 length pass??\n");
				continue;

			}	

			if (pass_len < 8){
				printf("Ha Ha Password length lessthan 8, Hackers loves you buddy..\n");
				continue;
			}	
		break;		
	}
	
	
	char password[pass_len + 1];
	char pass_char[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+-=[]{}|;':\",./<>?\\\\`~";
 	for (int i = 0; i<pass_len;i++){

		int random = rand() % (sizeof(pass_char)-1);
		password[i] = pass_char[random];
			
	}
		password[pass_len] = 0;
		printf("\nYour Fun Password is: %s",password);
	return 0;
    }

	
