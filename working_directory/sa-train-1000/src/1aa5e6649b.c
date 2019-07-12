#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_6[16];        // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_5[93];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 24;            // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_8 = 67;            // Tag.BODY
    entity_6[entity_8] = 'F'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 68;            // Tag.BODY
    if(entity_7 < entity_9){  // Tag.BODY
    entity_7 = 42;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 18;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 85;            // Tag.BODY
    char entity_0[91];        // Tag.BODY
    entity_5[entity_7] = '8'; // Tag.BUFWRITE_COND_SAFE
    entity_0[entity_4] = 'L'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER