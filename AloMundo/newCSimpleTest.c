/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newCSimpleTest.c
 * Author: aluno
 *
 * Created on 16 de Julho de 2018, 15:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Simple C Test Suite
 */

void test1() {
    printf("newCSimpleTest test 1\n");
}

void test2() {
    printf("newCSimpleTest test 2\n");
    printf("%%TEST_FAILED%% time=0 testname=test2 (newCSimpleTest) message=error message sample\n");
}

int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% newCSimpleTest\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%% test1 (newCSimpleTest)\n");
    test1();
    printf("%%TEST_FINISHED%% time=0 test1 (newCSimpleTest) \n");

    printf("%%TEST_STARTED%% test2 (newCSimpleTest)\n");
    test2();
    printf("%%TEST_FINISHED%% time=0 test2 (newCSimpleTest) \n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
