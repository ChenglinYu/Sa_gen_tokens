#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_7[15];        // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_0[68];        // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_6 = 79;            // Tag.BODY
    char entity_1[25];        // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    entity_8 = 33;            // Tag.BODY
    entity_9 = 50;            // Tag.BODY
    entity_1[entity_9] = 'n'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7[entity_6] = 'z'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_3 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 14;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_3] = 'a'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER