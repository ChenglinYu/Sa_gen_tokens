#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_5;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    char entity_4[90];                                  // Tag.BODY
    entity_5 = 63;                                      // Tag.BODY
    for(entity_3 = 0; entity_3 < entity_5; entity_3++){ // Tag.BODY
    }                                                   // Tag.BODY
    int entity_0;                                       // Tag.BODY
    entity_0 = 86;                                      // Tag.BODY
    entity_4[entity_3] = 'y';                           // Tag.BUFWRITE_COND_SAFE
    char entity_9[58];                                  // Tag.BODY
    entity_9[entity_0] = 'V';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER