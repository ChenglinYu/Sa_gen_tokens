#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[59];        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_8 = 3;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    if(entity_5 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 56;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_5] = 'Q'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER