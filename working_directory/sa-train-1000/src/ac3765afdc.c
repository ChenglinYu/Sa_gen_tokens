#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_4[58];        // Tag.BODY
    entity_9 = 10;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_8 = 38;            // Tag.BODY
    entity_6 = 65;            // Tag.BODY
    char entity_2[79];        // Tag.BODY
    if(entity_6 < entity_8){  // Tag.BODY
    entity_4[entity_9] = 'O'; // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 87;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 14;            // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_5[32];        // Tag.BODY
    entity_2[entity_6] = 'B'; // Tag.BUFWRITE_COND_SAFE
    entity_7 = 77;            // Tag.BODY
    entity_5[entity_7] = 'Z'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER