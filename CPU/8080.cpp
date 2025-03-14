#include "8080.hpp"

_8080::_8080() {
  screen = new Screen();
}

_8080::~_8080() {

}

void _8080::run() {

  SDL_Event event;
  bool running = true;

  while (running) {

    while( SDL_PollEvent( &event ) ){
      switch( event.type ){
        case SDL_QUIT:  
          running = false;
          break;
        case SDL_KEYDOWN:
          handle_key_press(event.key.keysym.sym);
          break;
        case SDL_KEYUP:
          handle_key_release(event.key.keysym.sym);
          break;
        default:
          break;
      }
    }
    
    screen->render_screen();

    SDL_Delay(1);
  }
}