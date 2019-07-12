#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_7[21];        // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_3 = 21;            // Tag.BODY
    if(entity_0 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 15;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_0] = '8'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER