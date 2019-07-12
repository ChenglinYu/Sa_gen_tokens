#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_5[87];        // Tag.BODY
    entity_1 = 80;            // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 40;            // Tag.BODY
    if(entity_1 < entity_0){  // Tag.BODY
    entity_1 = 92;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 16;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_1] = 'k'; // Tag.BUFWRITE_COND_SAFE
    int entity_2;             // Tag.BODY
    entity_2 = 58;            // Tag.BODY
    char entity_3[21];        // Tag.BODY
    entity_3[entity_2] = '3'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER