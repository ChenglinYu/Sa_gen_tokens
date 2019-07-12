#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    char entity_8[61];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 18;            // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    if(entity_7 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 5;             // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_7] = 'y'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER