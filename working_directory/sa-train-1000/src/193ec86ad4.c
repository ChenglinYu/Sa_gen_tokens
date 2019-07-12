#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_3 = rand();                                   // Tag.BODY
    char entity_9[81];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_2 = 5;                                        // Tag.BODY
    if (entity_3 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_3 = 4;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 73; entity_0 < entity_3; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_0] = 'H';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER