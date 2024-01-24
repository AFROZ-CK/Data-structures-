#include <stdio.h>

// Function to display the scoreboard
void displayScoreboard(int team1Score, int team2Score, int team1Wickets, int team2Wickets, int overs) {
    printf("------------------------------\n");
    printf("         CRICKET SCOREBOARD         \n");
    printf("------------------------------\n\n");
    printf("Team 1: %d/%d\n", team1Score, team1Wickets);
    printf("Team 2: %d/%d\n", team2Score, team2Wickets);
    printf("Overs: %d\n", overs);
    printf("------------------------------\n");
}

int main() {
    int team1Score = 0, team2Score = 0;
    int team1Wickets = 0, team2Wickets = 0;
    int overs = 0;
    int choice;

    do {
        // Display menu
        printf("\n1. Update Team 1 Score\n");
        printf("2. Update Team 2 Score\n");
        printf("3. Update Team 1 Wickets\n");
        printf("4. Update Team 2 Wickets\n");
        printf("5. Update Overs\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Team 1 Score: ");
                scanf("%d", &team1Score);
                break;
            case 2:
                printf("Enter Team 2 Score: ");
                scanf("%d", &team2Score);
                break;
            case 3:
                printf("Enter Team 1 Wickets: ");
                scanf("%d", &team1Wickets);
                break;
            case 4:
                printf("Enter Team 2 Wickets: ");
                scanf("%d", &team2Wickets);
                break;
            case 5:
                printf("Enter Overs: ");
                scanf("%d", &overs);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }

        // Display updated scoreboard after each update
        displayScoreboard(team1Score, team2Score, team1Wickets, team2Wickets, overs);

    } while (choice != 6);

    return 0;
}
