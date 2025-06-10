#include "zmk-helpers/helper.h"
#include "zmk-helpers/key-labels/totem.h"

// https://github.com/urob/zmk-config/tree/main#timeless-homerow-mods
#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4 LB5 // Left-hand keys.
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4 RB5 // Right-hand keys.
#define THUMBS LH2 LH1 LH0 RH0 RH1 RH2                                      // Thumb keys.

#define TAPPING_TERM_MS 280
#define QUICK_TAP_MS 175
#define REQUIRE_PRIOR_IDLE_MS 150

/* Left-hand HRMs. */
ZMK_HOLD_TAP(hml,
    flavor = "balanced";
    tapping-term-ms = <TAPPING_TERM_MS>;
    quick-tap-ms = <QUICK_TAP_MS>;
    require-prior-idle-ms = <REQUIRE_PRIOR_IDLE_MS>;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <KEYS_R THUMBS>;
    hold-trigger-on-release;
)

/* Right-hand HRMs. */
ZMK_HOLD_TAP(hmr,
    flavor = "balanced";
    tapping-term-ms = <TAPPING_TERM_MS>;
    quick-tap-ms = <QUICK_TAP_MS>;
    require-prior-idle-ms = <REQUIRE_PRIOR_IDLE_MS>;
    bindings = <&kp>, <&kp>;
    hold-trigger-key-positions = <KEYS_L THUMBS>;
    hold-trigger-on-release;
)