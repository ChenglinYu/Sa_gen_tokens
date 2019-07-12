#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_3[63];        // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_2 = 76;            // Tag.BODY
    entity_7 = 55;            // Tag.BODY
    char entity_8[13];        // Tag.BODY
    entity_9 = 61;            // Tag.BODY
    if(entity_7 < entity_2){  // Tag.BODY
    entity_7 = 20;            // Tag.BODY
    entity_3[entity_9] = 'x'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_7 = 17;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_7] = 'C'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[25];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 79;            // Tag.BODY
    entity_4[entity_6] = 'E'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER