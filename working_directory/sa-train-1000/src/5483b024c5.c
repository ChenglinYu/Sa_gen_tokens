#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_1[72];        // Tag.BODY
    entity_5 = 56;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 95;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_0] = '1'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER