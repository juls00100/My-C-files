/*#include <stdio.h>

int main() {
    printf("This is 25%% of the total.\n");
    return 0;
}
*/
#include <stdio.h>

int main() {
  int age;

  // take input from users
  printf("Enter your age: ");
  scanf("%d", &age);

  // ternary operator to find if a person can vote or not
  (age >= 18) ? printf("You can vote") : printf("You cannot vote");

  return 0;
}
