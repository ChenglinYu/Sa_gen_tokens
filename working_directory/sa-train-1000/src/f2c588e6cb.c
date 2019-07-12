#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    char entity_4[20];                                   // Tag.BODY
    entity_9 = 29;                                       // Tag.BODY
    if (entity_3 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 67;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 27; entity_0 < entity_3; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_0] = 'T';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER