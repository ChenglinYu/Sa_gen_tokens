#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_6 = 43;            // Tag.BODY
    entity_9 = 41;            // Tag.BODY
    char entity_0[20];        // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    entity_6 = 16;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 29;            // Tag.BODY
    }                         // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 32;            // Tag.BODY
    entity_0[entity_6] = 'a'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_7[58];        // Tag.BODY
    entity_7[entity_5] = 'J'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER