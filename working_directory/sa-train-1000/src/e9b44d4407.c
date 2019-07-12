#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    char entity_0[8];         // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 20;            // Tag.BODY
    entity_3 = 21;            // Tag.BODY
    if(entity_3 < entity_7){  // Tag.BODY
    entity_3 = 77;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 50;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_0[entity_3] = '7'; // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 35;            // Tag.BODY
    char entity_5[60];        // Tag.BODY
    entity_5[entity_1] = '3'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER