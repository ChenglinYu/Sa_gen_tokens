#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_9 = 7;             // Tag.BODY
    entity_4 = 97;            // Tag.BODY
    char entity_6[98];        // Tag.BODY
    if(entity_9 < entity_4){  // Tag.BODY
    entity_9 = 81;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 5;             // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_9] = 'G'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER