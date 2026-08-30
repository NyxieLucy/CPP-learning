#include <stdio.h>
#include <string.h>

int main() {
  char user_input[100];

  printf("please enter your word: ");
  scanf("%99s", user_input);

  printf("the word is: %s\n", user_input);

  int length = strlen(user_input);
  printf("number of letters: %d\n", length);

  printf("the normal spelling: \n");
  for (int i = 0; i < length; i++) {
    printf("%c ", user_input[i]);
  }
  printf("\n");

      printf("the reversed spelling: \n");
  for (int j = length - 1; j >= 0; j--) {
    printf("%c ", user_input[j]);
  }
  printf("\n");

      int is_palindrome = 1;
  for (int i = 0; i < length / 2; i++) {
    if (user_input[i] != user_input[length - 1 - i]) {
      is_palindrome = 0;
      break;
    }
  }

  if (is_palindrome) {
    printf("this word is a Palindrome!\n");
  } else {
    printf("the word is NOT a Palindrome!\n");
  }

  return 0;
}
