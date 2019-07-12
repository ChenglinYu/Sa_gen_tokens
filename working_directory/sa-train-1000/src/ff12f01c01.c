#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 54;            // Tag.BODY
    char entity_2[35];        // Tag.BODY
    if(entity_6 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 67;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_6] = '3'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER