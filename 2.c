#include <stdio.h>
 
#define SIZE 3
 
int main() {
    //FILE *file = fopen("s.txt", "r");//
    int year[SIZE];
    int month[SIZE];
    int day[SIZE];
    int maxDay, maxMonth, maxYear;
    int minDay, minMonth, maxYear;
 
    for( int i = 0; i < SIZE; i++ ) {
        fscanf(file, "%d/%d/%d", &day[i], &month[i], &year[i]);
    }
 
    maxDay = day[0];
    maxMonth = month[0];
    maxYear = year[0];
 
    for( int i = 1; i < SIZE; i++ ) {
        if ( maxYear < year[i] ) {
            maxYear = year[i];
            maxMonth = month[i];
            maxDay = day[i];
        }
        if ( maxYear == year[i] && maxMonth < month[i] ) {
                maxMonth = month[i];
        }
        if ( maxYear == year[i] && maxMonth == month[i] && maxDay < day[i] ) {
            maxDay = day[i];
        }
    }
    for( int i = 1; i < SIZE; i++ ) {
        if ( minYear > year[i] ) {
            minYear = year[i];
            minMonth = month[i];
            minDay = day[i];
        }
        if ( minYear == year[i] && minMonth < month[i] ) {
                minMonth = month[i];
        }
        if ( minYear == year[i] && minMonth == month[i] && minDay < day[i] ) {
            minDay = day[i];
        }
    }
    fclose(file);
    printf("%d/%d/%d\n", minDay, minMonth, minYear);
 
    printf("%d/%d/%d\n", maxDay, maxMonth, maxYear);
    int answer=maxDay-minDay;
    printf("%d",answer);
    
}    

