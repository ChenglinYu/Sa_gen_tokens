#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    entity_9 = 26;            // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_8[58];        // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 74;            // Tag.BODY
    }                         // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 32;            // Tag.BODY
    entity_8[entity_0] = 'F'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_1[71];        // Tag.BODY
    entity_1[entity_5] = '1'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER