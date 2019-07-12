#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[61];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 3;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    for(entity_9 = 91; entity_9 < entity_1; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_9] = 'S';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER