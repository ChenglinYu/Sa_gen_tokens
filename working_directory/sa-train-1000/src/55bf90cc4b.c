#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_5[15];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_1 = 31;            // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    entity_0 = 59;            // Tag.BODY
    char entity_3[71];        // Tag.BODY
    entity_8 = 61;            // Tag.BODY
    entity_3[entity_1] = 'S'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_4[74];        // Tag.BODY
    if(entity_2 < entity_0){  // Tag.BODY
    entity_4[entity_8] = 'm'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_2 = 48;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_2] = 'B'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER