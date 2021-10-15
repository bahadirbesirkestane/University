using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace G191210088
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        Random random = new Random();
        double genelAtik;
        double organikAtik;
        double camAtik;
        double kagitAtik;
        double metalAtik;
        int toplamPuan = 0;
        
        int sayi = 60;
        private void Form1_Load(object sender, EventArgs e)
        {
            
        }
       
        private void btnYeniOyun_Click(object sender, EventArgs e)
        {
            timer1.Interval = 1000;
            timer1.Enabled = true;

            btnOrganik.Enabled = true;
            btnMetal.Enabled = true;
            btnKagit.Enabled = true;
            btnCam.Enabled = true;
            btnOrganikBosalt.Enabled = true;
            btnMetalBosalt.Enabled = true;
            btnKagitBosalt.Enabled = true;
            btnCamBosalt.Enabled = true;

            listKagit.Items.Clear();
            listMetal.Items.Clear();
            listOrganik.Items.Clear();
            listCam.Items.Clear();

            prgCam.Value = 0;
            prgOrganik.Value = 0;
            prgMetal.Value = 0;
            prgKagit.Value = 0;

            lblPuan.Text = Convert.ToString(0);
            
            prgOrganik.Minimum = 0;
            prgOrganik.Maximum = 700;
            prgMetal.Minimum = 0;
            prgMetal.Maximum = 2300;
            prgCam.Minimum = 0;
            prgCam.Maximum = 2200;
            prgKagit.Minimum = 0;
            prgKagit.Maximum = 1200;




            genelAtik = random.Next(1, 5);


            if (genelAtik == 1)
            {
                organikAtik = random.Next(5, 7);

                if (organikAtik == 5)
                {
                    pictureBox1.Image = Image.FromFile("organik.jpg");

                }
                else
                {
                    pictureBox1.Image = Image.FromFile("organik1.jpeg");

                }

            }
            else if (genelAtik == 2)
            {
                camAtik = random.Next(7, 9);

                if (camAtik == 7)
                {
                    pictureBox1.Image = Image.FromFile("cam.jpg");

                }
                else
                {
                    pictureBox1.Image = Image.FromFile("cam1.jpeg");

                }


            }
            else if (genelAtik == 3)
            {
                kagitAtik = random.Next(9, 11);

                if (kagitAtik == 9)
                {
                    pictureBox1.Image = Image.FromFile("kagit1.jpg");

                }
                else
                {
                    pictureBox1.Image = Image.FromFile("kagit2.jpg");

                }
            }
            else
            {
                metalAtik = random.Next(11, 13);

                if (metalAtik == 11)
                {
                    pictureBox1.Image = Image.FromFile("metal.jpg");

                }

                else
                {
                    pictureBox1.Image = Image.FromFile("metal2.png");

                }
            }



        }
        private void timer1_Tick(object sender, EventArgs e)
        {
            if (sayi >= 0)
            {
                timer1.Interval = 1000;
                timer1.Enabled = true;
                int sayac = sayi--;
                lblSure.Text = sayac.ToString();

                
            }
            else
            {
                btnOrganik.Enabled = false;
                btnMetal.Enabled = false;
                btnKagit.Enabled = false;
                btnCam.Enabled = false;
                btnOrganikBosalt.Enabled = false;
                btnMetalBosalt.Enabled = false;
                btnKagitBosalt.Enabled = false;
                btnCamBosalt.Enabled = false;

                sayi = 60;

                timer1.Enabled = false;
            }
        }
        public void ResimGetir()
        {
            genelAtik = random.Next(1, 5);
            
            
            if (genelAtik == 1)
            {
                organikAtik = random.Next(5, 7);

                if (organikAtik == 5)
                {
                    pictureBox1.Image = Image.FromFile("organik.jpg");
                    
                }
                else
                {
                    pictureBox1.Image = Image.FromFile("organik1.jpeg");
                    
                }

            }
            else if (genelAtik == 2)
            {
                camAtik = random.Next(7, 9);

                if (camAtik == 7)
                {
                    pictureBox1.Image = Image.FromFile("cam.jpg");
                    
                }
                else
                {
                    pictureBox1.Image = Image.FromFile("cam1.jpeg");
                    
                }


            }
            else if (genelAtik == 3)
            {
                kagitAtik = random.Next(9, 11);

                if (kagitAtik == 9)
                {
                    pictureBox1.Image = Image.FromFile("kagit1.jpg");
                    
                }
                else
                {
                    pictureBox1.Image = Image.FromFile("kagit2.jpg");
                    
                }
            }
            else
            {
                metalAtik = random.Next(11, 13);

                if (metalAtik == 11)
                {
                    pictureBox1.Image = Image.FromFile("metal.jpg");
                    
                }
                else
                {
                    pictureBox1.Image = Image.FromFile("metal2.png");
                    
                }
            }
        }
        private void btnOrganik_Click(object sender, EventArgs e)
        {

            if (genelAtik == 1)
            {
                if (organikAtik == 5)
                {
                    if (prgOrganik.Value + 150 < prgOrganik.Maximum)
                    {
                        toplamPuan += 150;
                        listOrganik.Items.Add("Domates (150)");
                        prgOrganik.Value += 150;
                        lblPuan.Text = Convert.ToString(toplamPuan);

                        ResimGetir();
                    }
                    
                    
                }
                else
                {
                    if (prgOrganik.Value + 120 < prgOrganik.Maximum)
                    {
                        toplamPuan += 120;
                        listOrganik.Items.Add("Salatalık (120)");
                        prgOrganik.Value += 120;
                        lblPuan.Text = Convert.ToString(toplamPuan);
                        ResimGetir();
                    }

                            
                }
                
            }

            
        }

        private void btnKagit_Click(object sender, EventArgs e)
        {
            if (genelAtik == 3)
            {

                if (kagitAtik == 9)
                {
                    if(prgKagit.Value+250<prgKagit.Maximum)
                    {
                        toplamPuan += 250;
                        listKagit.Items.Add("Gazete (250)");
                        prgKagit.Value += 250;
                        lblPuan.Text = Convert.ToString(toplamPuan);

                        ResimGetir();
                    }
                    
                }
                else
                {
                    if (prgKagit.Value + 200 < prgKagit.Maximum)
                    {
                        toplamPuan += 200;
                        listKagit.Items.Add("Dergi (200)");
                        prgKagit.Value += 200;
                        lblPuan.Text = Convert.ToString(toplamPuan);

                        ResimGetir();
                    }

                        
                }
               
            }
            
        }

        private void btnCam_Click(object sender, EventArgs e)
        {
            if (genelAtik == 2)
            {
                if (camAtik == 7)
                {
                   if(prgCam.Value + 600 < prgCam.Maximum)
                   {
                        toplamPuan += 600;
                        listCam.Items.Add("Cam Fanus (600)");
                        prgCam.Value += 600;
                        lblPuan.Text = Convert.ToString(toplamPuan);

                        ResimGetir();
                    }
                    
                }
                else
                {
                    if(prgCam.Value + 250 < prgCam.Maximum)
                    {
                        toplamPuan += 250;
                        listCam.Items.Add("Bardak (250)");
                        prgCam.Value += 250;
                        lblPuan.Text = Convert.ToString(toplamPuan);
                        ResimGetir();
                    }
                    
                }

                
            }
            
        }

        private void btnMetal_Click(object sender, EventArgs e)
        {
            if(genelAtik==4)
            {
                if (metalAtik == 11)
                {
                    if(prgMetal.Value+550 < prgMetal.Maximum)
                    {
                        toplamPuan += 550;
                        listMetal.Items.Add("Salça Kutusu (550)");
                        prgMetal.Value += 550;
                        lblPuan.Text = Convert.ToString(toplamPuan);
                        ResimGetir();
                    }
                        
                }
                else
                {
                    if (prgMetal.Value + 350 < prgMetal.Maximum)
                    {
                        toplamPuan += 350;
                        listMetal.Items.Add("Kola Kutusu (350)");
                        prgMetal.Value += 350;
                        lblPuan.Text = Convert.ToString(toplamPuan);

                        ResimGetir();
                    }

                        
                }

                
            }
            
           
        }

        private void btnOrganikBosalt_Click(object sender, EventArgs e)
        {
            if(prgOrganik.Value>=prgOrganik.Maximum*0.75)
            {
                sayi += 3;
                prgOrganik.Value = 0;
                listOrganik.Items.Clear();
            }
        }

        private void btnKagitBosalt_Click(object sender, EventArgs e)
        {
            if(prgKagit.Value>=prgKagit.Maximum*0.75)
            {
                sayi += 3;
                toplamPuan += 1000;
                lblPuan.Text = Convert.ToString(toplamPuan);
                prgKagit.Value = 0;
                listKagit.Items.Clear();
            }
        }

        private void btnCamBosalt_Click(object sender, EventArgs e)
        {
            if(prgCam.Value>=prgCam.Maximum*0.75)
            {
                sayi += 3;
                toplamPuan += 600;
                prgCam.Value = 0;
                lblPuan.Text = Convert.ToString(toplamPuan);
                listCam.Items.Clear();
            }
        }

        private void btnMetalBosalt_Click(object sender, EventArgs e)
        {
            if(prgMetal.Value>=prgMetal.Maximum*0.75)
            {
                sayi += 3;
                toplamPuan += 800;
                prgMetal.Value = 0;
                lblPuan.Text = Convert.ToString(toplamPuan);
                listMetal.Items.Clear();
            }
        }

        private void btnCıkıs_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
