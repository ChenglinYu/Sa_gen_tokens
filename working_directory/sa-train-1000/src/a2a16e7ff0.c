#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_9[32];        // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_3 = 49;            // Tag.BODY
    if(entity_6 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 64;            // Tag.BODY
    }                         // Tag.BODY
    char entity_7[76];        // Tag.BODY
    entity_9[entity_6] = 'D'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_0;             // Tag.BODY
    entity_0 = 59;            // Tag.BODY
    entity_7[entity_0] = 't'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER