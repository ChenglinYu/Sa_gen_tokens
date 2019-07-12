#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 3;             // Tag.BODY
    char entity_5[62];        // Tag.BODY
    entity_9 = 94;            // Tag.BODY
    if(entity_9 < entity_7){  // Tag.BODY
    entity_9 = 52;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 23;            // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_5[entity_9] = '0'; // Tag.BUFWRITE_COND_SAFE
    char entity_1[82];        // Tag.BODY
    entity_3 = 28;            // Tag.BODY
    entity_1[entity_3] = 'I'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER