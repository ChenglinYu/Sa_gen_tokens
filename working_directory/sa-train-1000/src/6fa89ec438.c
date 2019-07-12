#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_8[85];        // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    entity_9 = 84;            // Tag.BODY
    entity_6 = 21;            // Tag.BODY
    char entity_3[88];        // Tag.BODY
    if(entity_2 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 4;             // Tag.BODY
    entity_3[entity_9] = 'K'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_0[39];        // Tag.BODY
    entity_8[entity_2] = 'v'; // Tag.BUFWRITE_COND_SAFE
    entity_1 = 77;            // Tag.BODY
    entity_0[entity_1] = '7'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER