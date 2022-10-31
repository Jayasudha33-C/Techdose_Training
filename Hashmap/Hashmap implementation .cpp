#include <iostream>
#include <list>
using namespace std;
class HashTable{
private:
  list<int> *table;
  int total_elements;
  int getHash(int key){
    return key % total_elements;
  }
public:
  HashTable(int n){
    total_elements = n;
    table = new list<int>[total_elements];
  }
  void insertElement(int key){
    table[getHash(key)].push_back(key);
  }
  void removeElement(int key){
    int x = getHash(key);
     list<int>::iterator i; 
    for (i = table[x].begin(); i != table[x].end(); i++) { 
      if (*i == key) 
        break;
    }
    if (i != table[x].end()) 
      table[x].erase(i);
  }
  void printAll(){
    for(int i = 0; i < total_elements; i++){
      cout << "Index " << i << ": ";
      for(int j : table[i])
        cout << j << " => ";
     cout << endl;
    }
  }
};
int main() {
  HashTable ht(3);
  int arr[] = {2, 4, 6, 8, 10};
  for(int i = 0; i < 5; i++)
    ht.insertElement(arr[i]);
  cout << "..:: Hash Table ::.." << endl;
  ht.printAll();
  ht.removeElement(4);
  cout << endl << "..:: After deleting 4 ::.." << endl;
  ht.printAll();
}