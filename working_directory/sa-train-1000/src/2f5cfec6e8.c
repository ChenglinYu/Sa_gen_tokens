#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_5[60];        // Tag.BODY
    entity_4 = 11;            // Tag.BODY
    entity_8 = 52;            // Tag.BODY
    if(entity_8 < entity_4){  // Tag.BODY
    entity_8 = 79;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 88;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_8] = '9'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_9 = 24;            // Tag.BODY
    char entity_6[64];        // Tag.BODY
    char entity_0[76];        // Tag.BODY
    entity_0[entity_9] = 'b'; // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 99;            // Tag.BODY
    entity_6[entity_7] = 'k'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER