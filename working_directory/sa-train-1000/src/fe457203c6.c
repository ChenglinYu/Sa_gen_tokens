#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_3[60];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_0[70];        // Tag.BODY
    entity_8 = 38;            // Tag.BODY
    char entity_2[38];        // Tag.BODY
    entity_4 = 11;            // Tag.BODY
    entity_9 = 94;            // Tag.BODY
    entity_6 = 73;            // Tag.BODY
    if(entity_9 < entity_8){  // Tag.BODY
    entity_9 = 64;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 99;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_9] = 'U'; // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_4] = 'r'; // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_6] = 'g'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER