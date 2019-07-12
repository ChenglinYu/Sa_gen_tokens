#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_4[51];        // Tag.BODY
    entity_6 = 83;            // Tag.BODY
    entity_3 = 68;            // Tag.BODY
    if(entity_3 < entity_6){  // Tag.BODY
    entity_3 = 35;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 63;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_3] = '5'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER