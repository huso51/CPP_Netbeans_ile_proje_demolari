/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.huseyinaydin;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Hüseyin
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(final String[] args) {
        final int d = 10;
        System.out.println(topla());
    }
    
    private static Double topla(){
        Double sonuc = 0.0;
        List<Double> sayiListesi = new ArrayList<>();
        BufferedReader bufferedReader = null;
        try {
            bufferedReader = new BufferedReader(new FileReader(new File("C:\\Users\\Hüseyin\\sayi.dat")));
            String okunan = bufferedReader.readLine();
            String buZamanaKadarki = "";
            boolean buldu = false;
            boolean okunanKontrolDonguDurumu = false;
            int index = 0;
            while (okunan != null) {
                okunanKontrolDonguDurumu = false;
                if (okunan != null) {
                    for (int i = 0; i < okunan.length(); i++) {
                        char item = okunan.charAt(i);
                        if (item != '.') 
                            buZamanaKadarki += item;
                        if (item == '.') {
                            buZamanaKadarki += '.';
                            buldu = true;
                            index++;
                        }
                        if (buldu) {
                            boolean sayiBuldu = false;
                            for (int z = index + 1; z < okunan.length(); z++) {
                                char s = okunan.charAt(z);
                                if (s != '0' && s != '.')
                                    sayiBuldu = true;
                                if (sayiBuldu) {
                                    for (int j = z; j < okunan.length(); j++) 
                                        buZamanaKadarki += okunan.charAt(j);
                                    okunanKontrolDonguDurumu = true;
                                    index = 0;
                                    buldu = false;
                                    break;
                                }
                            }
                        }
                        if (okunanKontrolDonguDurumu)
                            break;
                    }
                }
                okunan = bufferedReader.readLine();

                System.out.println(buZamanaKadarki);
                try {
                    if (!buZamanaKadarki.isEmpty())
                        sayiListesi.add(Double.parseDouble(buZamanaKadarki));
                } catch (NumberFormatException ex) {
                    Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
                } finally {
                    buZamanaKadarki = "";
                }
            }
            
            for (int i = 0; i < sayiListesi.size(); i++) {
                sonuc += sayiListesi.get(i);
            }
            //System.out.println("Sonuc : " + sonuc);
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
        } finally {
            try {
                bufferedReader.close();
            } catch (IOException ex) {
                Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
        return sonuc;
    }

}
