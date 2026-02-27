void gauss_hist() {
  gStyle->SetOptFit(1);

  TH1F *h = new TH1F("h","Gaussian;X;Entries",50,-5,5);
  for (int i=0;i<1000;i++) h->Fill(gRandom->Gaus(0,1));

  TCanvas *c = new TCanvas("c","Gaussian Fit",800,600);
  h->Draw();

  auto fit = h->Fit("gaus","S");
  fit->Print("V");               // prints fit result to terminal

  c->SaveAs("gauss_hist.png");
}
