/* IRremote library by shirriff
 */

#include "IRremote.h"

/**
 * Constructor.
 */
IRremote::IRremote()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void IRremote::begin()
{
    // initialize hardware
    Serial.println("called begin");
}

/**
 * Example method.
 */
void IRremote::process()
{
    // do something useful
    Serial.println("called process");
    doit();
}

/**
* Example private method
*/
void IRremote::doit()
{
    Serial.println("called doit");
}
