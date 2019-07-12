#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    char entity_0[34];        // Tag.BODY
    char entity_4[96];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_3 = 32;            // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 47;            // Tag.BODY
    entity_8 = 0;             // Tag.BODY
    if(entity_2 < entity_8){  // Tag.BODY
    entity_2 = 55;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 96;            // Tag.BODY
    }                         // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 7;             // Tag.BODY
    entity_4[entity_3] = 'g'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_2] = '7'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_7[6];         // Tag.BODY
    entity_7[entity_6] = 'E'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER