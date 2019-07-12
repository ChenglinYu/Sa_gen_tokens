#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_8 = 87;            // Tag.BODY
    entity_5 = 4;             // Tag.BODY
    char entity_1[14];        // Tag.BODY
    if(entity_5 < entity_8){  // Tag.BODY
    entity_5 = 57;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 70;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_5] = 'u'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER