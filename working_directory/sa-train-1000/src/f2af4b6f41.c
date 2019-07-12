#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    char entity_0[2];         // Tag.BODY
    char entity_1[94];        // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_8 = 32;            // Tag.BODY
    entity_2 = 26;            // Tag.BODY
    if(entity_7 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0[entity_2] = '8'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 24;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_7] = 'k'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER