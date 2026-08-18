#include <stdio.h>

int main() {
    int distance;
    double media = 0, count = 0;
    char name[100];

    while(scanf("%[^\n]", &name) != EOF) {
        scanf("%d", &distance);
        media += distance;
        count++;
    }

    media = (double)media/count;
    
    printf("%.1lf\n", media);

    return 0;
}