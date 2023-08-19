#include <stdio.h>

int main()

{

    int t1, t2, duration;

    scanf("%d %d", &t1, &t2);

    duration = t2 - t1;

    if (duration < 0)

    {

        duration = 24 + (t2 - t1);
        printf("O JOGO DUROU %d HORA(S)\n",duration);


    }

    else if (t1 == t2)

    {

        printf("O JOGO DUROU 24 HORA(S)\n");

    }

    else if(duration>0)

    {
        printf("O JOGO DUROU %d HORA(S)\n", duration);

    }


    return 0;

}
