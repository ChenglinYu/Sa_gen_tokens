#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_9 = 43;            // Tag.BODY
    entity_8 = 17;            // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_5[24];        // Tag.BODY
    char entity_1[5];         // Tag.BODY
    char entity_0[39];        // Tag.BODY
    entity_0[entity_8] = 'D'; // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = rand();        // Tag.BODY
    entity_6 = 93;            // Tag.BODY
    if(entity_7 < entity_9){  // Tag.BODY
    entity_5[entity_6] = 'z'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_7 = 52;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_7] = 'Z'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER