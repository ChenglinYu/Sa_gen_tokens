#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_9[11];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_1 = 64;                                       // Tag.BODY
    for(entity_2 = 34; entity_2 < entity_1; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_2] = 'y';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER