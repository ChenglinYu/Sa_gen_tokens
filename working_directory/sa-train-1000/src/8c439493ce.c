#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 61;            // Tag.BODY
    entity_9 = 69;            // Tag.BODY
    char entity_1[70];        // Tag.BODY
    if(entity_5 < entity_9){  // Tag.BODY
    entity_5 = 23;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 45;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_5] = 'I'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER