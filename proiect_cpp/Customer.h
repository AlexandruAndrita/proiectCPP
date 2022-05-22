#pragma once
#include "DrivingLicense.h"
#include "CustomerHomeAdress.h"
#include "DateOfBirth.h"
#include "RentalSchedule.h"
#include "IdentificationInfos.h"
#include <vector>


class Customer
{
private:
    IdentificationInfos m_identificationInfos;
    CustomerHomeAdress m_customerHomeAdress;
    DrivingLicense m_customerDrivingLicense;
    DateOfBirth m_customerDateOfBirth;
    RentalSchedule m_customerRentalSchedule;

public:
    IdentificationInfos GetCustomerIdentificationInfos()const;
    CustomerHomeAdress GetCustomerHomeAdress()const;
    DrivingLicense GetCustomerDrivingLicense()const;
    DateOfBirth GetCustomerDateOfBirth()const;
    RentalSchedule GetCustomerRentalSchedule()const;
};
