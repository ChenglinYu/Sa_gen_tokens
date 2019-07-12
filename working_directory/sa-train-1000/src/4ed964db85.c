#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_1[82];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 21;            // Tag.BODY
    entity_9 = 33;            // Tag.BODY
    if(entity_3 < entity_9){  // Tag.BODY
    entity_3 = 97;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 26;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_3] = 'p'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER