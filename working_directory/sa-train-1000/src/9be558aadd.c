#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 77;            // Tag.BODY
    entity_0 = 93;            // Tag.BODY
    char entity_2[47];        // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_4[77];        // Tag.BODY
    entity_1 = 52;            // Tag.BODY
    if(entity_1 < entity_8){  // Tag.BODY
    entity_1 = 42;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 59;            // Tag.BODY
    entity_4[entity_0] = 'j'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_5[80];        // Tag.BODY
    entity_2[entity_1] = 'Y'; // Tag.BUFWRITE_COND_SAFE
    entity_3 = 98;            // Tag.BODY
    entity_5[entity_3] = 'q'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER