#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[24];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 53;            // Tag.BODY
    char entity_0[96];        // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_7 = 6;             // Tag.BODY
    entity_3 = 31;            // Tag.BODY
    if(entity_7 < entity_4){  // Tag.BODY
    entity_7 = 62;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 62;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_5[73];        // Tag.BODY
    entity_0[entity_7] = 'k'; // Tag.BUFWRITE_COND_SAFE
    entity_1 = 73;            // Tag.BODY
    entity_2[entity_3] = 'X'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5[entity_1] = 'Y'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER