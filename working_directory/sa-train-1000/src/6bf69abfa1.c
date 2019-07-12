#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_2[31];        // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_1 = 22;            // Tag.BODY
    entity_4 = 50;            // Tag.BODY
    char entity_6[88];        // Tag.BODY
    entity_5 = 84;            // Tag.BODY
    if(entity_1 < entity_4){  // Tag.BODY
    entity_1 = 49;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 89;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_1] = 'k'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;             // Tag.BODY
    entity_8 = 15;            // Tag.BODY
    entity_6[entity_5] = 'j'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_0[98];        // Tag.BODY
    entity_0[entity_8] = 'd'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER