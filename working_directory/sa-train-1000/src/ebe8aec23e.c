#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_3[65];        // Tag.BODY
    char entity_4[86];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_9[27];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_8 = 60;            // Tag.BODY
    entity_2 = 57;            // Tag.BODY
    entity_6 = 93;            // Tag.BODY
    entity_5 = 68;            // Tag.BODY
    entity_4[entity_5] = 'm'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_8 < entity_6){  // Tag.BODY
    entity_8 = 48;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 44;            // Tag.BODY
    entity_3[entity_2] = 'B'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_9[entity_8] = 'q'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER