#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_2;                                       // Tag.BODY
    int entity_6;                                       // Tag.BODY
    entity_2 = 52;                                      // Tag.BODY
    char entity_7[77];                                  // Tag.BODY
    for(entity_6 = 4; entity_6 < entity_2; entity_6++){ // Tag.BODY
    }                                                   // Tag.BODY
    int entity_9;                                       // Tag.BODY
    entity_9 = 46;                                      // Tag.BODY
    entity_7[entity_6] = 'V';                           // Tag.BUFWRITE_COND_SAFE
    char entity_1[45];                                  // Tag.BODY
    entity_1[entity_9] = 'S';                           // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER