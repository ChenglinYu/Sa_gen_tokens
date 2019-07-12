#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_2[82];        // Tag.BODY
    char entity_8[46];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 39;            // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_5 = 52;            // Tag.BODY
    entity_8[entity_5] = '2'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 31;            // Tag.BODY
    if(entity_7 < entity_0){  // Tag.BODY
    entity_7 = 22;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 69;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_7] = 'T'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER