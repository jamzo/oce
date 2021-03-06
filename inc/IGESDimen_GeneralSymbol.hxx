// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_GeneralSymbol_HeaderFile
#define _IGESDimen_GeneralSymbol_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDimen_GeneralSymbol_HeaderFile
#include <Handle_IGESDimen_GeneralSymbol.hxx>
#endif

#ifndef _Handle_IGESDimen_GeneralNote_HeaderFile
#include <Handle_IGESDimen_GeneralNote.hxx>
#endif
#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
#ifndef _Handle_IGESDimen_HArray1OfLeaderArrow_HeaderFile
#include <Handle_IGESDimen_HArray1OfLeaderArrow.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_IGESDimen_LeaderArrow_HeaderFile
#include <Handle_IGESDimen_LeaderArrow.hxx>
#endif
class IGESDimen_GeneralNote;
class IGESData_HArray1OfIGESEntity;
class IGESDimen_HArray1OfLeaderArrow;
class Standard_OutOfRange;
class IGESData_IGESEntity;
class IGESDimen_LeaderArrow;


//! defines General Symbol, Type <228>, Form <0-3,5001-9999> <br>
//!          in package IGESDimen <br>
//!          Consists of zero or one (Form 0) or one (all other <br>
//!          forms), one or more geometry entities which define <br>
//!          a symbol, and zero, one or more associated leaders. <br>
class IGESDimen_GeneralSymbol : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDimen_GeneralSymbol();
  //! This method is used to set the fields of the class <br>
//!           GeneralSymbol <br>
//!       - aNote      : General Note, null for form 0 <br>
//!       - allGeoms   : Geometric Entities <br>
//!       - allLeaders : Leader Arrows <br>
  Standard_EXPORT     void Init(const Handle(IGESDimen_GeneralNote)& aNote,const Handle(IGESData_HArray1OfIGESEntity)& allGeoms,const Handle(IGESDimen_HArray1OfLeaderArrow)& allLeaders) ;
  //! Changes FormNumber (indicates the Nature of the Symbole) <br>
//!           Error if not in ranges [0-3] or [> 5000] <br>
  Standard_EXPORT     void SetFormNumber(const Standard_Integer form) ;
  //! returns True if there is associated General Note Entity <br>
  Standard_EXPORT     Standard_Boolean HasNote() const;
  //! returns Null handle for form 0 only <br>
  Standard_EXPORT     Handle_IGESDimen_GeneralNote Note() const;
  //! returns number of Geometry Entities <br>
  Standard_EXPORT     Standard_Integer NbGeomEntities() const;
  //! returns the Index'th Geometry Entity <br>
//! raises exception if Index <= 0 or Index > NbGeomEntities() <br>
  Standard_EXPORT     Handle_IGESData_IGESEntity GeomEntity(const Standard_Integer Index) const;
  //! returns number of Leaders or zero if not specified <br>
  Standard_EXPORT     Standard_Integer NbLeaders() const;
  //! returns the Index'th Leader Arrow <br>
//! raises exception if Index <= 0 or Index > NbLeaders() <br>
  Standard_EXPORT     Handle_IGESDimen_LeaderArrow LeaderArrow(const Standard_Integer Index) const;




  DEFINE_STANDARD_RTTI(IGESDimen_GeneralSymbol)

protected:




private: 


Handle_IGESDimen_GeneralNote theNote;
Handle_IGESData_HArray1OfIGESEntity theGeoms;
Handle_IGESDimen_HArray1OfLeaderArrow theLeaders;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
