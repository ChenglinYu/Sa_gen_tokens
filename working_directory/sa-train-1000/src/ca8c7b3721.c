#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_2 = 74;            // Tag.BODY
    entity_4 = 18;            // Tag.BODY
    char entity_6[93];        // Tag.BODY
    if(entity_2 < entity_4){  // Tag.BODY
    entity_2 = 75;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 2;             // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_2] = 's'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER