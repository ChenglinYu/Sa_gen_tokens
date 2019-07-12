#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_5[56];                                   // Tag.BODY
    entity_4 = 66;                                       // Tag.BODY
    for(entity_3 = 79; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_3] = 'c';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER