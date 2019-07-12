#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    char entity_6[69];                                   // Tag.BODY
    entity_2 = 63;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    for(entity_3 = 57; entity_3 < entity_2; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_3] = 'U';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER