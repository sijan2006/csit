#include <stdio.h>

struct player
{
    int jersey_id;
    char name[20];
};

struct club
{
    int club_id;
    char club_name[20];
    struct player player; // Nested structure
};

void main()
{
    struct club c;

    printf("Enter the club details (id and name): ");
    scanf("%d %s", &c.club_id, c.club_name);

    printf("Enter the player details (id and name): ");
    scanf("%d %s", &c.player.jersey_id, c.player.name);

    printf("\nClub ID: %d\n", c.club_id);
    printf("Club Name: %s\n", c.club_name);
    printf("Player ID: %d\n", c.player.jersey_id);
    printf("Player Name: %s\n", c.player.name);
}
