// header.h: ǥ�� �ý��� ���� ����
// �Ǵ� ������Ʈ Ư�� ���� ������ ��� �ִ� ���� �����Դϴ�.
//

#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // ���� ������ �ʴ� ������ Windows ������� �����մϴ�.
// Windows ��� ����
#include <windows.h>
// C ��Ÿ�� ��� �����Դϴ�.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// STL
#include <vector>
#include <list>
#include <map>
#include <chrono>

/* ===========================================
================== �����ι� ==================
============================================ */

#define WINSTARTX 100
#define WINSTARTY 100
#define WINSIZEX  1280
#define WINSIZEY  720
#define WINSTYLE WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX
