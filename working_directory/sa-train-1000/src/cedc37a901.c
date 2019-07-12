#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    char entity_5[35];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    entity_4 = 69;            // Tag.BODY
    if(entity_7 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 18;            // Tag.BODY
    }                         // Tag.BODY
    char entity_8[15];        // Tag.BODY
    entity_5[entity_7] = '6'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;             // Tag.BODY
    entity_3 = 66;            // Tag.BODY
    entity_8[entity_3] = 'c'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER