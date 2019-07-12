#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_3[90];        // Tag.BODY
    entity_0 = 89;            // Tag.BODY
    entity_2 = 96;            // Tag.BODY
    if(entity_0 < entity_2){  // Tag.BODY
    entity_0 = 94;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 39;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_0] = 'C'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER