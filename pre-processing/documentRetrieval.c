//
// Created by Jeff Schulthies on 11/26/15.
//

#include <glob.h>
#include "documentRetrieval.h"
#include "string.h"
#include "glob.h"

//TODO Close function

struct userDocuments {
    char* searchString;
    char* documentResults[];
};

struct userDocuments* user_documents_init(char* searchString) {

}

FILE* openFile(char* fileName) {
    glob_t *result = NULL;
    //FILE* textFile;

    int retval = glob(fileName, 0, 0, result);
    //textFile = fopen(fileName, "r");
    //if(!textFile)
    //    return NULL;
    //else
    //    return textFile;
    result->gl_pathv;
}


void closeFile(FILE* textFile) {
    fclose(textFile);
}