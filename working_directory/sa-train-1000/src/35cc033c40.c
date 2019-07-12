#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_8[33];        // Tag.BODY
    entity_3 = 61;            // Tag.BODY
    entity_1 = 90;            // Tag.BODY
    if(entity_3 < entity_1){  // Tag.BODY
    entity_3 = 6;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 2;             // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 62;            // Tag.BODY
    entity_8[entity_3] = 'm'; // Tag.BUFWRITE_COND_SAFE
    char entity_6[23];        // Tag.BODY
    entity_6[entity_2] = 'd'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER