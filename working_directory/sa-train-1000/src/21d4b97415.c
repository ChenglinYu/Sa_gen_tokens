#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    char entity_5[49];        // Tag.BODY
    entity_8 = 79;            // Tag.BODY
    if(entity_7 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 18;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 68;            // Tag.BODY
    char entity_4[14];        // Tag.BODY
    entity_5[entity_7] = 'J'; // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_2] = '3'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER