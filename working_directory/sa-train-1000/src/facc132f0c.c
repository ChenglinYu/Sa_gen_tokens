#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_0;                                       // Tag.BODY
    int entity_5;                                       // Tag.BODY
    int entity_4;                                       // Tag.BODY
    char entity_3[47];                                  // Tag.BODY
    char entity_9[17];                                  // Tag.BODY
    entity_0 = 99;                                      // Tag.BODY
    int entity_7;                                       // Tag.BODY
    char entity_1[41];                                  // Tag.BODY
    entity_3[entity_0] = 'X';                           // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 87;                                      // Tag.BODY
    entity_7 = 51;                                      // Tag.BODY
    entity_9[entity_5] = 'e';                           // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_4 = 6; entity_4 < entity_7; entity_4++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_1[entity_4] = 'u';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER