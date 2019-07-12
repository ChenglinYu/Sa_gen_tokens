#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_3[7];         // Tag.BODY
    entity_5 = 47;            // Tag.BODY
    entity_0 = 53;            // Tag.BODY
    if(entity_5 < entity_0){  // Tag.BODY
    entity_5 = 18;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 42;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 30;            // Tag.BODY
    char entity_2[64];        // Tag.BODY
    entity_2[entity_4] = 'X'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_5] = 'x'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER