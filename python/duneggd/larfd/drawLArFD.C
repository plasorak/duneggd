
#import "TGeoManager.h"
/////////////////////////////////////////////////
/////////////////////////////////////////////////

void drawLArFD()
{
  gSystem->Load("libGeom");
  gSystem->Load("libGdml");

  TGeoManager::Import("larfd.gdml");
  
  char topVol[] ="volDetEnclosure";
  //char topVol[] ="volCryostat";
  TGeoVolume *top = gGeoManager->GetTopVolume();
  top->SetLineColor( kRed );
  top->SetTransparency( 50 );
  gGeoManager->SetTopVisible();
  gGeoManager->SetVisLevel(3);
  gGeoManager->SetVisOption(0);
  gGeoManager->GetVolume("volDetEnclosure")->SetLineColor(kGreen);
  gGeoManager->GetVolume("volDetEnclosure")->SetTransparency(50);
  gGeoManager->GetVolume("volDetEnclosure")->VisibleDaughters();
  // gGeoManager->GetVolume("volBeamPlanePosX")->SetLineColor(kRed);
  // gGeoManager->GetVolume("volBeamPlanePosX")->SetTransparency(20);
  // gGeoManager->GetVolume("volBeamPlanePosX")->SetVisibility(1);
  
  gGeoManager->GetVolume("volCryostat")->SetLineColor(kOrange);
  gGeoManager->GetVolume("volCryostat")->SetVisibility(1);

  // gGeoManager->GetVolume("volMembrane")->SetTransparency(20);
  // gGeoManager->GetVolume("volMembrane")->SetVisibility(0);
  // gGeoManager->GetVolume("volWorld")->SetVisibility(1);
  // gGeoManager->GetVolume("volDetEnclosure")->SetVisibility(1);
  // gGeoManager->GetVolume("volDetEnclosure")->SetLineColor(kGreen);
  // gGeoManager->GetVolume("volDetEnclosure")->SetTransparency(50);
  // gGeoManager->GetVolume("volDetEnclosure")->DrawOnly("OGL");
  // gGeoManager->GetVolume("volCryostat")->DrawOnly("ogl");//->SetVisibility(1);
  // gGeoManager->GetVolume("volCathode")->SetVisibility(1);
  // gGeoManager->GetVolume("volTPCActive")->SetVisibility(1);
  // gGeoManager->GetVolume("volWaterBoxBack")->SetVisibility(0);
  // gGeoManager->GetVolume("volWaterBoxBottom")->SetVisibility(0);
  // gGeoManager->GetVolume("volWaterBoxTop")->SetVisibility(0);
  // gGeoManager->GetVolume("volWaterBoxRight")->SetVisibility(0);
  // gGeoManager->GetVolume("volWaterBoxLeft")->SetVisibility(0);
  // gGeoManager->GetVolume("volWaterBoxFront")->SetVisibility(0);
  // gGeoManager->GetVolume("volTPCPlaneU")->SetVisibility(1);
  // gGeoManager->GetVolume("volTPCPlaneV")->SetVisibility(0);
  // gGeoManager->GetVolume("volTPCPlaneZ")->SetVisibility(0);
  
  gGeoManager->FindVolumeFast(topVol)->Draw("ogl");
  //gGeoManager->GetVolume("volBeam_0")->DrawOnly("ogl");
}

