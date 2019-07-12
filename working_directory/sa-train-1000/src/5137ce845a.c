#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_3[64];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 2;             // Tag.BODY
    entity_9 = 10;            // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    entity_6 = 19;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 52;            // Tag.BODY
    }                         // Tag.BODY
    char entity_0[83];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_3[entity_6] = 'J'; // Tag.BUFWRITE_COND_SAFE
    entity_1 = 64;            // Tag.BODY
    char entity_7[28];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_7[entity_1] = 'c'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8 = 18;            // Tag.BODY
    entity_0[entity_8] = 'L'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER