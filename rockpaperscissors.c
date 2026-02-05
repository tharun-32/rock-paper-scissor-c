#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
    printf("CLI rock paper scissor game\n");
    printf("First one to score 2 points wins\n");
    //looping to create a point based game 
    //first to win 2 points
    int userpoints = 0;
    int computerpoints = 0;
    while ((computerpoints < 2) && (userpoints < 2)) {
        srand(time(NULL));
        char *computergenerated[] = {"rock", "paper", "scissor"};
        int randomindex = (rand() % 3 );
        char randomgenerated[50];
        strcpy(randomgenerated,computergenerated[randomindex]);
        char userselect[50];
        printf("Enter you choice: ");
        fgets(userselect,sizeof(userselect),stdin);
        userselect[strlen(userselect)-1] = '\0'; 
        printf("computergenerated : %s\n",randomgenerated);
        if (strcmp(randomgenerated,userselect) == 0 ) {
            printf("its draw\n");
        }
        else if ((strcmp(randomgenerated,"rock") == 0) && (strcmp(userselect,"paper") == 0))  {
            printf("you win\n"); 
            userpoints ++;
        }
        else if ((strcmp(randomgenerated,"rock") == 0) && (strcmp(userselect,"scissor") == 0))  {
            printf("you lost\n"); 
            computerpoints ++;
        }
        else if ((strcmp(randomgenerated,"paper") == 0) && (strcmp(userselect,"rock") == 0))  {
            printf("you lost\n"); 
            computerpoints ++;
        }
        else if ((strcmp(randomgenerated,"paper") == 0) && (strcmp(userselect,"scissor") == 0))  {
            printf("you won\n"); 
            userpoints ++;
        }
        else if ((strcmp(randomgenerated,"scissor") == 0) && (strcmp(userselect,"paper") == 0))  {
            printf("you lost\n"); 
            computerpoints ++;
        }
        else if ((strcmp(randomgenerated,"scissor") == 0) && (strcmp(userselect,"rock") == 0))  {
            printf("you won\n"); 
            userpoints ++;
        }
    }
    if (userpoints == 2){
        printf("you won againt computer\n");
    }
    else {
        printf("you lost againt computer\n");
    }
    return 0;
}
