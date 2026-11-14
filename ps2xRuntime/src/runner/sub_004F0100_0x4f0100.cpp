#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F0100
// Address: 0x4f0100 - 0x4f0540
void sub_004F0100_0x4f0100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0100_0x4f0100");
#endif

    switch (ctx->pc) {
        case 0x4f0200u: goto label_4f0200;
        case 0x4f0234u: goto label_4f0234;
        case 0x4f027cu: goto label_4f027c;
        case 0x4f02b0u: goto label_4f02b0;
        case 0x4f0338u: goto label_4f0338;
        case 0x4f03b4u: goto label_4f03b4;
        case 0x4f045cu: goto label_4f045c;
        case 0x4f0460u: goto label_4f0460;
        case 0x4f0520u: goto label_4f0520;
        default: break;
    }

    ctx->pc = 0x4f0100u;

    // 0x4f0100: 0x0  nop
    ctx->pc = 0x4f0100u;
    // NOP
    // 0x4f0104: 0x0  nop
    ctx->pc = 0x4f0104u;
    // NOP
    // 0x4f0108: 0x0  nop
    ctx->pc = 0x4f0108u;
    // NOP
    // 0x4f010c: 0x0  nop
    ctx->pc = 0x4f010cu;
    // NOP
    // 0x4f0110: 0x0  nop
    ctx->pc = 0x4f0110u;
    // NOP
    // 0x4f0114: 0x0  nop
    ctx->pc = 0x4f0114u;
    // NOP
    // 0x4f0118: 0x0  nop
    ctx->pc = 0x4f0118u;
    // NOP
    // 0x4f011c: 0x0  nop
    ctx->pc = 0x4f011cu;
    // NOP
    // 0x4f0120: 0x0  nop
    ctx->pc = 0x4f0120u;
    // NOP
    // 0x4f0124: 0x0  nop
    ctx->pc = 0x4f0124u;
    // NOP
    // 0x4f0128: 0x0  nop
    ctx->pc = 0x4f0128u;
    // NOP
    // 0x4f012c: 0x0  nop
    ctx->pc = 0x4f012cu;
    // NOP
    // 0x4f0130: 0x0  nop
    ctx->pc = 0x4f0130u;
    // NOP
    // 0x4f0134: 0x0  nop
    ctx->pc = 0x4f0134u;
    // NOP
    // 0x4f0138: 0x0  nop
    ctx->pc = 0x4f0138u;
    // NOP
    // 0x4f013c: 0x0  nop
    ctx->pc = 0x4f013cu;
    // NOP
    // 0x4f0140: 0x0  nop
    ctx->pc = 0x4f0140u;
    // NOP
    // 0x4f0144: 0x0  nop
    ctx->pc = 0x4f0144u;
    // NOP
    // 0x4f0148: 0x0  nop
    ctx->pc = 0x4f0148u;
    // NOP
    // 0x4f014c: 0x0  nop
    ctx->pc = 0x4f014cu;
    // NOP
    // 0x4f0150: 0x0  nop
    ctx->pc = 0x4f0150u;
    // NOP
    // 0x4f0154: 0x0  nop
    ctx->pc = 0x4f0154u;
    // NOP
    // 0x4f0158: 0x0  nop
    ctx->pc = 0x4f0158u;
    // NOP
    // 0x4f015c: 0x0  nop
    ctx->pc = 0x4f015cu;
    // NOP
    // 0x4f0160: 0x0  nop
    ctx->pc = 0x4f0160u;
    // NOP
    // 0x4f0164: 0x0  nop
    ctx->pc = 0x4f0164u;
    // NOP
    // 0x4f0168: 0x0  nop
    ctx->pc = 0x4f0168u;
    // NOP
    // 0x4f016c: 0x0  nop
    ctx->pc = 0x4f016cu;
    // NOP
    // 0x4f0170: 0x0  nop
    ctx->pc = 0x4f0170u;
    // NOP
    // 0x4f0174: 0x0  nop
    ctx->pc = 0x4f0174u;
    // NOP
    // 0x4f0178: 0x0  nop
    ctx->pc = 0x4f0178u;
    // NOP
    // 0x4f017c: 0x0  nop
    ctx->pc = 0x4f017cu;
    // NOP
    // 0x4f0180: 0x0  nop
    ctx->pc = 0x4f0180u;
    // NOP
    // 0x4f0184: 0x0  nop
    ctx->pc = 0x4f0184u;
    // NOP
    // 0x4f0188: 0x0  nop
    ctx->pc = 0x4f0188u;
    // NOP
    // 0x4f018c: 0x0  nop
    ctx->pc = 0x4f018cu;
    // NOP
    // 0x4f0190: 0x0  nop
    ctx->pc = 0x4f0190u;
    // NOP
    // 0x4f0194: 0x0  nop
    ctx->pc = 0x4f0194u;
    // NOP
    // 0x4f0198: 0x0  nop
    ctx->pc = 0x4f0198u;
    // NOP
    // 0x4f019c: 0x0  nop
    ctx->pc = 0x4f019cu;
    // NOP
    // 0x4f01a0: 0x0  nop
    ctx->pc = 0x4f01a0u;
    // NOP
    // 0x4f01a4: 0x0  nop
    ctx->pc = 0x4f01a4u;
    // NOP
    // 0x4f01a8: 0x0  nop
    ctx->pc = 0x4f01a8u;
    // NOP
    // 0x4f01ac: 0x0  nop
    ctx->pc = 0x4f01acu;
    // NOP
    // 0x4f01b0: 0x0  nop
    ctx->pc = 0x4f01b0u;
    // NOP
    // 0x4f01b4: 0x0  nop
    ctx->pc = 0x4f01b4u;
    // NOP
    // 0x4f01b8: 0x0  nop
    ctx->pc = 0x4f01b8u;
    // NOP
    // 0x4f01bc: 0x0  nop
    ctx->pc = 0x4f01bcu;
    // NOP
    // 0x4f01c0: 0x0  nop
    ctx->pc = 0x4f01c0u;
    // NOP
    // 0x4f01c4: 0x0  nop
    ctx->pc = 0x4f01c4u;
    // NOP
    // 0x4f01c8: 0x0  nop
    ctx->pc = 0x4f01c8u;
    // NOP
    // 0x4f01cc: 0x0  nop
    ctx->pc = 0x4f01ccu;
    // NOP
    // 0x4f01d0: 0x0  nop
    ctx->pc = 0x4f01d0u;
    // NOP
    // 0x4f01d4: 0x0  nop
    ctx->pc = 0x4f01d4u;
    // NOP
    // 0x4f01d8: 0x0  nop
    ctx->pc = 0x4f01d8u;
    // NOP
    // 0x4f01dc: 0x0  nop
    ctx->pc = 0x4f01dcu;
    // NOP
    // 0x4f01e0: 0x0  nop
    ctx->pc = 0x4f01e0u;
    // NOP
    // 0x4f01e4: 0x0  nop
    ctx->pc = 0x4f01e4u;
    // NOP
    // 0x4f01e8: 0x0  nop
    ctx->pc = 0x4f01e8u;
    // NOP
    // 0x4f01ec: 0x0  nop
    ctx->pc = 0x4f01ecu;
    // NOP
    // 0x4f01f0: 0x0  nop
    ctx->pc = 0x4f01f0u;
    // NOP
    // 0x4f01f4: 0x0  nop
    ctx->pc = 0x4f01f4u;
    // NOP
    // 0x4f01f8: 0x0  nop
    ctx->pc = 0x4f01f8u;
    // NOP
    // 0x4f01fc: 0x0  nop
    ctx->pc = 0x4f01fcu;
    // NOP
label_4f0200:
    // 0x4f0200: 0x0  nop
    ctx->pc = 0x4f0200u;
    // NOP
    // 0x4f0204: 0x0  nop
    ctx->pc = 0x4f0204u;
    // NOP
    // 0x4f0208: 0x0  nop
    ctx->pc = 0x4f0208u;
    // NOP
    // 0x4f020c: 0x0  nop
    ctx->pc = 0x4f020cu;
    // NOP
    // 0x4f0210: 0x0  nop
    ctx->pc = 0x4f0210u;
    // NOP
    // 0x4f0214: 0x0  nop
    ctx->pc = 0x4f0214u;
    // NOP
    // 0x4f0218: 0x0  nop
    ctx->pc = 0x4f0218u;
    // NOP
    // 0x4f021c: 0x0  nop
    ctx->pc = 0x4f021cu;
    // NOP
    // 0x4f0220: 0x0  nop
    ctx->pc = 0x4f0220u;
    // NOP
    // 0x4f0224: 0x0  nop
    ctx->pc = 0x4f0224u;
    // NOP
    // 0x4f0228: 0x0  nop
    ctx->pc = 0x4f0228u;
    // NOP
    // 0x4f022c: 0x0  nop
    ctx->pc = 0x4f022cu;
    // NOP
    // 0x4f0230: 0x0  nop
    ctx->pc = 0x4f0230u;
    // NOP
label_4f0234:
    // 0x4f0234: 0x0  nop
    ctx->pc = 0x4f0234u;
    // NOP
    // 0x4f0238: 0x0  nop
    ctx->pc = 0x4f0238u;
    // NOP
    // 0x4f023c: 0x0  nop
    ctx->pc = 0x4f023cu;
    // NOP
    // 0x4f0240: 0x0  nop
    ctx->pc = 0x4f0240u;
    // NOP
    // 0x4f0244: 0x0  nop
    ctx->pc = 0x4f0244u;
    // NOP
    // 0x4f0248: 0x0  nop
    ctx->pc = 0x4f0248u;
    // NOP
    // 0x4f024c: 0x0  nop
    ctx->pc = 0x4f024cu;
    // NOP
    // 0x4f0250: 0x0  nop
    ctx->pc = 0x4f0250u;
    // NOP
    // 0x4f0254: 0x0  nop
    ctx->pc = 0x4f0254u;
    // NOP
    // 0x4f0258: 0x0  nop
    ctx->pc = 0x4f0258u;
    // NOP
    // 0x4f025c: 0x0  nop
    ctx->pc = 0x4f025cu;
    // NOP
    // 0x4f0260: 0x0  nop
    ctx->pc = 0x4f0260u;
    // NOP
    // 0x4f0264: 0x0  nop
    ctx->pc = 0x4f0264u;
    // NOP
    // 0x4f0268: 0x0  nop
    ctx->pc = 0x4f0268u;
    // NOP
    // 0x4f026c: 0x0  nop
    ctx->pc = 0x4f026cu;
    // NOP
    // 0x4f0270: 0x0  nop
    ctx->pc = 0x4f0270u;
    // NOP
    // 0x4f0274: 0x0  nop
    ctx->pc = 0x4f0274u;
    // NOP
    // 0x4f0278: 0x0  nop
    ctx->pc = 0x4f0278u;
    // NOP
label_4f027c:
    // 0x4f027c: 0x0  nop
    ctx->pc = 0x4f027cu;
    // NOP
    // 0x4f0280: 0x0  nop
    ctx->pc = 0x4f0280u;
    // NOP
    // 0x4f0284: 0x0  nop
    ctx->pc = 0x4f0284u;
    // NOP
    // 0x4f0288: 0x0  nop
    ctx->pc = 0x4f0288u;
    // NOP
    // 0x4f028c: 0x0  nop
    ctx->pc = 0x4f028cu;
    // NOP
    // 0x4f0290: 0x0  nop
    ctx->pc = 0x4f0290u;
    // NOP
    // 0x4f0294: 0x0  nop
    ctx->pc = 0x4f0294u;
    // NOP
    // 0x4f0298: 0x0  nop
    ctx->pc = 0x4f0298u;
    // NOP
    // 0x4f029c: 0x0  nop
    ctx->pc = 0x4f029cu;
    // NOP
    // 0x4f02a0: 0x0  nop
    ctx->pc = 0x4f02a0u;
    // NOP
    // 0x4f02a4: 0x0  nop
    ctx->pc = 0x4f02a4u;
    // NOP
    // 0x4f02a8: 0x0  nop
    ctx->pc = 0x4f02a8u;
    // NOP
    // 0x4f02ac: 0x0  nop
    ctx->pc = 0x4f02acu;
    // NOP
label_4f02b0:
    // 0x4f02b0: 0x0  nop
    ctx->pc = 0x4f02b0u;
    // NOP
    // 0x4f02b4: 0x0  nop
    ctx->pc = 0x4f02b4u;
    // NOP
    // 0x4f02b8: 0x0  nop
    ctx->pc = 0x4f02b8u;
    // NOP
    // 0x4f02bc: 0x0  nop
    ctx->pc = 0x4f02bcu;
    // NOP
    // 0x4f02c0: 0x0  nop
    ctx->pc = 0x4f02c0u;
    // NOP
    // 0x4f02c4: 0x0  nop
    ctx->pc = 0x4f02c4u;
    // NOP
    // 0x4f02c8: 0x0  nop
    ctx->pc = 0x4f02c8u;
    // NOP
    // 0x4f02cc: 0x0  nop
    ctx->pc = 0x4f02ccu;
    // NOP
    // 0x4f02d0: 0x0  nop
    ctx->pc = 0x4f02d0u;
    // NOP
    // 0x4f02d4: 0x0  nop
    ctx->pc = 0x4f02d4u;
    // NOP
    // 0x4f02d8: 0x0  nop
    ctx->pc = 0x4f02d8u;
    // NOP
    // 0x4f02dc: 0x0  nop
    ctx->pc = 0x4f02dcu;
    // NOP
    // 0x4f02e0: 0x0  nop
    ctx->pc = 0x4f02e0u;
    // NOP
    // 0x4f02e4: 0x0  nop
    ctx->pc = 0x4f02e4u;
    // NOP
    // 0x4f02e8: 0x0  nop
    ctx->pc = 0x4f02e8u;
    // NOP
    // 0x4f02ec: 0x0  nop
    ctx->pc = 0x4f02ecu;
    // NOP
    // 0x4f02f0: 0x0  nop
    ctx->pc = 0x4f02f0u;
    // NOP
    // 0x4f02f4: 0x0  nop
    ctx->pc = 0x4f02f4u;
    // NOP
    // 0x4f02f8: 0x0  nop
    ctx->pc = 0x4f02f8u;
    // NOP
    // 0x4f02fc: 0x0  nop
    ctx->pc = 0x4f02fcu;
    // NOP
    // 0x4f0300: 0x0  nop
    ctx->pc = 0x4f0300u;
    // NOP
    // 0x4f0304: 0x0  nop
    ctx->pc = 0x4f0304u;
    // NOP
    // 0x4f0308: 0x0  nop
    ctx->pc = 0x4f0308u;
    // NOP
    // 0x4f030c: 0x0  nop
    ctx->pc = 0x4f030cu;
    // NOP
    // 0x4f0310: 0x0  nop
    ctx->pc = 0x4f0310u;
    // NOP
    // 0x4f0314: 0x0  nop
    ctx->pc = 0x4f0314u;
    // NOP
    // 0x4f0318: 0x0  nop
    ctx->pc = 0x4f0318u;
    // NOP
    // 0x4f031c: 0x0  nop
    ctx->pc = 0x4f031cu;
    // NOP
    // 0x4f0320: 0x0  nop
    ctx->pc = 0x4f0320u;
    // NOP
    // 0x4f0324: 0x0  nop
    ctx->pc = 0x4f0324u;
    // NOP
    // 0x4f0328: 0x0  nop
    ctx->pc = 0x4f0328u;
    // NOP
    // 0x4f032c: 0x0  nop
    ctx->pc = 0x4f032cu;
    // NOP
    // 0x4f0330: 0x0  nop
    ctx->pc = 0x4f0330u;
    // NOP
    // 0x4f0334: 0x0  nop
    ctx->pc = 0x4f0334u;
    // NOP
label_4f0338:
    // 0x4f0338: 0x0  nop
    ctx->pc = 0x4f0338u;
    // NOP
    // 0x4f033c: 0x0  nop
    ctx->pc = 0x4f033cu;
    // NOP
    // 0x4f0340: 0x0  nop
    ctx->pc = 0x4f0340u;
    // NOP
    // 0x4f0344: 0x0  nop
    ctx->pc = 0x4f0344u;
    // NOP
    // 0x4f0348: 0x0  nop
    ctx->pc = 0x4f0348u;
    // NOP
    // 0x4f034c: 0x0  nop
    ctx->pc = 0x4f034cu;
    // NOP
    // 0x4f0350: 0x0  nop
    ctx->pc = 0x4f0350u;
    // NOP
    // 0x4f0354: 0x0  nop
    ctx->pc = 0x4f0354u;
    // NOP
    // 0x4f0358: 0x0  nop
    ctx->pc = 0x4f0358u;
    // NOP
    // 0x4f035c: 0x0  nop
    ctx->pc = 0x4f035cu;
    // NOP
    // 0x4f0360: 0x0  nop
    ctx->pc = 0x4f0360u;
    // NOP
    // 0x4f0364: 0x0  nop
    ctx->pc = 0x4f0364u;
    // NOP
    // 0x4f0368: 0x0  nop
    ctx->pc = 0x4f0368u;
    // NOP
    // 0x4f036c: 0x0  nop
    ctx->pc = 0x4f036cu;
    // NOP
    // 0x4f0370: 0x0  nop
    ctx->pc = 0x4f0370u;
    // NOP
    // 0x4f0374: 0x0  nop
    ctx->pc = 0x4f0374u;
    // NOP
    // 0x4f0378: 0x0  nop
    ctx->pc = 0x4f0378u;
    // NOP
    // 0x4f037c: 0x0  nop
    ctx->pc = 0x4f037cu;
    // NOP
    // 0x4f0380: 0x0  nop
    ctx->pc = 0x4f0380u;
    // NOP
    // 0x4f0384: 0x0  nop
    ctx->pc = 0x4f0384u;
    // NOP
    // 0x4f0388: 0x0  nop
    ctx->pc = 0x4f0388u;
    // NOP
    // 0x4f038c: 0x0  nop
    ctx->pc = 0x4f038cu;
    // NOP
    // 0x4f0390: 0x0  nop
    ctx->pc = 0x4f0390u;
    // NOP
    // 0x4f0394: 0x0  nop
    ctx->pc = 0x4f0394u;
    // NOP
    // 0x4f0398: 0x0  nop
    ctx->pc = 0x4f0398u;
    // NOP
    // 0x4f039c: 0x0  nop
    ctx->pc = 0x4f039cu;
    // NOP
    // 0x4f03a0: 0x0  nop
    ctx->pc = 0x4f03a0u;
    // NOP
    // 0x4f03a4: 0x0  nop
    ctx->pc = 0x4f03a4u;
    // NOP
    // 0x4f03a8: 0x0  nop
    ctx->pc = 0x4f03a8u;
    // NOP
    // 0x4f03ac: 0x0  nop
    ctx->pc = 0x4f03acu;
    // NOP
    // 0x4f03b0: 0x0  nop
    ctx->pc = 0x4f03b0u;
    // NOP
label_4f03b4:
    // 0x4f03b4: 0x0  nop
    ctx->pc = 0x4f03b4u;
    // NOP
    // 0x4f03b8: 0x0  nop
    ctx->pc = 0x4f03b8u;
    // NOP
    // 0x4f03bc: 0x0  nop
    ctx->pc = 0x4f03bcu;
    // NOP
    // 0x4f03c0: 0x0  nop
    ctx->pc = 0x4f03c0u;
    // NOP
    // 0x4f03c4: 0x0  nop
    ctx->pc = 0x4f03c4u;
    // NOP
    // 0x4f03c8: 0x0  nop
    ctx->pc = 0x4f03c8u;
    // NOP
    // 0x4f03cc: 0x0  nop
    ctx->pc = 0x4f03ccu;
    // NOP
    // 0x4f03d0: 0x0  nop
    ctx->pc = 0x4f03d0u;
    // NOP
    // 0x4f03d4: 0x0  nop
    ctx->pc = 0x4f03d4u;
    // NOP
    // 0x4f03d8: 0x0  nop
    ctx->pc = 0x4f03d8u;
    // NOP
    // 0x4f03dc: 0x0  nop
    ctx->pc = 0x4f03dcu;
    // NOP
    // 0x4f03e0: 0x0  nop
    ctx->pc = 0x4f03e0u;
    // NOP
    // 0x4f03e4: 0x0  nop
    ctx->pc = 0x4f03e4u;
    // NOP
    // 0x4f03e8: 0x0  nop
    ctx->pc = 0x4f03e8u;
    // NOP
    // 0x4f03ec: 0x0  nop
    ctx->pc = 0x4f03ecu;
    // NOP
    // 0x4f03f0: 0x0  nop
    ctx->pc = 0x4f03f0u;
    // NOP
    // 0x4f03f4: 0x0  nop
    ctx->pc = 0x4f03f4u;
    // NOP
    // 0x4f03f8: 0x0  nop
    ctx->pc = 0x4f03f8u;
    // NOP
    // 0x4f03fc: 0x0  nop
    ctx->pc = 0x4f03fcu;
    // NOP
    // 0x4f0400: 0x0  nop
    ctx->pc = 0x4f0400u;
    // NOP
    // 0x4f0404: 0x0  nop
    ctx->pc = 0x4f0404u;
    // NOP
    // 0x4f0408: 0x0  nop
    ctx->pc = 0x4f0408u;
    // NOP
    // 0x4f040c: 0x0  nop
    ctx->pc = 0x4f040cu;
    // NOP
    // 0x4f0410: 0x0  nop
    ctx->pc = 0x4f0410u;
    // NOP
    // 0x4f0414: 0x0  nop
    ctx->pc = 0x4f0414u;
    // NOP
    // 0x4f0418: 0x0  nop
    ctx->pc = 0x4f0418u;
    // NOP
    // 0x4f041c: 0x0  nop
    ctx->pc = 0x4f041cu;
    // NOP
    // 0x4f0420: 0x0  nop
    ctx->pc = 0x4f0420u;
    // NOP
    // 0x4f0424: 0x0  nop
    ctx->pc = 0x4f0424u;
    // NOP
    // 0x4f0428: 0x0  nop
    ctx->pc = 0x4f0428u;
    // NOP
    // 0x4f042c: 0x0  nop
    ctx->pc = 0x4f042cu;
    // NOP
    // 0x4f0430: 0x0  nop
    ctx->pc = 0x4f0430u;
    // NOP
    // 0x4f0434: 0x0  nop
    ctx->pc = 0x4f0434u;
    // NOP
    // 0x4f0438: 0x0  nop
    ctx->pc = 0x4f0438u;
    // NOP
    // 0x4f043c: 0x0  nop
    ctx->pc = 0x4f043cu;
    // NOP
    // 0x4f0440: 0x0  nop
    ctx->pc = 0x4f0440u;
    // NOP
    // 0x4f0444: 0x0  nop
    ctx->pc = 0x4f0444u;
    // NOP
    // 0x4f0448: 0x0  nop
    ctx->pc = 0x4f0448u;
    // NOP
    // 0x4f044c: 0x0  nop
    ctx->pc = 0x4f044cu;
    // NOP
    // 0x4f0450: 0x0  nop
    ctx->pc = 0x4f0450u;
    // NOP
    // 0x4f0454: 0x0  nop
    ctx->pc = 0x4f0454u;
    // NOP
    // 0x4f0458: 0x0  nop
    ctx->pc = 0x4f0458u;
    // NOP
label_4f045c:
    // 0x4f045c: 0x0  nop
    ctx->pc = 0x4f045cu;
    // NOP
