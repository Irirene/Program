#pragma once
template <typename RightHanded, typename LeftHanded>
class HandedWeapons
{
private:
        LeftHanded* leftHand;
        RightHanded* rightHand;
public:
    Player(LeftHanded* leftHand, RightHanded* rightHand) : leftHand(leftHand), rightHand(rightHand) {}

    RightHanded getRightHand() {
        return  rightHand;
    }

    void setRightHand(RightHanded* rightHand) {
        this->rightHand = rightHand;
    }


    LeftHanded getLeftHand() {
        return leftHand;
    }

    void setLeftHand(LeftHanded* leftHand) {
        this->leftHand = leftHand;
    }
};
