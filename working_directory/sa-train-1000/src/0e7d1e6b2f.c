#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 14;            // Tag.BODY
    char entity_3[41];        // Tag.BODY
    entity_7 = 43;            // Tag.BODY
    if(entity_7 < entity_4){  // Tag.BODY
    entity_7 = 46;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 20;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_7] = 'L'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER