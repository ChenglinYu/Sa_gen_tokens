#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_4[60];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 36;                                       // Tag.BODY
    for(entity_7 = 35; entity_7 < entity_9; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_7] = 'M';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER