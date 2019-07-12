#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_0[31];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_4 = 29;            // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 19;            // Tag.BODY
    entity_9 = 10;            // Tag.BODY
    char entity_8[89];        // Tag.BODY
    if(entity_5 < entity_9){  // Tag.BODY
    entity_5 = 73;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 95;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_4] = 'o'; // Tag.BUFWRITE_TAUT_SAFE
    int entity_2;             // Tag.BODY
    entity_2 = 77;            // Tag.BODY
    entity_0[entity_5] = 'J'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[7];         // Tag.BODY
    entity_3[entity_2] = 'H'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER