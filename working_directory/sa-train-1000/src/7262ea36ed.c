#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    entity_2 = 24;            // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_3[61];        // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 58;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_0] = 'N'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER