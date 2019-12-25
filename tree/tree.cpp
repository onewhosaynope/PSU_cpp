#include <iostream>

using namespace std;

struct Tree {
  int data;
  Tree * parent;
  Tree * left;
  Tree * right;
};

/* вставка элемента */
void TreeInsert(Tree ** root, int data) {
  Tree * parent = NULL;
  Tree * current = * root; // Вспомогательный указатель для перемещения по дереву
  // создаём новый элемент, инициализурем его данными
  Tree * newelement = new Tree;
  newelement -> data = data;
  newelement -> left = NULL;
  newelement -> right = NULL;

  /* в цикле доходим до листьев */
  while (current) {
    parent = current;
    if (data < current -> data)
      current = current -> left;
    else
      current = current -> right;
  }

  newelement -> parent = parent; // устанавлием указатель на родительский элемент
  // устанавлием указетели в родительском элементе
  if (!parent) // дерево пустое
    *
    root = newelement;
  else if (data < parent -> data)
    parent -> left = newelement;
  else
    parent -> right = newelement;
}

/* Возвращает минимальный элемент в дереве */
Tree * TreeMinimum(Tree * root) {
  while (root -> left != NULL)
    root = root -> left;
  return root;
}

Tree * TreeSuccessor(Tree * root) {
  if (root -> right != NULL)
    return TreeMinimum(root -> right);
  Tree * current = root -> parent;
  while (current != NULL && root == current -> right) {
    root = current;
    current = current -> parent;
  }
  return current;
}

/* удаление элемента */
Tree * TreeRemove(Tree ** root, Tree * element) {
  Tree * current = NULL;
  Tree * temp = NULL;

  if (element -> left == NULL || element -> right == NULL)
    current = element;
  else
    current = TreeSuccessor(element);

  if (current -> left != NULL)
    temp = current -> left;
  else
    temp = current -> right;

  if (temp != NULL)
    temp -> parent = current -> parent;

  if (current -> parent == NULL)
    *
    root = temp;
  else if (current == current -> parent -> left)
    current -> parent -> left = temp;
  else
    current -> parent -> right = temp;

  if (current != element)
    element -> data = current -> data;

  return current;

}

void TreePrint(Tree * t, int u) {
  if (t == NULL) return;
  else //Иначе
  {
    TreePrint(t -> left, ++u);
    for (int i = 0; i < u; ++i) cout<< " ";
    cout<< t -> data << endl; //И показываем элемент
    u--;
  }
  TreePrint(t -> right, ++u);
}

Tree * TreeSearch(Tree * root, int key) {
  if (root == NULL || root -> data == key)
    return root;

  if (key < root -> data)
    TreeSearch(root -> left, key);
  else
    TreeSearch(root -> right, key);
}

void TreeDelete(Tree * root) {

  if (root -> left)
    TreeDelete(root -> left);

  if (root -> right)
    TreeDelete(root -> right);

  delete root;
}

int main() {

  int data;

  Tree * root = NULL;

  while (true) {
    cout<< "Enter element:\n";
    cin >> data;
    if (cin.good()) {
      cin.ignore(10, '\n');
      TreeInsert( & root, data);
    } else {
      cin.clear();
      cin.ignore(10, '\n');
      cout<< "Natural nums only\n";
      break;
    }
  }

  cout<< "Your tree: \n";
  TreePrint(root, 0);
  int key;

  cout<< "Enter key to find: ";
  while (true) {
    cin >> key;
    if (cin.good()) {
      cin.ignore(10, '\n');
      break;
    }

    cin.clear();
    cin.ignore(10, '\n');
    cout<< "Key must be natural num\n";
  }

  Tree * found = TreeSearch(root, key);
  if (found == NULL)
    cout<< "There is no element like that\n";
  else
    cout<< "Your element:"<<
  found -> data << endl;
  cout<< "*Trying to remove current element*\n";
  TreeRemove( & root, found);
  cout<< "Enter your tree again: \n";
  TreePrint(root, 0);
  TreeDelete(root);
  return 0;
}