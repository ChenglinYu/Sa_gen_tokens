#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    entity_3 = 84;            // Tag.BODY
    char entity_1[91];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 20;            // Tag.BODY
    if(entity_0 < entity_3){  // Tag.BODY
    entity_0 = 55;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 24;            // Tag.BODY
    }                         // Tag.BODY
    char entity_8[19];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 5;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_1[entity_0] = 'a'; // Tag.BUFWRITE_COND_SAFE
    entity_6 = 5;             // Tag.BODY
    entity_8[entity_6] = '2'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_4[13];        // Tag.BODY
    entity_4[entity_9] = 'v'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER