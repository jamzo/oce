// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_Analysis_HeaderFile
#define _ExprIntrp_Analysis_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _ExprIntrp_StackOfGeneralExpression_HeaderFile
#include <ExprIntrp_StackOfGeneralExpression.hxx>
#endif
#ifndef _ExprIntrp_StackOfGeneralRelation_HeaderFile
#include <ExprIntrp_StackOfGeneralRelation.hxx>
#endif
#ifndef _ExprIntrp_StackOfGeneralFunction_HeaderFile
#include <ExprIntrp_StackOfGeneralFunction.hxx>
#endif
#ifndef _ExprIntrp_StackOfNames_HeaderFile
#include <ExprIntrp_StackOfNames.hxx>
#endif
#ifndef _TColStd_StackOfInteger_HeaderFile
#include <TColStd_StackOfInteger.hxx>
#endif
#ifndef _ExprIntrp_SequenceOfNamedFunction_HeaderFile
#include <ExprIntrp_SequenceOfNamedFunction.hxx>
#endif
#ifndef _ExprIntrp_SequenceOfNamedExpression_HeaderFile
#include <ExprIntrp_SequenceOfNamedExpression.hxx>
#endif
#ifndef _Handle_ExprIntrp_Generator_HeaderFile
#include <Handle_ExprIntrp_Generator.hxx>
#endif
#ifndef _Handle_Expr_GeneralExpression_HeaderFile
#include <Handle_Expr_GeneralExpression.hxx>
#endif
#ifndef _Handle_Expr_GeneralRelation_HeaderFile
#include <Handle_Expr_GeneralRelation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Expr_GeneralFunction_HeaderFile
#include <Handle_Expr_GeneralFunction.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Expr_NamedFunction_HeaderFile
#include <Handle_Expr_NamedFunction.hxx>
#endif
#ifndef _Handle_Expr_NamedExpression_HeaderFile
#include <Handle_Expr_NamedExpression.hxx>
#endif
class ExprIntrp_Generator;
class Expr_GeneralExpression;
class Expr_GeneralRelation;
class TCollection_AsciiString;
class Expr_GeneralFunction;
class Expr_NamedFunction;
class Expr_NamedExpression;



class ExprIntrp_Analysis  {
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

  
  Standard_EXPORT   ExprIntrp_Analysis();
  
  Standard_EXPORT     void SetMaster(const Handle(ExprIntrp_Generator)& agen) ;
  
  Standard_EXPORT     void Push(const Handle(Expr_GeneralExpression)& exp) ;
  
  Standard_EXPORT     void PushRelation(const Handle(Expr_GeneralRelation)& rel) ;
  
  Standard_EXPORT     void PushName(const TCollection_AsciiString& name) ;
  
  Standard_EXPORT     void PushValue(const Standard_Integer degree) ;
  
  Standard_EXPORT     void PushFunction(const Handle(Expr_GeneralFunction)& func) ;
  
  Standard_EXPORT     Handle_Expr_GeneralExpression Pop() ;
  
  Standard_EXPORT     Handle_Expr_GeneralRelation PopRelation() ;
  
  Standard_EXPORT     TCollection_AsciiString PopName() ;
  
  Standard_EXPORT     Standard_Integer PopValue() ;
  
  Standard_EXPORT     Handle_Expr_GeneralFunction PopFunction() ;
  
  Standard_EXPORT     Standard_Boolean IsExpStackEmpty() const;
  
  Standard_EXPORT     Standard_Boolean IsRelStackEmpty() const;
  
  Standard_EXPORT     void ResetAll() ;
  
  Standard_EXPORT     void Use(const Handle(Expr_NamedFunction)& func) ;
  
  Standard_EXPORT     void Use(const Handle(Expr_NamedExpression)& named) ;
  
  Standard_EXPORT     Handle_Expr_NamedExpression GetNamed(const TCollection_AsciiString& name) ;
  
  Standard_EXPORT     Handle_Expr_NamedFunction GetFunction(const TCollection_AsciiString& name) ;





protected:





private:



ExprIntrp_StackOfGeneralExpression myGEStack;
ExprIntrp_StackOfGeneralRelation myGRStack;
ExprIntrp_StackOfGeneralFunction myGFStack;
ExprIntrp_StackOfNames myNameStack;
TColStd_StackOfInteger myValueStack;
ExprIntrp_SequenceOfNamedFunction myFunctions;
ExprIntrp_SequenceOfNamedExpression myNamed;
Handle_ExprIntrp_Generator myMaster;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
