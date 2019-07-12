#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_2[89];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 84;                                       // Tag.BODY
    entity_9 = 3;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_4[35];                                   // Tag.BODY
    for(entity_1 = 72; entity_1 < entity_7; entity_1++){ // Tag.BODY
    entity_4[entity_9] = 'R';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_2[entity_1] = 'b';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER