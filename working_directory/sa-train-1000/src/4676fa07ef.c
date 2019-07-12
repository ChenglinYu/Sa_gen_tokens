#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_3 = 93;            // Tag.BODY
    char entity_2[98];        // Tag.BODY
    entity_6 = 36;            // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 22;            // Tag.BODY
    char entity_4[7];         // Tag.BODY
    entity_4[entity_8] = 'L'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_6 < entity_3){  // Tag.BODY
    entity_6 = 7;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 54;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_2[entity_6] = 'z'; // Tag.BUFWRITE_COND_SAFE
    char entity_7[91];        // Tag.BODY
    entity_0 = 9;             // Tag.BODY
    entity_7[entity_0] = 'E'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER