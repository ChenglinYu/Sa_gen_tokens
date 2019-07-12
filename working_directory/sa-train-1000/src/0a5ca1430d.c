#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_4[23];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_8 = 4;             // Tag.BODY
    char entity_3[44];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 48;            // Tag.BODY
    entity_1 = 51;            // Tag.BODY
    if(entity_7 < entity_8){  // Tag.BODY
    entity_7 = 79;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 39;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_1] = 'q'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_7] = 'k'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER