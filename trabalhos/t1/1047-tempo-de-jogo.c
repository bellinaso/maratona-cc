#include <stdio.h>

int main() {
    int initial_hour, initial_minute;
    int final_hour, final_minute;
    int initial_total_minutes, final_total_minutes;
    int total_minutes;
    int hours_played, minutes_played;

    scanf("%d %d %d %d", &initial_hour, &initial_minute, &final_hour, &final_minute);

    initial_total_minutes = initial_hour * 60 + initial_minute;
    final_total_minutes = final_hour * 60 + final_minute;

    total_minutes = final_total_minutes - initial_total_minutes;

    if (total_minutes <= 0) {
        total_minutes += 24 * 60;
    }

    hours_played = total_minutes / 60;
    minutes_played = total_minutes % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours_played, minutes_played);
}