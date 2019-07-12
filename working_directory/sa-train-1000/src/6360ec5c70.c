#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_6;                                       // Tag.BODY
    int entity_4;                                       // Tag.BODY
    entity_4 = 23;                                      // Tag.BODY
    char entity_7[8];                                   // Tag.BODY
    for(entity_6 = 4; entity_6 < entity_4; entity_6++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_7[entity_6] = 'f';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER