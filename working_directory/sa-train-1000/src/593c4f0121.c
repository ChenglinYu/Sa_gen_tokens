#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_4[39];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 31;            // Tag.BODY
    char entity_2[64];        // Tag.BODY
    entity_0 = 8;             // Tag.BODY
    entity_9 = 45;            // Tag.BODY
    if(entity_3 < entity_0){  // Tag.BODY
    entity_3 = 12;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2[entity_9] = 'P'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 85;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_5[78];        // Tag.BODY
    entity_4[entity_3] = 'L'; // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 30;            // Tag.BODY
    entity_5[entity_1] = 'i'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER