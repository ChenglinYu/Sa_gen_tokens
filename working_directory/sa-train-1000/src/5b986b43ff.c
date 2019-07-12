#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_2[78];        // Tag.BODY
    entity_6 = 63;            // Tag.BODY
    entity_9 = 56;            // Tag.BODY
    if(entity_9 < entity_6){  // Tag.BODY
    entity_9 = 57;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 70;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_2[entity_9] = 'H'; // Tag.BUFWRITE_COND_SAFE
    entity_4 = 15;            // Tag.BODY
    char entity_7[84];        // Tag.BODY
    entity_7[entity_4] = 'Z'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER