#include <stdio.h>
#include <string.h>

void main(){

  printf("%s","Welcome to the tokenizer, press 'c' to continue and 'e' to exit");

  char choice;
  fgets(choice, 1,stdin);
  
  char input[30];

  while(choice != 'e'){

    printf("%s",'>');
    fgets(input,30,stdin);
    printf("%s",input);

    printf("%s", "next choice?..");
    fgets(choice, 1, stdin);
    
  }
  
  printf("Exiting program.. bye");
  return;
}
