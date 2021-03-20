#include <stdio.h>

void main() {

    int i, s, a = 0;
    char h=0, name[20][20] = { 
        "AC Milan", "Barcelona", "Porto", "Monaco", "Liverpool",
        "Real Madrid", "CSK Moskow", "PSG", "Inter Milan", "Arsenal",
        "Atletico Madrid", "Ajax", "As Roma", "Manchester United", "Dortmund",
        "Valencia", "Manchester City", "Bayern Munich", "Napoli", "Vilareal" };

    printf("Liga Champions :\n\n");

    for (i = 0; i < 5; i++) {
        ++h;
        printf("Grup %d\n", h);
        for (s = 0; s < 4; s++) {
            printf("%d %s\n", s+1, name[a]);
            a++;
        }
        printf("\n");
    }

}