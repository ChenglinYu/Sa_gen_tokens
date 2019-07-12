#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    entity_5 = 8;             // Tag.BODY
    char entity_7[99];        // Tag.BODY
    if(entity_9 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 87;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_9] = 'W'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER