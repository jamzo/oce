// Created by: NW,JPB,CAL
// Copyright (c) 1991-1999 Matra Datavision
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




//-Version	

//-Design	Declaration des variables specifiques aux groupes
//		de primitives

//-Warning	Un groupe est defini dans une structure
//		Il s'agit de la plus petite entite editable

//-References	

//-Language	C++ 2.0

//-Declarations

// for the class
#include <Graphic3d_Group.jxx>
#include <Graphic3d_Group.pxx>

//-Methods, in order

void Graphic3d_Group::Marker (const Graphic3d_Vertex& APoint, const Standard_Boolean EvalMinMax) {

	if (IsDeleted ()) return;

	MyIsEmpty	= Standard_False;

	// Min-Max Update
	if (EvalMinMax) {
Standard_Real X, Y, Z;
		APoint.Coord (X, Y, Z);
		if (X < MyBounds.XMin) MyBounds.XMin	= Standard_ShortReal (X);
		if (Y < MyBounds.YMin) MyBounds.YMin	= Standard_ShortReal (Y);
		if (Z < MyBounds.ZMin) MyBounds.ZMin	= Standard_ShortReal (Z);
		if (X > MyBounds.XMax) MyBounds.XMax	= Standard_ShortReal (X);
		if (Y > MyBounds.YMax) MyBounds.YMax	= Standard_ShortReal (Y);
		if (Z > MyBounds.ZMax) MyBounds.ZMax	= Standard_ShortReal (Z);
	}

	MyGraphicDriver->Marker (MyCGroup, APoint, EvalMinMax);

	Update ();

}

void Graphic3d_Group::MarkerSet (const Graphic3d_Array1OfVertex& ListVertex, const Standard_Boolean EvalMinMax) {

	if (IsDeleted ()) return;

	MyIsEmpty	= Standard_False;

Standard_Integer i, j;

	i	= ListVertex.Length ();

	// Min-Max Update
	if (EvalMinMax) {
Standard_Real X, Y, Z;
Standard_Integer Lower	= ListVertex.Lower ();
Standard_Integer Upper	= ListVertex.Upper ();
		// Parcours des sommets
		for (j=0, i=Lower; i<=Upper; i++, j++) {
			ListVertex (i).Coord (X, Y, Z);
			if (X < MyBounds.XMin) MyBounds.XMin	= Standard_ShortReal (X);
			if (Y < MyBounds.YMin) MyBounds.YMin	= Standard_ShortReal (Y);
			if (Z < MyBounds.ZMin) MyBounds.ZMin	= Standard_ShortReal (Z);
			if (X > MyBounds.XMax) MyBounds.XMax	= Standard_ShortReal (X);
			if (Y > MyBounds.YMax) MyBounds.YMax	= Standard_ShortReal (Y);
			if (Z > MyBounds.ZMax) MyBounds.ZMax	= Standard_ShortReal (Z);
		}
	}

	MyGraphicDriver->MarkerSet (MyCGroup, ListVertex, EvalMinMax);

	Update ();

}
