#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    char entity_0[53];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_6 = 87;            // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    if(entity_2 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 29;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_2] = 'd'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER