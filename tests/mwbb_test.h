#ifndef MWBB_TEST_H
#define MWBB_TEST_H

#include "shared.h"


TEST(mwbb_test, test1) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output11.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output11.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input11.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input11.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt, 1, 3);
   mwbb(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected11.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected11.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output11.txt", "r") : outputData = fopen("../../testing2/tests/output/output11.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mwbb_test, test2) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output12.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output12.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input12.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input12.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt, 3, 3);
   mwbb(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected12.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected12.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output12.txt", "r") : outputData = fopen("../../testing2/tests/output/output12.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mwbb_test, test3) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output13.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output13.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input12.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input12.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt, 3, 12);
   mwbb(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected13.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected13.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output13.txt", "r") : outputData = fopen("../../testing2/tests/output/output13.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mwbb_test, test4) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output14.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output14.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input12.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input12.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt, 3, 24);
   mwbb(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected14.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected14.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output14.txt", "r") : outputData = fopen("../../testing2/tests/output/output14.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mwbb_test, test5) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output15.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output15.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input12.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input12.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt, 3, 25);
   mwbb(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected15.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected15.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output15.txt", "r") : outputData = fopen("../../testing2/tests/output/output15.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

TEST(mwbb_test, test6) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output16.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output16.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input12.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input12.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

    mwcrsr(txt, 3, 27);
   mwbb(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected16.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected16.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output16.txt", "r") : outputData = fopen("../../testing2/tests/output/output16.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}
TEST(mwbb_test, test7) {
    /*
        Open output file
    */
    FILE *outputFile;
    TRAVIS ? outputFile = fopen("tests/output/output17.txt", "wb") : outputFile = fopen("../../testing2/tests/output/output17.txt", "wb");
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
    TRAVIS ? strncpy(inFile, "tests/input/input12.txt", MAXLINE) : strncpy(inFile, "../../testing2/tests/input/input12.txt", MAXLINE);
    load(txt, inFile);

    /*
        Run test function
    */

   mwcrsr(txt, 3, 28);
   mwbb(txt);
   show(txt);

    /*
        Close output file
    */

    returnStream(outputFile, oldstdOut);

    /*
        Execute test
    */

    FILE *expectedData;
    TRAVIS ? expectedData = fopen("tests/expected/expected17.txt", "r") : expectedData = fopen("../../testing2/tests/expected/expected17.txt", "r");
    FILE *outputData;
    TRAVIS ? outputData = fopen("tests/output/output17.txt", "r") : outputData = fopen("../../testing2/tests/output/output17.txt", "r");

    if (executeTest(expectedData, outputData) == 1) {
        SUCCEED();
    } else {
        FAIL();
    }
}

//12, 24, 25, 27, 28
#endif // MWBB_TEST_H
