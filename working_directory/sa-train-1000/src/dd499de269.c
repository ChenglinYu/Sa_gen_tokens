#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_5;                                       // Tag.BODY
    entity_5 = rand();                                  // Tag.BODY
    char entity_2[24];                                  // Tag.BODY
    int entity_9;                                       // Tag.BODY
    int entity_4;                                       // Tag.BODY
    entity_9 = 21;                                      // Tag.BODY
    if (entity_5 < entity_9){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_5 = 69;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_4 = 6; entity_4 < entity_5; entity_4++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_2[entity_4] = 'U';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER