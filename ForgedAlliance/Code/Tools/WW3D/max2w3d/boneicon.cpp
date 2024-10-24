/*
**	Command & Conquer Generals(tm)
**	Copyright 2025 Electronic Arts Inc.
**
**	This program is free software: you can redistribute it and/or modify
**	it under the terms of the GNU General Public License as published by
**	the Free Software Foundation, either version 3 of the License, or
**	(at your option) any later version.
**
**	This program is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**	GNU General Public License for more details.
**
**	You should have received a copy of the GNU General Public License
**	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/* $Header: /Commando/Code/Tools/max2w3d/boneicon.cpp 6     1/12/98 4:02p Greg_h $ */
/*********************************************************************************************** 
 ***                            Confidential - Westwood Studios                              *** 
 *********************************************************************************************** 
 *                                                                                             * 
 *                 Project Name : Commando Tools - WWSkin                                      * 
 *                                                                                             * 
 *                     $Archive:: /Commando/Code/Tools/max2w3d/boneicon.cpp                   $* 
 *                                                                                             * 
 *                      $Author:: Greg_h                                                      $* 
 *                                                                                             * 
 *                     $Modtime:: 1/09/98 3:09p                                               $* 
 *                                                                                             * 
 *                    $Revision:: 6                                                           $* 
 *                                                                                             * 
 *---------------------------------------------------------------------------------------------* 
 * Functions:                                                                                  * 
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


#include "boneicon.h"

const int NumBoneIconVerts = 184;
const int NumBoneIconFaces = 366;

/*
** Don't try this at home :-)
*/
#pragma warning(disable:4305)

