/*****************************************************************************
 * HOCRCnn.h
 *****************************************************************************
 *
 * Project:     HALCON/C++
 * Description: Class HOCRSvm
 *
 * (c) 1996-2016 by MVTec Software GmbH
 *                  www.mvtec.com
 *
 *****************************************************************************
 *
 *
 */

#ifndef H_OCRCNN_H
#define H_OCRCNN_H


#include "HCPPToolRef.h"


namespace Halcon {


class LIntExport HOCRCnn: public HToolBase
{
public:

  // Tool-specific functional class constructors

  HOCRCnn(const HTuple &FileName);

  // Common tool class management functionality

  HOCRCnn();
  HOCRCnn(Hlong ID);
  const char *ClassName(void) const;
  void  SetHandle(Hlong ID);

  // Tool-specific member functions

  // Deserialize a serialized CNN-based OCR classifier.
  virtual void DeserializeOcrClassCnn(const Halcon::HSerializedItem &SerializedItemHandle);
  // Classify multiple characters with an CNN-based OCR classifier.
  virtual HTuple DoOcrMultiClassCnn(const HRegionArray &Character, const HImage &Image, Halcon::HTuple *Confidence) const;
  // Classify multiple characters with an CNN-based OCR classifier.
  virtual HTuple DoOcrMultiClassCnn(const HRegionArray &Character, const HImage &Image, double *Confidence) const;
  // Classify a single character with an CNN-based OCR classifier.
  virtual HTuple DoOcrSingleClassCnn(const HRegion &Character, const HImage &Image, const Halcon::HTuple &Num, Halcon::HTuple *Confidence) const;
  // Classify a single character with an CNN-based OCR classifier.
  virtual HTuple DoOcrSingleClassCnn(const HRegion &Character, const HImage &Image, const Halcon::HTuple &Num, double *Confidence) const;
  // Classify a related group of characters with an CNN-based OCR classifier.
  virtual HTuple DoOcrWordCnn(const HRegionArray &Character, const HImage &Image, const Halcon::HTuple &Expression, const Halcon::HTuple &NumAlternatives, const Halcon::HTuple &NumCorrections, Halcon::HTuple *Confidence, Halcon::HTuple *Word, Halcon::HTuple *Score) const;
  // Classify a related group of characters with an CNN-based OCR classifier.
  virtual HTuple DoOcrWordCnn(const HRegionArray &Character, const HImage &Image, const Halcon::HTuple &Expression, const Halcon::HTuple &NumAlternatives, const Halcon::HTuple &NumCorrections, double *Confidence, char *Word, double *Score) const;
  // Classify a related group of characters with an CNN-based OCR classifier.
  virtual HTuple DoOcrWordCnn(const HRegionArray &Character, const HImage &Image, const char *Expression, Hlong NumAlternatives, Hlong NumCorrections, Halcon::HTuple *Confidence, Halcon::HTuple *Word, Halcon::HTuple *Score) const;
  // Classify a related group of characters with an CNN-based OCR classifier.
  virtual HTuple DoOcrWordCnn(const HRegionArray &Character, const HImage &Image, const char *Expression, Hlong NumAlternatives, Hlong NumCorrections, double *Confidence, char *Word, double *Score) const;
  // Return the parameters of an CNN-based OCR classifier.
  virtual HTuple GetParamsOcrClassCnn(const Halcon::HTuple &GenParamNames) const;
  // Return the parameters of an CNN-based OCR classifier.
  virtual HTuple GetParamsOcrClassCnn(const char *GenParamNames) const;
  // Get the names of the parameters that can be used in get_params_ocr_class_cnn
  // for a given CNN-based OCR classifier.
  virtual HTuple QueryParamsOcrClassCnn() const;
  // Read an CNN-based OCR classifier from a file.
  virtual void ReadOcrClassCnn(const Halcon::HTuple &FileName);
  // Read an CNN-based OCR classifier from a file.
  virtual void ReadOcrClassCnn(const char *FileName);
  // Serialize a CNN-based OCR classifier
  virtual HSerializedItem SerializeOcrClassCnn() const;
};

}

#endif
