#include "UBEditable.h"

#include "core/UBApplication.h"
#include "board/UBBoardController.h"
#include "domain/UBGraphicsScene.h"

UBEditable::UBEditable()
{
    mEditMode = false;
}

UBEditable::~UBEditable()
{

}

void UBEditable::addHandle(UBAbstractHandle *handle)
{
    mHandles.push_back(handle);
}

void UBEditable::showEditMode(bool show)
{
    if(!show){
        for(int i = 0; i < mHandles.size(); i++){
            mHandles.at(i)->hide();
        }
    }else{
        for(int i = 0; i < mHandles.size(); i++){
            mHandles.at(i)->show();
        }
    }

    mEditMode = show;
}

void UBEditable::deactivateEditionMode()
{
    //nop
}

bool UBEditable::isInEditMode()
{
    return mEditMode;
}
