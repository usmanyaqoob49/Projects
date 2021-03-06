<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">

        <link rel="stylesheet" href="assets/css/styles.css">

        <!-- =====BOX ICONS===== -->
        <link href='https://cdn.jsdelivr.net/npm/boxicons@2.0.5/css/boxicons.min.css' rel='stylesheet'>

        <title>Clinical Doctor System</title>
    </head>
    <body>
        <!--===== HEADER =====-->
        <header class="l-header">
            <nav class="nav bd-grid">
                <div>
                                     <!--LOGO-->
                    <img src = "assets/img/L.PNG" width = "150" height = "150" align = left>
                    <!--<a href="#" class="nav__logo">Clinical Doctor System</a>-->
                </div>

                <div class="nav__menu" id="nav-menu">
                    <ul class="nav__list">
                        <li class="nav__item"><a href="#home" class="nav__link active">Home</a></li>
                        <li class="nav__item"><a href="#about" class="nav__link">About Us</a></li>
                        <li class="nav__item"><a href="#skills" class="nav__link">Our Stats</a></li>
                        <li class="nav__item"><a href="#work" class="nav__link">Services</a></li>
                        <li class="nav__item"><a href="#contact" class="nav__link">Contact</a></li>
                    </ul>

                </div>

                <div class="nav__toggle" id="nav-toggle">
                    <i class='bx bx-menu'></i>
                </div>
            </nav>
        </header>

        <main class="l-main">
            <!--===== HOME =====-->
            <section class="home bd-grid" id="home">
                <div class="home__data">
                    <h1 class="home__title">Hi!<br>Welcome to<br><span class="home__title-color">Clinical Doctor System</span><br> 24/7 Service </h1>

                    <a href="<?php echo e(url('./appointment')); ?>" class="button">Make an Appointment</a>
                </div>
                <div class = "b-example-divider"></div>

                <div class="home__img">    
                    <img src="assets/img/image3.png" alt="">
                </div>
            </section>
            <br><br><br><br><br><br>
            <!--===== ABOUT =====-->
            <section class="about section " id="about">
                <h2 class="section-title">About Us</h2>

                <div class="about__container bd-grid">
                    <div class="about__img">
                        <img src="assets/img/image4.jpg" alt="">
                    </div>
                    
                    <div>
                        <h2 class="about__subtitle">WHO ARE WE?</h2>
                        <p class="about__text"> We are a group of highly achieved professionals offering treatments in the field of "General Physiology". <br> We have cutting edge technological equipments in our state of art Labortaries. <br> Also we have one of the best pharmacy store of the City. </p>           
                    </div>                                   
                </div>
                <div class = "b-example-divider"></div>
            </section>
            
            <br><br><br> <br><br><br> <br><br><br>

            <!--===== stats =====-->
            <section class="skills section" id="skills">
                <h2 class="section-title">Our Stats</h2>

                <div class="skills__container bd-grid">          
                    <div>
                        <h2 class="skills__subtitle">What we have Achieved?</h2>
                        <p class="skills__text">We hold ourselves to a higher standard. Here we strive to deliver a good health for you. </p>
                        <div class="skills__data">
                            <div class="skills__names">
                                <span class="skills__name">Treated Patients</span>
                            </div>
                            <div class="skills__bar">

                            </div>
                            <div>
                                <span class="skills__percentage">2000+</span>
                            </div>
                        </div>
                        <div class="skills__data">
                            <div class="skills__names">
                                <span class="skills__name">Stocked Medicine</span>
                            </div>
                            <div class="skills__bar">
                                
                            </div>
                            <div>
                                <span class="skills__percentage">5000+</span>
                            </div>
                        </div>
                        <div class="skills__data">
                            <div class="skills__names">
                                <span class="skills__name">Number of Doctors</span>
                            </div>
                            <div class="skills__bar">
                                
                            </div>
                            <div>
                                <span class="skills__percentage">10+</span>
                            </div>
                        </div>
                        <div class="skills__data">
                            <div class="skills__names">
                                <span class="skills__name">Lab Technicians</span>
                            </div>
                            <div class="skills__bar">
                                
                            </div>
                            <div>
                                <span class="skills__percentage">5+</span>
                            </div>
                        </div>
                    </div>
                    
                    <div>              
                        <img src="assets/img/image2.png" alt="" class="skills__img">
                    </div>
                </div>
            </section>

            <br><br><br>

            <!--===== services =====-->
            <section class="work section" id="work">
                <h2 class="section-title">Services</h2>

                <div class="work__container bd-grid">
                    <div class="work__img">
                        <a href="<?php echo e(url('./doctors')); ?>">
                        <img src="assets/img/i.PNG" alt="">
                        </a>
                    </div>
                    <div class="work__img">
                        <a href="<?php echo e(url('./patients')); ?>">
                        <img src="assets/img/patients.PNG" alt="">
                        </a>
                    </div>
                    <div class="work__img">
                        <a href="<?php echo e(url('./assistants')); ?>">
                        <img src="assets/img/med_assis.png" alt="">
                        </a>
                    </div>
                    <div class="work__img">
                        <a href="<?php echo e(url('./medicines')); ?>">
                        <img src="assets/img/medicines.png" alt="">
                        </a>
                    </div>
                    <div class="work__img">
                        <a href="<?php echo e(url('./pharmacies')); ?>">
                        <img src="assets/img/phar.png" alt="">
                        </a>
                    </div>
                </div>
            </section>
            <br><br>

            <!--===== CONTACT =====-->
            <section class="contact section" id="contact">
                <h2 class="section-title">Contact</h2>

                <div class="contact__container bd-grid">
                    <form action="" class="contact__form">
                        <input type="text" placeholder="Name" class="contact__input">
                        <input type="mail" placeholder="Email" class="contact__input">
                        <textarea name="" placeholder="Feedback" id="" cols="0" rows="10" class="contact__input"></textarea>
                        <input type="button" value="Submit" class="contact__button button">
                    </form>
                </div>
            </section>
        </main>

        <!--===== FOOTER =====-->
        <footer class="footer">
            <p class="footer__title">Social Accounts</p>
            <div class="footer__social">
                <a href="https://web.facebook.com/" class="footer__icon"><i class='bx bxl-facebook' ></i></a>
                <a href="https://twitter.com/" class="footer__icon"><i class='bx bxl-twitter' ></i></a>
                <a href="https://www.instagram.com/" class="footer__icon"><i class='bx bxl-linkedin' ></i></a>
            </div>
            <p>&#169; 2022 copyright all right reserved</p>
        </footer>


        <!--===== SCROLL REVEAL =====-->
        <script src="https://unpkg.com/scrollreveal"></script>

        <!--===== MAIN JS =====-->
        <script src="assets/js/main.js"></script>
    </body>
</html><?php /**PATH C:\xampp\htdocs\3. Website Front End\clinical_System_backend\resources\views/website.blade.php ENDPATH**/ ?>