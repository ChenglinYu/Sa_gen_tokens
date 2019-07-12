#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_9[37];                                   // Tag.BODY
    entity_6 = 79;                                       // Tag.BODY
    for(entity_0 = 90; entity_0 < entity_6; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_0] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER