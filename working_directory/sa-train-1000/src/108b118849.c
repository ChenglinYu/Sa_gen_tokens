#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    char entity_9[87];                                  // Tag.BODY
    int entity_7;                                       // Tag.BODY
    entity_7 = 71;                                      // Tag.BODY
    int entity_3;                                       // Tag.BODY
    for(entity_3 = 7; entity_3 < entity_7; entity_3++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_9[entity_3] = 'a';                           // Tag.BUFWRITE_COND_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER