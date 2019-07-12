#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_1[85];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_2 = 44;            // Tag.BODY
    if(entity_5 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 18;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_5] = 'N'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER