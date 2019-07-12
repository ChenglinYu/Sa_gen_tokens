#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_6[96];        // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_2[3];         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_7 = 3;             // Tag.BODY
    entity_3 = 38;            // Tag.BODY
    entity_8 = 47;            // Tag.BODY
    entity_6[entity_7] = 'b'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_3 < entity_8){  // Tag.BODY
    entity_3 = 27;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 15;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_3] = 'E'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER