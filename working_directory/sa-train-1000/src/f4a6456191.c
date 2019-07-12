#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_8[18];        // Tag.BODY
    char entity_6[41];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_2 = 81;            // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_3 = 42;            // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    char entity_0[82];        // Tag.BODY
    entity_7 = 29;            // Tag.BODY
    if(entity_4 < entity_3){  // Tag.BODY
    entity_0[entity_2] = 'y'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_8[entity_7] = '6'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4 = 88;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_4] = 'n'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER