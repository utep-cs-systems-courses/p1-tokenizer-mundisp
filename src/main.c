#include <stdio.h>
#include <string.h>

void main(){

  printf("Welcome to the tokenizer program, please type something.. (press 'e' to exit)");

  char input[30];
  fgets(input,30,stdin);
  printf("%s",input);

  if (strlen(input) >1){

    printf("Valid string");
    printf("%d",input);
    printf(strlen(input));
  }
  else{
    printf("Invalid string");
  }

  
  /*
  while(strcmp('e',input) != 0){

    

    printf("This is a test");

    scanf("%s", input);

  }

  printf("Exiting program");


  */
}
