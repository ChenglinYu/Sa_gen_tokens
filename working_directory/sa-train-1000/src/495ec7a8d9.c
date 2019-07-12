#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[29];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 0;             // Tag.BODY
    char entity_7[84];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_6 = 59;            // Tag.BODY
    entity_4 = 91;            // Tag.BODY
    if(entity_0 < entity_6){  // Tag.BODY
    entity_0 = 61;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2[entity_4] = 'c'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 91;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_0] = 'l'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER