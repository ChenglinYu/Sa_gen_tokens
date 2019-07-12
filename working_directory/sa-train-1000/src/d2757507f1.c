#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_2[2];         // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 30;            // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    if(entity_5 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 94;            // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 30;            // Tag.BODY
    entity_2[entity_5] = '6'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_0[38];        // Tag.BODY
    entity_0[entity_3] = 'x'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER