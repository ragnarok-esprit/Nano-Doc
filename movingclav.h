#ifndef FONCTION_H_
#define FONCTION_H_
#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include <SDL/SDL_image.h>
void moving_right(SDL_Rect *positionchar,SDL_Rect *positionbackground,SDL_Surface *imgbackground , SDL_Surface *ecran,SDL_Surface *imageperso,int mvmspeed);
void moving_left(SDL_Rect *positionchar,SDL_Rect *positionbackground,SDL_Surface *imgbackground , SDL_Surface *ecran,SDL_Surface *imageperso,int mvmspeed);

#endif
