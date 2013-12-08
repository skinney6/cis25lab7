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
#include "ScottKinneyLab7Fraction.h"
#include "ScottKinneyLab7Rectangle.h"
#include "ScottKinneyLab7Circle.h"
#include "ScottKinneyLab7Box.h"
#include "ScottKinneyLab7Cylinder.h"
#include "ScottKinneyLab7RectangleUtility.h"
#include "ScottKinneyLab7CircleUtility.h"
#include "ScottKinneyLab7CylinderUtility.h"
#include "ScottKinneyLab7BoxUtility.h"

int const compareCount = 2;

void mainMenuScottKinney(void) {
    int option;
    RectangleScottK *recPt1 = NULL;
    RectangleScottK *recPt2 = NULL;
    CircleScottK *cirPt1 = NULL;
    CircleScottK *cirPt2 = NULL;
    BoxScottK *boxPt1 = NULL;
    BoxScottK *boxPt2 = NULL;
    CylinderScottK *cylPt1 = NULL;
    CylinderScottK *cylPt2 = NULL;

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
	    rectangleInit(recPt1);
	    cout << "Rectangle 2\n";
	    rectangleInit(recPt2);
	    break;
	case 2:
	    cout << "Circle 1\n";
	    circleInit(cirPt1);
	    cout << "Circle 2\n";
	    circleInit(cirPt2);
	    break;
	case 3:
	    cout << "Box 1\n";
	    boxInit(boxPt1);
	    cout << "Box 2\n";
	    boxInit(boxPt2);
	    break;
	case 4:
	    cout << "Cylinder 1\n";
	    cylinderInit(cylPt1);
	    cout << "Cylinder 2\n";
	    cylinderInit(cylPt2);
	    break;
	case 5:
	    menuCompAreaScottKinney(recPt1, recPt2, boxPt1, boxPt2, 
				    cirPt1, cirPt2, cylPt1, cylPt2);
	    break;
	case 6:
	    menuCompVolScottKinney(boxPt1, boxPt2, cylPt1, cylPt2);
	    break;
	case 7:
	    menuPrintScottKinney(recPt1, recPt2, boxPt1, boxPt2, 
				 cirPt1, cirPt2, cylPt1, cylPt2);
	    break;
	case 8:
	    delete cirPt1;
	    delete cirPt2;
	    delete recPt1;
	    delete recPt2;
	    delete boxPt1;
	    delete boxPt2;
	    delete cylPt1;
	    delete cylPt2;
	    break;
	default:
	    cout << "Wrong Option. Use 1 through 8";
	    cout << endl;
	}
    } while (option != 8);
}

void menuCompVolScottKinney(BoxScottK *&b1, BoxScottK *&b2, 
			    CylinderScottK *&cy1, CylinderScottK *&cy2) {
    int option;
    FractionScottK obj[compareCount];
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
	    if (b1 != NULL) {
		cout << "Box One ";
		obj[i] = b1->getVolScottKinney(); 
		cout << obj[i] << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 2:
	    if (b2 != NULL) {
		cout << "Box Two ";
		obj[i] = b2->getVolScottKinney(); 
		cout << obj[i] << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 3:
	    if (cy1 != NULL) {
		cout << "Cylinder One ";
		obj[i] = cy1->getVolScottKinney(); 
		cout << obj[i] << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 4:
	    if (cy2 != NULL) {
		cout << "Cylinder Two ";
		obj[i] = cy2->getVolScottKinney(); 
		cout << obj[i] << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	default:
	    cout << "Wrong Option. Use 1 through 4";
	    cout << endl;
	}
    } while (i < compareCount);

    //TODO put this in a function it is repeated in vol & area
    if (obj[0] < obj[1]) {
	cout << obj[1] << " is larger than " << obj[0] << " by " 
	     << obj[1] - obj[0] << endl;
    } else if (obj[1] < obj[0]) {
	cout << obj[0] << " is larger than " << obj[1] << " by " 
	     << obj[0] - obj[1] << endl;	
    } else if (obj[0] == obj[1]) {
	cout << obj[0] << " & " << obj[1] << " are equal " << endl;
    } else {
	cout << "Error" << endl;
    }
}

void menuCompAreaScottKinney(RectangleScottK *&r1, RectangleScottK *&r2, 
			     BoxScottK *&b1, BoxScottK *&b2, 
			     CircleScottK *&ci1, CircleScottK *&ci2, 
			     CylinderScottK *&cy1, CylinderScottK *&cy2) {
    int option;
    FractionScottK obj[compareCount];
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
	    if (r1 != NULL) {
		cout << "Rectangle One ";
		obj[i] = r1->getAreaScottKinney(); 
		cout << obj[i] << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 2:
	    if (r2 != NULL) {
		cout << "Rectangle Two ";
		obj[i] = r2->getAreaScottKinney(); 
		cout << obj[i] << endl;;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 3:
	    if (b1 != NULL) {
		cout << "Box One ";
		obj[i] = b1->getAreaScottKinney(); 
		cout << obj[i] << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 4:
	    if (b2 != NULL) {
		cout << "Box Two ";
		obj[i] = b2->getAreaScottKinney(); 
		cout << obj[i] << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 5:
	    if (ci1 != NULL) {
		cout << "Circle One ";
		obj[i] = ci1->getAreaScottKinney(); 
		cout << obj[i] << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 6:
	    if (ci2!= NULL) {
		cout << "Circle Two ";
		obj[i] = ci2->getAreaScottKinney(); 
		cout << obj[i] << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 7:
	    if (cy1 != NULL) {
		cout << "Cylinder One ";
		obj[i] = cy1->getAreaScottKinney(); 
		cout << obj[i] << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 8:
	    if (cy2 != NULL) {
		cout << "Cylinder Two ";
		obj[i] = cy2->getAreaScottKinney(); 
		cout << obj[i] << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	default:
	    cout << "Wrong Option. Use 1 through 8";
	    cout << endl;
	}
    } while (i < compareCount);

    if (obj[0] < obj[1]) {
	cout << obj[1] << " is larger than " << obj[0] << " by " 
	     << obj[1] - obj[0] << endl;
    } else if (obj[1] < obj[0]) {
	cout << obj[0] << " is larger than " << obj[1] << " by " 
	     << obj[0] - obj[1] << endl;	
    } else if (obj[0] == obj[1]) {
	cout << obj[0] << " & " << obj[1] << " are equal " << endl;
    } else {
	cout << "Error" << endl;
    }
}

void menuPrintScottKinney(RectangleScottK *&r1, RectangleScottK *&r2, 
			     BoxScottK *&b1, BoxScottK *&b2, 
			     CircleScottK *&ci1, CircleScottK *&ci2, 
			     CylinderScottK *&cy1, CylinderScottK *&cy2) {
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
	    if (r1 != NULL) {
		cout << "Rectangle One\n";
		cout << *r1 << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 2:
	    if (r2 != NULL) {
		cout << "Rectangle Two\n";
		cout << *r2 << endl;;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 3:
	    if (b1 != NULL) {
		cout << "Box One\n";
		b1->print();
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 4:
	    if (b2 != NULL) {
		cout << "Box Two\n";
		b2->print(); 
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 5:
	    if (ci1 != NULL) {
		cout << "Circle One\n";
		cout << *ci1 << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 6:
	    if (ci2!= NULL) {
		cout << "Circle Two\n";
		cout << *ci2 << endl;
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 7:
	    if (cy1 != NULL) {
		cout << "Cylinder One\n";
		cy1->print();
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 8:
	    if (cy2 != NULL) {
		cout << "Cylinder Two\n";
		cy2->print();
		i++;
	    } else {
		errorInitScottKinney();
	    }
	    break;
	case 9:
	    menuPrintAllInitScottKinney(r1, r2, b1, b2, ci1, ci2, cy1, cy2);
	    i = compareCount;
	    break;
	default:
	    cout << "Wrong Option. Use 1 through 9";
	    cout << endl;
	}
    } while (i < compareCount);
}

void menuPrintAllInitScottKinney(RectangleScottK *&r1, RectangleScottK *&r2, 
				 BoxScottK *&b1, BoxScottK *&b2, 
				 CircleScottK *&ci1, CircleScottK *&ci2, 
				 CylinderScottK *&cy1, CylinderScottK *&cy2) {
    if (r1)
	cout << "Rectangle 1: "<< *r1 << endl;
    if (r2)
	cout << "Rectangle 2: "<< *r2 << endl;
    if (b1) {
	cout << "Box 1: ";
	b1->print();
    }
    if (b2) {
	cout << "Box 2: ";
	b2->print();
    }
    if (ci1) 
	cout << "Circle 1: " << *ci1 << endl;
    if (ci2)
	cout << "Circle 2: " << *ci2 << endl;
    if (cy1) {
	cout << "Cylinder 1: ";
	cy1->print();
    }
    if (cy2) {
	cout << "Cylinder 2: ";
	cy2->print();
    }
}

void headerScottKinney(void) {
    cout << "\nCIS 25 - C++ Programming\n";
    cout << "Laney College\n";
    cout << "Scott Kinney\n\n";
    cout << "Assignment Information --\n";
    cout << "  Assignment Number: Lab 7\n";
    cout << "                     Exercise #1\n";
    cout << "  Written by:        Scott Kinney\n";
    cout << "  Due Date:          12/13/2013\n" << endl;
}

void errorInitScottKinney(void) {
    cout << "Error: Object not initialized" << endl;
}
