#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 39;            // Tag.BODY
    char entity_0[39];        // Tag.BODY
    entity_4 = 42;            // Tag.BODY
    if(entity_4 < entity_7){  // Tag.BODY
    entity_4 = 59;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 92;            // Tag.BODY
    }                         // Tag.BODY
    char entity_8[27];        // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_6[24];        // Tag.BODY
    entity_0[entity_4] = 'X'; // Tag.BUFWRITE_COND_UNSAFE
    entity_3 = 72;            // Tag.BODY
    entity_6[entity_3] = 'x'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 46;            // Tag.BODY
    entity_8[entity_5] = '4'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER