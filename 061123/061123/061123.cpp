//#include <iostream>
//#include <string>
//using namespace std;
//
//class TextEditor {
//
//	string text;
//
//public:
//
//	TextEditor() {
//		this->text = "Sample text";
//	}
//	void setText(string text) {
//		this->text = text;
//	}
//	string getText() {
//		return text;
//	}
//	TextEditor(TextEditor* text) {
//		this->text = text->getText();
//	}
//};
//class SimpleTextEditor : public TextEditor{
//public:
//	SimpleTextEditor(TextEditor* text) : TextEditor(text) {
//		setText(text->getText() + " Base text");
//	}
//};
//
//class SpellChecker : public TextEditor {
//public:
//	SpellChecker(TextEditor* text) : TextEditor(text) {
//		setText(text->getText() + " Spell checked");
//	}
//};
//class SyntaxHighlighter : public TextEditor {
//public:
//	SyntaxHighlighter(TextEditor* text) : TextEditor(text) {
//		setText(text->getText() + " Syntax highlighted");
//	}
//};
//
//class AutoSave : public TextEditor {
//public:
//	AutoSave(TextEditor* text) : TextEditor(text) {
//		setText(text->getText() + " Auto-saved");
//	}
//};
//
//int main(){
//
//	TextEditor* text = new TextEditor();
//	TextEditor*	sText = new SimpleTextEditor(text);
//	TextEditor* ssText = new SpellChecker(sText);
//	TextEditor* sssText = new SyntaxHighlighter(ssText);
//	TextEditor* sssaText = new AutoSave(sssText);
//	
//	cout << sssaText->getText() << endl;
//
//	delete text;
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Tv {
//
//public:
//	void turnOn() {
//		cout << "Tv on" << endl;
//	}
//	void turnOff() {
//		cout << "Tv off" << endl;
//	}
//};
//class AirConditioner {
//
//public:
//	void cold() {
//		cout << "Air is cooling" << endl;
//	}
//	void warm() {
//		cout << "Air is warming" << endl;
//
//	}
//	void turnOff() {
//		cout << "Conditioner off" << endl;
//	}
//};
//
//class Light{
//
//public:
//	void turnOn() {
//		cout << "Light is on" << endl;
//	}
//	void turnOff() {
//		cout << "Light is off" << endl;
//	}
//};
//
//class SmartHomeFacade {
//	Tv tv;
//	AirConditioner conditioner;
//	Light light;
//public:
//	void watchMovie() {
//		cout << "Watching movie:" << endl;
//		light.turnOff();
//		conditioner.warm();
//		tv.turnOn();
//	}
//	void meditate() {
//		cout << "Meditating:" << endl;
//		light.turnOn();
//		conditioner.cold();
//		tv.turnOff();
//	}
//	void turnOffEverything() {
//		cout << "Leave the house:" << endl;
//		tv.turnOff();
//		conditioner.turnOff();
//		light.turnOff();
//	}
//};
//int main() {
//
//	SmartHomeFacade smartHome;
//
//	smartHome.watchMovie();
//	cout << endl << "----------------------------------------" << endl;
//
//	smartHome.meditate();
//	cout << endl << "----------------------------------------" << endl;
//
//	smartHome.turnOffEverything();
//}

#include <iostream>
#include <string>
using namespace std;

class Document {
	string document;
private:
	Document() {
		this->document = "";
	}
	void setDocument(string document) {
		this->document = document;
	}
	string getDocument() {
		return document;
	}
};

class DocumentAccess {
	Document* document;
public:
	DocumentAccess(Document document) {
		this->document = document;
	}
	virtual string readDocument() = 0;
	virtual void writeDocument() = 0;
};

class RealDocumentAccess {

};