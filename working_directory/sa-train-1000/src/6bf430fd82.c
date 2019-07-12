#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_2[35];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_0 = 93;            // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    if(entity_5 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 4;             // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_5] = 'H'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER