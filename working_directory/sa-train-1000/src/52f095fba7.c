#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    entity_8 = 58;            // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_3[16];        // Tag.BODY
    entity_5 = 45;            // Tag.BODY
    if(entity_5 < entity_8){  // Tag.BODY
    entity_5 = 6;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 11;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_5] = 'k'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER