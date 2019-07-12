#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_5[31];        // Tag.BODY
    entity_9 = 39;            // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_6 = 2;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_0[1];         // Tag.BODY
    entity_2 = 90;            // Tag.BODY
    entity_1 = 37;            // Tag.BODY
    char entity_8[62];        // Tag.BODY
    if(entity_9 < entity_6){  // Tag.BODY
    entity_0[entity_1] = 'C'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 63;            // Tag.BODY
    entity_8[entity_2] = 'f'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_9 = 82;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_9] = 'u'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER