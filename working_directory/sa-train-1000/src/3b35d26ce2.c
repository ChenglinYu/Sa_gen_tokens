#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 59;            // Tag.BODY
    char entity_2[74];        // Tag.BODY
    entity_9 = 74;            // Tag.BODY
    if(entity_3 < entity_9){  // Tag.BODY
    entity_3 = 61;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 95;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_3] = 'h'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER