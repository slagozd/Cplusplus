#include <iostream>
#include <vector>

using namespace std;

#define PRINT(X) cout << X << endl


//Component
class Menu{

public:
    std::string menuItemName;
    Menu(std::string itemName):menuItemName(itemName){}
    virtual void printMenuItem(int level)=0;

};


class MainMenu: public Menu{
public:
    MainMenu(std::string itemName): Menu(itemName){}
    void add(Menu *cmp)
    {
        m_children.push_back(cmp);
    }
    void printMenuItem(int level)
    {
        for(int j=0; j < level; ++j) cout << "---";
        PRINT(menuItemName.c_str());

        if(!m_children.empty())
        {
            for(int x=0; x < level; ++x) cout << "+++";
            ++level;
            for (int i = 0; i < m_children.size(); ++i)
                m_children[i]->printMenuItem(level);
        }
    }

   private:
    // The manager can have a number of people(managers or workers)
    // under his/her supervision
    // and that is the reason we have the vector here (for
    // navigating a hierarchical organisation,
    // for typing an individual salary)
    vector < Menu * > m_children;

};

class MenuLeaf: public Menu{
public:

    MenuLeaf(std::string itemName): Menu(itemName){}

    void printMenuItem(int level)
        {
            for(int j=0; j < level; ++j) std::cout << "***";
            PRINT(menuItemName);

        }
};


int main()
{
    MainMenu menu("");

    MainMenu FileItem ("File");
    MainMenu EditItem ("Edit");
    MenuLeaf ViewItem ("View");
    MenuLeaf HelpItem ("Help");
//File
    MainMenu NewItem("New");
    MainMenu SaveAsItem("Save As");
    MainMenu SaveItem("Save");
    MainMenu OpenItem("Open");
 //Edit
    MenuLeaf UndoItem("Undo");
    MenuLeaf RedoItem("Redo");
    MenuLeaf CutItem("Cut");
    MenuLeaf PasteItem("Paste");

//New
    MenuLeaf docItem ("Doc");
    MenuLeaf odtItem ("Odt");
//Open
    MenuLeaf file1Item ("File1.doc");
    MenuLeaf file2Item ("File2.doc");
    MenuLeaf file31tem ("File 1.odt");

    menu.add(&FileItem);
        FileItem.add(&NewItem);
            NewItem.add(&docItem);
            NewItem.add(&odtItem);
        FileItem.add(&SaveAsItem);
        FileItem.add(&SaveItem);
        FileItem.add(&OpenItem);
            OpenItem.add(&file1Item);
            OpenItem.add(&file2Item);
            OpenItem.add(&file31tem);

    menu.add(&EditItem);
        EditItem.add(&UndoItem);
        EditItem.add(&RedoItem);
        EditItem.add(&CutItem);
        EditItem.add(&PasteItem);

    menu.add(&ViewItem);
    menu.add(&HelpItem);


    menu.printMenuItem(1);

    cout << '\n';

return 0;

}
