#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_7;                                       // Tag.BODY
    char entity_8[1];                                   // Tag.BODY
    entity_7 = 22;                                      // Tag.BODY
    int entity_2;                                       // Tag.BODY
    entity_2 = 52;                                      // Tag.BODY
    char entity_9[63];                                  // Tag.BODY
    int entity_3;                                       // Tag.BODY
    for(entity_3 = 4; entity_3 < entity_2; entity_3++){ // Tag.BODY
    entity_9[entity_7] = 'C';                           // Tag.BUFWRITE_TAUT_SAFE
    }                                                   // Tag.BODY
    entity_8[entity_3] = 'f';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER