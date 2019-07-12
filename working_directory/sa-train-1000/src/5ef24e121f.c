#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    entity_8 = 57;            // Tag.BODY
    char entity_2[39];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 65;            // Tag.BODY
    if(entity_7 < entity_8){  // Tag.BODY
    entity_7 = 53;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 90;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_7] = 'C'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER