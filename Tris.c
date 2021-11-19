#include <stdio.h>
#include <stdlib.h>

#define LINE printf(" ------------- \n")

int main() {

  int player;
  char places[] = {'1','2','3','4','5','6','7','8','9'};
  int choice, i;

  //main game loop
  while(1!=0){
    //draw board
    printf("\n");
    printf(" | %c | %c | %c | \n", places[0],places[1],places[2]);
    LINE;
    printf(" | %c | %c | %c | \n", places[3],places[4],places[5]);
    LINE;
    printf(" | %c | %c | %c | \n", places[6],places[7],places[8]);

    
    //Player choice    
    player= (i%2 +1);
    printf("\n Yooo Player%d get me a place: ", player);
    scanf("%d", &choice);

    if(player==1)  places[choice-1]= 'X';
    else places[choice-1]= 'O';

    i++;
  }
  return 0;
}
