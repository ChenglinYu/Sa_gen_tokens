#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_2[77];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_8 = 10;            // Tag.BODY
    entity_0 = 34;            // Tag.BODY
    entity_6 = 1;             // Tag.BODY
    char entity_3[67];        // Tag.BODY
    if(entity_0 < entity_6){  // Tag.BODY
    entity_0 = 61;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 8;             // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_0] = '0'; // Tag.BUFWRITE_COND_SAFE
    entity_3[entity_8] = 'm'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER