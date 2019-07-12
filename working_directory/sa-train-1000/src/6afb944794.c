#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_8[9];         // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_1 = 63;            // Tag.BODY
    if(entity_5 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 26;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_5] = 'A'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER