#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_5[83];        // Tag.BODY
    entity_3 = 31;            // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    if(entity_2 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 3;             // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_2] = 'B'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER