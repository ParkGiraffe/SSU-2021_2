purpose(study).
useLoc(campus).
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

useEnv(indoor) :-
    useLoc(home); 
    useLoc(company_hold); 
    useLoc(car).
useEnv(outdoor) :-
    useLoc(campus); 
    useLoc(cafe); 
    useLoc(company_commute).

brand(apple) :-
    prefOS(iPad_OS).
brand(samsung) :-
    prefOS(android).

tablet(iPad_pro_twelve_inch_apple_pencil) :-
    use(productivity), 
    useEnv(indoor), 
    brand(apple).
tablet(galaxy_tab_S_seven_plus) :-
    use(productivity), 
    useEnv(indoor), 
    brand(samsung). 
tablet(iPad_pro_eleven_inch_apple_pencil) :-
    use(productivity), 
    useEnv(outdoor), 
    brand(apple). 
tablet(galaxy_tab_S_seven) :-
    use(productivity), 
    useEnv(outdoor), 
    brand(samsung). 

tablet(iPad_air) :-
    use(simwork_comsum), 
    useEnv(indoor), 
    brand(apple).
tablet(galaxy_tab_S_seven_FE) :-
    use(simwork_comsum), 
    useEnv(indoor), 
    brand(samsung).
tablet(iPad_mini) :-
    use(simwork_comsum), 
    useEnv(outdoor), 
    brand(apple).
tablet(galaxy_tab_S_five_e) :-
    use(simwork_comsum), 
    useEnv(outdoor), 
    brand(samsung).

tablet(iPad_pro_11) :-
    use(game), 
    useEnv(indoor).
tablet(iPad_mini) :-
    use(game), 
    useEnv(outdoor).

tablet(iPad) :-
    use(etc), 
    brand(apple).
tablet(galaxy_tab_A_seven_Lite) :-
    use(etc), 
    brand(samsung).
