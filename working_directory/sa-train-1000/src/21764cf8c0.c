#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_2[67];        // Tag.BODY
    char entity_6[41];        // Tag.BODY
    entity_4 = 7;             // Tag.BODY
    entity_8 = 82;            // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    if(entity_3 < entity_8){  // Tag.BODY
    entity_6[entity_4] = 'x'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_3 = 52;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_3] = 'A'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER