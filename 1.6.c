#include <stdio.h>
#define d 365
#define h 24
#define s 3600
int main(){
    int year = 18;
    int days = year * d;
    int hour = days * h;
    int sec = hour * s;
    printf("Тики: %d | Часы: %d | Дни: %d | Годы: %d", sec, hour, days, year);
    return 0;
}