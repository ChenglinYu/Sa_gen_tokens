#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[12];        // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_3 = 88;            // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_6[74];        // Tag.BODY
    entity_5 = 93;            // Tag.BODY
    entity_4 = 8;             // Tag.BODY
    if(entity_5 < entity_4){  // Tag.BODY
    entity_5 = 25;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 10;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_5] = 'J'; // Tag.BUFWRITE_COND_SAFE
    int entity_7;             // Tag.BODY
    entity_6[entity_3] = 'H'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_8[13];        // Tag.BODY
    entity_7 = 29;            // Tag.BODY
    entity_8[entity_7] = 'M'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER