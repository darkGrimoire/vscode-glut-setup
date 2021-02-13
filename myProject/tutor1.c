#include <stdlib.h>
#include <GL/glut.h>

void draw(void){
  // TUTORIAL: TITIK
  // glClearColor(0, 0, 0, 1);
  // glClear(GL_COLOR_BUFFER_BIT);
  // glColor3f(1, 1, 1);
  // glBegin(GL_POINTS);

  // glVertex2f(-0.5, -0.5);
  // glVertex2f(-0.5, 0.5);
  // glVertex2f(0.5, 0.5);
  // glVertex2f(0.5, -0.5);

  // TUTORIAL: LINE
  // glClearColor(0, 0, 1, 1);
  // glClear(GL_COLOR_BUFFER_BIT);

  // glBegin(GL_LINES);
  // glColor3f(1, 0, 0);
  // glVertex2f(-0.5, -0.5);
  // glColor3f(0, 1, 0);
  // glVertex2f(0.5, 0.5);
  // glColor3f(0, 1, 1);
  // glVertex2f(-0.5, 0.5);
  // glColor3f(1, 0, 0);
  // glVertex2f(0.5, -0.5);
  

  // TUTORIAL: POLYGON
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_POLYGON);

  glColor3f(1,1,0);
  glVertex2f(-0.5, -0.5);
  glVertex2f(-0.75, 0);
  glVertex2f(-0.5, 0.5);
  glVertex2f(0, 0.75);
  glVertex2f(0.5, 0.5);
  glVertex2f(0.75, 0);
  glVertex2f(0.5, -0.5);
  glVertex2f(0, -0.75);

  // TUTORIAL: TRIANGLE
  // glClearColor(0, 1, 1, 1);
  // glClear(GL_COLOR_BUFFER_BIT);
  // glBegin(GL_TRIANGLE_STRIP);
  // glColor3f(0, 0, 1);
  // glVertex2f(-0.25, -0.25);
  // glColor3f(1, 0, 1);
  // glVertex2f(0, 0.25);
  // glColor3f(1, 0, 0);
  // glVertex2f(0.25, -0.25);
  // glColor3f(0, 0, 0);
  // glVertex2f(0.5, 0.25);
  // glColor3f(0, 0, 1);
  // glVertex2f(0.75, -0.25);
  // glVertex2f(1, 0.25);

  glEnd();
  glFlush();
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);

  glutCreateWindow("TRIANGLES");
  glutDisplayFunc(draw);
  glutMainLoop();

  return EXIT_SUCCESS;
}
