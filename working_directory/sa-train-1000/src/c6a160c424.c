#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[38];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_3[70];                                   // Tag.BODY
    entity_0 = 32;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 62;                                       // Tag.BODY
    for(entity_1 = 10; entity_1 < entity_0; entity_1++){ // Tag.BODY
    entity_5[entity_9] = 'n';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_3[entity_1] = '7';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER