#ifndef ENIGMES_H_INCLUDED
#define ENIGMES_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
 

typedef struct 
{
	char Question1[100], Answer1[100], Answer2[100] ,, correct[100];
	SDL_Surface *Question,*Reponse1,*Reponse2;
	SDL_Rect Question1Pos, Answer1Pos, Answer2Pos;
	TTF_Font *Font;
	
    int InputUser, solution;
} enigme;

enigme Init_Enigme();
int nblignes(char filename[]);
void afficher_resultat (SDL_Surface * ecran,enigme e,int x);
void affichage_Enigme(enigme e , SDL_Surface *ecran);
void sauvegarder_enigme(char *filename[]);




#endif
 // ENIGMES_H_INCLUDED
