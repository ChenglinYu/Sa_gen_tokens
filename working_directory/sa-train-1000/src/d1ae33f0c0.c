#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_9 = 66;            // Tag.BODY
    char entity_4[57];        // Tag.BODY
    entity_7 = 41;            // Tag.BODY
    if(entity_7 < entity_9){  // Tag.BODY
    entity_7 = 17;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 88;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_0[8];         // Tag.BODY
    entity_4[entity_7] = 'G'; // Tag.BUFWRITE_COND_SAFE
    entity_8 = 98;            // Tag.BODY
    entity_0[entity_8] = 'T'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER