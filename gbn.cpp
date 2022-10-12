#include<string.h>
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
float xpos = 125, xpos2 = 125, xpos3 = 125, ypos = 430, ypos2 = 400, ypos3 = 370, xpos4 = 425, ypos4 = 385, xpos5 = 425, ypos5 = 355, xpos6 = 425, ypos6 = 325, xpos7 = 125, ypos7 = 330, xpos8 = 125, ypos8 = 300, xpos9 = 125, ypos9 = 260, xpos10 = 125, ypos10 = 230, xpos11 = 125, ypos11 = 200, xpos12 = 425, ypos12 = 215, xpos13 = 425, ypos13 = 185, xpos14 = 425, ypos14 = 165;
int n, i = 0;
void Functions();
void Init() {
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 1000.0, 0.0, 1000.0);
}
void reshape(int w, int h)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 600.0, 0.0, 600.0);
	glMatrixMode(GL_MODELVIEW);
}
void client() { //client pc 
	glPushMatrix();
	glTranslatef(5.0, 0.0, 0.0);
	const char* client = "S E N D E R";
	int len = strlen(client);
	glRasterPos3f(100.0, 450.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, client[i]);

	glPopMatrix();
	glutPostRedisplay();
	glColor3f(0.0, 0.5, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(105, 505);
	glVertex2i(145, 505);
	glVertex2i(145, 545);
	glVertex2i(105, 545);
	glEnd();
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_LINE_LOOP);
	glVertex2i(100, 500);
	glVertex2i(150, 500);
	glVertex2i(150, 550);
	glVertex2i(100, 550);
	glEnd();
	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(120, 500);
	glVertex2i(130, 500);
	glVertex2i(130, 485);
	glVertex2i(120, 485);
	glEnd();
	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(110, 485);
	glVertex2i(140, 485);
	glVertex2i(140, 495);
	glVertex2i(110, 495);
	glEnd();
}
void server() { //server pc 
	glPushMatrix();
	glTranslatef(340.0, 0.0, 0.0);
	const char* server = "R E C E I V E R";
	int len = strlen(server);
	glRasterPos3f(60.0, 450.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, server[i]);

	glPopMatrix();
	glutPostRedisplay();
	glColor3f(0.0, 0.5, 1.0);
	glBegin(GL_POLYGON);
	glVertex2i(405, 505);
	glVertex2i(445, 505);
	glVertex2i(445, 545);
	glVertex2i(405, 545);
	glEnd();
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_LINE_LOOP);
	glVertex2i(400, 500);
	glVertex2i(450, 500);
	glVertex2i(450, 550);
	glVertex2i(400, 550);
	glEnd();
	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(420, 500);
	glVertex2i(430, 500);
	glVertex2i(430, 485);
	glVertex2i(420, 485);
	glEnd();
	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(410, 485);
	glVertex2i(440, 485);
	glVertex2i(440, 495);
	glVertex2i(410, 495);
	glEnd();
}
void conn() {
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(125, 100);
	glVertex2i(125, 430);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(425, 100);
	glVertex2i(425, 430);
	glEnd();
}
void line1() {

	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);

	const char* line1 = "Set Timer for 0";
	int len = strlen(line1);
	glRasterPos3f(50.0, 430.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line1[i]);

	glPopMatrix();
	glutPostRedisplay();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(125, 430);
	glVertex2i(425, 400);
	glEnd();
}
void line2() {

	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);

	const char* line2 = "Set Timer for 1";
	int len = strlen(line2);
	glRasterPos3f(50.0, 400.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line2[i]);

	glPopMatrix();
	glutPostRedisplay();


	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(125, 400);
	glVertex2i(425, 370);
	glEnd();
}
void line3() {

	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);

	const char* line3 = "Set Timer for 2";
	int len = strlen(line3);
	glRasterPos3f(50.0, 370.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line3[i]);

	glPopMatrix();
	glutPostRedisplay();


	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(125, 370);
	glVertex2i(425, 340);
	glEnd();
}
void line4() {

	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);

	const char* line4 = "A C K 0";
	int len = strlen(line4);
	glRasterPos3f(425.0, 385.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line4[i]);

	glPopMatrix();
	glutPostRedisplay();


	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_LINES);
	glVertex2i(125, 330);
	glVertex2i(425, 385);
	glEnd();
}
void line5() {
	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);
	const char* line5 = "A C K 1";
	int len = strlen(line5);
	glRasterPos3f(425.0, 355.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line5[i]);
	glPopMatrix();
	glutPostRedisplay();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(125, 300);
	glVertex2i(425, 355);
	glEnd();
}
void line6() {
	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);
	const char* line6 = "A C K 2";
	int len = strlen(line6);
	glRasterPos3f(425.0, 325.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line6[i]);

	glPopMatrix();
	glutPostRedisplay();
	glBegin(GL_LINES);
	glVertex2i(350, 290);
	glVertex2i(425, 325);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(345, 295);
	glVertex2i(352, 285);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(345, 285);
	glVertex2i(352, 295);
	glEnd();
}
void line7() {
	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);
	const char* line7 = "Close Timer for 0 Send 3";
	int len = strlen(line7);
	glRasterPos3f(20.0, 325.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line7[i]);

	glPopMatrix();
	glutPostRedisplay();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(125, 325);
	glVertex2i(425, 310);
	glEnd();
}
void line8() {
	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);
	const char* line8 = "Close Timer for 1 Send 4";
	int len = strlen(line8);
	glRasterPos3f(20.0, 295.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line8[i]);

	glPopMatrix();
	glutPostRedisplay();

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(125, 295);
	glVertex2i(425, 280);
	glEnd();
}
void line9() {
	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);
	const char* line9 = "Time-out for 2";
	int len = strlen(line9);
	glRasterPos3f(50.0, 255.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line9[i]);

	glPopMatrix();
	glutPostRedisplay();
	glBegin(GL_LINES);
	glVertex2i(118, 195);
	glVertex2i(125, 195);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(118, 290);
	glVertex2i(125, 290);
	glEnd();
}
void line10() {
	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);
	const char* line10 = "Send all frames again";
	int len = strlen(line10);
	glRasterPos3f(35.0, 225.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line10[i]);

	glPopMatrix();
	glutPostRedisplay();
	glBegin(GL_LINES);
	glVertex2i(118, 195);
	glVertex2i(118, 290);
	glEnd();
}
void line11() {
	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);
	const char* line11 = "A C K 2";
	int len = strlen(line11);
	glRasterPos3f(425.0, 215.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line11[i]);

	glPopMatrix();
	glutPostRedisplay();
	glBegin(GL_LINES);
	glVertex2i(125, 260);
	glVertex2i(425, 230);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(125, 230);
	glVertex2i(425, 200);
	glEnd();
}
void line12() {
	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);
	const char* line12 = "A C K 3";
	int len = strlen(line12);
	glRasterPos3f(425.0, 195.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line12[i]);

	glPopMatrix();
	glutPostRedisplay();
	glBegin(GL_LINES);
	glVertex2i(125, 200);
	glVertex2i(425, 170);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(125, 160);
	glVertex2i(425, 215);
	glEnd();
}
void line13() {
	glPushMatrix();
	glTranslatef(10.0, 0.0, 0.0);
	const char* line13 = "A C K 4";
	int len = strlen(line13);
	glRasterPos3f(425.0, 165.0, 0.0);
	for (int i = 0; i < len; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, line13[i]);

	glPopMatrix();
	glutPostRedisplay();
	glBegin(GL_LINES);
	glBegin(GL_LINES);
	glVertex2i(125, 135);
	glVertex2i(425, 185);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(125, 115);
	glVertex2i(425, 165);
	glEnd();
}
void timer(int) {
	int i = 1;
	glutPostRedisplay();
	glutTimerFunc(1000 / 24, timer, 0);
	if (i == 1) {
		if (xpos > 120 && ypos > 400) {
			xpos += 2;
			ypos -= 0.2;
		}
		if (xpos > 160 && xpos2 < 420 && ypos2>370) {
			xpos2 += 2;
			ypos2 -= 0.2;
		}
		if (xpos > 200 && xpos3 < 420 && ypos3>340) {
			xpos3 += 2;
			ypos3 -= 0.2;
		}
		if (xpos3 > 420 && xpos4 > 120 && ypos4 > 310) {
			glColor3f(0, 0, 0);
			xpos4 -= 2;
			ypos4 -= 0.345;
		}
		if (xpos3 > 420 && xpos5 > 120 && ypos5 > 280) {
			glColor3f(0, 0, 0);
			xpos5 -= 2;
			ypos5 -= 0.345;
		}
		if (xpos3 > 420 && xpos6 > 350 && ypos6 > 280) {
			glColor3f(0, 0, 0);
			xpos6 -= 2;
			ypos6 -= 0.75;
		}
		if (xpos5 < 130 && xpos7 < 420 && ypos7>280) {
			xpos7 += 2;
			ypos7 -= 0.2;
		}
		if (xpos5 < 130 && xpos8 < 420 && ypos8>100) {
			xpos8 += 2;
			ypos8 -= 0.2;
		}
		if (xpos8 > 420 && xpos9 < 420 && ypos9>200) {
			xpos9 += 2;
			ypos9 -= 0.2;
		}
		if (xpos8 > 420 && xpos10 < 420 && ypos10>200) {
			xpos10 += 2;
			ypos10 -= 0.2;
		}
		if (xpos8 > 420 && xpos11 < 420 && ypos11>100) {
			xpos11 += 2;
			ypos11 -= 0.2;
		}
		if (xpos9 > 420 && xpos12 > 120 && ypos12 > 100) {
			xpos12 -= 2;
			ypos12 -= 0.39;
		}
		if (xpos9 > 420 && xpos13 > 120 && ypos13 > 100) {
			xpos13 -= 2;
			ypos13 -= 0.35;
		}
		if (xpos9 > 420 && xpos14 > 120 && ypos14 > 100) {
			xpos14 -= 2;
			ypos14 -= 0.35;
		}
	}
}
void arrows() {
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(420, 405);
	glVertex2i(420, 395);
	glVertex2i(425, 400);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(420, 375);
	glVertex2i(420, 365);
	glVertex2i(425, 370);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(420, 345);
	glVertex2i(420, 335);
	glVertex2i(425, 340);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(130, 325);
	glVertex2i(130, 335);
	glVertex2i(125, 330);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(130, 305);
	glVertex2i(130, 295);
	glVertex2i(125, 300);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(420, 285);
	glVertex2i(420, 275);
	glVertex2i(425, 280);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(420, 305);
	glVertex2i(420, 315);
	glVertex2i(425, 310);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(420, 235);
	glVertex2i(420, 225);
	glVertex2i(425, 230);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(420, 205);
	glVertex2i(420, 195);
	glVertex2i(425, 200);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(420, 175);
	glVertex2i(420, 165);
	glVertex2i(425, 170);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(130, 165);
	glVertex2i(130, 155);
	glVertex2i(125, 160);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(130, 140);
	glVertex2i(130, 130);
	glVertex2i(125, 135);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i(130, 110);
	glVertex2i(130, 120);
	glVertex2i(125, 115);
	glEnd();

}
void upload() {
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	Functions();
	glBegin(GL_POLYGON);
	glVertex2i(xpos, ypos);
	glVertex2i(xpos, ypos + 10);
	glVertex2i(xpos + 6, ypos + 10);
	glVertex2i(xpos + 10, ypos + 8);
	glVertex2i(xpos + 10, ypos);
	glEnd();
	if (xpos > 420 && ypos > 395) {
		glClear(GL_COLOR_BUFFER_BIT);
		Functions();
	}
	glBegin(GL_POLYGON);
	glVertex2i(xpos2, ypos2);
	glVertex2i(xpos2, ypos2 + 10);
	glVertex2i(xpos2 + 6, ypos2 + 10);
	glVertex2i(xpos2 + 10, ypos2 + 8);
	glVertex2i(xpos2 + 10, ypos2);
	glEnd();
	if (xpos2 > 420 && ypos2 > 365) {
		glClear(GL_COLOR_BUFFER_BIT);
		Functions();		
	}
	glBegin(GL_POLYGON);
	glVertex2i(xpos3, ypos3);
	glVertex2i(xpos3, ypos3 + 10);
	glVertex2i(xpos3 + 6, ypos3 + 10);
	glVertex2i(xpos3 + 10, ypos3 + 8);
	glVertex2i(xpos3 + 10, ypos3);
	glEnd();
	if (xpos3 > 420 && ypos3 > 335) {
		glClear(GL_COLOR_BUFFER_BIT);
		Functions();
		glBegin(GL_POLYGON);
		glVertex2i(xpos4, ypos4);
		glVertex2i(xpos4, ypos4 + 10);
		glVertex2i(xpos4 + 6, ypos4 + 10);
		glVertex2i(xpos4 + 10, ypos4 + 8);
		glVertex2i(xpos4 + 10, ypos4);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(xpos5, ypos5);
		glVertex2i(xpos5, ypos5 + 10);
		glVertex2i(xpos5 + 6, ypos5 + 10);
		glVertex2i(xpos5 + 10, ypos5 + 8);
		glVertex2i(xpos5 + 10, ypos5);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(xpos6, ypos6);
		glVertex2i(xpos6, ypos6 + 10);
		glVertex2i(xpos6 + 6, ypos6 + 10);
		glVertex2i(xpos6 + 10, ypos6 + 8);
		glVertex2i(xpos6 + 10, ypos6);
		glEnd();
	}
	if (xpos4 <128 ) {
		glClear(GL_COLOR_BUFFER_BIT);
		Functions();
	}
	if (xpos5 < 128 ) {
		glClear(GL_COLOR_BUFFER_BIT);
		Functions();
		glBegin(GL_POLYGON);
		glVertex2i(xpos7, ypos7);
		glVertex2i(xpos7, ypos7 + 10);
		glVertex2i(xpos7 + 6, ypos7 + 10);
		glVertex2i(xpos7 + 10, ypos7 + 8);
		glVertex2i(xpos7 + 10, ypos7);
		glEnd();
		glBegin(GL_POLYGON);//file 8 ke liye hai
		glVertex2i(xpos8, ypos8);
		glVertex2i(xpos8, ypos8 + 10);
		glVertex2i(xpos8 + 6, ypos8 + 10);
		glVertex2i(xpos8 + 10, ypos8 + 8);
		glVertex2i(xpos8 + 10, ypos8);
		glEnd();
	}
	if (xpos6 <128 ) {
		glClear(GL_COLOR_BUFFER_BIT);
		Functions();		
	}
	if (xpos7 > 420 ) {
		glClear(GL_COLOR_BUFFER_BIT);
		Functions();
	}
	if (xpos8 > 420 ) {
		glClear(GL_COLOR_BUFFER_BIT);
		Functions();
		glBegin(GL_POLYGON);
		glVertex2i(xpos9, ypos9);
		glVertex2i(xpos9, ypos9 + 10);
		glVertex2i(xpos9 + 6, ypos9 + 10);
		glVertex2i(xpos9 + 10, ypos9 + 8);
		glVertex2i(xpos9 + 10, ypos9);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(xpos10, ypos10);
		glVertex2i(xpos10, ypos10 + 10);
		glVertex2i(xpos10 + 6, ypos10 + 10);
		glVertex2i(xpos10 + 10, ypos10 + 8);
		glVertex2i(xpos10 + 10, ypos10);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(xpos11, ypos11);
		glVertex2i(xpos11, ypos11 + 10);
		glVertex2i(xpos11 + 6, ypos11 + 10);
		glVertex2i(xpos11 + 10, ypos11 + 8);
		glVertex2i(xpos11 + 10, ypos11);
		glEnd();
	}
	if (xpos9 > 420) {
		glClear(GL_COLOR_BUFFER_BIT);
		Functions();
		glBegin(GL_POLYGON);
		glVertex2i(xpos12, ypos12);
		glVertex2i(xpos12, ypos12 + 10);
		glVertex2i(xpos12 + 6, ypos12 + 10);
		glVertex2i(xpos12 + 10, ypos12 + 8);
		glVertex2i(xpos12 + 10, ypos12);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(xpos13, ypos13);
		glVertex2i(xpos13, ypos13 + 10);
		glVertex2i(xpos13 + 6, ypos13 + 10);
		glVertex2i(xpos13 + 10, ypos13 + 8);
		glVertex2i(xpos13 + 10, ypos13);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2i(xpos14, ypos14);
		glVertex2i(xpos14, ypos14 + 10);
		glVertex2i(xpos14 + 6, ypos14 + 10);
		glVertex2i(xpos14 + 10, ypos14 + 8);
		glVertex2i(xpos14 + 10, ypos14);
		glEnd();
	}
	glutSwapBuffers();
}
void Functions() {
	glColor3f(0, 0.5, 0.5);
	client();
	glColor3f(0.5, 0.5, 0.5);
	server();
	glColor3f(0.5, 0, 0);
	arrows();
	conn();
	line1();
	line2();
	line3();
	line4();
	line5();
	line6();
	line7();
	line8();
	line9();
	line10();
	line11();
	line12();
	line13();
	glColor3f(1, 1, 1);
}
int main(int argc, char** argv)
{
	int ch;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("opengl mini project");
	Init();
	glutDisplayFunc(upload);
	glutTimerFunc(1000, timer, 0);
	glutReshapeFunc(reshape);
	glutMainLoop();
}
