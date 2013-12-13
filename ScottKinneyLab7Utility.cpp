// FILE Utility (menus) Stand-alone function definitions
/**
 * Program name: ScottKinneyLab7Utility.cpp
 * Discussion :  Lab 7 Exercise 1
 * Written by:   Scott Kinney
 * Date:         
 */
#include <iostream>
using namespace std;
#include "ScottKinneyLab7Utility.h"
#include "ScottKinneyLab7Shape.h"
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7Rectangle.h"
#include "ScottKinneyLab7Circle.h"
#include "ScottKinneyLab7Box.h"
#include "ScottKinneyLab7Cylinder.h"
#include "ScottKinneyLab7RectangleUtility.h"
#include "ScottKinneyLab7CircleUtility.h"
#include "ScottKinneyLab7CylinderUtility.h"
#include "ScottKinneyLab7BoxUtility.h"
//TODO put delete in class destructors
int const compareCount = 2;

void mainMenu(void) {
    int option;
    int const shapeArySize = 8;
    RectangleScottK *recPt1 = NULL;
    RectangleScottK *recPt2 = NULL;
    CircleScottK *cirPt1 = NULL;
    CircleScottK *cirPt2 = NULL;
    BoxScottK *boxPt1 = NULL;
    BoxScottK *boxPt2 = NULL;
    CylinderScottK *cylPt1 = NULL;
    CylinderScottK *cylPt2 = NULL;
    ShapeScottK *shapeAry[shapeArySize] 
	= {recPt1, recPt2, cirPt1, cirPt2, boxPt1, boxPt2, cylPt1, cylPt2};

    do {
	cout << "********************************************"
	     << "\n* MENU                                     *"
	     << "\n* (1) Create 2 ScottKRectangle Objects     *"
	     << "\n* (2) Create 2 ScottKCircle Objects        *"
	     << "\n* (3) Create 2 ScottKBox Objects           *"
	     << "\n* (4) Create 2 ScottKCylinder Objects      *"
	     << "\n* (5) Compare 2 Selected Objects by Area   *"
	     << "\n* (6) Compare 2 Selected Objects by Volume *"
	     << "\n* (7) Print Selected Objects               *"
	     << "\n* (8) Quit                                 *"
	     << "\n********************************************" << endl;
	cout << "Enter your option (1, 2, 3, 4, 5, 6, 7 or 8): ";
	cin >> option;

	switch (option) {
	case 1:
	    cout << "Rectangle 1\n";
	    (*(shapeAry + 0)) = rectangleInit(recPt1);
	    cout << "Rectangle 2\n";
	    (*(shapeAry + 1)) = rectangleInit(recPt2);
	    break;
	case 2:
	    cout << "Circle 1\n";
	    (*(shapeAry + 2)) = circleInit(cirPt1);
	    cout << "Circle 2\n";
	    (*(shapeAry + 3)) = circleInit(cirPt2);
	    break;
	case 3:
	    cout << "Box 1\n";
	    (*(shapeAry + 4)) = boxInit(boxPt1);
	    cout << "Box 2\n";
	    (*(shapeAry + 5)) = boxInit(boxPt2);
	    break;
	case 4:
	    cout << "Cylinder 1\n";
	    (*(shapeAry + 6)) = cylinderInit(cylPt1);
	    cout << "Cylinder 2\n";
	    (*(shapeAry + 7)) = cylinderInit(cylPt2);
	    break;
	case 5:
	    menuCompArea(shapeAry, shapeArySize);
	    break;
	case 6:
	    menuCompVol(shapeAry, shapeArySize);
	    break;
	case 7:
	    menuPrint(shapeAry, shapeArySize);
	    break;
	case 8:
	    /*	    delete cirPt1;
	    delete cirPt2;
	    delete recPt1;
	    delete recPt2;
	    delete boxPt1;
	    delete boxPt2;
	    delete cylPt1;
	    delete cylPt2;*/
	    break;
	default:
	    cout << "Wrong Option. Use 1 through 8";
	    cout << endl;
	}
    } while (option != 8);
}

void menuCompVol(ShapeScottK *shapeAry[], int shapeArySize) {
    int option;
    ShapeScottK *obj[compareCount];
    int i = 0;

    cout << "***********************************"
	 << "\n* MENU: Compare Objects by Volume *"
	 << "\n* (1) Box Object One              *"
	 << "\n* (2) Box Object Two              *"
	 << "\n* (3) Cylinder Object One         *"
	 << "\n* (4) Cylinder Object Two         *"
	 << "\n***********************************" << endl;
    cout << "Pick Two Objects to Compare (1 through 4):\n";

    do {
	cout << "Object " << i + 1 << ": ";
	cin >> option;

	switch (option) {
	case 1:
	    if ((*(shapeAry + 4) != NULL)) {
		cout << "Box One ";
		obj[i] = shapeAry[4]; 
		cout << **(obj + i) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 2:
	    if ((*(shapeAry + 5) != NULL)) {
		cout << "Box Two ";
		obj[i] = shapeAry[5]; 
		cout << **(obj + i) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 3:
	    if ((*(shapeAry + 6) != NULL)) {
		cout << "Cylinder One ";
		obj[i] = shapeAry[6]; 
		cout << **(obj + i) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 4:
	    if ((*(shapeAry + 7) != NULL)) {
		cout << "Cylinder Two ";
		obj[i] = shapeAry[7]; 
		cout << **(obj + i) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	default:
	    cout << "Wrong Option. Use 1 through 4";
	    cout << endl;
	}
    } while (i < compareCount);

    if (((**(obj + 0)).getVol()) < ((**(obj + 1)).getVol())) {
	cout << **(obj + 1) << "\nis larger than\n" << **(obj + 0) << "\nby " 
	     << ((**(obj + 1)).getVol()) - ((**(obj + 0)).getVol()) << endl;

    } else if (((**(obj + 1)).getVol()) < ((**(obj + 0)).getVol())) {
	cout << **(obj + 0) << "\nis larger than\n" << **(obj + 1) << "\nby: " 
	     << ((**(obj + 0)).getVol()) - ((**(obj + 1)).getVol()) << endl;

    } else if (((**(obj + 0)).getVol()) == ((**(obj + 1)).getVol())) {
	cout << **(obj + 0) << "\n&\n" << **(obj + 1) << "\nare equal " << endl;

    } else {
	cout << "Error" << endl;
    }
}

void menuCompArea(ShapeScottK *shapeAry[], int shapeArySize) {
    int option;
    ShapeScottK *obj[compareCount];
    int i = 0;

    cout << "**************************************"
	 << "\n* MENU: Compare Two Objects by Area  *"
	 << "\n* (1) Rectangle Object One           *"
	 << "\n* (2) Rectangle Object Two           *"
	 << "\n* (3) Box Object One                 *"
	 << "\n* (4) Box Object Two                 *"
	 << "\n* (5) Circle Object One              *"
	 << "\n* (6) Circle Object Two              *"
	 << "\n* (7) Cylinder Object One            *"
	 << "\n* (8) Cylinder Object Two            *"
	 << "\n**************************************" << endl;
    cout << "Pick Two Objects to Compare (1 through 8):\n";

    do {
	cout << "Object " << i + 1 << ": ";
	cin >> option;

	switch (option) {
	case 1:
	    if ((*(shapeAry + 0) != NULL)) {
		cout << "Rectangle One ";
		obj[i] = shapeAry[0]; 
		cout << **(obj + i) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 2:
	    if ((*(shapeAry + 1) != NULL)) {
		cout << "Rectangle Two ";
		obj[i] = shapeAry[1]; 
		cout << **(obj + i) << endl;;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 3:
	    if ((*(shapeAry + 4) != NULL)) {
		cout << "Box One ";
		obj[i] = shapeAry[4]; 
		cout << **(obj + i) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 4:
	    if ((*(shapeAry + 5) != NULL)) {
		cout << "Box Two ";
		obj[i] = shapeAry[5]; 
		cout << **(obj + i) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 5:
	    if ((*(shapeAry + 2) != NULL)) {
		cout << "Circle One ";
		obj[i] = shapeAry[2]; 
		cout << **(obj + i) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 6:
	    if ((*(shapeAry + 3) != NULL)) {
		cout << "Circle Two ";
		obj[i] = shapeAry[3]; 
		cout << **(obj + i) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 7:
	    if ((*(shapeAry + 6) != NULL)) {
		cout << "Cylinder One ";
		obj[i] = shapeAry[6]; 
		cout << **(obj + i) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 8:
	    if ((*(shapeAry + 7) != NULL)) {
		cout << "Cylinder Two ";
		obj[i] = shapeAry[7]; 
		cout << **(obj + i) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	default:
	    cout << "Wrong Option. Use 1 through 8";
	    cout << endl;
	}
    } while (i < compareCount);

    if (((**(obj + 0)).getArea()) < ((**(obj + 1)).getArea())) {
	cout << **(obj + 1) << "\nis larger than\n" << **(obj + 0) << "\nby " 
	     << ((**(obj + 1)).getArea()) - ((**(obj + 0)).getArea()) << endl;

    } else if (((**(obj + 1)).getArea()) < ((**(obj + 0)).getArea())) {
	cout << **(obj + 0) << "\nis larger than\n" << **(obj + 1) << "\nby: " 
	     << ((**(obj + 0)).getArea()) - ((**(obj + 1)).getArea()) << endl;

    } else if (((**(obj + 0)).getArea()) == ((**(obj + 1)).getArea())) {
	cout << **(obj + 0) << "\n&\n" << **(obj + 1) << "\nare equal " << endl;

    } else {
	cout << "Error" << endl;
    }
}

void menuPrint(ShapeScottK *shapeAry[], int shapeArySize) {
    int option;
    int i = 0;

    cout << "*************************************"
	 << "\n* MENU: Print Two Objects           *"
	 << "\n* (1) Rectangle Object One          *"
	 << "\n* (2) Rectangle Object Two          *"
	 << "\n* (3) Box Object One                *"
	 << "\n* (4) Box Object Two                *"
	 << "\n* (5) Circle Object One             *"
	 << "\n* (6) Circle Object Two             *"
	 << "\n* (7) Cylinder Object One           *"
	 << "\n* (8) Cylinder Object Two           *"
	 << "\n* (9) Print All Initialized Objects *"
	 << "\n*************************************" << endl;
    cout << "Pick Two Objects to Compare (1 through 9):\n";

    do {
	cin >> option;

	switch (option) {
	case 1:
	    if ((*(shapeAry + 0) != NULL)) {
		cout << "Rectangle One\n";
		cout << **(shapeAry + 0) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 2:
	    if ((*(shapeAry + 1) != NULL)) {
		cout << "Rectangle Two\n";
		cout << **(shapeAry + 1) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 3:
	    if ((*(shapeAry + 4) != NULL)) {
		cout << **(shapeAry + 4) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 4:
	    if ((*(shapeAry + 5) != NULL)) {
		cout << **(shapeAry + 5) << endl; 
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 5:
	    if ((*(shapeAry + 2) != NULL)) {
		cout << "Circle One\n";
		cout << **(shapeAry + 2) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 6:
	    if ((*(shapeAry + 3) != NULL)) {
		cout << "Circle Two\n";
		cout << **(shapeAry + 3)<< endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 7:
	    if ((*(shapeAry + 6) != NULL)) {
		cout << **(shapeAry + 6) << endl; 
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 8:
	    if ((*(shapeAry + 7) != NULL)) {
		cout << **(shapeAry + 7) << endl;
		i++;
	    } else {
		errorInit();
	    }
	    break;
	case 9:
	    menuPrintAllInit(shapeAry);
	    i = compareCount;
	    break;
	default:
	    cout << "Wrong Option. Use 1 through 9";
	    cout << endl;
	}
    } while (i < compareCount);
}

void menuPrintAllInit(ShapeScottK *shapeAry[]) {
    if (((*(shapeAry + 0)) != NULL))
	cout << "Rectangle 1: "<< (**(shapeAry + 0)) << endl;

    if (((*(shapeAry + 1)) != NULL))
	cout << "Rectangle 2: "<< (**(shapeAry + 1)) << endl;

    if (((*(shapeAry + 4)) != NULL))
	cout << "Box 1: " << (**(shapeAry + 4)) << endl;

    if (((*(shapeAry + 5)) != NULL))
	cout << "Box 2: " << (**(shapeAry + 5)) << endl;

    if (((*(shapeAry + 2)) != NULL)) 
	cout << "Circle 1: " << (**(shapeAry + 2)) << endl;

    if (((*(shapeAry + 3)) != NULL))
	cout << "Circle 2: " << (**(shapeAry + 3)) << endl;

    if (((*(shapeAry + 6)) != NULL))
	cout << "Cylinder 1: " << (**(shapeAry + 6)) << endl;

    if (((*(shapeAry + 7)) != NULL))
	cout << "Cylinder 2: " << (**(shapeAry + 7)) << endl;
}

void header(void) {
    cout << "\nCIS 25 - C++ Programming\n";
    cout << "Laney College\n";
    cout << "Scott Kinney\n\n";
    cout << "Assignment Information --\n";
    cout << "  Assignment Number: Lab 7\n";
    cout << "                     Exercise #1\n";
    cout << "  Written by:        Scott Kinney\n";
    cout << "  Due Date:          12/13/2013\n" << endl;
}

void errorInit(void) {
    cout << "Error: Object not initialized" << endl;
}
