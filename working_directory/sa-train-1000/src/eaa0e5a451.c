#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[57];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_4 = 18;            // Tag.BODY
    if(entity_1 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 32;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_1] = 'x'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER