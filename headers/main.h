
#ifndef ELDEN_GAME
#define ELDEN_GAME

//Any necessary include
#include <string>
using namespace std;

//Declaration and Definitions
//Functions don't need to be present in src
//*Plan out libraries this way*
int preciseDelay(float speed);
int delay(int x);
/*These function sets print out messages to the screen
 *each function has a delay associated to before it says anything
 SPEECH*/
int fasting(string message);
int say(string message);
int tell(string message);
int dramaticize(string message);
/*SPEECH*/
//funtions text manipulation

//This function handles typing the message and adding the borders
int typeMessage(string message);
/*These function sets the spaces of all the say commands
 *so that it can start a pong write effect when story telling.
 PONG_WAVE*/
int beginPongWave();
int stopPongWave();
/*PONG_WAVE*/

#endif //ELDEN_GAME
