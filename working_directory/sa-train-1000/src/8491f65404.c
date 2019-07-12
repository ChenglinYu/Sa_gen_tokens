#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    char entity_7[80];        // Tag.BODY
    entity_6 = 84;            // Tag.BODY
    if(entity_8 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 6;             // Tag.BODY
    }                         // Tag.BODY
    char entity_3[47];        // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_4 = 96;            // Tag.BODY
    entity_7[entity_8] = 'M'; // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 56;            // Tag.BODY
    entity_3[entity_5] = 'B'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_2[48];        // Tag.BODY
    entity_2[entity_4] = 'n'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER