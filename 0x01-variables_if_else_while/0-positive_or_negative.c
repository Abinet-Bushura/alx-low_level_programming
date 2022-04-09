 cat > 0-positive_or_negetive.c
#Include <stdlib.h>
#Iclude  <time.h>
#Include <stdio.h>

/**
*main -Entry point
*
*Retun: always 0(success/correct)
*/

Int main(void)
{
int n:srand(time(0));
n =rand() -RAND_MAX /2;
if (n==0)
{
printf("%i is zero/n",n);
}
else if (n<0){printf("%i is negative /n", n);
}

else
{
printf("%i is positive/n", n);
}

return (0);

}

