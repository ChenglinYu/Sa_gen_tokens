#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_8[78];        // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_1 = 39;            // Tag.BODY
    if(entity_0 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 28;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_3[70];        // Tag.BODY
    entity_8[entity_0] = 'Y'; // Tag.BUFWRITE_COND_SAFE
    entity_2 = 4;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 45;            // Tag.BODY
    entity_3[entity_4] = 'I'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_6[97];        // Tag.BODY
    entity_6[entity_2] = 'v'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER