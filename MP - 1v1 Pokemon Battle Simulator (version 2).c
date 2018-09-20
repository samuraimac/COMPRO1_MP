/*	Filename: 1v1 Pokemon Battle Simulator
 	Programmed by: Johanna Koon Gan Uy Lim
 	Last Modified: November 18, 2017
 	Version: 1 (without status checkers)
 	Function/Purpose/Use: This program simulates a pokemon battle.  	
*/

#include <stdio.h>
#include <stdlib.h>

/*
This function will read the chosen pokemon's number and output the pokemon's name. 
Parameters: the chosen pokemon's number and the trainer (player 1 : 1; player 2 : 2).
*/
void choosePokemon(int nChoice, int nTrainer){
	int nOrginalHP;
	switch(nChoice)
		{
			case 1 : printf("Player %d has selected Entei!\n\n", nTrainer);
					 nOrginalHP = 150;
					 break;
			case 2 : printf("Player %d has selected Milotic!\n\n", nTrainer);
					 nOrginalHP = 200;
					 break;
			case 3 : printf("Player %d has selected Torterra!\n\n", nTrainer);
					 nOrginalHP = 220;
					 break;
			case 4 : printf("Player %d has selected Pikachu!\n\n", nTrainer);
					 nOrginalHP = 120;
					 break;
			case 5 : printf("Player %d has selected Groudon!\n\n", nTrainer);
					 nOrginalHP = 150;
					 break;
			case 6 : printf("Player %d has selected Lapras!\n\n", nTrainer);
					 nOrginalHP = 190;
					 break;
			case 7 : printf("Player %d has selected Stunfisk!\n\n", nTrainer);
					 nOrginalHP = 130;
					 break;
		}
	}

/*
this function assigns the HPs' values by reading the number choices of the players
parameter: chosen pokemon's number 
*/
int assignOriginalHP(int nChoice){
	int nOriginalHP;
	switch(nChoice){
		case 1 : nOriginalHP = 150;
				 return nOriginalHP;
				 break;
		case 2 : nOriginalHP = 200;
			     return nOriginalHP;
				 break;
		case 3 : nOriginalHP = 220;
			     return nOriginalHP;
				 break;
		case 4 : nOriginalHP = 120;
			     return nOriginalHP;
				 break;
		case 5 : nOriginalHP = 150;
			     return nOriginalHP;
				 break;
		case 6 : nOriginalHP = 190;
			     return nOriginalHP;
				 break;
		case 7 : nOriginalHP = 130;
			     return nOriginalHP;
				 break;
	}
}

/*
this function displays the HP of the pokemons
parameters: assigned numbers of the pokemons, its current health, and its full health
*/
void displayHPStat(int nPokemon, int nCurrentHP, int nHPdenominator) 
{
	switch(nPokemon)
	{
		case 1: printf("Entei: %d/%d HP\n", nCurrentHP, nHPdenominator);
				break;
		case 2: printf("Milotic: %d/%d HP\n", nCurrentHP, nHPdenominator);
				break;		
		case 3: printf("Torterra: %d/%d HP\n", nCurrentHP, nHPdenominator);
				break;		
		case 4: printf("Pikachu: %d/%d HP\n", nCurrentHP, nHPdenominator);
				break;		
		case 5: printf("Groudon: %d/%d HP\n", nCurrentHP, nHPdenominator);
				break;		
		case 6: printf("Lapras: %d/%d HP\n", nCurrentHP, nHPdenominator);
				break;		
		case 7: printf("Stunfisk: %d/%d HP\n", nCurrentHP, nHPdenominator);
				break;

	}
}

/*
this function assigns the unique move 1's BPs by reading the chosen pokemon's number
parameter: chosen pokemon's number 
*/
int assignUniqueMove1BP(int nChoice){
	int nMove1BP;
	if(nChoice==1){
		nMove1BP = 30;
		return nMove1BP;
	}
	if(nChoice==2||nChoice==3||nChoice==6){
		nMove1BP = 20;
		return nMove1BP;
	}
	if(nChoice==4||nChoice==7){
		nMove1BP = 10;
		return nMove1BP;
	}
	if(nChoice==5){
		nMove1BP = 40;
		return nMove1BP;
	}
}

/*
this function assigns the unique move 2's BPs by reading the chosen pokemon's number
parameter: chosen pokemon's number 
*/
int assignUniqueMove2BP(int nChoice){
	int nMove2BP;
	if(nChoice==1||nChoice==5||nChoice==7){
		nMove2BP = 30;
		return nMove2BP;
	}
	if(nChoice==2||nChoice==4||nChoice==6){
		nMove2BP = 20;
		return nMove2BP;
	}
	if(nChoice==3){
		nMove2BP = 40;
		return nMove2BP;
	}
}

/*
this function assigns the unique move 1's PP by reading the chosen pokemon's number
parameter: chosen pokemon's number 
*/
int assignUniqueMove1PP(int nChoice){
	int nMove1PPMax;
	if(nChoice==1||nChoice==5){
		nMove1PPMax = 5;
		return nMove1PPMax;
	}
	if(nChoice==2||nChoice==3||nChoice==6){
		nMove1PPMax = 7;
		return nMove1PPMax;
	}
	if(nChoice==4||nChoice==7){
		nMove1PPMax = 10;
		return nMove1PPMax;
	}
}

/*
this function assigns the unique move 2's PP by reading the chosen pokemon's number
parameter: chosen pokemon's number 
*/
int assignUniqueMove2PP(int nChoice){
	int nMove2PPMax;
	if(nChoice==1||nChoice==3||nChoice==5||nChoice==7){
		nMove2PPMax = 5;
		return nMove2PPMax;
	}
	if(nChoice==2||nChoice==4||nChoice==6){
		nMove2PPMax = 7;
		return nMove2PPMax;
	}
}

/*
FOR POKEMON #1
this function deals with the fire blast move 
it determines the magnitude of damage done by the first pokemon
it reads the first and second pokemons' numbers and determines the damage compatible to the pair
it also takes unique move 1 and 2 's BP to calculate
*/
 int fireBlastA(int nPokemonA, int nPokemonB, int nBPA1, int nBPA2){
	int nDamageByA;
	if(nPokemonA==1){
			if((nPokemonA==1)&&((nPokemonB==3)||(nPokemonB==6))){
				int nDamageByA = nBPA1 * 1.5 * 2 * 1/2;
				return nDamageByA;
			}if((nPokemonA==1)&&((nPokemonB==1)||(nPokemonB==2)||(nPokemonB==5))){
				int nDamageByA = nBPA1 * 1.5 *1/2;							
				return nDamageByA;
			}if((nPokemonA==1)&&(nPokemonB==7)){
				int nDamageByA = nBPA1 * 1.5 * 1/2 * 1/2;
				return nDamageByA;
			}if((nPokemonA==1)&&(nPokemonB==4)){
				int nDamageByA = nBPA1 * 1.5 * 1/2;
				return nDamageByA;
			}return nDamageByA;
	}
	if(nPokemonA==5){
			if((nPokemonA==5)&&((nPokemonB==3)||(nPokemonB==6))){
				int nDamageByA = nBPA2 * 2 * 1/2;
				return nDamageByA;
			}if((nPokemonA==5)&&((nPokemonB==1)||(nPokemonB==2)||(nPokemonB==5))){
				int nDamageByA = nBPA2 * 1/2;
				return nDamageByA;
			}if((nPokemonA==5)&&(nPokemonB==7)){
				int nDamageByA = nBPA2 * 1/2 * 1/2;
				return nDamageByA;
			}if((nPokemonA==5)&&(nPokemonB==4)){
				int nDamageByA = nBPA2 * 1;
				return nDamageByA;
			}
	}
}

/*
FOR POKEMON #2
this function deals with the fire blast move 
it determines the magnitude of damage done by the second pokemon
it reads the first and second pokemons' numbers and determines the damage compatible to the pair
it also takes unique move 1 and 2 's BP to calculate
*/
int fireBlastB(int nPokemonA, int nPokemonB, int nBPB1, int nBPB2)
{
	int nDamageByB;
	if(nPokemonB==1){
			if((nPokemonB==1)&&((nPokemonA==3)||(nPokemonA==6))){
				int nDamageByB = nBPB1 * 1.5 * 2 * 1/2;
				return nDamageByB;	
			}if(nPokemonB==1&&(nPokemonA==1||nPokemonA==2||nPokemonA==5)){
				int nDamageByB = nBPB1 * 1.5 *1/2;				
				return nDamageByB;
			}if(nPokemonB==1&&nPokemonA==7){
				int nDamageByB = nBPB1 * 1.5 * 1/2 * 1/2;
				return nDamageByB;
			}if(nPokemonB==1&&nPokemonA==4){
				int nDamageByB = nBPB1 * 1.5 * 1/2;
				return nDamageByB;
			}
	}
	if (nPokemonB==5){
			if(nPokemonB==5&&(nPokemonA==3||nPokemonA==6)){
				int nDamageByB = nBPB2 * 2 * 1/2;
				return nDamageByB;
			}if(nPokemonB==5&&(nPokemonA==1||nPokemonA==2||nPokemonA==5)){
				int nDamageByB = nBPB2 * 1/2;
				return nDamageByB;
			}if(nPokemonB==5&&nPokemonA==7){
				int nDamageByB = nBPB2 * 1/2 * 1/2;
				return nDamageByB;
			}if(nPokemonB==5&&nPokemonA==4){
				int nDamageByB = nBPB2 * 1;
				return nDamageByB;
			}
		}
}	

/*
this function deals with the scald move 
it determines the magnitude of damage done by the first pokemon
*/
int scaldA(int nPokemonA, int nPokemonB, int nBPA1, int nBPA2)
{
	int nDamageByA;
	if(nPokemonA==2){
			if((nPokemonA==2)&&(nPokemonB==1||nPokemonB==5)){
				int nDamageByA = nBPA1 * 1.5 * 2;
				return nDamageByA;
			}if((nPokemonA==2)&&(nPokemonB==7)){
				int nDamageByA = nBPA1 * 1.5 * 2 * 1;
				return nDamageByA;
			}if((nPokemonA==2)&&(nPokemonB==4)){
				int nDamageByA = nBPA1 * 1.5 * 1;	
				return nDamageByA;
			}if((nPokemonA==2)&&(nPokemonB==3)){
				int nDamageByA = nBPA1 * 1.5 * 1/2 * 2;
				return nDamageByA;
			}if((nPokemonA==2)&&(nPokemonB==2)){
				int nDamageByA = nBPA1 * 1.5 * 1/2;
				return nDamageByA;
			}if((nPokemonA==2)&&(nPokemonB==6)){
				int nDamageByA = nBPA1 * 1.5 * 1 * 1/2;
				return nDamageByA;
	 	   }
	}
	if(nPokemonA==6){
			if((nPokemonA==6)&&(nPokemonB==1||nPokemonB==5)){
				int nDamageByA = nBPA2 * 1.5 * 2;	
				return nDamageByA;
			}if((nPokemonA==6)&&(nPokemonB==7)){
				int nDamageByA = nBPA2 * 1.5 * 2 * 1;
				return nDamageByA;
			}if((nPokemonA==6)&&(nPokemonB==4)){
				int nDamageByA = nBPA2 * 1.5 * 1;
				return nDamageByA;
			}if((nPokemonA==6)&&(nPokemonB==3)){
				int nDamageByA = nBPA2 * 1.5 * 1/2 * 2;
				return nDamageByA;
			}if((nPokemonA==6)&&(nPokemonB==2)){
				int nDamageByA = nBPA2 * 1.5 * 1/2;
				return nDamageByA;
			}if((nPokemonA==6)&&(nPokemonB==6)){
				int nDamageByA = nBPA2 * 1.5 * 1 * 1/2;
				return nDamageByA;
	    	}
	}	
}

/*
this function deals with the scald move
it determines the magnitude of damage done by the second pokemon
*/
int scaldB(int nPokemonA, int nPokemonB, int nBPB1, int nBPB2)
{
	int nDamageByB;
	if(nPokemonB==2){
			if((nPokemonB==2)&&((nPokemonA==1)||(nPokemonA==5))){
				int nDamageByB = nBPB1 * 1.5 * 2;				
				return nDamageByB;
			}if((nPokemonB==2)&&(nPokemonA==7)){
				int nDamageByB = nBPB1 * 1.5 * 2 * 1;
				return nDamageByB;
			}if((nPokemonB==2)&&(nPokemonA==4)){
				int nDamageByB = nBPB1 * 1.5 * 1;	
				return nDamageByB;
			}if((nPokemonB==2)&&(nPokemonA==3)){
				int nDamageByB = nBPB1 * 1.5 * 1/2 * 2;
				return nDamageByB;
			}if((nPokemonB==2)&&(nPokemonA==2)){
				int nDamageByA = nBPB1 * 1.5 * 1/2;
				return nDamageByA;
			}if((nPokemonB==2)&&(nPokemonA==6)){
				int nDamageByB = nBPB1 * 1.5 * 1 * 1/2;
				return nDamageByB;
			}
	}
	if(nPokemonB==6){
			if((nPokemonB==6)&&(nPokemonA==1||nPokemonA==5)){
				int nDamageByB = nBPB2 * 1.5 * 2;	
				return nDamageByB;
			}if((nPokemonB==6)&&(nPokemonA==7)){
				int nDamageByB = nBPB2 * 1.5 * 2 * 1;
				return nDamageByB;
			}if((nPokemonB==6)&&(nPokemonA==4)){
				int nDamageByB = nBPB2 * 1.5 * 1;
				return nDamageByB;
			}if((nPokemonB==6)&&(nPokemonA==3)){
				int nDamageByB = nBPB2 * 1.5 * 1/2 * 2;
				return nDamageByB;
			}if((nPokemonB==6)&&(nPokemonA==2)){
				int nDamageByB = nBPB2 * 1.5 * 1/2;
				return nDamageByB;
			}if((nPokemonB==6)&&(nPokemonA==6)){
				int nDamageByB = nBPB2 * 1.5 * 1 * 1/2;
				return nDamageByB;
			}
	}
}

/*
this function deals with the Dig move
it determines the magnitude of damage done by the first pokemon
*/
int digA(int nPokemonA, int nPokemonB, int nBPA1,int nBPA2)
{
	int nDamageByA;
	if (nPokemonA==3){
			if(nPokemonA==3&&(nPokemonB==1||nPokemonB==4)){
				int nDamageByA = nBPA1 * 1.5 * 2;
				return nDamageByA;
			}if(nPokemonA==3&&(nPokemonB==7)){
				int nDamageByA = nBPA1 * 1.5 * 1 * 2;
				return nDamageByA;
			}if(nPokemonA==3&&(nPokemonB==2||nPokemonB==3)){
				int nDamageByA = nBPA1 * 1.5 * 1/2;
				return nDamageByA;
			}if(nPokemonA==3&&(nPokemonB==5)){
				int nDamageByA = nBPA1 * 1.5 * 1;
				return nDamageByA;
			}if(nPokemonA==3&&(nPokemonB==6)){		
				int nDamageByA = nBPA1 * 1.5 * 1/2 * 1/2;
				return nDamageByA;
			}
	}	
	if (nPokemonA==4){	
			if(nPokemonA==4&&(nPokemonB==1||nPokemonB==4)){
				int nDamageByA = nBPA2 * 2;
				return nDamageByA;
			}if(nPokemonA==4&&(nPokemonB==7)){
				int nDamageByA = nBPA2 * 1 * 2;
				return nDamageByA;
			}if(nPokemonA==4&&(nPokemonB==2||nPokemonB==3)){
				int nDamageByA = nBPA2 * 1/2;
				return nDamageByA;
			}if(nPokemonA==4&&(nPokemonB==5)){
				int nDamageByB = nBPA2 * 1;
				return nDamageByB;
			}if(nPokemonA==4&&(nPokemonB==6)){
				int nDamageByB = nBPA2 * 1/2 * 1/2;
				return nDamageByA;
			}
	}
}

/*
this function deals with the Dig move
it determines the magnitude of damage done by the second pokemon
*/
int digB(int nPokemonA, int nPokemonB, int nBPB1,int nBPB2)
{
	int nDamageByB;
	if (nPokemonB==3){
			if(nPokemonB==3&&(nPokemonA==1||nPokemonA==4)){
				int nDamageByB = nBPB1 * 1.5 * 2;
				return nDamageByB;
			}if(nPokemonB==3&&(nPokemonA==7)){
				int nDamageByB = nBPB1 * 1.5 * 1 * 2;
				return nDamageByB;
			}if(nPokemonB==3&&(nPokemonA==2||nPokemonA==3)){
				int nDamageByB = nBPB1 * 1.5 * 1/2;
				return nDamageByB;
			}if(nPokemonB==3&&(nPokemonA==5)){
				int nDamageByB = nBPB1 * 1.5 * 1;
				return nDamageByB;
			}if(nPokemonB==3&&(nPokemonA==6)){		
				int nDamageByB = nBPB1 * 1.5 * 1/2 * 1/2;
				return nDamageByB;
			}
	}	
	if (nPokemonB==4){
			if(nPokemonB==4&&(nPokemonA==1||nPokemonA==4)){
				int nDamageByB = nBPB2 * 2;
				return nDamageByB;
			}if(nPokemonB==4&&(nPokemonA==7)){
				int nDamageByB = nBPB2 * 1 * 2;
				return nDamageByB;
			}if(nPokemonB==4&&(nPokemonA==2||nPokemonA==3)){
				int nDamageByB = nBPB2 * 1/2;
					return nDamageByB;	
			}if(nPokemonB==4&&(nPokemonA==5)){
				int nDamageByB = nBPB2 * 1;
				return nDamageByB;
			}if(nPokemonB==4&&(nPokemonA==6)){
				int nDamageByB = nBPB2 * 1/2 * 1/2;
				return nDamageByB;
			}	
	}
}	

/*
this function deals with the thunderbolt move
it determines the magnitude of damage done by the first pokemon
only pikachu can do this move
*/
int thunderboltA(int nPokemonA, int nPokemonB,int nBPA1) //only one BP because thunderbolt is only found in the unique moves 1 set
{
	int nDamageByA;
	if (nPokemonA==4){
			if(nPokemonA==4&&nPokemonB==2){
				int nDamageByA = nBPA1 * 1.5 * 2;
				return nDamageByA;
			}if(nPokemonA==4&&nPokemonB==6){
				int nDamageByA = nBPA1 * 1.5 * 1 * 2;
				return nDamageByA;
			}if(nPokemonA==4&&(nPokemonB==1||nPokemonB==4)){
				int nDamageByA = nBPA1 * 1.5 * 1;
				return nDamageByA;
			}if(nPokemonA==4&&(nPokemonB==3)){
				int nDamageByA = nBPA1 * 1.5 * 1/2 * 0;
				return nDamageByA;
			}if(nPokemonA==4&&(nPokemonB==5)){
				int nDamageByA = nBPA1 * 1.5 *0;
				return nDamageByA;
			}if(nPokemonA==4&&(nPokemonB==7)){
				int nDamageByA = nBPA1 * 1.5 * 0 * 1;
				return nDamageByA;
			}
	}
}

/*
this function deals with the thunderbolt move
it determines the magnitude of damage done by the second pokemon
only one BP because thunderbolt is only found in the unique moves 1 set
only pikachu can do this move
*/
int thunderboltB(int nPokemonA, int nPokemonB, int nBPB1)
{
	int nDamageByB;
	if (nPokemonB==4){
			if(nPokemonB==4&&nPokemonA==2){
				int nDamageByB = nBPB1 * 1.5 * 2;
				return nDamageByB;
			}if(nPokemonB==4&&nPokemonA==6){
				int nDamageByB = nBPB1 * 1.5 * 1 * 2;
				return nDamageByB;
			}if(nPokemonB==4&&(nPokemonA==1||nPokemonA==4)){
				int nDamageByB = nBPB1 * 1.5 * 1;
				return nDamageByB;
			}if(nPokemonB==4&&(nPokemonA==3)){
				int nDamageByB = nBPB1 * 1.5 * 1/2 * 0;
				return nDamageByB;
			}if(nPokemonB==4&&(nPokemonA==5)){
				int nDamageByB = nBPB1 * 1.5 *0;
				return nDamageByB;
			}if(nPokemonB==4&&(nPokemonA==7)){
				int nDamageByB = nBPB1 * 1.5 * 0 * 1;
				return nDamageByB;
			}
	}
}

/*
this function deals with the fissure move
it determines the magnitude of damage done by the first pokemon
only groudon can do this move
*/
int fissureA(int nPokemonA, int nPokemonB, int nBPA1) // fissure is only found in unique moves set 1
{
	int nDamageByA;
	if (nPokemonA==5){
			if(nPokemonA==5&&(nPokemonB==1||nPokemonB==4)){
				int nDamageByA = nBPA1 * 1.5 * 2;
				return nDamageByA;
			}if(nPokemonA==5&&nPokemonB==7){
				int nDamageByA = nBPA1 * 1.5 * 1 * 2;
				return nDamageByA;
			}if(nPokemonA==5&&nPokemonB==5){
				int nDamageByA = nBPA1 * 1.5 * 1;
				return nDamageByA;
			}if(nPokemonA==5&&nPokemonB==2){
				int nDamageByA = nBPA1 * 1.5 * 1/2;
				return nDamageByA;
			}if(nPokemonA==5&&nPokemonB==3){
				int nDamageByA = nBPA1 * 1.5 * 1/2 * 1;
				return nDamageByA;
			}if(nPokemonA==5&&nPokemonB==6){
				int nDamageByA = nBPA1 * 1.5 * 1/2 * 1/2;
				return nDamageByA;
			}
	}	
}

/*
this function deals with the fissure move
it determines the magnitude of damage done by the second pokemon
only groudon can do this move
*/
int fissureB(int nPokemonA, int nPokemonB, int nBPB1)
{
	int nDamageByB;
	if (nPokemonB==5){
			if(nPokemonB==5&&(nPokemonA==1||nPokemonA==4)){
				int nDamageByB = nBPB1 * 1.5 * 2;
				return nDamageByB;
			}if(nPokemonB==5&&nPokemonA==7){
				int nDamageByB = nBPB1 * 1.5 * 1 * 2;
				return nDamageByB;
			}if(nPokemonB==5&&nPokemonA==5){
				int nDamageByB = nBPB1 * 1.5 * 1;
				return nDamageByB;
			}if(nPokemonB==5&&nPokemonA==2){
				int nDamageByB = nBPB1 * 1.5 * 1/2;
				return nDamageByB;
			}if(nPokemonB==5&&nPokemonA==3){
				int nDamageByB = nBPB1 * 1.5 * 1/2 * 1;
				return nDamageByB;
			}if(nPokemonB==5&&nPokemonA==6){
				int nDamageByB = nBPB1 * 1.5 * 1/2 * 1/2;
				return nDamageByB;
			}
	}
}

/*
this function deals with the ice beam move
it determines the magnitude of damage done by the first pokemon
*/
int iceBeamA(int nPokemonA, int nPokemonB, int nBPA1, int nBPA2)
{
	int nDamageByA;
	if (nPokemonA==6){
			if(nPokemonA==6&&(nPokemonB==2||nPokemonB==5)){
				int nDamageByA = nBPA1 * 1.5 * 2;
				return nDamageByA;
			}if(nPokemonA==6&&nPokemonB==1){
				int nDamageByA = nBPA1 * 1.5 * 1/2;
				return nDamageByA;
			}if(nPokemonA==6&&nPokemonB==3){
				int nDamageByA = nBPA1 * 1.5 * 2 * 2;
				return nDamageByA;
			}if(nPokemonA==6&&nPokemonB==4){
				int nDamageByA = nBPA1 * 1.5 * 1;
				return nDamageByA;
			}if(nPokemonA==6&&(nPokemonB==6||nPokemonB==7)){
				int nDamageByA = nBPA1 * 1.5 * 1 * 2;
				return nDamageByA;
			}
	}
	if (nPokemonA==2){
			if(nPokemonA==2&&(nPokemonB==2||nPokemonB==5)){
				int nDamageByA = nBPA2 * 2;
				return nDamageByA;
			}if(nPokemonA==2&&nPokemonB==1){
				int nDamageByA = nBPA2 * 1/2;
				return nDamageByA;
			}if(nPokemonA==2&&nPokemonB==3){
				int nDamageByA = nBPA2 * 2 * 2;
				return nDamageByA;
			}if(nPokemonA==2&&nPokemonB==4){
				int nDamageByA = nBPA2 * 1;
				return nDamageByA;
			}if(nPokemonA==2&&(nPokemonB==6||nPokemonB==7)){
				int nDamageByA = nBPA2 * 1 * 2;
				return nDamageByA;
			}
	}
}
	
/*
this function deals with the ice beam move
it determines the magnitude of damage done by the second pokemon
*/
int iceBeamB(int nPokemonA, int nPokemonB, int nBPB1,int nBPB2)
{
	int nDamageByB;
	if (nPokemonB==6){
			if(nPokemonB==6&&(nPokemonA==2||nPokemonA==5)){
				int nDamageByB = nBPB1 * 1.5 * 2;
				return nDamageByB;
			}if(nPokemonB==6&&nPokemonA==1){
				int nDamageByB = nBPB1 * 1.5 * 1/2;
				return nDamageByB;
			}if(nPokemonB==6&&nPokemonA==3){
				int nDamageByB = nBPB1 * 1.5 * 2 * 2;
				return nDamageByB;
			}if(nPokemonB==6&&nPokemonA==4){
				int nDamageByB = nBPB1 * 1.5 * 1;
				return nDamageByB;
			}if(nPokemonB==6&&(nPokemonA==6||nPokemonA==7)){
				int nDamageByB = nBPB1 * 1.5 * 1 * 2;
				return nDamageByB;
			}
	}
	if (nPokemonB==2){
			if(nPokemonB==2&&(nPokemonA==2||nPokemonA==5)){
				int nDamageByB = nBPB2 * 2;
				return nDamageByB;
			}if(nPokemonB==2&&nPokemonA==1){
				int nDamageByB = nBPB2 * 1/2;
				return nDamageByB;
			}if(nPokemonB==2&&nPokemonA==3){
				int nDamageByB = nBPB2 * 2 * 2;
				return nDamageByB;
			}if(nPokemonB==2&&nPokemonA==4){
				int nDamageByB = nBPB2 * 1;
				return nDamageByB;
			}if(nPokemonB==2&&(nPokemonA==6||nPokemonA==7)){
				int nDamageByB = nBPB2 * 1 * 2;
				return nDamageByB;
			}
	}
}

/*
this function deals with the water gun move
it determines the magnitude of damage done by the first pokemon
only stunfisk can do this move
*/
int waterGunA(int nPokemonA, int nPokemonB, int nBPA1)
{
	int nDamageByA;
	if (nPokemonA==7){
			if(nPokemonA==7&&(nPokemonB==1||nPokemonB==5)){
				int nDamageByA = nBPA1 * 2;
				return nDamageByA;
			}if(nPokemonA==7&&(nPokemonB==1||nPokemonB==5)){
				int nDamageByA = nBPA1 * 2;
				return nDamageByA;
			}if(nPokemonA==7&&nPokemonB==2){
				int nDamageByA = nBPA1 * 1/2;
				return nDamageByA;
			}if(nPokemonA==7&&nPokemonB==3){
				int nDamageByA = nBPA1 * 1/2 * 2;
				return nDamageByA;
			}if(nPokemonA==7&&nPokemonB==4){
				int nDamageByA = nBPA1 * 1;
				return nDamageByA;
			}if(nPokemonA==7&&nPokemonB==6){
				int nDamageByA = nBPA1 * 1 * 1/2;
				return nDamageByA;
			}if(nPokemonA==7&&nPokemonB==7){
				int nDamageByA = nBPA1 * 2 * 1;
				return nDamageByA;
			}
	}
}

/*
this function deals with the water gun move
it determines the magnitude of damage done by the second pokemon
only stunfisk can do this move
*/
int waterGunB(int nPokemonA, int nPokemonB, int nBPB1)
{
	int nDamageByB;
	if (nPokemonB==7){
			if(nPokemonB==7&&(nPokemonA==1||nPokemonA==5)){
				int nDamageByB = nBPB1 * 2;
				return nDamageByB;
			}if(nPokemonB==7&&(nPokemonA==1||nPokemonA==5)){
				int nDamageByB = nBPB1 * 2;
				return nDamageByB;
			}if(nPokemonB==7&&nPokemonA==2){
				int nDamageByB = nBPB1 * 1/2;
				return nDamageByB;
			}if(nPokemonB==7&&nPokemonA==3){
				int nDamageByB = nBPB1 * 1/2 * 2;
				return nDamageByB;
			}if(nPokemonB==7&&nPokemonA==4){
				int nDamageByB = nBPB1 * 1;
				return nDamageByB;
			}if(nPokemonB==7&&nPokemonA==6){
				int nDamageByB = nBPB1 * 1 * 1/2;
				return nDamageByB;
			}if(nPokemonB==7&&nPokemonA==7){
				int nDamageByB = nBPB1 * 2 * 1;
				return nDamageByB;
			}		
	}			
}

/*
this function deals with the Earthquake move
it determines the magnitude of damage done by the first pokemon
*/ 
int earthquakeA(int nPokemonA, int nPokemonB, int nBPA2)
{
	int nDamageByA;
	if (nPokemonA==7){
			if(nPokemonA==7&&(nPokemonB==1||nPokemonB==4)){
				int nDamageByA = nBPA2 * 1.5 * 2;
				return nDamageByA;
			}if(nPokemonA==7&&nPokemonB==5){
				int nDamageByA = nBPA2 * 1.5 * 1;
				return nDamageByA;
			}if(nPokemonA==7&&nPokemonB==2){
				int nDamageByA = nBPA2 * 1.5 * 1/2;
				return nDamageByA;
			}if(nPokemonA==7&&nPokemonB==3){
				int nDamageByA = nBPA2 * 1.5 * 1/2 * 1;
				return nDamageByA;
			}if(nPokemonA==7&&nPokemonB==6){
				int nDamageByA = nBPA2 * 1.5 * 1/2 * 1/2;
				return nDamageByA;
			}if(nPokemonA==7&&nPokemonB==7){
				int nDamageByA = nBPA2 * 1.5 * 1 * 2;
				return nDamageByA;
			}
	}
	if (nPokemonA==1){
			if(nPokemonA==1&&(nPokemonB==1||nPokemonB==4)){
				int nDamageByA = nBPA2 * 2;
				return nDamageByA;
			}if(nPokemonA==1&&nPokemonB==5){
				int nDamageByA = nBPA2 * 1;
				return nDamageByA;
			}if(nPokemonA==1&&nPokemonB==2){
				int nDamageByA = nBPA2 * 1/2;
				return nDamageByA;
			}if(nPokemonA==1&&nPokemonB==3){
				int nDamageByA = nBPA2 * 1/2 * 1;
				return nDamageByA;
			}if(nPokemonA==1&&nPokemonB==6){
				int nDamageByA = nBPA2 * 1/2 * 1/2;
				return nDamageByA;
			}if(nPokemonA==1&&nPokemonB==7){
				int nDamageByA = nBPA2 * 1 * 2;
				return nDamageByA;
			}
	}
}

/*
this function deals with the Earthquake move
it determines the magnitude of damage done by the second pokemon
*/
int earthquakeB(int nPokemonA, int nPokemonB, int nBPB2)
{
	int nDamageByB;
	if (nPokemonB==7){
			if(nPokemonB==7&&(nPokemonA==1||nPokemonA==4)){
				int nDamageByB = nBPB2 * 1.5 * 2;
				return nDamageByB;
			}if(nPokemonB==7&&nPokemonA==5){
				int nDamageByB = nBPB2 * 1.5 * 1;
				return nDamageByB;
			}if(nPokemonB==7&&nPokemonA==2){
				int nDamageByB = nBPB2 * 1.5 * 1/2;
				return nDamageByB;
			}if(nPokemonB==7&&nPokemonA==3){
				int nDamageByB = nBPB2 * 1.5 * 1/2 * 1;
				return nDamageByB;
			}if(nPokemonB==7&&nPokemonA==6){
				int nDamageByB = nBPB2 * 1.5 * 1/2 * 1/2;
				return nDamageByB;
			}if(nPokemonB==7&&nPokemonA==7){
				int nDamageByB = nBPB2 * 1.5 * 1 * 2;
				return nDamageByB;
			}
	}
	if (nPokemonB==1){
			if(nPokemonB==1&&(nPokemonA==1||nPokemonA==4)){
				int nDamageByB = nBPB2 * 2;
				return nDamageByB;
			}if(nPokemonB==1&&nPokemonA==5){
				int nDamageByB = nBPB2 * 1;
				return nDamageByB;
			}if(nPokemonB==1&&nPokemonA==2){
				int nDamageByB = nBPB2 * 1/2;
				return nDamageByB;
			}if(nPokemonB==1&&nPokemonA==3){
				int nDamageByB = nBPB2 * 1/2 * 1;
				return nDamageByB;
			}if(nPokemonB==1&&nPokemonA==6){
				int nDamageByB = nBPB2 * 1/2 * 1/2;
				return nDamageByB;
			}if(nPokemonB==1&&nPokemonA==7){
				int nDamageByB = nBPB2 * 1 * 2;
				return nDamageByB;
			}
	}
}

/*
this function deals with the leaf storm move
it determines the magnitude of damage done by the first pokemon
only torterra can do this move
*/
int leafStormA(int nPokemonA, int nPokemonB, int nBPA2)
{
	int nDamageByA;
	if (nPokemonA==3){
			if(nPokemonA==3&&(nPokemonB==2||nPokemonB==5)){
				int nDamageByA = nBPA2 * 1.5 * 2;
				return nDamageByA;
			}if(nPokemonA==3&&nPokemonB==1){
				int nDamageByA = nBPA2 * 1.5 * 1/2;
				return nDamageByA;
			}if(nPokemonA==3&&nPokemonB==3){
				int nDamageByA = nBPA2 * 1.5 * 1/2 * 2;
				return nDamageByA;
			}if(nPokemonA==3&&nPokemonB==4){
				int nDamageByA = nBPA2 * 1.5 * 0;
				return nDamageByA;
			}if(nPokemonA==3&&nPokemonB==6){
				int nDamageByA = nBPA2 * 1.5 * 0 * 2;
				return nDamageByA;
			}if(nPokemonA==3&&nPokemonB==7){
				int nDamageByA = nBPA2 * 1.5 * 2 * 0;
				return nDamageByA;
			}
	}
}

/*
this function deals with the leaf storm move
it determines the magnitude of damage done by the second pokemon
only torterra can do this move
*/
int leafStormB(int nPokemonA, int nPokemonB, int nBPB2)
{
	int nDamageByB;
	if (nPokemonB==3){
			if(nPokemonB==3&&(nPokemonA==2||nPokemonA==5)){
				int nDamageByB = nBPB2 * 1.5 * 2;
				return nDamageByB;
			}if(nPokemonB==3&&nPokemonA==1){
				int nDamageByB = nBPB2 * 1.5 * 1/2;
				return nDamageByB;
			}if(nPokemonB==3&&nPokemonA==3){
				int nDamageByB = nBPB2 * 1.5 * 1/2 * 2;
				return nDamageByB;
			}if(nPokemonB==3&&nPokemonA==4){
				int nDamageByB = nBPB2 * 1.5 * 0;
				return nDamageByB;
			}if(nPokemonB==3&&nPokemonA==6){
				int nDamageByB = nBPB2 * 1.5 * 0 * 2;
				return nDamageByB;
			}if(nPokemonB==3&&nPokemonA==7){
				int nDamageByB = nBPB2 * 1.5 * 2 * 0;
				return nDamageByB;
			}
	}
}

//this function checks if the move choice input is valid
int checkIfMoveIsValid(int nMoveChoice, int nPPMove1Ctr, int nPPMove2Ctr, 
						int nPPMove3Ctr, int nPPMove4Ctr, int nIsRowProtect){
	int nStillHasPP, nCorrectChoice;
	nStillHasPP=1;
	nCorrectChoice=1;
	if((nMoveChoice<1)||(nMoveChoice>4)){
		nCorrectChoice=0;
		printf("\nPlease select an allowable input (1-4 Only).\n");
		return nCorrectChoice;
	}
	if(((nMoveChoice==1)&&(nPPMove1Ctr==0))||((nMoveChoice==2)&&(nPPMove2Ctr==0))||((nMoveChoice==3)&&(nPPMove3Ctr==0))||((nMoveChoice==4)&&(nPPMove4Ctr==0))){
		nStillHasPP=0;
		printf("\nThat move has 0 PP.\n");
		return nStillHasPP;
	}
	if((nMoveChoice==3)&&(nPPMove3Ctr>0)&&(nIsRowProtect==1)){
		nCorrectChoice=0;
		printf("\nYou selected Protect last turn; \nyou cannot Protect this turn.\n");
		return nCorrectChoice;
	}
}

//this function displays the moves menu of the pokemons                
void movesMenuPlayer(int nPokemon, int nMoveChoice, int nBP1, int nBP2,int nPPMove1Ctr, 
					  int nPPMove2Ctr, int nPPMove3Ctr, int nPPMove4Ctr, int nTrainer){
	if(nPokemon==1){
			     printf("\nEntei's moves are: \n");
				 printf("	1 - Fire Blast (%dBP, %dPP)\n", nBP1, nPPMove1Ctr);
				 printf("	2 - Earthquake (%dBP, %dPP)\n", nBP2, nPPMove2Ctr);
				 printf("	3 - Protect (%dPP)\n", nPPMove3Ctr);
				 printf("	4 - Charge Up (%dPP)\n", nPPMove4Ctr);
				 printf("\nPlayer %d, select a move: ", nTrainer);
	}
	if(nPokemon==2){
		         printf("\nMilotic's moves are: \n");
				 printf("	1 - Scald (%dBP, %dPP)\n", nBP1, nPPMove1Ctr);
				 printf("	2 - Ice Beam (%dBP, %dPP)\n",nBP2, nPPMove2Ctr);
				 printf("	3 - Protect (%dPP)\n", nPPMove3Ctr);
				 printf("	4 - Charge Up (%dPP)\n", nPPMove4Ctr);
				 printf("\nPlayer %d, select a move: ", nTrainer);
	}
	if(nPokemon==3){
	             printf("\nTorterra's moves are: \n");
				 printf("	1 - Dig (%dBP, %dPP)\n", nBP1, nPPMove1Ctr);
				 printf("	2 - Leaf Storm (%dBP, %dPP)\n",nBP2, nPPMove2Ctr);
				 printf("	3 - Protect (%dPP)\n", nPPMove3Ctr);
				 printf("	4 - Charge Up (%dPP)\n", nPPMove4Ctr);
				 printf("\nPlayer %d, select a move: ", nTrainer);
	}
	if(nPokemon==4){
	             printf("\nPikachu's moves are: \n");
				 printf("	1 - Thunderbolt (%dBP, %dPP)\n",nBP1, nPPMove1Ctr);
				 printf("	2 - Dig (%dBP, %dPP)\n",nBP2, nPPMove2Ctr);
				 printf("	3 - Protect (%dPP)\n", nPPMove3Ctr);
				 printf("	4 - Charge Up (%dPP)\n", nPPMove4Ctr);
				 printf("\nPlayer %d, select a move: ", nTrainer);
	}	
	if(nPokemon==5){
	             printf("\nGroudon's moves are: \n");
				 printf("	1 - Fissure (%dBP, %dPP)\n", nBP1, nPPMove1Ctr);
				 printf("	2 - Fire Blast (%dBP, %dPP)\n",nBP2, nPPMove2Ctr);
				 printf("	3 - Protect (%dPP)\n", nPPMove3Ctr);
				 printf("	4 - Charge Up (%dPP)\n", nPPMove4Ctr);
				 printf("\nPlayer %d, select a move: ", nTrainer);
	}			
	if(nPokemon==6){
	             printf("\nLapras's moves are: \n");
				 printf("	1 - Ice Beam (%dBP, %dPP)\n",nBP1, nPPMove1Ctr);
				 printf("	2 - Scald (%dBP, %dPP)\n",nBP2, nPPMove2Ctr);
				 printf("	3 - Protect (%dPP)\n", nPPMove3Ctr);
				 printf("	4 - Charge Up (%dPP)\n", nPPMove4Ctr);
				 printf("\nPlayer %d, select a move: ", nTrainer);
	}	
	if(nPokemon==7){
	             printf("\nStunfisk's moves are: \n");
				 printf("	1 - Water Gun (%dBP, %dPP)\n",nBP1, nPPMove1Ctr);
				 printf("	2 - Earthquake (%dBP, %dPP)\n",nBP2, nPPMove2Ctr);
				 printf("	3 - Protect (%dPP)\n", nPPMove3Ctr);
				 printf("	4 - Charge Up (%dPP)\n", nPPMove4Ctr);
				 printf("\nPlayer %d, select a move: ", nTrainer);
	}
}


//this function executes the valid move choice of the first pokemon
int goDoTheDamageA(int nPokemonA, int nPokemonB,int nMoveChoiceA, int nBPA1, int nBPA2){	
	int nDamageByA;
	nDamageByA=0;
	if(nPokemonA==1){
				 switch(nMoveChoiceA)
				 {
				 	case 1 : fireBlastA(1, nPokemonB, nBPA1, nBPA2);
				 			 break;
				 	case 2 : earthquakeA(1, nPokemonB, nBPA2);
				 			 break;
				 	case 3 : return nDamageByA;
					 		 break;
				 	case 4 : return nDamageByA;
					 		 break;
				 }
	}
	if(nPokemonA==2){
		        switch(nMoveChoiceA)
				{
					case 1 : scaldA(2, nPokemonB, nBPA1, nBPA2);
				 			 break;
				 	case 2 : iceBeamA(2, nPokemonB, nBPA1, nBPA2);
				 			 break;
				 	case 3 : return nDamageByA;
					 		 break; 
				 	case 4 : return nDamageByA;
					 		 break;	
				 }
	}
	if(nPokemonA==3){
				 switch(nMoveChoiceA)
				 {
				 	case 1 : digA(3, nPokemonB, nBPA1, nBPA2);
				 			 break;
				 	case 2 : leafStormA(3, nPokemonB, nBPA2);
				 			 break;
				 	case 3 : return nDamageByA;
					 		 break; 
				 	case 4 : return nDamageByA;
					 		 break;	
				 }
	}
	if(nPokemonA==4){
				 switch(nMoveChoiceA)
				 {
					case 1 : thunderboltA(4, nPokemonB,nBPA1);
				 			 break;
				 	case 2 : digA(4, nPokemonB, nBPA1, nBPA2);
				 			 break;
				 	case 3 : return nDamageByA;
					 		 break; 
				 	case 4 : return nDamageByA;
					 		 break;	
				 }
	}	
	if(nPokemonA==5){
	            
				 switch(nMoveChoiceA){
					case 1 : fissureA(5, nPokemonB, nBPA1);
  				 			 break;
				 	case 2 : fireBlastA(5, nPokemonB, nBPA1, nBPA2);
				 			 break;
					case 3 : return nDamageByA;
							 break; 
				 	case 4 : return nDamageByA;
					 		 break;		
				 }
	}			
	if(nPokemonA==6){
	            
				 switch(nMoveChoiceA)
				 {
				 	case 1 : iceBeamA(6, nPokemonB, nBPA1, nBPA2);
				 		 	 break;
				 	case 2 : scaldA(6, nPokemonB, nBPA1, nBPA2);
				 			 break;
					case 3 : return nDamageByA;
							 break; 
				 	case 4 : return nDamageByA;
					 		 break;	 	
				 }
	}	
	if(nPokemonA==7){
	            
				 switch(nMoveChoiceA)
				 {
				 	case 1 : waterGunA(7, nPokemonB, nBPA1);
				 		     break;
				 	case 2 : earthquakeA(7, nPokemonB, nBPA2);
				 			 break;
				 	case 3 : return nDamageByA;
					 		 break; 
				 	case 4 : return nDamageByA;
					 		 break;		
				 }
	}
}

//this function executes the valid move choice of the second pokemon
int goDoTheDamageB(int nPokemonA, int nPokemonB, int nMoveChoiceB, int nBPB1, int nBPB2){	
	int nDamageByB;
	nDamageByB=0;
	if(nPokemonB==1){
				 switch(nMoveChoiceB)
				 {
				 	case 1 : fireBlastB(nPokemonA, 1, nBPB1, nBPB2);
				 			 break;
				 	case 2 : earthquakeB(nPokemonA, 1, nBPB2);
				 			 break;
				 	case 3 : return nDamageByB;
					 		 break;
				 	case 4 : return nDamageByB;
					 		 break;
				 }
	}
	if(nPokemonB==2){
				 switch(nMoveChoiceB)
				{
					case 1 : scaldB(nPokemonA, 2, nBPB1, nBPB2);
				 			 break;
				 	case 2 : iceBeamB(nPokemonA, 2, nBPB1, nBPB2);
				 			 break;
				 	case 3 : return nDamageByB;
					 		 break; 
				 	case 4 : return nDamageByB;
					 		 break;	
				 }
	}
	if(nPokemonB==3){
	            
				 switch(nMoveChoiceB)
				 {
				 	case 1 : digB(nPokemonA, nPokemonB, nBPB1, nBPB2);
				 			 break;
				 	case 2 : leafStormB(nPokemonA, nPokemonB, nBPB2);
				 			 break;
				 	case 3 : return nDamageByB;
					 		 break; 
				 	case 4 : return nDamageByB;
					 		 break;		
				 }	
	}
	if(nPokemonB==4){
	            
				 switch(nMoveChoiceB)
				 {
					case 1 : thunderboltB(nPokemonA, nPokemonB,nBPB1);
				 			 break;
				 	case 2 : digB(nPokemonA, nPokemonB, nBPB1, nBPB2);
				 			 break;
				 	case 3 : return nDamageByB;
					 		 break; 
				 	case 4 : return nDamageByB;
					 		 break;	
				 }
		}	
	if(nPokemonB==5){
	            
				 switch(nMoveChoiceB){
					case 1 : fissureB(nPokemonA, nPokemonB, nBPB1);
  				 			 break;
				 	case 2 : fireBlastB(nPokemonA, nPokemonB, nBPB1, nBPB2);
				 			 break;
					case 3 : return nDamageByB;
							 break; 
				 	case 4 : return nDamageByB;
					 		 break;	
					}
	}
	if(nPokemonB==6){
	             
				 switch(nMoveChoiceB)
				 {
				 	case 1 : iceBeamB(nPokemonA, nPokemonB, nBPB1, nBPB2);
				 		 	 break;
				 	case 2 : scaldB(nPokemonA, nPokemonB, nBPB1, nBPB2);
				 			 break;
					case 3 : return nDamageByB;
							 break; 
				 	case 4 : return nDamageByB;
					 		 break;		
				 }
	}
	if(nPokemonB==7){
	            
				 switch(nMoveChoiceB)
				 {
				 	case 1 : waterGunB(nPokemonA, nPokemonB, nBPB1);
				 		     break;
				 	case 2 : earthquakeB(nPokemonA, nPokemonB, nBPB2);
				 	
				 			 break;
				 	case 3 : return nDamageByB;
					 		 break; 
				 	case 4 : return nDamageByB;
					 		 break;		
				 }
	}
}

int main(int argc, char *argv[])
{
	int nPokemonA, nPokemonB; //these will hold the choices of the players
	int nValidChoiceA, nValidChoiceB; //these flags will indicate if the inputs are valid
	
	
	
	printf("************** POKEMON 1v1 BATTLE SIMULATOR **********************************************\n\n");
	printf("Here are the Pokemon choices:\n \t1 - Entei \n \t2 - Milotic \n \t3 - Torterra \n");
	printf("\t4 - Pikachu \n \t5 - Groudon \n \t6 - Lapras \n \t7 - Stunfisk\n\n");
	
	printf("Player 1, please select a Pokemon: ");
	scanf(" %d", &nPokemonA);	
	while ((nPokemonA<1)||(nPokemonA>7)){
		printf("\nPLAYER %d, PLEASE SELECT ONLY AMONG THE CHOICES (1-7 ONLY).\nChoice: ", 1);
		scanf(" %d", &nPokemonA);	
	}	
	choosePokemon(nPokemonA,1);
	
	printf("Player 2, please select a Pokemon: ");
	scanf(" %d", &nPokemonB);	
	while ((nPokemonB<1)||(nPokemonB>7)){
		printf("\nPLAYER %d, PLEASE SELECT ONLY AMONG THE CHOICES (1-7 ONLY)).\nChoice: ", 2);
		scanf(" %d", &nPokemonB);	
	}	
	choosePokemon(nPokemonB,2);
	
	int nCurrentHPA, nHPAdenominator; //this assigns the HP numerator & denominator of the first pokemon
	nCurrentHPA=assignOriginalHP(nPokemonA);
	nHPAdenominator=assignOriginalHP(nPokemonA);
	
	int nCurrentHPB, nHPBdenominator; //this assigns the HP numerator & denominator of the second pokemon
	nCurrentHPB=assignOriginalHP(nPokemonB);
	nHPBdenominator=assignOriginalHP(nPokemonB);
	
	// these two variables will hold the maximum number of times / the PPs of the two unique moves of the first Pokemon
	int nPPAMove1Ctr, nPPAMove2Ctr;
	nPPAMove1Ctr=assignUniqueMove1PP(nPokemonA);
	nPPAMove2Ctr=assignUniqueMove2PP(nPokemonA);
	
	// these two variables will hold the maximum number of times / the PPs of the two unique moves of the second Pokemon
	int nPPBMove1Ctr, nPPBMove2Ctr;
	nPPBMove1Ctr = assignUniqueMove1PP(nPokemonB);
	nPPBMove2Ctr = assignUniqueMove2PP(nPokemonB);
	
	//these variables assign the BPs of the unique moves of the first pokemon
	int nBPA1, nBPA2;
	nBPA1 = assignUniqueMove1BP(nPokemonA);
	nBPA2 = assignUniqueMove2BP(nPokemonA);
	
	//these variables will contain the original BPs of the unique moves (to be doubled) of the first pokemon
	int nToChargeBPA1, nToChargeBPA2;
	nToChargeBPA1=nBPA1;
	nToChargeBPA2=nBPA2;
	
	//these are reserved variables that will be used to revert back after using the ChargeUP move of the first pokemon
	int nOriginalBPA1, nOriginalBPA2;
	nOriginalBPA1=nBPA1;
	nOriginalBPA2=nBPA2;
	
	//these variables assign the BPs of the unique moves of the second pokemon
	int nBPB1, nBPB2;
	nBPB1 = assignUniqueMove1BP(nPokemonB);
	nBPB2 = assignUniqueMove2BP(nPokemonB);

	//these variables will contain the original BPs of the unique moves (to be doubled) of the second pokemon
	int nToChargeBPB1, nToChargeBPB2;
	nToChargeBPB1=nBPB1;
	nToChargeBPB2=nBPB2;
	
	//these are reserved variables that will be used to revert back after using the ChargeUP move of the second pokemon
	int nOriginalBPB1, nOriginalBPB2;
	nOriginalBPB1=nBPB1;
	nOriginalBPB2=nBPB2;
				
	//these variables assign the starting PROTECT and CHARGED UP PPs of the first Pokemon
	int nPPAMove3Ctr = 5;
	int nPPAMove4Ctr = 5;
	
	//these variables assign the starting PROTECT and CHARGED UP PPs of the second Pokemon
	int nPPBMove3Ctr = 5;
	int nPPBMove4Ctr = 5;
	
	//these variables are flags to show whether Protect had been chosen or not
	int nIsAProtected,nIsBProtected;
	// having a value of 0 means that Protect had not been chosen
	nIsAProtected = 0; 
	nIsBProtected = 0;
	
	//these variables are flags to prevent Protect from being used in a row
	int nIsRowProtectA,nIsRowProtectB;
	// having a value of 0 means that Protect had not been used in a row / not used in the last turn
	nIsRowProtectA = 0; 
	nIsRowProtectB = 0;
	
	int nWhileBothAlive; //this variable is a flag that determines whether the game should continue or not
	nWhileBothAlive=1; // having a value of 1 means that the game goes on
	
	//these ff set the turns of each player while both are still alive
	int nTurnOfPlayerA,nTurnOfPlayerB;
	nTurnOfPlayerA=1; // player 1 starts with a value of 1 since he starts playing first
	nTurnOfPlayerB=0;
	
	//these variables contain the move choices of the 2 pokemons
	int nMoveChoiceA;
	int nMoveChoiceB;
	
	//these variables contain the damages done by the 2 pokemons
	int nDamageByA;
	int nDamageByB;
	//both are 0 now because no damage is done at the very start of the game
	nDamageByA=0; 
	nDamageByB=0;
	
	//these variables will serve as the flags for the zero ctrs scenarios for both pokemons
	int nIsAllCtrsZeroA = 0;
	int nIsAllCtrsZeroB = 0;
	
//game loop starts here
	while(nWhileBothAlive==1){
		if(nIsAllCtrsZeroA==0){
			if(nTurnOfPlayerA==1){
			printf("\n\n***********************************************************************************\n\n");
			displayHPStat(nPokemonA,nCurrentHPA,nHPAdenominator);
			displayHPStat(nPokemonB,nCurrentHPB, nHPBdenominator);			
			movesMenuPlayer(nPokemonA, nMoveChoiceA, nBPA1, nBPA2, nPPAMove1Ctr, nPPAMove2Ctr,
							 nPPAMove3Ctr, nPPAMove4Ctr, 1);
			scanf("%d", &nMoveChoiceA);
			nValidChoiceA=checkIfMoveIsValid(nMoveChoiceA, nPPAMove1Ctr, 
					   nPPAMove2Ctr, nPPAMove3Ctr, nPPAMove4Ctr, nIsRowProtectA);
		
			while(nValidChoiceA==0){
				printf("\nPlayer 1, select a move: ");
				scanf("%d",&nMoveChoiceA);
				nValidChoiceA=checkIfMoveIsValid(nMoveChoiceA, nPPAMove1Ctr, 
					   nPPAMove2Ctr, nPPAMove3Ctr, nPPAMove4Ctr, nIsRowProtectA);
			}
				if(nMoveChoiceA==1){	//this "if" portion is to deal with unique move 1's issues
					nPPAMove1Ctr--;
				}			
				if(nMoveChoiceA==2){	//this "if" portion is to deal with unique move 2's issues
					nPPAMove2Ctr--;
				}					
				if(nMoveChoiceA==3){   //this "if" portion is to deal with Protect's issues
					nPPAMove3Ctr--;                
					nIsRowProtectA=1;
					nIsAProtected=1;			 
				}
				if(nMoveChoiceA==4){   //this "if" portion is to deal with Charge Up's issues
					nPPAMove4Ctr--;
					nBPA1=nToChargeBPA1*2;
					nBPA2=nToChargeBPA2*2;
				}
			if(nIsRowProtectA==1){    //this portion is to reset the protect in a row of pokemon A
				if ((nMoveChoiceA==1)||(nMoveChoiceA==2)||(nMoveChoiceA==4)){
					nIsRowProtectA=0;
				}
			}
			nDamageByA=goDoTheDamageA(nPokemonA, nPokemonB,nMoveChoiceA,nBPA1, nBPA2);
			if(nIsBProtected==1){
				nDamageByA=0;
				nIsBProtected=0;
			}
			nCurrentHPB=nCurrentHPB-nDamageByA;
			
		//the ff is to revert back the BPs after ChargeUp is deducted fr opponent's health			
			if((nMoveChoiceA==1)||(nMoveChoiceA==2)){
					nBPA1=nOriginalBPA1;
					nBPA2=nOriginalBPA2;
				}
		}
		
		// the zero PP for all ctrs of pokemon 1 "case"
		if(nIsAllCtrsZeroA==1){
			printf("\nPlayer 1 has 0PP for all moves.\nPress any key to continue.\n");
			nCurrentHPB= nCurrentHPB - 10;
			nCurrentHPA= nCurrentHPA - 5;
		}
		//the flag "activation" for the zero PP scenario is here
		if((nPPAMove1Ctr==0)&&(nPPAMove2Ctr==0)&&(nPPAMove3Ctr==0)&&(nPPAMove4Ctr==0)){
			nIsAllCtrsZeroA = 1;
		}
		
		//the turn switches to player 2 here
			nTurnOfPlayerA=0;
			nTurnOfPlayerB=1;
		//the ff is to check for Zero HPB
			if(nCurrentHPB<=0){
				printf("\n\n*******************************************************************************************\n\n");
				printf("The Pokemon of Player 2 has 0 HP!\n");
				printf("Player 1 wins!\n");
				printf("\n\n*******************************************************************************************\n\n");
				nWhileBothAlive=0;
				return nWhileBothAlive;
			}
		}	
	if(nIsAllCtrsZeroB==0){
		if(nTurnOfPlayerB==1){
			printf("\n\n***********************************************************************************\n\n");
			displayHPStat(nPokemonA, nCurrentHPA, nHPAdenominator);
			displayHPStat(nPokemonB, nCurrentHPB, nHPBdenominator);	
			movesMenuPlayer(nPokemonB, nMoveChoiceB,nBPB1, nBPB2, nPPBMove1Ctr, nPPBMove2Ctr, 
							 nPPBMove3Ctr,  nPPBMove4Ctr, 2);
			scanf("%d", &nMoveChoiceB);
			nValidChoiceB=checkIfMoveIsValid(nMoveChoiceB, nPPBMove1Ctr, 
					   nPPBMove2Ctr, nPPBMove3Ctr, nPPBMove4Ctr, nIsRowProtectB);
			while (nValidChoiceB==0){
				printf("\nPlayer 2, select a move: ");
				scanf("%d",&nMoveChoiceB);
				nValidChoiceB=checkIfMoveIsValid(nMoveChoiceB, nPPBMove1Ctr, 
					   nPPBMove2Ctr, nPPBMove3Ctr, nPPBMove4Ctr, nIsRowProtectB);
			}	
				if(nMoveChoiceB==1)	{	//this "if" portion is to deal with unique move 1's issues
					nPPBMove1Ctr--;
				}
				if(nMoveChoiceB==2){	//this "if" portion is to deal with unique move 2's issues
					nPPBMove2Ctr--;
				}
				if(nMoveChoiceB==3){    //this "if" portion is to deal with Protect's issues
					nPPBMove3Ctr--;                
					nIsRowProtectB=1;
					nIsBProtected=1;
				}
				if(nMoveChoiceB==4){    //this "if" portion is to deal with Charge Up's issues
					nPPBMove4Ctr--;
					nBPB1=nToChargeBPB1*2;
					nBPB2=nToChargeBPB2*2;
				}
			if(nIsRowProtectB==1){      //this portion is to reset the protect in a row of pokemon 1
				if((nMoveChoiceB==1)||(nMoveChoiceB==2)||(nMoveChoiceB==4)){
					nIsRowProtectB=0;
				}
			}			
			nDamageByB=goDoTheDamageB(nPokemonA, nPokemonB, nMoveChoiceB,nBPB1, nBPB2);
			if(nIsAProtected==1){
				nDamageByB=0;
				nIsAProtected=0;			 
			}			
			nCurrentHPA=nCurrentHPA-nDamageByB;
			
		//the ff is to revert back the BPs after ChargeUp is deducted fr opponent's health			
			if((nMoveChoiceB==1)||(nMoveChoiceB==2)){
					nBPB1=nOriginalBPB1;
					nBPB2=nOriginalBPB2;
				}
		}
		
		// the zero PP for all ctrs of pokemon 2 "case"
		if(nIsAllCtrsZeroB==1){
			printf("\nPlayer 2 has 0PP for all moves.\n Press any key to continue.\n");
			nCurrentHPB= nCurrentHPB - 5;
			nCurrentHPA= nCurrentHPA - 10;
		}
		//the flag "activation" for the zero PP scenario is here		
		if((nPPBMove1Ctr==0)&&(nPPBMove2Ctr==0)&&(nPPBMove3Ctr==0)&&(nPPBMove4Ctr==0)){
			nIsAllCtrsZeroB = 1;
		}
		// the turn switches back to player 1 here	
			nTurnOfPlayerB=0;
			nTurnOfPlayerA=1;
		}
			
		//the ff is to check for Zero HPA
			if(nCurrentHPA<=0){
				printf("\n\n*******************************************************************************************\n\n");
				printf("The Pokemon of Player 1 has 0 HP!\n");
				printf("Player 2 wins!\n");
				printf("\n\n*******************************************************************************************\n\n");
				nWhileBothAlive=0;
				return nWhileBothAlive;
			}
	}
	return 0;	
}
