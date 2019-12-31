/*****************************************************************************
 * HTextureInspectionResult.h
 ***************************************************************************** 
 *
 * Project:     HALCON/C++
 * Description: Class HTextureInspectionResult
 *
 * (c) 2016 by MVTec Software GmbH
 *             www.mvtec.com
 * 
 *****************************************************************************
 *
 *
 */

#ifndef H_TEXTURE_INSPECTION_RESULT_H
#define H_TEXTURE_INSPECTION_RESULT_H

#include "HCPPToolRef.h"

namespace Halcon {


class LIntExport HTextureInspectionResult: public HToolBase
{
public:
  
  // Tool-specific functional class constructors
  
  HTextureInspectionResult(const HImageArray &Image,
    Halcon::HRegionArray *Region,
    const Halcon::HTextureInspectionModel &TextureInspectionModel);

  // Common tool class management functionality

  HTextureInspectionResult();
  HTextureInspectionResult(Hlong ID);
  const char *ClassName(void) const;
  void  SetHandle(Hlong ID);

  // Tool-specific member functions

  // Add training images to the texture inspection model.
  static HTuple AddTextureInspectionModelImage(const HImageArray &Image, const Halcon::HTextureInspectionModel &TextureInspectionModel);
  // Inspection of the texture within an image.
  virtual HRegionArray ApplyTextureInspectionModel(const HImageArray &Image, const Halcon::HTextureInspectionModel &TextureInspectionModel);
  // Get the training images contained in a texture inspection model.
  static HImageArray GetTextureInspectionModelImage(const Halcon::HTextureInspectionModel &TextureInspectionModel);
  // Train a texture inspection model.
  static void TrainTextureInspectionModel(const Halcon::HTextureInspectionModel &TextureInspectionModel);
};

}

#endif
