#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_6[69];                                  // Tag.BODY
    int entity_0;                                       // Tag.BODY
    int entity_3;                                       // Tag.BODY
    entity_0 = 70;                                      // Tag.BODY
    entity_3 = 32;                                      // Tag.BODY
    int entity_5;                                       // Tag.BODY
    char entity_1[83];                                  // Tag.BODY
    entity_1[entity_3] = 'I';                           // Tag.BUFWRITE_TAUT_SAFE
    for(entity_5 = 5; entity_5 < entity_0; entity_5++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_6[entity_5] = 'l';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER