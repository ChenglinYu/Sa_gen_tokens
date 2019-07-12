#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_2;                                       // Tag.BODY
    char entity_0[23];                                  // Tag.BODY
    int entity_9;                                       // Tag.BODY
    entity_9 = 33;                                      // Tag.BODY
    for(entity_2 = 9; entity_2 < entity_9; entity_2++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_0[entity_2] = 's';                           // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER