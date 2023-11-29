struct Node
{
	int data;
	Node *next;
	Node *prev;
};

void drawPicture(const vector<vector<int>>& image) {
    for (const auto& row : image) {
        for (int pixel : row) {
            if (pixel == 1) {
                cout << "*"; 
            } else {
                cout << " "; 
            }
        }
        cout << endl;
    }
}
class List //values ​​used by user during the program are stored in it
{
	Node *last;
	Node *cursor;

public:
	List(int data);
	void add(int data);
	Node *getPrev();
	Node *getNext();
	int getData();
	int getch();
	int draw();
};