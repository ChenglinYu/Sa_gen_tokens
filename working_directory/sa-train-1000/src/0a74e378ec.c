#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_7[94];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_0 = 57;            // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    if(entity_8 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 95;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_8] = '6'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER