#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_3;                                       // Tag.BODY
    entity_3 = 11;                                      // Tag.BODY
    char entity_1[76];                                  // Tag.BODY
    int entity_0;                                       // Tag.BODY
    for(entity_0 = 7; entity_0 < entity_3; entity_0++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_1[entity_0] = '3';                           // Tag.BUFWRITE_COND_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER