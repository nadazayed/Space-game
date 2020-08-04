#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

static int slices = 35;
static int stacks = 35;
static float x=0.0012;
static float xaxis=0, yaxis=0;
/* GLUT callback Handlers */

static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}

static void display(void)
{
    const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    const double a = t*90.0;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


glPushMatrix();
glTranslated(xaxis,yaxis,-9);
glRotated(20,1,0,1);

    glColor3d(1,0,0); //2
    glPushMatrix();
        glTranslated(5.0,-1.9,-7.5);
        glScaled(0.25,0.4,0.17);
        glRotated(-90,1,0,0);
        glutSolidCone(1.57,1.5,slices,stacks);
    glPopMatrix();

    glColor3d(1,1,1); //3
    glPushMatrix();
        glTranslated(5.0,-2.3,-7.5);
        glScaled(0.17,0.37,0.17);
        glutSolidCube(2);
    glPopMatrix();

    glColor3d(1,0,0); //4
    glPushMatrix();
        glTranslated(5.0,-2.7,-7.5);
        glScaled(0.25,0.4,0.17);
        glRotated(-90,1,0,0);
        glutSolidCone(1.57,1.5,slices,stacks);
    glPopMatrix();




    glColor3d(4,1,0); //1
    glPushMatrix();
        glTranslated(4.7,-2.9,-7.5);
        glScaled(0.19,0.19,0.19);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(4,1,0); //2
    glPushMatrix();
        glTranslated(4.6,-3,-7.5);
        glScaled(0.19,0.19,0.19);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(4,1,0); //3
    glPushMatrix();
        glTranslated(5.0,-3,-7.5);
        glScaled(0.26,0.26,0.26);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(4,1,0); //4
    glPushMatrix();
        glTranslated(5.3,-2.9,-7.5);
        glScaled(0.19,0.19,0.19);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(4,1,0); //5
    glPushMatrix();
        glTranslated(5.4,-3,-7.5);
        glScaled(0.19,0.19,0.19);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();
glPopMatrix();

    ////

    glColor3d(5,1,0); //sun
    glPushMatrix();
        glTranslated(-11,0,-10);
        glScaled(1,1.5,1);
        glutSolidSphere(5.5,slices+20,stacks+20);
    glPopMatrix();


    glColor3d(4,0,1); //plant 1
    glPushMatrix();
        glTranslated(5.5,0.1,-7.5);
        glScaled(0.17,0.17,0.17);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(3,1,0); //plant 2
    glPushMatrix();
        glTranslated(4.6,0.1,-7.5);
        glScaled(0.26,0.26,0.26);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

                        //plant 3
    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(3.5,0.1,-7.5);
        glScaled(0.42,0.42,0.42);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();



    ////////star
    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(1,1.8,-4.8);
        glScaled(x,x,x);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(2.5,1.8,-4.8);
        glScaled(x,x,x);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(2.2,-1.4,-4.8);
        glScaled(x,x,x);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(1.2,1.4,-4.8);
        glScaled(x,x,x);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(2.2,2.4,-4.8);
        glScaled(x,x,x);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(-1.4,-1.6,-4.8);
        glScaled(x,x,x);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(2.3,-1.0,-4.8);
        glScaled(x,x,x);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(-2.3,1.0,-4.8);
        glScaled(x,x,x);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(-2.1,-0.6,-4.8);
        glScaled(x,x,x);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(3,2.6,-4.8);
        glScaled(x,x,x);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(-2,-1.6,-4.8);
        glScaled(x,x,x);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

     glColor3d(1,1,1);
    glPushMatrix();
        glTranslated(3,-1.6,-4.8);
        glScaled(x,x,x);
        glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    ///// center
    glColor3d(1,1,1); //white
    glPushMatrix();
        glTranslated(0,0,-6.5);
        glScaled(0.2,0.2,0.2);
        glRotated(60,1,0,0);
        glRotated(a,0,0,1);
        glutSolidSphere(2,slices-10,stacks-10);
    glPopMatrix();
    //

    glColor3d(1,0,1); //pink
    glPushMatrix();
        glTranslated(-1.90,-0.6,-6.4);
        glScaled(0.10,0.10,0.10);
        glRotated(-60,1,0,0);
        glRotated(-a,0,0,1);
        glutSolidSphere(2,slices-15,stacks-15);
    glPopMatrix();

    glColor3d(0,1,0); //green
    glPushMatrix();
        glTranslated(1.5,-0.6,-4.9);
        glScaled(0.08,0.08,0.08);
        glRotated(60,1,0,0);
        glRotated(-a,0,0,1);
        glutSolidSphere(2,slices,stacks);
    glPopMatrix();

    glColor3d(0,1,1); //blue
    glPushMatrix();
        glTranslated(0.1,1.4,-6.5);
        glScaled(0.06,0.06,0.06);
        glRotated(60,1,0,0);
        glRotated(a,0,0,1);
        glutSolidSphere(2,slices,stacks);
    glPopMatrix();

    ///////// orbits
    glColor3d(5,1,0); //yellow
    glPushMatrix();
        glTranslated(0,0,-6);
        glRotated(-54,1,1,1);
        glRotated(-a,0,0,1);
        glutSolidTorus(0.008,2.0,slices+10,stacks+10);
    glPopMatrix();

    glColor3d(3,0,1); //blue
    glPushMatrix();
        glTranslated(0,0,-6);
        glRotated(-130,1,1,1);
        glRotated(a,1,1,0);
        glutSolidTorus(0.008,1.8,slices+10,stacks+10);
    glPopMatrix();

    glColor3d(2,1,0); //red with ball
    glPushMatrix();
        glTranslated(0,0,-6);
        glRotated(-90,1,1,1);
        glRotated(-a,1,0,0);
        glutSolidTorus(0.009,1.6,slices+10,stacks+10);
    glPopMatrix();

    glColor3d(7,1,1);// green
    glPushMatrix();
        glTranslated(0,0,-6);
        glRotated(-190,1,1,1);
        glRotated(a,1,0,0);
        glutSolidTorus(0.019,1.2,slices+10,stacks+10);
    glPopMatrix();

    glColor3d(7,1,1); //pink
    glPushMatrix();
        glTranslated(0,0,-6);
        glRotated(-20,1,1,1);
        glRotated(-a,1,0,0);
        glutSolidTorus(0.02,0.8,slices+10,stacks+10);
    glPopMatrix();

    glutSwapBuffers();
}


static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 27 :
        case 'q':
            exit(0);
            break;

        case '+':
            slices++;
            stacks++;
            break;

        case '-':
            if (slices>3 && stacks>3)
            {
                slices--;
                stacks--;
            }
            break;

        case 'w': //
            yaxis+=0.09;
            break;

        case 's':
            yaxis+=-0.09;
            break;


        case 'a':
            xaxis+=-0.09;
            break;

        case 'd': //
            xaxis+=0.09;
            break;

    }

    glutPostRedisplay();
}

static void idle(void)
{

    if(x<0.01)
        x+=0.00001;

        else
            x=0.004;

            //Sleep(100);
    glutPostRedisplay();
}

const GLfloat light_ambient[]  = { 0.0f, 0.0f, 0.0f, 1.0f };
const GLfloat light_diffuse[]  = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat light_position[] = { 2.0f, 5.0f, 5.0f, 0.0f };

const GLfloat mat_ambient[]    = { 0.7f, 0.7f, 0.7f, 1.0f };
const GLfloat mat_diffuse[]    = { 0.8f, 0.8f, 0.8f, 1.0f };
const GLfloat mat_specular[]   = { 1.0f, 1.0f, 1.0f, 1.0f };
const GLfloat high_shininess[] = { 100.0f };

/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1000,600);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(0,0,0,0);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    glEnable(GL_LIGHT0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING);

    glLightfv(GL_LIGHT0, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);

    glutMainLoop();

    return EXIT_SUCCESS;
}
