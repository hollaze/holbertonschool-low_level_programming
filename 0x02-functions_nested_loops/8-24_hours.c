#include "holberton.h"

/**
 * jack_bauer - from 00:00 to 23:59
 */

void jack_bauer(void)
{

int hour0, hour1;
int minute0, minute1;

for (hour0 = 0; hour0 <= 2; hour0++)
{
for (hour1 = 0; hour1 <= 9; hour1++)
{
for (minute0 = 0; minute0 <= 5; minute0++)
{
for (minute1 = 0; minute1 <= 9; minute1++)
{

if (hour1 <= 3) /* If it's different from 23:59 then print */
{
_putchar(hour0 + '0');
_putchar(hour1 + '0');
_putchar(':');
_putchar(minute0 + '0');
_putchar(minute1 + '0');
_putchar('\n');
}

} /* For minute1 */
} /* For minute0 */
} /* For hour1 */
} /* For hour0 */

}
