/*****************************************************************************
 * HTextureInspectionModel.h
 ***************************************************************************** 
 *
 * Project:     HALCON/C++
 * Description: Class HTextureInspectionModel
 *
 * (c) 2016 by MVTec Software GmbH
 *             www.mvtec.com
 * 
 *****************************************************************************
 *
 *
 */

#ifndef H_TEXTURE_INSPECTION_MODEL_H
#define H_TEXTURE_INSPECTION_MODEL_H

#include "HCPPToolRef.h"

namespace Halcon {


class LIntExport HTextureInspectionModel: public HToolBase
{
public:

  // Tool-specific functional class constructors

  HTextureInspectionModel(const char* Type);
  // Common tool class management functionality

  HTextureInspectionModel(Hlong ID);
  const char *ClassName(void) const;
  void  SetHandle(Hlong ID);

  // Tool-specific member functions

  // Add training images to the texture inspection model.
  virtual HTuple AddTextureInspectionModelImage(const HImageArray &Image) const;
  // Inspection of the texture within an image.
  virtual HRegionArray ApplyTextureInspectionModel(const HImageArray &Image, Halcon::HTextureInspectionResult *TextureInspectionResultID) const;
  // Create a texture inspection model.
  virtual void CreateTextureInspectionModel(const Halcon::HTuple &ModelType);
  // Create a texture inspection model.
  virtual void CreateTextureInspectionModel(const char *ModelType);
  // Deserialize a serialized texture inspection model.
  virtual void DeserializeTextureInspectionModel(const Halcon::HSerializedItem &SerializedItemHandle);
  // Get the training images contained in a texture inspection model.
  virtual HImageArray GetTextureInspectionModelImage() const;
  // Query parameters of a texture inspection model.
  virtual HTuple GetTextureInspectionModelParam(const Halcon::HTuple &GenParamName) const;
  // Query parameters of a texture inspection model.
  virtual HTuple GetTextureInspectionModelParam(const char *GenParamName) const;
  // Read a texture inspection model from a file.
  virtual void ReadTextureInspectionModel(const Halcon::HTuple &FileName);
  // Read a texture inspection model from a file.
  virtual void ReadTextureInspectionModel(const char *FileName);
  // Clear all or a user-defined subset of the images of a
  // texture inspection model.
  virtual HTuple RemoveTextureInspectionModelImage(const Halcon::HTuple &Indices) const;
  // Serialize a texture inspection model.
  virtual HSerializedItem SerializeTextureInspectionModel() const;
  // Set parameters of a texture inspection model.
  virtual void SetTextureInspectionModelParam(const Halcon::HTuple &GenParamName, const Halcon::HTuple &GenParamValue) const;
  // Set parameters of a texture inspection model.
  virtual void SetTextureInspectionModelParam(const char *GenParamName, Hlong GenParamValue) const;
  // Train a texture inspection model.
  virtual void TrainTextureInspectionModel() const;
  // Write a texture inspection model to a file.
  virtual void WriteTextureInspectionModel(const Halcon::HTuple &FileName) const;
  // Write a texture inspection model to a file.
  virtual void WriteTextureInspectionModel(const char *FileName) const;
};

}

#endif
