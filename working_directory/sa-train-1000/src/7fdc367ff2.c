#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_7[23];        // Tag.BODY
    char entity_5[93];        // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_3 = 39;            // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    entity_1 = 70;            // Tag.BODY
    if(entity_9 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 24;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_8[57];        // Tag.BODY
    entity_7[entity_1] = 'E'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 56;            // Tag.BODY
    entity_8[entity_0] = 'H'; // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_9] = '0'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER