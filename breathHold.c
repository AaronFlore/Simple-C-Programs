#include <stdio.h>
#include <time.h>

int main()
{
    printf("This program will time how long you can hold your breath.\nTake a deep breath. Press the 'Enter' key to start.\n");
    getc(stdin);
    time_t start;
    time(&start);
    printf("Timing...\nWhen you absolutely have to exhale, press the enter key again.\n");
    getc(stdin);
    time_t end;
    time(&end);
    double totalSeconds = difftime(end, start);
    double seconds = (int)totalSeconds % 60;
    double minutes = totalSeconds / 60;
    printf("You held your breath for %.f minutes and %.f seconds!\n", minutes, seconds);
}