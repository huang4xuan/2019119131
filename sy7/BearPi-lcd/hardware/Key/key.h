#ifndef __KEYS_H_
#define __KEYS_H_
#include "main.h"

//������������
#define KEY_PRESS_LONG_TIME 100

//�˵�������ֵ����
#define KEY_F1        	1			/*��*/
#define KEY_F2 		    2			/*�󳤰�*/
#define KEY_F3			3			/*��*/
#define KEY_F4			4			/*�ҳ���*/

void PowerOn(void);
void GetKey(__IO uint8_t *pKeyValue);
void Key_F1(__IO uint8_t *pKeyValue);
void Key_F2(__IO uint8_t *pKeyValue);

#endif
