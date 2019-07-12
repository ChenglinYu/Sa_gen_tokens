#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    char entity_3[51];        // Tag.BODY
    entity_8 = 48;            // Tag.BODY
    if(entity_0 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 31;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_0] = 'B'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER