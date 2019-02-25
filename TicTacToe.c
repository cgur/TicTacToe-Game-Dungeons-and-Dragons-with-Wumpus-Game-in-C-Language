/* Explanations *************************************************************************************************************************************
|
| The Tic-Tac-Toe board has 9 cells. We will assume that the cell numbering is as follows:
|
|   c0 | c1 | c2
|   ------------
|   c3 | c4 | c5
|   ------------
|   c6 | c7 | c8
|
****************************************************************************************************************************************************/

/* integer dışını da tanımla.


*/


/* Includes ****************************************************************************************************************************************/

#include "Utilities.h"

/*-------------------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>   /* For standard input/output functions */

/***************************************************************************************************************************************************/




/* Definitions *************************************************************************************************************************************/

#define AUTHOR  ( "Ceren Gursoy" )  /* Author's name                                   */

#define EMPTY   ( ' '             )  /* Label for empty cells                           */
#define PLAYER1 ( 'X'             )  /* Label for player 1 and cells marked by player 1 */
#define PLAYER2 ( 'O'             )  /* Label for player 2 and cells marked by player 2 */

/***************************************************************************************************************************************************/




/* Type Definitions ********************************************************************************************************************************/

typedef unsigned char boolean ;

/***************************************************************************************************************************************************/




/* Global Variables ********************************************************************************************************************************/

char c0 , c1 , c2 , c3 , c4 , c5 , c6 , c7 , c8 ;  /* Cells of the Tic-Tac-Toe board */

/***************************************************************************************************************************************************/




/* Functions ***************************************************************************************************************************************/

/* Initializes the global variables. */

void initializeGlobalVariables ( void )
{
 
	c0=EMPTY , c1=' ' , c2=' ' , c3=' ' , c4=' ' , c5=' ' , c6=' ' , c7=' ' , c8=' ' ;

}

/*=================================================================================================================================================*/

/* Prints a banner including the author name. */

void printBanner ( void )
{
  printf(                                                                                   "\n"          ) ;
  printf( "*******************************************************************************" "\n"          ) ;
  printf( "* Tic-Tac-Toe                                                                 *" "\n"          ) ;
  printf( "* by %-72s *"                                                                    "\n" , AUTHOR ) ;
  printf( "*******************************************************************************" "\n"          ) ;
}

/*=================================================================================================================================================*/

/* Prints the current board configuration. */

void printBoard ( void )
{


	printf("\n    Cells                  Board\n.-----------.          .-----------.\n| 0 | 1 | 2 |          | %c | %c | %c |\n""|-----------|          |-----------|\n| 3 | 4 | 5 |          | %c | %c | %c |\n|-----------|          |-----------|\n| 6 | 7 | 8 |          | %c | %c | %c |\n'-----------'          '-----------'\n",c0,c1,c2,c3,c4,c5,c6,c7,c8);


}

/*=================================================================================================================================================*/

/* Gets the next move of "player", and marks it on the board.                     */
/* Loops (and asks again) if the input is not valid, or if the cell is not empty. */

void getNextMove ( char player )
{

	int cell;
	
	printf("Player %c, enter your next move (0-8) : ",player);
	
	scanf("%d",&cell);
	
	if((cell==0 && c0!=EMPTY) || (cell==1 && c1!=EMPTY) || (cell==2 && c2!=EMPTY) || (cell==3 && c3!=EMPTY) || (cell==4 && c4!=EMPTY) || (cell==5 && c5!=EMPTY) || (cell==6 && c6!=EMPTY) || (cell==7 && c7!=EMPTY) || (cell==8 && c8!=EMPTY)){while((cell==0 && c0!=EMPTY) || (cell==1 && c1!=EMPTY) || (cell==2 && c2!=EMPTY) || (cell==3 && c3!=EMPTY) || (cell==4 && c4!=EMPTY) || (cell==5 && c5!=EMPTY) || (cell==6 && c6!=EMPTY) || (cell==7 && c7!=EMPTY) || (cell==8 && c8!=EMPTY)){
	
	printf("Cell is not empty! Please try again.\n");
	clearInputBuffer();
	printf("Player %c, enter your next move (0-8) : ",player);
	scanf("%d",&cell);
	
	if(cell<0 || cell>8){
	while(cell<0 || cell>8){
	
	printf("Incorrect input! Please try again.\n");
	clearInputBuffer();
	printf("Player %c, enter your next move (0-8) : ",player);
	
	scanf("%d",&cell);}}}
	
	}
	
	
	if(cell<0 || cell>8){
	while(cell<0 || cell>8){
	
	printf("Incorrect input! Please try again.\n");
	clearInputBuffer();
	printf("Player %c, enter your next move (0-8) : ",player);
	
	scanf("%d",&cell);
	
	if((cell==0 && c0!=EMPTY) || (cell==1 && c1!=EMPTY) || (cell==2 && c2!=EMPTY) || (cell==3 && c3!=EMPTY) || (cell==4 && c4!=EMPTY) || (cell==5 && c5!=EMPTY) || (cell==6 && c6!=EMPTY) || (cell==7 && c7!=EMPTY) || (cell==8 && c8!=EMPTY)){while((cell==0 && c0!=' ') || (cell==1 && c1!=' ') || (cell==2 && c2!=' ') || (cell==3 && c3!=' ') || (cell==4 && c4!=' ') || (cell==5 && c5!=' ') || (cell==6 && c6!=' ') || (cell==7 && c7!=' ') || (cell==8 && c8!=' ')){
	
	printf("Cell is not empty! Please try again.\n");
	clearInputBuffer();
	printf("Player %c, enter your next move (0-8) : ",player);
	scanf("%d",&cell);}}}
	
	}
	
	
	if(0<=cell && cell<=8){
	
	if (cell==0){(c0)=player;}
	else if (cell==1){(c1)=player;}
	else if (cell==2){(c2)=player;}
	else if (cell==3){(c3)=player;}
	else if (cell==4){(c4)=player;}
	else if (cell==5){(c5)=player;}
	else if (cell==6){(c6)=player;}
	else if (cell==7){(c7)=player;}
	else if (cell==8){(c8)=player;}
	
	}



}

/*=================================================================================================================================================*/

/* Checks if one of the players wins the game, or if the board is full and the game ended with a draw. Prints how the game ended. */
/* Returns TRUE if the game ended, otherwise, does not print anything and just returns FALSE.                                     */

boolean checkAndPrintGameResult ( void )
{
	if(c0=='X' && c3=='X' && c6=='X'){
		printf("Player X WINS (left column)!");
		return TRUE;
		}
	
	else if(c1=='X' && c4=='X' && c7=='X'){
		
		printf("Player X WINS (middle column)!");
		return TRUE;
		}
	
	else if(c2=='X' && c5=='X' && c8=='X'){
		
		printf("Player X WINS (right column)!");
		return TRUE;
		} 

	else if(c0=='X' && c1=='X' && c2=='X'){
		printf("Player X WINS (top row)!");
		return TRUE;
		}
	
	else if(c3=='X' && c4=='X' && c5=='X'){
		printf("Player X WINS (middle row)!");
		return TRUE;
		} 

	else if(c6=='X' && c7=='X' && c8=='X'){
		printf("Player X WINS (bottom row)!");
		return TRUE;
		}
	
	else if(c0=='X' && c4=='X' && c8=='X'){
		printf("Player X WINS (primary diagonal)!");
		return TRUE;
		}

	else if(c2=='X' && c4=='X' && c6=='X'){
		printf("Player X WINS (secondary diagonal)!");
		return TRUE;
		}

	else if(c0=='O' && c3=='O' && c6=='O'){
		printf("Player O WINS (left column)!");
		return TRUE;
		}
	
	else if(c1=='O' && c4=='O' && c7=='O'){
		printf("Player O WINS (middle column)!");
		return TRUE;
		}
	
	else if(c2=='O' && c5=='O' && c8=='O'){
		printf("Player O WINS (right column)!");
		return TRUE;
		} 

	else if(c0=='O' && c1=='O' && c2=='O'){
		printf("Player O WINS (top row)!");
		return TRUE;
		}
	
	else if(c3=='O' && c4=='O' && c5=='O'){
		printf("Player O WINS (middle row)!");
		return TRUE;
		} 

	else if(c6=='O' && c7=='O' && c8=='O'){
		printf("Player O WINS (bottom row)!");
		return TRUE;
		}
	
	else if(c0=='O' && c4=='O' && c8=='O'){
		printf("Player O WINS (primary diagonal)!");
		return TRUE;
		}

	else if(c2=='O' && c4=='O' && c6=='O'){
		printf("Player O WINS (secondary diagonal)!");
		return TRUE;
		}

	else if(c0!=' ' && c1!=' ' && c2!=' ' && c3!=' ' && c4!=' ' && c5!=' ' && c6!=' ' && c7!=' ' && c8!=' '){
		printf("DRAW!");
		return TRUE;
		}

	else return FALSE;

}

/***************************************************************************************************************************************************/




/* Main Function ***********************************************************************************************************************************/

/* Initializes the global variables.                                                                                                          */
/* Prints banner.                                                                                                                             */
/* Randomly chooses one of the players to start first.                                                                                        */
/* Asks each player to make a move in turn until the game finishes (prints the board configuration each time before a player makes her move). */
/* Prints the game result.                                                                                                                    */
/* Prints a goodbye message.                                                                                                                  */
/* Prints the number of random numbers that were generated during the game play.                                                              */

int main ( void )
{
  char currentPlayer = ( ( randomIntegerMinMaxUnBiased( 0 , 1 ) == 0 ) ? PLAYER1 : PLAYER2 ) ;

  initializeGlobalVariables() ;
  printBanner              () ;
  printBoard               () ;

  do
  {
    getNextMove( currentPlayer ) ;
    printBoard (               ) ;

    if   ( currentPlayer == PLAYER1 )  { currentPlayer = PLAYER2 ; }
    else                               { currentPlayer = PLAYER1 ; }
  }
  while ( checkAndPrintGameResult() == FALSE ) ;

  printf( "\nGood game. Have a nice day!\n" ) ;

  printf( "\n%d random numbers were generated during the game play.\n\n" , numberOfRandomNumbersGenerated ) ;

  return 0 ;
}

/***************************************************************************************************************************************************/
