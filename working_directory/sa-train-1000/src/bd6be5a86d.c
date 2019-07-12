#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_2[86];                                   // Tag.BODY
    entity_5 = 87;                                       // Tag.BODY
    for(entity_9 = 32; entity_9 < entity_5; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_9] = 'L';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER