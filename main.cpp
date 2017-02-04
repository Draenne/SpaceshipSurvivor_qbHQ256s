#include <cstdio>
#include <cstdlib>
//#include <ctime>
#include <SDL2/SDL.h>

using namespace std;

int main(int argc, char const *argv[]) {
  SDL_Window *pwindow;
  SDL_Init(SDL_INIT_EVERYTHING);
  pwindow = SDL_CreateWindow("Spaceship Survivor", 50, 50, 1024, 720, 0);

  SDL_Quit();
  return 0;
}
