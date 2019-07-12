#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 96;            // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    char entity_1[86];        // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_6[54];        // Tag.BODY
    entity_8 = 31;            // Tag.BODY
    entity_1[entity_8] = 'x'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_9 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 73;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_9] = 'm'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER