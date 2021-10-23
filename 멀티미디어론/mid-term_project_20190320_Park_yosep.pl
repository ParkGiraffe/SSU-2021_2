purpose(study).
use_loc(campus).
prefOS(iPad_OS).



use(productivity) :-
    purpose(study); 
    purpose(drawing); 
    purpose(video_editing);
    purpose(photo_editing).
use(simwork_comsum) :-
    purpose(movie); 
    purpose(e-book); 
    purpose(web_surf); 
    purpose(edit_docs).
use(game) :-
    purpose(game).
use(etc) :-
    purpose(child_edu); 
    purpose(smart_home); 
    purpose(car_nav).

use_env(indoor) :-
    use_loc(home); 
    use_loc(company_hold); 
    use_loc(car).
use_env(outdoor) :-
    use_loc(campus); 
    use_loc(cafe); 
    use_loc(company_commute).

brand(apple) :-
    prefOS(iPad_OS).
brand(samsung) :-
    prefOS(android).

tablet(iPad_pro_twelve_inch_apple_pencil) :-
    use(productivity), 
    use_env(indoor), 
    brand(apple).
tablet(galaxy_tab_S_seven_plus) :-
    use(productivity), 
    use_env(indoor), 
    brand(samsung). 
tablet(iPad_pro_eleven_inch_apple_pencil) :-
    use(productivity), 
    use_env(outdoor), 
    brand(apple). 
tablet(galaxy_tab_S_seven) :-
    use(productivity), 
    use_env(outdoor), 
    brand(samsung). 

tablet(iPad_air) :-
    use(simwork_comsum), 
    use_env(indoor), 
    brand(apple).
tablet(galaxy_tab_S_seven_FE) :-
    use(simwork_comsum), 
    use_env(indoor), 
    brand(samsung).
tablet(iPad_mini) :-
    use(simwork_comsum), 
    use_env(outdoor), 
    brand(apple).
tablet(galaxy_tab_S_five_e) :-
    use(simwork_comsum), 
    use_env(outdoor), 
    brand(samsung).

tablet(iPad_pro_11) :-
    use(game), 
    use_env(indoor).
tablet(iPad_mini) :-
    use(game), 
    use_env(outdoor).

tablet(iPad) :-
    use(etc), 
    brand(apple).
tablet(galaxy_tab_A_seven_Lite) :-
    use(etc), 
    brand(samsung).
