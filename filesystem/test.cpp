#include "Filesystem.h"
#include <iostream>


/*

    Beautiful test for beuatiful implementations :D

*/

// Tester --------\/
int main()
{
	// FileSystem fsys{};
	// DirectoryObject* root_dir = fsys.getRootDir();
	
	// std::cout << root_dir->getName() << std::endl;
	// DirectoryObject* dir1 = DirectoryObject::create("programs", root_dir);
	// DirectoryObject* dir2 = DirectoryObject::create("programs", dir1);
	// std::cout << (root_dir == nullptr) << std::endl;
	// FileObject* file1 = FileObject::create("simba", root_dir);
	// FileObject* file2 = FileObject::create("dumbo", dir2);
	// file1->rewrite("Helloooooo from filcleare 1!");
	// file1->addWrite("\n Cool!");
	// root_dir->remove();
	// file1->remove();
	// root_dir->displayContent();
	// dir1->displayContent();
	// dir1->remove();
	// root_dir->displayContent();
	// file1->displayContent();

	// std::cout << pathBuilder(file1) << std::endl;
	// root_dir->rename("Dangerous");
	// file1->rename("milkyway");
	// dir1->rename("galacticon");
	// root_dir->displayContent();
	// dir1->displayContent();
	// file1->displayContent();
	// std::cout << pathBuilder(file1) << std::endl;
	// std::cout << dir2->getPath() << std::endl;
	// std::cout << file2->getPath() << std::endl;
	// std::cout << pathBuilder(root_dir) << std::endl;

	// root_dir->displayInfo();
	// dir1->displayInfo();
	// dir2->displayInfo();
	// file1->displayInfo();
	// file2->displayInfo();

	// FileSystemObject* finds = objectLocator(root_dir, dir1, "/adadadas/asdasdasd");
	// std::cout << (finds==nullptr) << std::endl;


	// finds = objectLocator(root_dir, dir2, file2->getPath());
	// if (finds)	
	// {
	// 	std::cout << (finds->getName()) << std::endl;
	// } else {
	// 	std::cout << "Uxladi" << std::endl;
	// }
	// return 0;
}

