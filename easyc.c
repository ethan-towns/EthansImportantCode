#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
       if(argc != 2){
           printf("Use ./caesar key\n");
              return 1;
       }
    
    string s = argv[1];

    for (int i = 0; i < strlen(s); i++){
            
            if (!isdigit (s[i])){
                printf("Numbers only \n");
                return 1;
                                }     
                                       }
     
    int k = atoi(argv[1]);
    
    string p = get_string ("Plaintext:");
    printf("ciphertext:");
    
    // changed s to p here    \/
    for(int i = 0; i < strlen(p);i++){
    
        if isupper (p[i])
            printf("%c", (((p[i] + k) - 65) % 26) + 65);
        
        else if islower (p[i])
            printf("%c", (((p[i] + k) - 97) % 26) + 97);
        
        else
            printf("%c", (p[i]));
        }
    printf("\n");
    return 0;
    
    
    
}
