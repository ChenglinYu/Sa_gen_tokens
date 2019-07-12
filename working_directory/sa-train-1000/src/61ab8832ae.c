#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_2[86];        // Tag.BODY
    entity_0 = 62;            // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 34;            // Tag.BODY
    if(entity_0 < entity_4){  // Tag.BODY
    entity_0 = 44;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 92;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_0] = 'b'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_5;             // Tag.BODY
    entity_5 = 38;            // Tag.BODY
    char entity_8[90];        // Tag.BODY
    entity_8[entity_5] = 'a'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER