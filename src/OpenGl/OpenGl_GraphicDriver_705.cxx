// Created on: 2011-10-20
// Created by: Sergey ZERCHANINOV
// Copyright (c) 2011-2012 OPEN CASCADE SAS
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


#include <OpenGl_GraphicDriver.hxx>

#include <OpenGl_Group.hxx>
#include <OpenGl_Polygon.hxx>

void OpenGl_GraphicDriver::Polygon (const Graphic3d_CGroup& ACGroup,
                                   const Graphic3d_Array1OfVertex& AListVertex,
                                   const Graphic3d_TypeOfPolygon AType,
                                   const Standard_Boolean )
{
  if (ACGroup.ptrGroup)
  {
    OpenGl_Polygon *apolygon = new OpenGl_Polygon( AListVertex, AType );
    ((OpenGl_Group *)ACGroup.ptrGroup)->AddElement( TelPolygon, apolygon );
  }
}
