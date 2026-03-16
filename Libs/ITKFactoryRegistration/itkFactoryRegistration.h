

#ifndef itkFactoryRegistration_h
#define itkFactoryRegistration_h

#include "itkFactoryRegistrationConfigure.h"
#if __has_include("itkNamespace.h")
#include "itkNamespace.h"
#endif

namespace itk
{

ITKFactoryRegistration_EXPORT void itkFactoryRegistration();
}

#endif
