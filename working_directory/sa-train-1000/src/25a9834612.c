#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_3 = 41;            // Tag.BODY
    char entity_4[60];        // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 87;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_0] = 'w'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER