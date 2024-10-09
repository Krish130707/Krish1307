#include <stdio.h>

#define CANDIDATES 5

int main() {
    int votes[CANDIDATES] = {0};
    int spoiledBallots = 0;
    int vote;
    int totalVotes;

    printf("Enter the number of ballots cast: ");
    scanf("%d", &totalVotes);

    printf("Enter the votes (1-5 for candidates, other for spoiled):\n");

    for (int i = 0; i < totalVotes; i++) {
        scanf("%d", &vote);
        if (vote >= 1 && vote <= CANDIDATES) {
            votes[vote - 1]++;
        } else {
            spoiledBallots++;
        }
    }

    printf("\nVote count for each candidate:\n");
    for (int i = 0; i < CANDIDATES; i++) {
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);
    }

    printf("Number of spoiled ballots: %d\n", spoiledBallots);

    return 0;
}
