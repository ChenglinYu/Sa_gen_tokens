#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_4 = 47;            // Tag.BODY
    char entity_2[35];        // Tag.BODY
    char entity_9[72];        // Tag.BODY
    entity_8 = 43;            // Tag.BODY
    entity_0 = 47;            // Tag.BODY
    if(entity_8 < entity_0){  // Tag.BODY
    entity_8 = 39;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 68;            // Tag.BODY
    entity_2[entity_4] = 'q'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    entity_9[entity_8] = 'x'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER