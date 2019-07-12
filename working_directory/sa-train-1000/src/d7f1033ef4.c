#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_9[58];        // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_1 = 84;            // Tag.BODY
    if(entity_6 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 91;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_6] = 'i'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER