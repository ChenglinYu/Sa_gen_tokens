#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_7;                                       // Tag.BODY
    int entity_1;                                       // Tag.BODY
    char entity_8[9];                                   // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_1 = 11;                                      // Tag.BODY
    entity_7 = rand();                                  // Tag.BODY
    if (entity_7 < entity_1){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_7 = 8;                                       // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_3 = 1; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_8[entity_3] = 't';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER