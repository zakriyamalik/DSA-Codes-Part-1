#include <iostream>
using namespace std;
// HashItem class template
template <typename K, typename V>
class HashItem {
public:
    V value;
    K key;
    HashItem(K key, V value) : key(key), value(value) {}
};

// HashTable class template
template <typename K, typename V>
class HashTable {
private:
    HashItem<K, V>** arr;
    int num_buckets;

public:
    HashTable(int num_buckets) {
        this->num_buckets = num_buckets;
        arr = new HashItem<K, V>* [num_buckets]();
    }

    ~HashTable() {
        for (int i = 0; i < num_buckets; ++i) {
            delete arr[i];
        }
        delete[] arr;
    }

    int calcHash(K key) {
        return key % num_buckets;
    }

    bool insertItem(K key, V value)
    {
        int index = calcHash(key);

        if (arr[index] == nullptr)
        {
            arr[index] = new HashItem<K, V>{ key, value };
            return true;
        }
        else {
            return insertQuadraticProbing(key, value);
        }
    }

    bool insertQuadraticProbing(K key, V value) {
        int index = calcHash(key);
        int originalIndex = index;
        int i = 1;

        do
        {
            index = (originalIndex + i * i) % num_buckets;

            if (arr[index] == nullptr)
            {
                arr[index] = new HashItem<K, V>{ key, value };
                return true;
            }
            ++i;
        } 
        while (index != originalIndex);

        return false;
    }

    bool deleteItem(K key) 
    {
        int index = calcHash(key);

        while (arr[index] != nullptr)
        {
            if (arr[index]->key == key)
            {
                delete arr[index];
                arr[index] = nullptr;
                return true;
            }

            index = (index + 1) % num_buckets;
        }

        return false;
    }

    V searchItem(K key) {
        int index = calcHash(key);

        while (arr[index] != nullptr) {
            if (arr[index]->key == key) {
                return arr[index]->value;
            }

            index = (index + 1) % num_buckets;
        }

        return V();
    }

    bool deleteKey(int const key) {
        int ind = key % num_buckets;
        for (int i = 0; i < num_buckets; i++) {
            ind = getNextCandidateIndex(key, i);

            if (arr[ind] == nullptr) {
                return false;
            }
            else if (arr[ind]->key == key) {
                delete arr[ind];
                arr[ind] = nullptr;
                return true;
            }
        }

        return false;
    }

    int getNextCandidateIndex(K key, int i) {
        // A simple linear probing function, you can modify this if needed
        return (key + i) % num_buckets;
    }

    void hashDisplay() {
        for (int i = 0; i < num_buckets; ++i) {
            if (arr[i] != nullptr) {
                std::cout << "Bucket " << i << ": Key = " << arr[i]->key << ", Value = " << arr[i]->value << std::endl;
            }
        }
    }
};

int main()
{

    HashTable<int, string> hashTable(10);

    hashTable.insertItem(1, "One");
    hashTable.insertItem(11, "Eleven"); // Collision
    hashTable.insertItem(21, "Twenty-One"); // Collision
    hashTable.insertItem(2, "Two");

    hashTable.hashDisplay();

    cout << "Search Result: " << hashTable.searchItem(11) << endl;

    hashTable.deleteItem(11);

    cout << "After Deletion:" << endl;
    hashTable.hashDisplay();

    return 0;
}
