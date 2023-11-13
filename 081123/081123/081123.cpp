//----------------Proxy

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Document {
//	string document;
//public:
//	Document() {
//		this->document = "";
//	}
//	void setDocument(string document) {
//		this->document += document;
//	}
//	string getDocument() {
//		return document;
//	}
//};
//
//class DocumentAccess {
//protected:
//	Document* document;
//public:
//	DocumentAccess() {}
//	DocumentAccess(Document* document) {
//		this->document = document;
//	}
//	virtual string readDocument() = 0;
//	virtual void writeDocument(string) = 0;
//};
//
//class RealDocumentAccess : public DocumentAccess {
//
//public:
//	RealDocumentAccess(){}
//	RealDocumentAccess(Document* document) : DocumentAccess(document){}
//	string readDocument() override
//	{
//		return document->getDocument();
//	}
//	void writeDocument(string doc) override {
//
//		document->setDocument(doc);
//	}
//};
//
//class ProxyDocumentAccess : public DocumentAccess {
//
//public:
//	int choice = 0;
//	string message = "Access denied!";
//public:
//	ProxyDocumentAccess(){}
//	ProxyDocumentAccess(Document* document) : DocumentAccess(document) {}
//	string readDocument() override {
//		cout << "Enter PIN: ";
//		cin >> choice;
//			if (choice == 123)
//			{
//				return document->getDocument();
//			}
//			else {
//				return message;
//			}
//	}
//	void writeDocument(string doc) override {
//		cout << "Enter PIN: ";
//		cin >> choice;
//
//		if (choice == 123)
//		{
//			document->setDocument(doc);
//		}
//		else {
//			cout << "Access denied!";
//		}
//	}
//};
//
//int main() {
//	Document* doc = new Document();
//
//	ProxyDocumentAccess* d = new ProxyDocumentAccess(doc);
//	d->writeDocument("Hello");
//	cout << d->readDocument() << endl;
//
//	RealDocumentAccess* dr = new RealDocumentAccess(doc);
//
//	dr->writeDocument("Hi");
//	cout << dr->readDocument() << endl;
//}
//

//----------------------Flyweight 

#include <iostream>
#include <map>
using namespace std;

class myChar {
	char symbol;
public:
	myChar(char symbol) {
		this->symbol = symbol;
	}
	void writeSymb(int size, string font) {
		cout << symbol << " with font " << font << "  with size " << size;
	}
};

class Symbols {
	map<char, myChar*> symbols;
public:
	Symbols() {}

	myChar* getSymbol(char symb) {
		myChar* symbol = symbols[symb];
		if (symbol == nullptr)
		{
			setSymbol(symb);
		}
		return symbols[symb];
	}
private:
	void setSymbol(char symbol) {
		symbols[symbol] = new myChar(symbol);
	}

};
int main() {
	Symbols* container = new Symbols();
	myChar* a;
	a = container->getSymbol('a');
	a->writeSymb(5, "font");	
}