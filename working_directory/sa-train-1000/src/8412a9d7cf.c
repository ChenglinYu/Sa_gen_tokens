#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_2;                                       // Tag.BODY
    char entity_5[93];                                  // Tag.BODY
    entity_2 = 59;                                      // Tag.BODY
    char entity_8[38];                                  // Tag.BODY
    int entity_7;                                       // Tag.BODY
    int entity_4;                                       // Tag.BODY
    entity_7 = 77;                                      // Tag.BODY
    for(entity_4 = 8; entity_4 < entity_2; entity_4++){ // Tag.BODY
    }                                                   // Tag.BODY
    char entity_1[75];                                  // Tag.BODY
    entity_8[entity_4] = 'N';                           // Tag.BUFWRITE_COND_UNSAFE
    int entity_6;                                       // Tag.BODY
    entity_6 = 18;                                      // Tag.BODY
    entity_5[entity_7] = 'a';                           // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_6] = 'I';                           // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER