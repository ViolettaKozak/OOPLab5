#include <iostream>
#include "Ex3.h"
#include "Ex2.h"
#include "Ex1.h"

using namespace std;

void Test1()
{
    Quadrangle qua(2, 4), *pqua1, *pqua2;
	Rectangle rec1, rec2(4, 7), * prec;
	Squarete sq1, sq2(5);

	pqua1 = &rec1;
	pqua2 = &sq1;
	prec = &sq2;

	cout << endl;
	sq2.PrintIn();
	cout << endl;
	prec->PrintIn();
	cout << endl;
	pqua1->PrintIn();
	cout << endl;
	rec2.PrintIn();
	cout << endl;
	qua.PrintIn();
	cout << endl;
};

void Test2()
{
    BinaryTree tree;

    tree.insert(5);
    tree.insert(2);
    tree.insert(7);
    tree.insert(1);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);

    cout << "Breadth First Traversal: ";
    tree.breadthFirstTraversal();

    cout << "Inorder Traversal: ";
    tree.inorderTraversal(tree.root);
    cout << endl;

    cout << "Reverse Inorder Traversal: ";
    tree.reverseInorderTraversal(tree.root);
    cout << endl;
};


void Test3()
{
    String s1;
    cout << "Enter a string: ";
    s1.input(cin);
    cout << "s1: ";
    s1.output(cout);
    cout << "\n";

    String s2("Hello");
    cout << "s2: ";
    s2.output(cout);
    cout << "\n";

    String s3(s1);
    cout << "s3: ";
    s3.output(cout);
    cout << "\n";

    s2 = s1;
    cout << "s2 after assignment: ";
    s2.output(cout);
    cout << "\n";

    DigitString ds1;
    cout << "Enter a digit string: ";
    ds1.input(cin);
    cout << "ds1: ";
    ds1.output(cout);
    cout << "\n";

    DigitString ds2("abc123def456");
    cout << "ds2: ";
    ds2.output(cout);
    cout << "\n";

    DigitString ds3(ds1);
    cout << "ds3: ";
    ds3.output(cout);
    cout << "\n";

    ds2 = ds1;
    cout << "ds2 after assignment: ";
    ds2.output(cout);
    cout << "\n";
}

void menu()
{
    cout<<"Choose the exercise"<<endl;
    cout<<"1. Quadrangle\n2. Binary tree\n3. String"<<endl;
};

int main()
{
    int k;
    char c='y';

    
    
    while(c=='y')
    {
        menu();
        cin>>k;

        switch (k)
        {
        case 1:
            Test1();
            cout<<endl;
            cout<<"If you wont to countine Testing, input 'y': ";
            cin>>c;
            break;
        
        case 2:
            Test2();
            cout<<endl;
            cout<<"If you wont to countine Testing, input 'y': ";
            cin>>c;
            break;
        case 3:
            Test3();
            cout<<endl;
            cout<<"If you wont to countine Testing, input 'y': ";
            cin>>c;
            break;
        }
    }
}
