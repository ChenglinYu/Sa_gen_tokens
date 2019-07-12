#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    char entity_1[7];         // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_3[78];        // Tag.BODY
    entity_6 = 94;            // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_0 = 53;            // Tag.BODY
    entity_4 = 22;            // Tag.BODY
    entity_1[entity_6] = 'b'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_0 < entity_4){  // Tag.BODY
    entity_0 = 89;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 75;            // Tag.BODY
    }                         // Tag.BODY
    char entity_7[94];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 86;            // Tag.BODY
    entity_3[entity_0] = 'i'; // Tag.BUFWRITE_COND_SAFE
    entity_7[entity_8] = 'R'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER