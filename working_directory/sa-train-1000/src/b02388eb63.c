#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[23];        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_8 = 95;            // Tag.BODY
    entity_5 = 32;            // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    char entity_0[60];        // Tag.BODY
    if(entity_9 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 25;            // Tag.BODY
    entity_0[entity_5] = 'c'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_4[entity_9] = 'X'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER