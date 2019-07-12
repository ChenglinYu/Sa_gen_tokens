#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 47;            // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_9[87];        // Tag.BODY
    entity_8 = 24;            // Tag.BODY
    char entity_7[2];         // Tag.BODY
    entity_3 = 22;            // Tag.BODY
    if(entity_3 < entity_8){  // Tag.BODY
    entity_3 = 83;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9[entity_0] = '2'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 74;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_3] = 'E'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER