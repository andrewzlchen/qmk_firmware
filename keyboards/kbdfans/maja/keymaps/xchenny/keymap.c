#include qmk_keyboard_h


const uint16_t progmem keymaps[][matrix_rows][matrix_cols] = {
		[0] = layout( /* base */
			kc_gesc,       kc_1,     kc_2,     kc_3,  kc_4,  kc_5,  kc_6,    kc_7,  kc_8,    kc_9,     kc_0,     kc_mins,  kc_eql,  kc_bspc,   kc_home,
		    kc_tab,        kc_q,     kc_w,     kc_e,  kc_r,  kc_t,  kc_y,    kc_u,  kc_i,    kc_o,     kc_p,     kc_lbrc,  kc_rbrc, kc_bslash, kc_pgup,
			ctl_t(kc_caps),kc_a,     kc_s,     kc_d,  kc_f,  kc_g,  kc_h,    kc_j,  kc_k,    kc_l,     kc_scln,  kc_quot,           kc_ent,    kc_pgdn,
		    kc_lsft,       kc_z,     kc_x,     kc_c,  kc_v,  kc_b,  mo(1),   kc_n,  kc_m,    kc_comm,  kc_dot,   kc_slsh,  kc_rsft, kc_up,
		    kc_lctl,                 kc_lgui,  kc_lalt,      kc_spc,         kc_ralt,        kc_rctl,                      kc_left, kc_down,   kc_right),
		[1] = layout( /* fn */
			kc_gesc,       kc_f1,    kc_f2,   kc_f3,  kc_f4,   kc_f5,   kc_f6,   kc_f7,   kc_f8,   kc_f9,   kc_f10,   kc_f11,  kc_f12,  reset,   kc_home,
		    kc_trns,       rgb_tog,  rgb_mod, rgb_hui,rgb_hud, rgb_sai, rgb_sad, rgb_vai, rgb_vad, kc_trns, kc_pscr, kc_slck,  kc_paus, reset,    kc_pgup,
			ctl_t(kc_caps),rgb_spi,  rgb_spd, kc_trns,kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns,  kc_trns,          eep_rst,  kc_pgdn,
		    kc_lsft,       kc_trns,  kc_trns, kc_trns,kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns, kc_trns,  kc_trns, kc_volu, kc_mute,
		    kc_trns,                 kc_trns, kc_trns,         kc_trns,           kc_trns,         kc_trns,                    kc_mprv, kc_vold,  kc_mnxt),
 };
