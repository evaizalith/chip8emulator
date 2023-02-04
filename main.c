#include <stdio.h>
#include <stdbool.h>
#include <GL/glut.h>
#include "cpu.h"

void draw() {
    glClear(GLUT_SINGLE | GLUT_RGB);
    glMatrixMode(GL_PROJECTION);    

    for(int i = 0; i < 64; i++) {
        for(int j = 0; j < 32; j++) {
            glBegin(GL_POINTS);

            if (display[i][j] == true) glColor3f(255, 255, 255);
            else glColor3f(1, 1, 1);

            glVertex2i(i, j);
            glEnd();
        }
    }
}

int main(int argc, char* argv[]) {

    for(int i = 0; i < 64; i++) {
        for(int j = 0; j < 32; j++) {
            if(i == j) {
                display[i][j] = true;
            } else display[i][j] = false;
        }
    }

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(64, 32);
    glViewport(0, 0, 640, 320);
    glutCreateWindow("CHIP-8 Emulator");
 
    glutDisplayFunc(draw);

    glutMainLoop();

    return 0;
}