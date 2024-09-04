#include "./zoo.h";


Zoo::Zoo() {
	// init employees - 클래스 상속
	const int employeeNums = 3;
	employees = new Employee[employeeNums];

	// init visitors - 클래스 상속
	const int visitorNums = 10;	
	visitors = new Visitor[visitorNums];

	// init animals
	AnimalElephant elephant = AnimalElephant("sound11", 4);
	AnimalShark shark = AnimalShark("sound22", 0);

	// init cage - 클래스 다형성
	const int cageNums = 2;
	cages = new Cage[cageNums]{
		Cage("ELEPHANT", elephant, 10, "move11"),
		Cage("SHARK", shark, 5, "move22")
	};
	//cages[1].updateSound(1, "abacasdfasd");
}

void Zoo::printInfo() {
	// 현재 관람객 카운트
	//int attended = 0;
	//for (int index = 0;index < sizeof(visitors);index++) {
	//	if (visitors[index].hasTicket()) {
	//		attended += 1;
	//	}
	//}
	//cout << "현재 관람객 (명): " << attended << endl;

	////현재 근로중인 직원수 카운트
	//int working = 0;
	//for (int index = 0;index < sizeof(employees);index++) {
	//	if (employees[index].getIsWorking()) {
	//		working += 1;
	//	}
	//}
	//cout << "현재 근로중인 직원 (명): " << working << endl;


	// 동물 총 마리수 카운트	
	int animalNums = 0;
	for (int index = 0;index < sizeof(cages); index++) {
		animalNums += cages[index].countAnimals();
	}
	cout << "All Animals " << animalNums << endl;

	// 동물 울음소리 - 오버라이드
	cout << "============================== Start Animal Sound Start ============================== " << endl;
	for (int index = 0;index < 2; index++) {
		cout << "cage #" << index+1 << " start" << endl;
		cages[index].soundAnimals();
	}

	// 동물 move - 오버라이드
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