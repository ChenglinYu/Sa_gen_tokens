#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[87];        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_1[89];        // Tag.BODY
    entity_9 = 67;            // Tag.BODY
    entity_4 = 44;            // Tag.BODY
    entity_0 = 82;            // Tag.BODY
    if(entity_4 < entity_9){  // Tag.BODY
    entity_2[entity_0] = 'm'; // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 16;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 79;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_4] = 'n'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER