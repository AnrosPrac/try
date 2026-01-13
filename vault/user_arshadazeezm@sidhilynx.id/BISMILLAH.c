#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to print the current state of the towers
void printTowers(int n, int source, int auxiliary, int destination, int discPos[], char names[][20]) {
    system("clear"); // Use "cls" on Windows
    printf("\n");
    for (int i = n - 1; i >= 0; i--) {
        for (int tower = 0; tower < 3; tower++) {
            if (discPos[tower] == i) {
                printf("  %d  ", tower + 1); // Disc number (simplified representation)
            } else {
                printf("     ");
            }
        }
        printf("\n");
    }

    printf("----------------------\n");
    printf("Source (%s)  Auxiliary (%s)  Destination (%s)\n", names[0], names[1], names[2]);
    printf("\n");
}

// Function to check if a move is valid
bool isValidMove(int n, int sourcePeg, int destinationPeg, int discPos[], int discSizes[]) {
    if (destinationPeg < 0 || destinationPeg >= 3) {
        return false; // Invalid destination peg
    }

    // Find the top disc on the source peg
    int topDiscSource = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (discPos[sourcePeg] == i) {
            topDiscSource = i;
            break;
        }
    }

    // Find the top disc on the destination peg
    int topDiscDestination = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (discPos[destinationPeg] == i) {
            topDiscDestination = i;
            break;
        }
    }

    // If source peg is empty, it's not a valid move to take from it
    if (topDiscSource == -1) {
        return false;
    }

    // If destination peg is empty, any disc can be moved
    if (topDiscDestination == -1) {
        return true;
    }

    // If destination peg is not empty, the disc being moved must be smaller
    return discSizes[topDiscSource] < discSizes[topDiscDestination];
}

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, int source, int auxiliary, int destination, int discPos[], int discSizes[], char names[][20]) {
    if (n <= 0) {
        return;
    }

    // Move n-1 discs from source to auxiliary, using destination as auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary, discPos, discSizes, names);

    // Move the nth disc from source to destination
    if (isValidMove(n, source, destination, discPos, discSizes)) {
        // Update disc positions
        int discToMove = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (discPos[source] == i) {
                discToMove = i;
                discPos[source] = -1; // Remove from source
                break;
            }
        }
        if (discToMove != -1) {
            discPos[destination] = discToMove; // Place on destination
            printTowers(3, source, auxiliary, destination, discPos, names);
            printf("Move disc %d from %s to %s\n", discToMove + 1, names[source], names[destination]);
            getchar(); // Pause for user to see the move
        }
    } else {
        printf("Invalid move attempted: disc from %s to %s\n", names[source], names[destination]);
        getchar(); // Pause for user to see the error
    }

    // Move the n-1 discs from auxiliary to destination, using source as auxiliary
    towerOfHanoi(n - 1, auxiliary, source, destination, discPos, discSizes, names);
}

// Function to get user input for number of discs and tower names
void getUserInput(int *numDiscs, char sourceName[], char auxName[], char destName[]) {
    printf("Enter the number of discs: ");
    scanf("%d", numDiscs);

    printf("Enter name for Source Tower: ");
    scanf("%s", sourceName);
    printf("Enter name for Auxiliary Tower: ");
    scanf("%s", auxName);
    printf("Enter name for Destination Tower: ");
    scanf("%s", destName);
}

int main() {
    int numDiscs;
    char sourceName[20], auxName[20], destName[20];

    getUserInput(&numDiscs, sourceName, auxName, destName);

    if (numDiscs <= 0) {
        printf("Number of discs must be positive.\n");
        return 1;
    }

    // Initialize disc positions and sizes
    // discPos[i] stores the position of disc i (0 for source, 1 for auxiliary, 2 for destination)
    // For simplicity in this visualization, we'll track which "level" a peg has.
    // A value of -1 means no disc at that level.
    int discPos[3] = {numDiscs - 1, -1, -1}; // All discs start on source tower
    int discSizes[numDiscs];
    for (int i = 0; i < numDiscs; i++) {
        discSizes[i] = i; // Smaller discs have smaller indices
    }

    char names[3][20];
    sprintf(names[0], "%s", sourceName);
    sprintf(names[1], "%s", auxName);
    sprintf(names[2], "%s", destName);

    printTowers(numDiscs, 0, 1, 2, discPos, names);
    printf("Initial state.\n");
    getchar(); // Consume the newline character from scanf

    towerOfHanoi(numDiscs, 0, 1, 2, discPos, discSizes, names);

    printf("\nTower of Hanoi solved!\n");

    return 0;
}