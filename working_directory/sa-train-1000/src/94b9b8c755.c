#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    entity_3 = 17;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 78;            // Tag.BODY
    char entity_2[58];        // Tag.BODY
    if(entity_3 < entity_6){  // Tag.BODY
    entity_3 = 18;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 92;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_3] = '8'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER