// Created on: 1992-08-19
// Created by: Modelistation
// Copyright (c) 1992-1999 Matra Datavision
// Copyright (c) 1999-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.


#include <Hatch_Parameter.ixx>

//=======================================================================
//function : Hatch_Parameter
//purpose  : 
//=======================================================================

Hatch_Parameter::Hatch_Parameter()
{
}

//=======================================================================
//function : Hatch_Parameter
//purpose  : 
//=======================================================================

Hatch_Parameter::Hatch_Parameter
  (const Standard_Real    Par1,
   const Standard_Boolean Start,
   const Standard_Integer Index,
   const Standard_Real    Par2) :
       myPar1(Par1), myStart(Start), myIndex(Index), myPar2(Par2)
{
}
