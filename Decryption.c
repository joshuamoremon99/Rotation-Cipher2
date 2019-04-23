#include <stdio.h>

void Decryption(char message[550], char decrypted[550], int key); //has the char for message, encrypted and key as these will be carried throught the main fucntion and the encryption function



int main()
{
	char message[550], decrypted[550];
	int key;
	
	printf("Enter a message to Decrypt: \n");
	scanf("%[^\n]", message);
	printf("Enter key: \n");
	scanf("%d", &key);
	
	 Decryption (message, decrypted, key);
	
	return 0;
}

/*
 * Definition for function Decryption
 */
void Decryption(char message[550], char decrypted[550], int key){
   int i, symbol; // i is the itterating variable used to read from the array.
   
   for(i = 0; message[i] != '\0'; ++i){
    symbol = message[i];

    if(symbol >= 'a' && symbol <= 'z'){
        symbol = symbol - key;

        if(symbol > 'z'){
            symbol = symbol - 'z' + 'a' - 1;
        }

        decrypted[i] = symbol;
    }
    else if(symbol >= 'A' && symbol <= 'Z'){
        symbol = symbol - key;

        if(symbol > 'Z'){
            symbol = symbol - 'Z' + 'A' - 1;
        }

        decrypted[i] = symbol;
    }
    else if(symbol == ' '){ // == ' ' allows for spaces between character to be read but not changed
        decrypted[i] = symbol;
    }
    else if(symbol == '.'){ // == '.' allows for the character period read but not changed
        decrypted[i] = symbol;
    }
    else if(symbol == ':'){ // == '.' allows for the character colon read but not changed
        decrypted[i] = symbol;
    }

  }
  
  printf("Decrypted message: %s\n", decrypted);
}	
