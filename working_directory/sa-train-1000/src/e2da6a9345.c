#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_1[27];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 45;            // Tag.BODY
    entity_6 = 45;            // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    entity_6 = 73;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 77;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_6] = 'A'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER