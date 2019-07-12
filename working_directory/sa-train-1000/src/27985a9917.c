#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_7 = 90;            // Tag.BODY
    char entity_2[81];        // Tag.BODY
    entity_3 = 7;             // Tag.BODY
    if(entity_3 < entity_7){  // Tag.BODY
    entity_3 = 81;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 75;            // Tag.BODY
    }                         // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_2[entity_3] = 'l'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_1;             // Tag.BODY
    entity_5 = 86;            // Tag.BODY
    char entity_6[61];        // Tag.BODY
    entity_6[entity_5] = 'o'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1 = 4;             // Tag.BODY
    char entity_0[82];        // Tag.BODY
    entity_0[entity_1] = 'Z'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER