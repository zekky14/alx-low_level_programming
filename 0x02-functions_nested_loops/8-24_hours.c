#include "main.h"
/**
 * jack_bauer - program prints every minute of the day of jack bauer
 * Description: start from 00:00 to 23:59
 */

void jack_bauer(void)
{
int hrs = 0;
int min = 0;

while (hrs < 24)
{
min = 0;
while (min < 60)
{
_putchar(hrs / 10 + '0');
_putchar(hrs % 10 + '0');
_putchar(':');
_putchar(min / 10 + '0');
_putchar(min % 10 + '0');
_putchar('\n');
min++;
}
hrs++;
}
}