label_4f0460:
    // 0x4f0460: 0x0  nop
    ctx->pc = 0x4f0460u;
    // NOP
    // 0x4f0464: 0x0  nop
    ctx->pc = 0x4f0464u;
    // NOP
    // 0x4f0468: 0x0  nop
    ctx->pc = 0x4f0468u;
    // NOP
    // 0x4f046c: 0x0  nop
    ctx->pc = 0x4f046cu;
    // NOP
    // 0x4f0470: 0x0  nop
    ctx->pc = 0x4f0470u;
    // NOP
    // 0x4f0474: 0x0  nop
    ctx->pc = 0x4f0474u;
    // NOP
    // 0x4f0478: 0x0  nop
    ctx->pc = 0x4f0478u;
    // NOP
    // 0x4f047c: 0x0  nop
    ctx->pc = 0x4f047cu;
    // NOP
    // 0x4f0480: 0x0  nop
    ctx->pc = 0x4f0480u;
    // NOP
    // 0x4f0484: 0x0  nop
    ctx->pc = 0x4f0484u;
    // NOP
    // 0x4f0488: 0x0  nop
    ctx->pc = 0x4f0488u;
    // NOP
    // 0x4f048c: 0x0  nop
    ctx->pc = 0x4f048cu;
    // NOP
    // 0x4f0490: 0x0  nop
    ctx->pc = 0x4f0490u;
    // NOP
    // 0x4f0494: 0x0  nop
    ctx->pc = 0x4f0494u;
    // NOP
    // 0x4f0498: 0x0  nop
    ctx->pc = 0x4f0498u;
    // NOP
    // 0x4f049c: 0x0  nop
    ctx->pc = 0x4f049cu;
    // NOP
    // 0x4f04a0: 0x0  nop
    ctx->pc = 0x4f04a0u;
    // NOP
    // 0x4f04a4: 0x0  nop
    ctx->pc = 0x4f04a4u;
    // NOP
    // 0x4f04a8: 0x0  nop
    ctx->pc = 0x4f04a8u;
    // NOP
    // 0x4f04ac: 0x0  nop
    ctx->pc = 0x4f04acu;
    // NOP
    // 0x4f04b0: 0x0  nop
    ctx->pc = 0x4f04b0u;
    // NOP
    // 0x4f04b4: 0x0  nop
    ctx->pc = 0x4f04b4u;
    // NOP
    // 0x4f04b8: 0x0  nop
    ctx->pc = 0x4f04b8u;
    // NOP
    // 0x4f04bc: 0x0  nop
    ctx->pc = 0x4f04bcu;
    // NOP
    // 0x4f04c0: 0x0  nop
    ctx->pc = 0x4f04c0u;
    // NOP
    // 0x4f04c4: 0x0  nop
    ctx->pc = 0x4f04c4u;
    // NOP
    // 0x4f04c8: 0x0  nop
    ctx->pc = 0x4f04c8u;
    // NOP
    // 0x4f04cc: 0x0  nop
    ctx->pc = 0x4f04ccu;
    // NOP
    // 0x4f04d0: 0x0  nop
    ctx->pc = 0x4f04d0u;
    // NOP
    // 0x4f04d4: 0x0  nop
    ctx->pc = 0x4f04d4u;
    // NOP
    // 0x4f04d8: 0x0  nop
    ctx->pc = 0x4f04d8u;
    // NOP
    // 0x4f04dc: 0x0  nop
    ctx->pc = 0x4f04dcu;
    // NOP
    // 0x4f04e0: 0x0  nop
    ctx->pc = 0x4f04e0u;
    // NOP
    // 0x4f04e4: 0x0  nop
    ctx->pc = 0x4f04e4u;
    // NOP
    // 0x4f04e8: 0x0  nop
    ctx->pc = 0x4f04e8u;
    // NOP
    // 0x4f04ec: 0x0  nop
    ctx->pc = 0x4f04ecu;
    // NOP
    // 0x4f04f0: 0x0  nop
    ctx->pc = 0x4f04f0u;
    // NOP
    // 0x4f04f4: 0x0  nop
    ctx->pc = 0x4f04f4u;
    // NOP
    // 0x4f04f8: 0x0  nop
    ctx->pc = 0x4f04f8u;
    // NOP
    // 0x4f04fc: 0x0  nop
    ctx->pc = 0x4f04fcu;
    // NOP
    // 0x4f0500: 0x0  nop
    ctx->pc = 0x4f0500u;
    // NOP
    // 0x4f0504: 0x0  nop
    ctx->pc = 0x4f0504u;
    // NOP
    // 0x4f0508: 0x0  nop
    ctx->pc = 0x4f0508u;
    // NOP
    // 0x4f050c: 0x0  nop
    ctx->pc = 0x4f050cu;
    // NOP
    // 0x4f0510: 0x0  nop
    ctx->pc = 0x4f0510u;
    // NOP
    // 0x4f0514: 0x0  nop
    ctx->pc = 0x4f0514u;
    // NOP
    // 0x4f0518: 0x0  nop
    ctx->pc = 0x4f0518u;
    // NOP
    // 0x4f051c: 0x0  nop
    ctx->pc = 0x4f051cu;
    // NOP
label_4f0520:
    // 0x4f0520: 0x0  nop
    ctx->pc = 0x4f0520u;
    // NOP
    // 0x4f0524: 0x0  nop
    ctx->pc = 0x4f0524u;
    // NOP
    // 0x4f0528: 0x0  nop
    ctx->pc = 0x4f0528u;
    // NOP
    // 0x4f052c: 0x0  nop
    ctx->pc = 0x4f052cu;
    // NOP
    // 0x4f0530: 0x0  nop
    ctx->pc = 0x4f0530u;
    // NOP
    // 0x4f0534: 0x0  nop
    ctx->pc = 0x4f0534u;
    // NOP
    // 0x4f0538: 0x0  nop
    ctx->pc = 0x4f0538u;
    // NOP
    // 0x4f053c: 0x0  nop
    ctx->pc = 0x4f053cu;
    // NOP
    ctx->pc = 0x4f0540u;
}
