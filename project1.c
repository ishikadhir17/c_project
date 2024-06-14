#include<stdio.h>
#include<stdlib.h>
#include<time.h>
   
int main()
    {
        int number,guess,nguesses=1;
        srand(time(0));//always show diff. number
        number = rand()%100 + 1;//1 to 100 k beech random number generate krega 
       // printf("the number is %d",number);
        //keep running the loop untill the number is guessed 
        do
        {
            printf("guess the number between 1 to 100 \n");
            scanf("%d",&guess);
            if (guess>number)
            {
                printf("lower number please \n");
            }
            else if (guess<number)
            {
                printf("higher number please \n");
            }
            
            else
            {
                printf("you guessed it in %d attempt \n",nguesses);
            }
            nguesses++;
            } while (guess!=number);
        return 0;
}
