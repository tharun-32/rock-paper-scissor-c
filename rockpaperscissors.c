#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(){
    srand(time(NULL));
    char *computergenerated[] = {"rock", "paper", "scissor"};
    int randomindex = (rand() % 3 );
    char randomgenerated[50];
    strcpy(randomgenerated,computergenerated[randomindex]);
    char userselect[50];
    printf("CLI rock paper scissor game\n");
    printf("Enter you choice: ");
    fgets(userselect,sizeof(userselect),stdin);
    userselect[strlen(userselect)-1] = '\0'; 
    printf("computergenerated : %s\n",randomgenerated);
    if (strcmp(randomgenerated,userselect) == 0 ) {
        printf("its draw\n");
    }
    else if ((strcmp(randomgenerated,"rock") == 0) && (strcmp(userselect,"paper") == 0))  {
       printf("you win\n"); 
    }
    else if ((strcmp(randomgenerated,"rock") == 0) && (strcmp(userselect,"scissor") == 0))  {
       printf("you lost\n"); 
    }
    else if ((strcmp(randomgenerated,"paper") == 0) && (strcmp(userselect,"rock") == 0))  {
       printf("you lost\n"); 
    }
    else if ((strcmp(randomgenerated,"paper") == 0) && (strcmp(userselect,"scissor") == 0))  {
       printf("you won\n"); 
    }
    else if ((strcmp(randomgenerated,"scissor") == 0) && (strcmp(userselect,"paper") == 0))  {
       printf("you lost\n"); 
    }
    else if ((strcmp(randomgenerated,"scissor") == 0) && (strcmp(userselect,"rock") == 0))  {
       printf("you won\n"); 
    }
    return 0;
}
