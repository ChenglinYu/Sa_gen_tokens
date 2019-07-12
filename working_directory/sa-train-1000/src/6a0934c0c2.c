#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[8];                                    // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_8 = 38;                                       // Tag.BODY
    for(entity_9 = 27; entity_9 < entity_8; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_9] = '0';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER