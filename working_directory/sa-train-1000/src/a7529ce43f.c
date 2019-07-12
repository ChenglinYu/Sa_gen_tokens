#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[70];        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_0 = 15;            // Tag.BODY
    entity_8 = 74;            // Tag.BODY
    char entity_3[0];         // Tag.BODY
    entity_4 = 95;            // Tag.BODY
    if(entity_0 < entity_8){  // Tag.BODY
    entity_0 = 49;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2[entity_4] = 'i'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 41;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_0] = 'S'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER