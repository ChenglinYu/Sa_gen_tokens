#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_6[33];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_8 = 61;            // Tag.BODY
    entity_9 = 32;            // Tag.BODY
    if(entity_9 < entity_8){  // Tag.BODY
    entity_9 = 41;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 29;            // Tag.BODY
    }                         // Tag.BODY
    char entity_0[66];        // Tag.BODY
    entity_6[entity_9] = 'x'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_2;             // Tag.BODY
    entity_2 = 43;            // Tag.BODY
    entity_0[entity_2] = 'p'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER