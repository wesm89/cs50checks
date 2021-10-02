#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    printf("Each year, a heard of llamas grows on average by one third through newbors.\nAt the same time, it will shrink by one fourth through members of the heard passing away. \nEnter a heard's original size and target size to calculate, how many years it takes the heard to reach the goal!");
    int startn = get_int("Please enter your original heard head count:");
    //checking if entered startn is equal to or larger than 9
    if (startn < 9)
    {
        startn = get_int("Llama heards have to be larger than nine specimen. Please increase your head count.");
    }
    // TODO: Prompt for end size
    int goaln = get_int("Now, please enter your target heard head count:");
    // checking if goaln is equal to or larger than startn
    if (startn > goaln)
    {
        goaln = get_int("Llama heards can not decrease in population. Please enter a larger target head count.");
    }
    // TODO: Calculate number of years until we reach threshold
    int y; //declaring y
    for (y = 0; startn >= goaln; y++)
    {
        int newstartn = startn + (startn / 3) - (startn / 4);
        newstartn = startn;
        return startn;
    }
    // TODO: Print number of years
    if (startn >= goaln)
    {
        printf("It takes at least %i years for a heard of %i lamas to grow to a head count of %i.", y, startn, goaln);
    }
}
