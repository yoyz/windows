#include "SDL/SDL.h"
#include "SDL/SDL_mixer.h"
int main( int argc, char* args[] )
{
  //Start SDL
  SDL_Init( SDL_INIT_EVERYTHING );

  // Create an application window with the following settings:
  SDL_Surface *buffer;

  bool fullscreen = false;

  if ( fullscreen == true )   // For fullscreen
    buffer = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE | SDL_FULLSCREEN );
  else                        // For windowed
    buffer = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE );

  Mix_OpenAudio( 22050, MIX_DEFAULT_FORMAT, 2, 4096 ); // init sound

  // Set window caption
  SDL_WM_SetCaption( "Yay!", NULL );
  /* End Initialization */

  /* Game loop and such would go here */

  /* Close SDL.  Normally, you'd free surfaces, but since 
     SDL_SetVideoMode was used on buffer, SDL_Quit knows to
     automatically free that for us. */
  // Clean up
  SDL_Quit();
    
    
  return 0;    
}
