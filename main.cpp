#include<iostream>
#include<SDL2/SDL.h>
using namespace std;

const int WIDTH = 800,HEIGHT = 600;

int main(int argc, char *argv[]){
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("Simple Game",SDL_WINDOWPOS_UNDEFINED,WIDTH,HEIGHT,SDL_WINDOW_ALLOW_HIGHDPI);
    if (NULL == window)
    {
        cout<<"Could Not create window for you error"<<SDL_GetError()<<endl;
        return 1;
    }
    SDL_Event windowEvent;

    while (true){
        if(SDL_PollEvent(&windowEvent)){
            if (SDL_QUIT == windowEvent.type){

                {break;}
            }
        }
    }
    SDL_DestroyWindow(window);
    SDL_QUIT();

    return EXIT_SUCCESS;

}