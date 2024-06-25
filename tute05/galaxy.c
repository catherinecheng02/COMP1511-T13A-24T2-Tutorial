// galaxy.c
//
// This program was written by Catherine Cheng (z5310517)
// on 25-06-24
// This program is a simple game that allows the user to build a galaxy. 
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

#define ADD_PLANET_COMMAND 'p'

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }


    // TODO: Place the planets and nebulae in the galaxy
    // Planets are added with p [row] [col] [points]
    // Nebulae are added with n [row] [col]
    printf("Enter planets and nebulae:\n");
    char command;
    scanf(" %c", &command);
    int row;
    int col;
    while (command != 'q') {
        
        int points;
        
        if (command == ADD_PLANET_COMMAND){
            scanf("%d %d %d", &row, &col, &points)
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        }
        if (command == 'n' ) {
            scanf("%d %d", &row, &col)
            galaxy[row][col].entity = NEBULA;
            galaxy[row][col].points = NEBULA_POINTS;
        }
        scanf(" %c", &command);
    }

    // TODO: Place the player in the galaxy
    // Position is given by [row] [col]
    printf("Enter the starting position of the player: ");
    scanf("%d %d", &row, &col);
    
    while (row < 0 || col < 0 || row > SIZE - 1 || col > SIZE - 1 || galaxy[row][col].entity != EMPTY) {
        printf("Invalid coordinate, give new input!\n");
        scanf("%d %d", &row, &col);
    }
    galaxy[row][col].entity = SPACESHIP;

    // TODO: Place the stars in the galaxy
    // stars are input in the form [row] [col] [points]
    printf("Enter the position and points of the star(s):\n");
    while (scanf("%d %d %d", &row, &col, &points) == 3) {
        galaxy[row][col].entity = STAR;
        galaxy[row][col].points = points;
    }
    // TODO: Print the map
    print_map(galaxy);

    return 0;
}

// Function prints the map of the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}