VertexStruct BoneIconVerts[NumBoneIconVerts] = {
	
	{  0.07,    -0.37,     0.23 },
	{  0.07,    -0.38,     0.22 },
	{  0.07,    -0.37,     0.22 },
	{ -0.07,    -0.38,     0.22 },
	{ -0.07,    -0.38,     0.22 },
	{ -0.05,    -0.31,     0.21 },
	{ -0.07,    -0.38,     0.22 },
	{ -0.07,    -0.37,     0.21 },
	{  0.07,    -0.38,     0.22 },
	{  0.06,    -0.34,     0.18 },
	{   0.07,    -0.38,     0.23 },
	{  -0.07,    -0.38,     0.22 },
	{  -0.10,    -0.42,     0.19 },
	{  -0.04,    -0.47,     0.11 },
	{  -0.04,    -0.51,     0.21 },
	{  -0.04,    -0.36,     0.12 },
	{   0.05,    -0.41,     0.10 },
	{   0.05,    -0.51,     0.15 },
	{   0.05,    -0.49,     0.26 },
	{   0.11,    -0.42,     0.19 },
	{  -0.05,    -0.45,     0.26 },
	{  -0.06,    -0.43,     0.25 },
	{  -0.04,    -0.45,     0.27 },
	{  -0.07,    -0.40,     0.23 },
	{   0.00,    -0.46,     0.27 },
	{   0.04,    -0.45,     0.27 },
	{   0.05,    -0.44,     0.27 },
	{  -0.00,    -0.46,     0.27 },
	{   0.06,    -0.43,     0.25 },
	{   0.07,    -0.39,     0.24 },
	{  -0.11,    -0.37,     0.28 },
	{  -0.05,    -0.47,     0.30 },
	{  -0.05,    -0.38,     0.37 },
	{  -0.05,    -0.29,     0.32 },
	{   0.04,    -0.44,     0.35 },
	{   0.04,    -0.33,     0.36 },
	{   0.04,    -0.28,     0.26 },
	{   0.10,    -0.37,     0.28 },
	{   0.04,    -0.30,     0.23 },
	{   0.04,    -0.29,     0.24 },
	{   0.01,    -0.29,     0.24 },
	{  -0.03,    -0.30,     0.25 },
	{  -0.05,    -0.31,     0.22 },
	{  -0.04,    -0.35,     0.15 },
	{  -0.03,    -0.35,     0.13 },
	{  -0.02,    -0.35,     0.13 },
	{   0.04,    -0.36,     0.14 },
	{   0.05,    -0.34,     0.16 },
	{  -0.05,     0.36,    -0.16 },
	{  -0.05,     0.36,    -0.15 },
	{  -0.07,     0.41,    -0.22 },
	{   0.05,     0.33,    -0.22 },
	{   0.06,     0.35,    -0.21 },
	{   0.07,     0.41,    -0.22 },
	{   0.04,     0.38,    -0.14 },
	{   0.07,     0.40,    -0.20 },
	{   0.07,     0.41,    -0.21 },
	{   0.04,     0.38,    -0.13 },
	{   0.01,     0.38,    -0.13 },
	{  -0.03,     0.38,    -0.13 },
	{  -0.07,     0.40,    -0.21 },
	{  -0.04,     0.33,    -0.22 },
	{  -0.07,     0.41,    -0.22 },
	{  -0.03,     0.32,    -0.24 },
	{  -0.02,     0.32,    -0.24 },
	{   0.04,     0.33,    -0.24 },
	{  -0.10,     0.40,    -0.27 },
	{  -0.04,     0.36,    -0.35 },
	{  -0.04,     0.31,    -0.25 },
	{  -0.04,     0.47,    -0.34 },
	{   0.05,     0.41,    -0.36 },
	{   0.05,     0.32,    -0.31 },
	{   0.05,     0.50,    -0.28 },
	{   0.11,     0.40,    -0.27 },
	{  -0.06,     0.46,    -0.24 },
	{  -0.07,     0.42,    -0.23 },
	{  -0.05,     0.48,    -0.25 },
	{  -0.04,     0.48,    -0.25 },
	{   0.00,     0.49,    -0.26 },
	{   0.04,     0.48,    -0.25 },
	{   0.05,     0.48,    -0.25 },
	{  -0.00,     0.49,    -0.26 },
	{   0.07,     0.43,    -0.21 },
	{   0.06,     0.46,    -0.24 },
	{  -0.11,     0.45,    -0.18 },
	{  -0.05,     0.44,    -0.08 },
	{  -0.05,     0.54,    -0.14 },
	{  -0.05,     0.52,    -0.25 },
	{   0.04,     0.39,    -0.11 },
	{   0.04,     0.50,    -0.10 },
	{   0.04,     0.54,    -0.20 },
	{   0.10,     0.45,    -0.18 },
	{   0.07,     0.37,     0.22 },
	{   0.07,     0.37,     0.22 },
	{   0.07,     0.37,     0.21 },
	{  -0.07,     0.37,     0.22 },
	{  -0.07,     0.37,     0.22 },
	{  -0.05,     0.33,     0.17 },
	{  -0.07,     0.37,     0.22 },
	{  -0.07,     0.36,     0.22 },
	{    0.07,     0.37,     0.22 },
	{    0.06,     0.31,     0.21 },
	{    0.07,     0.37,     0.22 },
	{   -0.07,     0.37,     0.22 },
	{   -0.10,     0.37,     0.27 },
	{   -0.04,     0.32,     0.36 },
	{   -0.04,     0.43,     0.34 },
	{   -0.04,     0.27,     0.25 },
	{    0.05,     0.28,     0.31 },
	{    0.05,     0.38,     0.37 },
	{    0.05,     0.46,     0.29 },
	{    0.11,     0.37,     0.27 },
	{   -0.05,     0.44,     0.26 },
	{   -0.06,     0.43,     0.25 },
	{   -0.04,     0.45,     0.26 },
	{   -0.07,     0.39,     0.24 },
	{    0.00,     0.46,     0.26 },
	{    0.04,     0.45,     0.26 },
	{    0.05,     0.44,     0.25 },
	{   -0.00,     0.46,     0.27 },
	{    0.06,     0.42,     0.25 },
	{    0.07,     0.40,     0.22 },
	{   -0.11,     0.42,     0.19 },
	{   -0.05,     0.48,     0.26 },
	{   -0.05,     0.50,     0.15 },
	{   -0.05,     0.41,     0.09 },
	{    0.04,     0.51,     0.21 },
	{    0.04,     0.46,     0.10 },
	{    0.04,     0.35,     0.12 },
	{    0.10,     0.42,     0.19 },
	{    0.04,     0.35,     0.15 },
	{    0.04,     0.35,     0.14 },
	{    0.01,     0.34,     0.13 },
	{   -0.03,     0.35,     0.14 },
	{   -0.05,     0.33,     0.16 },
	{   -0.04,     0.30,     0.23 },
	{   -0.03,     0.28,     0.24 },
	{   -0.02,     0.28,     0.24 },
	{    0.04,     0.29,     0.25 },
	{    0.05,     0.30,     0.22 },
	{   -0.05,    -0.34,    -0.21 },
	{   -0.05,    -0.34,    -0.22 },
	{   -0.07,    -0.41,    -0.22 },
	{    0.05,    -0.37,    -0.16 },
	{    0.06,    -0.37,    -0.17 },
	{    0.07,    -0.41,    -0.22 },
	{    0.04,    -0.33,    -0.23 },
	{    0.07,    -0.40,    -0.22 },
	{    0.07,    -0.41,    -0.23 },
	{    0.04,    -0.32,    -0.24 },
	{    0.01,    -0.32,    -0.24 },
	{   -0.03,    -0.33,    -0.24 },
	{   -0.07,    -0.40,    -0.21 },
	{   -0.04,    -0.38,    -0.15 },
	{   -0.07,    -0.41,    -0.22 },
	{   -0.03,    -0.38,    -0.13 },
	{   -0.02,    -0.38,    -0.13 },
	{    0.04,    -0.39,    -0.14 },
	{   -0.10,    -0.45,    -0.19 },
	{   -0.04,    -0.50,    -0.11 },
	{   -0.04,    -0.39,    -0.12 },
	{   -0.04,    -0.54,    -0.21 },
	{    0.05,    -0.54,    -0.15 },
	{    0.05,    -0.44,    -0.10 },
	{    0.05,    -0.52,    -0.26 },
	{    0.11,    -0.45,    -0.19 },
	{   -0.06,    -0.46,    -0.26 },
	{   -0.07,    -0.43,    -0.23 },
	{   -0.05,    -0.48,    -0.26 },
	{   -0.04,    -0.48,    -0.27 },
	{    0.00,    -0.49,    -0.27 },
	{    0.04,    -0.48,    -0.27 },
	{    0.05,    -0.47,    -0.27 },
	{   -0.00,    -0.49,    -0.27 },
	{    0.07,    -0.42,    -0.24 },
	{    0.06,    -0.46,    -0.25 },
	{   -0.11,    -0.40,    -0.28 },
	{   -0.05,    -0.32,    -0.32 },
	{   -0.05,    -0.41,    -0.37 },
	{   -0.05,    -0.50,    -0.30 },
	{    0.04,    -0.31,    -0.26 },
	{    0.04,    -0.35,    -0.36 },
	{    0.04,    -0.47,    -0.35 },
	{    0.10,    -0.40,    -0.28 }
};


FaceStruct BoneIconFaces[NumBoneIconFaces] = {

	{ 0, 1, 2 },
	{ 3, 4, 5 },
	{ 6, 3, 7 },
	{ 1, 8, 9 },
	{ 1, 0, 10 },
	{ 4, 3, 11 },
	{ 11, 3, 6 },
	{ 11, 4, 11 },
	{ 10, 8, 1 },
	{ 12, 13, 14 },
	{ 12, 15, 13 },
	{ 13, 16, 17 },
	{ 14, 17, 18 },
	{ 17, 14, 13 },
	{ 16, 13, 15 },
	{ 19, 18, 17 },
	{ 19, 17, 16 },
	{ 12, 14, 20 },
	{ 21, 12, 20 },
	{ 14, 22, 20 },
	{ 22, 14, 18 },
	{ 12, 21, 23 },
	{ 24, 18, 25 },
	{ 18, 26, 25 },
	{ 26, 18, 19 },
	{ 18, 24, 27 },
	{ 22, 18, 27 },
	{ 26, 19, 28 },
	{ 19, 29, 28 },
	{ 30, 31, 32 },
	{ 30, 32, 33 },
	{ 32, 34, 35 },
	{ 33, 35, 36 },
	{ 34, 32, 31 },
	{ 35, 33, 32 },
	{ 37, 35, 34 },
	{ 37, 36, 35 },
	{ 31, 30, 21 },
	{ 20, 31, 21 },
	{ 31, 20, 22 },
	{ 30, 23, 21 },
	{ 34, 31, 24 },
	{ 25, 34, 24 },
	{ 34, 25, 37 },
	{ 37, 25, 26 },
	{ 31, 27, 24 },
	{ 27, 31, 22 },
	{ 28, 37, 26 },
	{ 37, 28, 29 },
	{ 38, 36, 37 },
	{ 37, 2, 38 },
	{ 2, 37, 29 },
	{ 0, 2, 29 },
	{ 36, 38, 39 },
	{ 33, 36, 40 },
	{ 40, 36, 39 },
	{ 33, 40, 41 },
	{ 33, 42, 30 },
	{ 42, 33, 41 },
	{ 5, 30, 42 },
	{ 23, 30, 4 },
	{ 30, 5, 4 },
	{ 12, 23, 6 },
	{ 7, 12, 6 },
	{ 12, 7, 15 },
	{ 43, 15, 7 },
	{ 15, 43, 44 },
	{ 16, 15, 45 },
	{ 45, 15, 44 },
	{ 16, 45, 46 },
	{ 47, 16, 46 },
	{ 16, 47, 19 },
	{ 9, 19, 47 },
	{ 9, 19, 9 },
	{ 29, 19, 8 },
	{ 19, 9, 8 },
	{ 29, 10, 0 },
	{ 6, 23, 11 },
	{ 11, 23, 11 },
	{ 11, 23, 4 },
	{ 10, 29, 8 },
	{ 48, 3, 49 },
	{ 49, 3, 5 },
	{ 50, 3, 48 },
	{ 3, 50, 7 },
	{ 51, 1, 9 },
	{ 1, 51, 52 },
	{ 53, 1, 52 },
	{ 1, 53, 2 },
	{ 56, 38, 2 },
	{ 38, 54, 39 },
	{ 38, 56, 55 },
	{ 38, 55, 54 },
	{ 2, 53, 56 },
	{ 57, 39, 54 },
	{ 39, 57, 40 },
	{ 40, 58, 41 },
	{ 57, 58, 40 },
	{ 59, 41, 58 },
	{ 41, 59, 42 },
	{ 42, 59, 5 },
	{ 49, 5, 59 },
	{ 7, 50, 43 },
	{ 43, 50, 60 },
	{ 43, 60, 61 },
	{ 43, 61, 44 },
	{ 60, 50, 62 },
	{ 63, 44, 61 },
	{ 44, 63, 45 },
	{ 45, 63, 64 },
	{ 45, 64, 46 },
	{ 65, 46, 64 },
	{ 46, 65, 47 },
	{ 47, 65, 9 },
	{ 51, 9, 65 },
	{ 66, 67, 68 },
	{ 66, 69, 67 },
	{ 67, 70, 71 },
	{ 69, 72, 70 },
	{ 71, 68, 67 },
	{ 70, 67, 69 },
	{ 73, 70, 72 },
	{ 73, 71, 70 },
	{ 74, 66, 75 },
	{ 66, 74, 69 },
	{ 69, 74, 76 },
	{ 77, 69, 76 },
	{ 69, 77, 72 },
	{ 72, 78, 79 },
	{ 80, 72, 79 },
	{ 72, 80, 73 },
	{ 78, 72, 81 },
	{ 72, 77, 81 },
	{ 82, 73, 83 },
	{ 73, 80, 83 },
	{ 84, 85, 86 },
	{ 84, 86, 87 },
	{ 85, 88, 89 },
	{ 86, 89, 90 },
	{ 89, 86, 85 },
	{ 90, 87, 86 },
	{ 91, 89, 88 },
	{ 91, 90, 89 },
	{ 75, 84, 87 },
	{ 75, 87, 74 },
	{ 87, 76, 74 },
	{ 76, 87, 77 },
	{ 87, 90, 78 },
	{ 90, 79, 78 },
	{ 79, 90, 91 },
	{ 79, 91, 80 },
	{ 81, 87, 78 },
	{ 87, 81, 77 },
	{ 91, 83, 80 },
	{ 83, 91, 82 },
	{ 84, 48, 85 },
	{ 49, 85, 48 },
	{ 48, 84, 50 },
	{ 84, 75, 50 },
	{ 51, 71, 73 },
	{ 73, 52, 51 },
	{ 52, 73, 53 },
	{ 73, 82, 53 },
	{ 56, 82, 91 },
	{ 88, 54, 91 },
	{ 91, 54, 55 },
	{ 91, 55, 56 },
	{ 56, 53, 82 },
	{ 54, 88, 57 },
	{ 88, 85, 58 },
	{ 57, 88, 58 },
	{ 58, 85, 59 },
	{ 49, 59, 85 },
	{ 66, 60, 75 },
	{ 68, 60, 66 },
	{ 68, 61, 60 },
	{ 62, 75, 60 },
	{ 75, 62, 50 },
	{ 61, 68, 63 },
	{ 64, 68, 71 },
	{ 68, 64, 63 },
	{ 64, 71, 65 },
	{ 51, 65, 71 },
	{ 92, 93, 94 },
	{ 95, 96, 97 },
	{ 98, 95, 99 },
	{ 93, 100, 101 },
	{ 93, 92, 102 },
	{ 96, 95, 103 },
	{ 103, 95, 98 },
	{ 103, 96, 103 },
	{ 102, 100, 93 },
	{ 104, 105, 106 },
	{ 104, 107, 105 },
	{ 105, 108, 109 },
	{ 106, 109, 110 },
	{ 109, 106, 105 },
	{ 108, 105, 107 },
	{ 111, 110, 109 },
	{ 111, 109, 108 },
	{ 104, 106, 112 },
	{ 113, 104, 112 },
	{ 106, 114, 112 },
	{ 114, 106, 110 },
	{ 104, 113, 115 },
	{ 116, 110, 117 },
	{ 110, 118, 117 },
	{ 118, 110, 111 },
	{ 110, 116, 119 },
	{ 114, 110, 119 },
	{ 118, 111, 120 },
	{ 111, 121, 120 },
	{ 122, 123, 124 },
	{ 122, 124, 125 },
	{ 124, 126, 127 },
	{ 125, 127, 128 },
	{ 126, 124, 123 },
	{ 127, 125, 124 },
	{ 129, 127, 126 },
	{ 129, 128, 127 },
	{ 123, 122, 113 },
	{ 112, 123, 113 },
	{ 123, 112, 114 },
	{ 122, 115, 113 },
	{ 126, 123, 116 },
	{ 117, 126, 116 },
	{ 126, 117, 129 },
	{ 129, 117, 118 },
	{ 123, 119, 116 },
	{ 119, 123, 114 },
	{ 120, 129, 118 },
	{ 129, 120, 121 },
	{ 130, 128, 129 },
	{ 129, 94, 130 },
	{ 94, 129, 121 },
	{ 92, 94, 121 },
	{ 128, 130, 131 },
	{ 125, 128, 132 },
	{ 132, 128, 131 },
	{ 125, 132, 133 },
	{ 125, 134, 122 },
	{ 134, 125, 133 },
	{ 97, 122, 134 },
	{ 115, 122, 96 },
	{ 122, 97, 96 },
	{ 104, 115, 98 },
	{ 99, 104, 98 },
	{ 104, 99, 107 },
	{ 135, 107, 99 },
	{ 107, 135, 136 },
	{ 108, 107, 137 },
	{ 137, 107, 136 },
	{ 108, 137, 138 },
	{ 139, 108, 138 },
	{ 108, 139, 111 },
	{ 101, 111, 139 },
	{ 101, 111, 101 },
	{ 121, 111, 100 },
	{ 111, 101, 100 },
	{ 121, 102, 92 },
	{ 98, 115, 103 },
	{ 103, 115, 103 },
	{ 103, 115, 96 },
	{ 102, 121, 100 },
	{ 140, 95, 141 },
	{ 141, 95, 97 },
	{ 142, 95, 140 },
	{ 95, 142, 99 },
	{ 143, 93, 101 },
	{ 93, 143, 144 },
	{ 145, 93, 144 },
	{ 93, 145, 94 },
	{ 148, 130, 94 },
	{ 130, 146, 131 },
	{ 130, 148, 147 },
	{ 130, 147, 146 },
	{ 94, 145, 148 },
	{ 149, 131, 146 },
	{ 131, 149, 132 },
	{ 132, 150, 133 },
	{ 149, 150, 132 },
	{ 151, 133, 150 },
	{ 133, 151, 134 },
	{ 134, 151, 97 },
	{ 141, 97, 151 },
	{ 99, 142, 135 },
	{ 135, 142, 152 },
	{ 135, 152, 153 },
	{ 135, 153, 136 },
	{ 152, 142, 154 },
	{ 155, 136, 153 },
	{ 136, 155, 137 },
	{ 137, 155, 156 },
	{ 137, 156, 138 },
	{ 157, 138, 156 },
	{ 138, 157, 139 },
	{ 139, 157, 101 },
	{ 143, 101, 157 },
	{ 158, 159, 160 },
	{ 158, 161, 159 },
	{ 159, 162, 163 },
	{ 161, 164, 162 },
	{ 163, 160, 159 },
	{ 162, 159, 161 },
	{ 165, 162, 164 },
	{ 165, 163, 162 },
	{ 166, 158, 167 },
	{ 158, 166, 161 },
	{ 161, 166, 168 },
	{ 169, 161, 168 },
	{ 161, 169, 164 },
	{ 164, 170, 171 },
	{ 172, 164, 171 },
	{ 164, 172, 165 },
	{ 170, 164, 173 },
	{ 164, 169, 173 },
	{ 174, 165, 175 },
	{ 165, 172, 175 },
	{ 176, 177, 178 },
	{ 176, 178, 179 },
	{ 177, 180, 181 },
	{ 178, 181, 182 },
	{ 181, 178, 177 },
	{ 182, 179, 178 },
	{ 183, 181, 180 },
	{ 183, 182, 181 },
	{ 167, 176, 179 },
	{ 167, 179, 166 },
	{ 179, 168, 166 },
	{ 168, 179, 169 },
	{ 179, 182, 170 },
	{ 182, 171, 170 },
	{ 171, 182, 183 },
	{ 171, 183, 172 },
	{ 173, 179, 170 },
	{ 179, 173, 169 },
	{ 183, 175, 172 },
	{ 175, 183, 174 },
	{ 176, 140, 177 },
	{ 141, 177, 140 },
	{ 140, 176, 142 },
	{ 176, 167, 142 },
	{ 143, 163, 165 },
	{ 165, 144, 143 },
	{ 144, 165, 145 },
	{ 165, 174, 145 },
	{ 148, 174, 183 },
	{ 180, 146, 183 },
	{ 183, 146, 147 },
	{ 183, 147, 148 },
	{ 148, 145, 174 },
	{ 146, 180, 149 },
	{ 180, 177, 150 },
	{ 149, 180, 150 },
	{ 150, 177, 151 },
	{ 141, 151, 177 },
	{ 158, 152, 167 },
	{ 160, 152, 158 },
	{ 160, 153, 152 },
	{ 154, 167, 152 },
	{ 167, 154, 142 },
	{ 153, 160, 155 },
	{ 156, 160, 163 },
	{ 160, 156, 155 },
	{ 156, 163, 157 },
	{ 143, 157, 163 }
};
