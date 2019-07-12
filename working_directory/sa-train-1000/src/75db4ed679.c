#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_1[86];                                   // Tag.BODY
    entity_2 = 21;                                       // Tag.BODY
    for(entity_9 = 21; entity_9 < entity_2; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_9] = 'P';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER