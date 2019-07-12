#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    entity_1 = 40;            // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 46;            // Tag.BODY
    char entity_5[69];        // Tag.BODY
    if(entity_0 < entity_1){  // Tag.BODY
    entity_0 = 29;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 31;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 26;            // Tag.BODY
    char entity_6[73];        // Tag.BODY
    entity_5[entity_0] = '5'; // Tag.BUFWRITE_COND_SAFE
    int entity_9;             // Tag.BODY
    char entity_3[70];        // Tag.BODY
    entity_9 = 35;            // Tag.BODY
    entity_3[entity_8] = '7'; // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_9] = 'S'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER