#include <stdio.h>

int main(){
	char c;
	int encrypt;
	
	printf("Do you want to encrypt or decrypt? 1 for ENCRYPT, 0 for DECRYPT: ");
	scanf(" %d", &encrypt);
	
	if (encrypt){
		printf("Enter Character to encrypt: ");
		scanf(" %c", &c);
		
		c = ~c;
		printf("Encrypted Character: %c", c);
	}
	else {
		printf("Enter Character to decrypt: ");
		scanf(" %c", &c);
		
		c = ~c;
		printf("Decrypted Character: %c", c);
	}
	
}