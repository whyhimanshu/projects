// SNAKE WATER GUN GAME
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int SnakeWaterGun(char you, char comp)
{

    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (comp == 'w' && you == 's')
    {
        return -1;
    }
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}
int main()
{
    char you, comp;
    int number;
    srand(time(0));
    number = rand() % 100 + 1; // GENERATES A number BETWEEN 1 AND 100
    if (number < 33 && number > 0)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("Enter 's' for snake, 'w' for water and 'g' for gun :\n");
    scanf("%c", &you);
    printf("You chose %c and computer chose %c\n", you, comp);
    int result = SnakeWaterGun(you, comp);
    if (result == 0)
    {
        printf("Game Draw 🤯😂\n");
    }
    else if (result == 1)
    {
        printf("You won the game, congratulations😎\n");
    }
    else
    {
        printf("sorry you lost:/\n");
    }

    return 0;
}