#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_5[27];                                   // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_4 = 4;                                        // Tag.BODY
    if (entity_7 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 39;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 77; entity_2 < entity_7; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_2] = 'r';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER