#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    entity_7 = 5;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 64;            // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_9[63];        // Tag.BODY
    char entity_4[99];        // Tag.BODY
    entity_8 = 6;             // Tag.BODY
    if(entity_7 < entity_8){  // Tag.BODY
    entity_9[entity_0] = 'E'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 18;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 56;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 23;            // Tag.BODY
    entity_4[entity_7] = '2'; // Tag.BUFWRITE_COND_SAFE
    char entity_2[5];         // Tag.BODY
    entity_2[entity_1] = 'F'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER