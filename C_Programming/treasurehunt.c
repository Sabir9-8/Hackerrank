#include <stdio.h>

int main() {
    //You begin at the entrance of the labyrinth. You must choose between three paths:
    int first;
    scanf("%d", &first);
    //The Left Path (leads to a swamp).
    if (first == 1) {
        printf("Player chooses the Left path.\n");
        //You encounter a swamp.
        int second;
        scanf("%d", &second);
        //Risk: Hidden quicksand which ends the game.
        if (second == 1) {
            printf("Poor choice, Game Over!\n");
        }
        //Search for a bridge to cross safely.
        else if (second == 2) {
            printf("Player found a bridge.\n");
            int third;
            scanf("%d", &third);
            //You find a sturdy bridge (safe crossing).
            if (third == 1) {
                printf("Player crosses the bridge safely.\n");
                //you can proceed to the final room.
                int chest;
                scanf("%d", &chest);
                //Take the Golden Chest (contains a deadly trap and ends the game).
                if (chest == 1) {
                    printf("All that glitters is not gold, Game Over!\n");
                }
                //Take the Silver Chest (an empty chest, player loses gaining nothing).
                else if (chest == 2) {
                    printf("All your efforts were for nothing, Game Over!\n");
                }
                //Take the Bronze Chest (contains the ultimate treasure, player wins the game).
                else if (chest == 3) {
                    printf("Congratulations!! You won the treasure.\n");
                }
            }
            //The bridge collapses, and you fall into the swamp (lose the game).
            else if (third == 2) {
                printf("Poor luck, Game Over!\n");
            }
        }
    }
    //The Middle Path (leads to a maze).
    else if (first == 2) {
        printf("Player chooses the Middle path.\n");
        //You enter a labyrinth filled with dead ends. To find the exit, you must solve a puzzle:
        int puzzle;
        scanf("%d", &puzzle);
        //Puzzle: "I am a three-digit number. My second digit is four times bigger than the third digit, my first digit is three less than the second digit, and the sum of my digits is 15. What number am I?"
        if (puzzle == 582) {
            printf("Player solved the puzzle.\n");
            //you can proceed to the final room.
            int chest;
            scanf("%d", &chest);
            //Take the Golden Chest (contains a deadly trap and ends the game).
            if (chest == 1) {
                printf("All that glitters is not gold, Game Over!\n");
            }
            //Take the Silver Chest (an empty chest, player loses gaining nothing).
            else if (chest == 2) {
                printf("All your efforts were for nothing, Game Over!\n");
            }
            //Take the Bronze Chest (contains the ultimate treasure, player wins the game).
            else if (chest == 3) {
                printf("Congratulations!! You won the treasure.\n");
            }
        }
        //you trigger a trap and lose.
        else {
            printf("Foolish player, Game Over!\n");
        }
    }
    //The Right Path (leads to an underground vault).
    else if (first == 3) {
        printf("Player chooses the Right path.\n");
        //You find a locked vault guarded by a puzzle.
        int puzzle;
        scanf("%d", &puzzle);
        //Puzzle: "What number comes next in the sequence: 2, 6, 12, 20, __?"
        if (puzzle == 30) {
            printf("Player solved the puzzle.\n");
            //you can proceed to the final room.
            int chest;
            scanf("%d", &chest);
            //Take the Golden Chest (contains a deadly trap and ends the game).
            if (chest == 1) {
                printf("All that glitters is not gold, Game Over!\n");
            }
            //Take the Silver Chest (an empty chest, player loses gaining nothing).
            else if (chest == 2) {
                printf("All your efforts were for nothing, Game Over!\n");
            }
            //Take the Bronze Chest (contains the ultimate treasure, player wins the game).
            else if (chest == 3) {
                printf("Congratulations!! You won the treasure.\n");
            }
        }
        //triggers an alarm, you are caught (game over).
        else {
            printf("Foolish player, Game Over!\n");
        }
    }
    return 0;
}