#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 2;                                        // Tag.BODY
    char entity_0[94];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    if (entity_4 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 78;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 30; entity_7 < entity_4; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_7] = '2';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER