#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_4 = 78;            // Tag.BODY
    char entity_1[62];        // Tag.BODY
    entity_9 = 8;             // Tag.BODY
    if(entity_9 < entity_4){  // Tag.BODY
    entity_9 = 5;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 5;             // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_9] = 'x'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER