#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_3[21];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_1 = 47;            // Tag.BODY
    if(entity_5 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 43;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_5] = 'T'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER