#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_0[78];        // Tag.BODY
    entity_8 = 0;             // Tag.BODY
    entity_9 = 0;             // Tag.BODY
    if(entity_9 < entity_8){  // Tag.BODY
    entity_9 = 48;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 53;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_9] = 's'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER