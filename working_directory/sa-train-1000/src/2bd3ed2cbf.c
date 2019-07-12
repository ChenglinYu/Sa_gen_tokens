#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    char entity_4[58];        // Tag.BODY
    entity_0 = 67;            // Tag.BODY
    if(entity_1 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 35;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_1] = 'a'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER