#include <iostream>
#include <SDL2/SDL.h>
#include "./CPU/8080.hpp"
#include "./CPU/screen.hpp"

int main() {
  _8080* _8080_ = new _8080();
  _8080_->run();
  return 0;
}