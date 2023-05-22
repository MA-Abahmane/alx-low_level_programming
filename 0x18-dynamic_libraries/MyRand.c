#include <string.h>
#include <unistd.h>

/** rand - a cracked version of rand that return the numbers 
*  I WANT (he he he)
 *
 * Return: the winning numbers I need (9 8 10 24 75 9).
 */

int rand()
{
/* keep track of the function calls */
static int count = -1;

count++;

/* first call; return 9. and so on... */
if (count == 0)
return (9);

if (count == 1)
return (8);

if (count == 2)
return (10);

if (count == 3)
return (24);

if (count == 4)
return (75);

if (count == 5)
return (9);

/* if called more then needed, return random num */
return (count * count % 3000);
}
