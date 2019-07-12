#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_5[53];                                  // Tag.BODY
    int entity_4;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_4 = 18;                                      // Tag.BODY
    for(entity_3 = 5; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                   // Tag.BODY
    char entity_6[31];                                  // Tag.BODY
    int entity_2;                                       // Tag.BODY
    int entity_7;                                       // Tag.BODY
    entity_5[entity_3] = '2';                           // Tag.BUFWRITE_COND_SAFE
    entity_7 = 25;                                      // Tag.BODY
    char entity_8[80];                                  // Tag.BODY
    entity_6[entity_7] = 'C';                           // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 5;                                       // Tag.BODY
    entity_8[entity_2] = 't';                           // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER