#include "./zoo.h";


Zoo::Zoo() {
	// init employees - Ŭ���� ���
	const int employeeNums = 3;
	employees = new Employee[employeeNums];

	// init visitors - Ŭ���� ���
	const int visitorNums = 10;	
	visitors = new Visitor[visitorNums];

	// init animals
	AnimalElephant elephant = AnimalElephant("sound11", 4);
	AnimalShark shark = AnimalShark("sound22", 0);

	// init cage - Ŭ���� ������
	const int cageNums = 2;
	cages = new Cage[cageNums]{
		Cage("ELEPHANT", elephant, 10, "move11"),
		Cage("SHARK", shark, 5, "move22")
	};
	//cages[1].updateSound(1, "abacasdfasd");
}

void Zoo::printInfo() {
	// ���� ������ ī��Ʈ
	//int attended = 0;
	//for (int index = 0;index < sizeof(visitors);index++) {
	//	if (visitors[index].hasTicket()) {
	//		attended += 1;
	//	}
	//}
	//cout << "���� ������ (��): " << attended << endl;

	////���� �ٷ����� ������ ī��Ʈ
	//int working = 0;
	//for (int index = 0;index < sizeof(employees);index++) {
	//	if (employees[index].getIsWorking()) {
	//		working += 1;
	//	}
	//}
	//cout << "���� �ٷ����� ���� (��): " << working << endl;


	// ���� �� ������ ī��Ʈ	
	int animalNums = 0;
	for (int index = 0;index < sizeof(cages); index++) {
		animalNums += cages[index].countAnimals();
	}
	cout << "All Animals " << animalNums << endl;

	// ���� �����Ҹ� - �������̵�
	cout << "============================== Start Animal Sound Start ============================== " << endl;
	for (int index = 0;index < 2; index++) {
		cout << "cage #" << index+1 << " start" << endl;
		cages[index].soundAnimals();
	}

	// ���� move - �������̵�
	cout << "============================== Start Animal Move Start ============================== " << endl;
	for (int index = 0;index < 2; index++) {
		cout << "cage #" << index + 1 << " start" << endl;
		cages[index].moveAnimals();
	}
};

Zoo::~Zoo() {
	delete[] employees;
	delete[] visitors;
	delete[] cages;

	cout << "~zoo elete" << endl;
}