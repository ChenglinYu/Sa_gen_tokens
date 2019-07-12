#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[28];        // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_7 = 67;            // Tag.BODY
    entity_9 = 16;            // Tag.BODY
    if(entity_7 < entity_9){  // Tag.BODY
    entity_7 = 37;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 96;            // Tag.BODY
    }                         // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_0[entity_7] = 'b'; // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 71;            // Tag.BODY
    char entity_1[53];        // Tag.BODY
    entity_1[entity_5] = 'y'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER