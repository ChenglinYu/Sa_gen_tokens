#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 31;            // Tag.BODY
    char entity_6[29];        // Tag.BODY
    entity_9 = 36;            // Tag.BODY
    if(entity_9 < entity_8){  // Tag.BODY
    entity_9 = 2;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 3;             // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_9] = 'N'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER