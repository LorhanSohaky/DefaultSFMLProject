#include "../../include/Screen.hpp"
#include "../../include/Collision.hpp"

Screen::Screen( GameRef gameRef ) {
    this->window       = gameRef->window;
    this->event        = &gameRef->event;
    this->isAudioOn    = &gameRef->isAudioOn;
    this->inputManager = gameRef->inputManager;
}
