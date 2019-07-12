#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_8[86];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_4 = 69;            // Tag.BODY
    entity_2 = 5;             // Tag.BODY
    entity_3 = 49;            // Tag.BODY
    entity_8[entity_4] = 'n'; // Tag.BUFWRITE_TAUT_SAFE
    char entity_0[18];        // Tag.BODY
    if(entity_3 < entity_2){  // Tag.BODY
    entity_3 = 7;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 23;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_3] = '8'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER