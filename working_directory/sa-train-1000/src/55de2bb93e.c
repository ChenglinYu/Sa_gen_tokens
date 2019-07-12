#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    char entity_5[24];        // Tag.BODY
    entity_0 = 45;            // Tag.BODY
    if(entity_4 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 3;             // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_4] = '7'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER