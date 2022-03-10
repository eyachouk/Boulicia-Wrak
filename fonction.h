#ifndef ENIGMES_H_INCLUDED
#define ENIGMES_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
 

typedef struct 
{
	char Question1[100], Answer1[100], Answer2[100] ,Answer3[100], correct[100];
	SDL_Surface *Question1,*Reponse1,*Reponse2,*Reponse3;
	SDL_Rect Question1Pos, Answer1Pos, Answer2Pos;
	TTF_Font *Font;
	
    int InputUser, numsolution;
} enigme;

enigme init_enigme();
int nb_lignes(char filename[]);//pour compter le nombre de ligne pour ensuite utiliser cette fonction pour generer une question
enigme generer(char *filename[]);//generer aleatoirement les questions
void resolution_enigme();
void affichage_enigme(enigme e , SDL_Surface *ecran);//affichage de l'enigme
void afficher_resultat (SDL_Surface *ecran,enigme e);//affichage resultat enigme





#endif
 // ENIGMES_H_INCLUDED
