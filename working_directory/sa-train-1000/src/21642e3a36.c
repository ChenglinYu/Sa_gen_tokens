#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_1[94];        // Tag.BODY
    entity_9 = 23;            // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 52;            // Tag.BODY
    if(entity_8 < entity_9){  // Tag.BODY
    entity_8 = 68;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 13;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_1[entity_8] = 'n'; // Tag.BUFWRITE_COND_SAFE
    char entity_0[84];        // Tag.BODY
    entity_6 = 92;            // Tag.BODY
    entity_0[entity_6] = 'E'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER