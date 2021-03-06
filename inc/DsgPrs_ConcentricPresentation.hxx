// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_ConcentricPresentation_HeaderFile
#define _DsgPrs_ConcentricPresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Prs3d_Presentation;
class Prs3d_Drawer;
class gp_Pnt;
class gp_Dir;


//! A framework to define display of relations of concentricity. <br>
class DsgPrs_ConcentricPresentation  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Defines the display of elements showing relations of <br>
//! concentricity between shapes. <br>
//! These include the center aCenter, the radius <br>
//! aRadius, the direction aNorm and the point aPoint. <br>
//! These arguments are added to the presentation <br>
//! object aPresentation. Their display attributes are <br>
//! defined by the attribute manager aDrawer. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Handle(Prs3d_Drawer)& aDrawer,const gp_Pnt& aCenter,const Standard_Real aRadius,const gp_Dir& aNorm,const gp_Pnt& aPoint) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
