#ifndef RC_TEST_H
#define RC_TEST_H

#include "shared.h"

TEST(rc_test, test1) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output01.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output01.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input01.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input01.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */
   mwcrsr(txt, 2, 1);
   remove_current_line(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected01.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected01.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output01.txt", "r") : outputData = fopen("../../testing2/tests/output/output01.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(rc_test, test2) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output02.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output02.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input02.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input02.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */
   mwcrsr(txt, 1, 1);
   remove_current_line(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected02.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected02.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output02.txt", "r") : outputData = fopen("../../testing2/tests/output/output02.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(rc_test, test3) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output03.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output03.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input03.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input03.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */
   mwcrsr(txt, 1, 1);
   remove_current_line(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected03.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected03.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output03.txt", "r") : outputData = fopen("../../testing2/tests/output/output03.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(rc_test, test4) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output04.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output04.txt", "wb");
    if (outputFile == NULL) {
        printf("Cannot open file for output");
        FAIL();
    }
    int oldstdOut = changeStream(outputFile);

    /*
        Load input data
    */

    text txt = create_text();
    char inFile[MAXLINE];
    TRAVIS ? strncpy(inFile, "tests/input/input04.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input04.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */
   mwcrsr(txt, 1, 1);
   remove_current_line(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected04.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected04.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output04.txt", "r") : outputData = fopen("../../testing2/tests/output/output04.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}


#endif // RC_TEST_H
