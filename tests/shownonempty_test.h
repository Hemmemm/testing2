#ifndef SHOWNONEMPTY_TEST_H
#define SHOWNONEMPTY_TEST_H

#include "shared.h"


TEST(showNonEmpty_test, test1) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output21.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output21.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input21.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input21.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    shownonempty(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected21.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected21.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output21.txt", "r") : outputData = fopen("../../testing2/tests/output/output21.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(showNonEmpty_test, test2) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output22.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output22.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input22.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input22.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    shownonempty(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected22.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected22.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output22.txt", "r") : outputData = fopen("../../testing2/tests/output/output22.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(showNonEmpty_test, test3) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output23.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output23.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input23.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input23.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    shownonempty(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected23.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected23.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output23.txt", "r") : outputData = fopen("../../testing2/tests/output/output23.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(showNonEmpty_test, test4) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output24.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output24.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input24.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input24.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    shownonempty(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected24.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected24.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output24.txt", "r") : outputData = fopen("../../testing2/tests/output/output24.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(showNonEmpty_test, test5) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output25.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output25.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input25.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input25.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    shownonempty(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected25.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected25.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output25.txt", "r") : outputData = fopen("../../testing2/tests/output/output25.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

#endif // SHOWNONEMPTY_TEST_H
