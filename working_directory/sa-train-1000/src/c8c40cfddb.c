#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_5[52];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_6 = 56;            // Tag.BODY
    entity_2 = 17;            // Tag.BODY
    char entity_0[77];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 17;            // Tag.BODY
    char entity_3[64];        // Tag.BODY
    entity_1 = 54;            // Tag.BODY
    entity_5[entity_7] = 'P'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_1 < entity_2){  // Tag.BODY
    entity_1 = 21;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 52;            // Tag.BODY
    entity_0[entity_6] = 'P'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_3[entity_1] = 'W'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER