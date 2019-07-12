#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_8 = 52;            // Tag.BODY
    char entity_0[57];        // Tag.BODY
    entity_6 = 95;            // Tag.BODY
    if(entity_6 < entity_8){  // Tag.BODY
    entity_6 = 32;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 40;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_6] = 'G'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER