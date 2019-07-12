#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_9 = 85;            // Tag.BODY
    entity_5 = 79;            // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_6[34];        // Tag.BODY
    char entity_1[97];        // Tag.BODY
    char entity_0[90];        // Tag.BODY
    entity_7 = 24;            // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 54;            // Tag.BODY
    entity_0[entity_9] = '5'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_7 < entity_5){  // Tag.BODY
    entity_6[entity_3] = 'B'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 66;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 44;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_7] = 'f'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER