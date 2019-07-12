#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_9[80];        // Tag.BODY
    entity_8 = 0;             // Tag.BODY
    entity_5 = 56;            // Tag.BODY
    char entity_3[9];         // Tag.BODY
    entity_0 = 92;            // Tag.BODY
    if(entity_5 < entity_0){  // Tag.BODY
    entity_5 = 68;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 10;            // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 81;            // Tag.BODY
    entity_3[entity_8] = '2'; // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_5] = 'Q'; // Tag.BUFWRITE_COND_SAFE
    char entity_1[28];        // Tag.BODY
    entity_1[entity_7] = 'G'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER