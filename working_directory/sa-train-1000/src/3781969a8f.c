#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_1;                                       // Tag.BODY
    int entity_7;                                       // Tag.BODY
    char entity_3[84];                                  // Tag.BODY
    entity_1 = 32;                                      // Tag.BODY
    for(entity_7 = 2; entity_7 < entity_1; entity_7++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_3[entity_7] = 'c';                           // Tag.BUFWRITE_COND_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER