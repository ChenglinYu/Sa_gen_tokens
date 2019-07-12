#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_9[47];                                   // Tag.BODY
    entity_3 = 2;                                        // Tag.BODY
    for(entity_1 = 90; entity_1 < entity_3; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_9[entity_1] = 'Z';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 27;                                       // Tag.BODY
    char entity_7[89];                                   // Tag.BODY
    entity_7[entity_2] = '8';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER