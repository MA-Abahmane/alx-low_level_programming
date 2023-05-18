#include <string.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @argv: main arguments array
 * @argc: main arguments array length
 *
 * Description: doubly linked list node structure
 * 
 */

int main(int argc, char *argv[])
{
char *user_name, *pass_code, *userN, *passW;
  
user_name = "julien";
pass_code = "`./keygen5 julien`";


userN = argv[1];
passW = argv[2];


if (argc == 2 || (userN == user_name && passW == pass_code))
printf("Congrats!\n");
else
printf("Segmentation fault (core dumped)\n");

return (0);
}
