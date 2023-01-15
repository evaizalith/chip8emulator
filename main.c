#include <stdio.h>
#include <stdbool.h>
#include <GL/glut.h>
#include "cpu.h"


int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(64, 32);
    glutCreateWindow("CHIP-8 Emulator");

    glutMainLoop();

    return 0;
}