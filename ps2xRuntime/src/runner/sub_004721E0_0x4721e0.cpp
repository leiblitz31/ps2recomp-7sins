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

// Function: sub_004721E0
// Address: 0x4721e0 - 0x472650
void sub_004721E0_0x4721e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004721E0_0x4721e0");
#endif

    switch (ctx->pc) {
        case 0x4721e0u: goto label_4721e0;
        case 0x4721e4u: goto label_4721e4;
        case 0x4721e8u: goto label_4721e8;
        case 0x4721ecu: goto label_4721ec;
        case 0x4721f0u: goto label_4721f0;
        case 0x4721f4u: goto label_4721f4;
        case 0x4721f8u: goto label_4721f8;
        case 0x4721fcu: goto label_4721fc;
        case 0x472200u: goto label_472200;
        case 0x472204u: goto label_472204;
        case 0x472208u: goto label_472208;
        case 0x47220cu: goto label_47220c;
        case 0x472210u: goto label_472210;
        case 0x472214u: goto label_472214;
        case 0x472218u: goto label_472218;
        case 0x47221cu: goto label_47221c;
        case 0x472220u: goto label_472220;
        case 0x472224u: goto label_472224;
        case 0x472228u: goto label_472228;
        case 0x47222cu: goto label_47222c;
        case 0x472230u: goto label_472230;
        case 0x472234u: goto label_472234;
        case 0x472238u: goto label_472238;
        case 0x47223cu: goto label_47223c;
        case 0x472240u: goto label_472240;
        case 0x472244u: goto label_472244;
        case 0x472248u: goto label_472248;
        case 0x47224cu: goto label_47224c;
        case 0x472250u: goto label_472250;
        case 0x472254u: goto label_472254;
        case 0x472258u: goto label_472258;
        case 0x47225cu: goto label_47225c;
        case 0x472260u: goto label_472260;
        case 0x472264u: goto label_472264;
        case 0x472268u: goto label_472268;
        case 0x47226cu: goto label_47226c;
        case 0x472270u: goto label_472270;
        case 0x472274u: goto label_472274;
        case 0x472278u: goto label_472278;
        case 0x47227cu: goto label_47227c;
        case 0x472280u: goto label_472280;
        case 0x472284u: goto label_472284;
        case 0x472288u: goto label_472288;
        case 0x47228cu: goto label_47228c;
        case 0x472290u: goto label_472290;
        case 0x472294u: goto label_472294;
        case 0x472298u: goto label_472298;
        case 0x47229cu: goto label_47229c;
        case 0x4722a0u: goto label_4722a0;
        case 0x4722a4u: goto label_4722a4;
        case 0x4722a8u: goto label_4722a8;
        case 0x4722acu: goto label_4722ac;
        case 0x4722b0u: goto label_4722b0;
        case 0x4722b4u: goto label_4722b4;
        case 0x4722b8u: goto label_4722b8;
        case 0x4722bcu: goto label_4722bc;
        case 0x4722c0u: goto label_4722c0;
        case 0x4722c4u: goto label_4722c4;
        case 0x4722c8u: goto label_4722c8;
        case 0x4722ccu: goto label_4722cc;
        case 0x4722d0u: goto label_4722d0;
        case 0x4722d4u: goto label_4722d4;
        case 0x4722d8u: goto label_4722d8;
        case 0x4722dcu: goto label_4722dc;
        case 0x4722e0u: goto label_4722e0;
        case 0x4722e4u: goto label_4722e4;
        case 0x4722e8u: goto label_4722e8;
        case 0x4722ecu: goto label_4722ec;
        case 0x4722f0u: goto label_4722f0;
        case 0x4722f4u: goto label_4722f4;
        case 0x4722f8u: goto label_4722f8;
        case 0x4722fcu: goto label_4722fc;
        case 0x472300u: goto label_472300;
        case 0x472304u: goto label_472304;
        case 0x472308u: goto label_472308;
        case 0x47230cu: goto label_47230c;
        case 0x472310u: goto label_472310;
        case 0x472314u: goto label_472314;
        case 0x472318u: goto label_472318;
        case 0x47231cu: goto label_47231c;
        case 0x472320u: goto label_472320;
        case 0x472324u: goto label_472324;
        case 0x472328u: goto label_472328;
        case 0x47232cu: goto label_47232c;
        case 0x472330u: goto label_472330;
        case 0x472334u: goto label_472334;
        case 0x472338u: goto label_472338;
        case 0x47233cu: goto label_47233c;
        case 0x472340u: goto label_472340;
        case 0x472344u: goto label_472344;
        case 0x472348u: goto label_472348;
        case 0x47234cu: goto label_47234c;
        case 0x472350u: goto label_472350;
        case 0x472354u: goto label_472354;
        case 0x472358u: goto label_472358;
        case 0x47235cu: goto label_47235c;
        case 0x472360u: goto label_472360;
        case 0x472364u: goto label_472364;
        case 0x472368u: goto label_472368;
        case 0x47236cu: goto label_47236c;
        case 0x472370u: goto label_472370;
        case 0x472374u: goto label_472374;
        case 0x472378u: goto label_472378;
        case 0x47237cu: goto label_47237c;
        case 0x472380u: goto label_472380;
        case 0x472384u: goto label_472384;
        case 0x472388u: goto label_472388;
        case 0x47238cu: goto label_47238c;
        case 0x472390u: goto label_472390;
        case 0x472394u: goto label_472394;
        case 0x472398u: goto label_472398;
        case 0x47239cu: goto label_47239c;
        case 0x4723a0u: goto label_4723a0;
        case 0x4723a4u: goto label_4723a4;
        case 0x4723a8u: goto label_4723a8;
        case 0x4723acu: goto label_4723ac;
        case 0x4723b0u: goto label_4723b0;
        case 0x4723b4u: goto label_4723b4;
        case 0x4723b8u: goto label_4723b8;
        case 0x4723bcu: goto label_4723bc;
        case 0x4723c0u: goto label_4723c0;
        case 0x4723c4u: goto label_4723c4;
        case 0x4723c8u: goto label_4723c8;
        case 0x4723ccu: goto label_4723cc;
        case 0x4723d0u: goto label_4723d0;
        case 0x4723d4u: goto label_4723d4;
        case 0x4723d8u: goto label_4723d8;
        case 0x4723dcu: goto label_4723dc;
        case 0x4723e0u: goto label_4723e0;
        case 0x4723e4u: goto label_4723e4;
        case 0x4723e8u: goto label_4723e8;
        case 0x4723ecu: goto label_4723ec;
        case 0x4723f0u: goto label_4723f0;
        case 0x4723f4u: goto label_4723f4;
        case 0x4723f8u: goto label_4723f8;
        case 0x4723fcu: goto label_4723fc;
        case 0x472400u: goto label_472400;
        case 0x472404u: goto label_472404;
        case 0x472408u: goto label_472408;
        case 0x47240cu: goto label_47240c;
        case 0x472410u: goto label_472410;
        case 0x472414u: goto label_472414;
        case 0x472418u: goto label_472418;
        case 0x47241cu: goto label_47241c;
        case 0x472420u: goto label_472420;
        case 0x472424u: goto label_472424;
        case 0x472428u: goto label_472428;
        case 0x47242cu: goto label_47242c;
        case 0x472430u: goto label_472430;
        case 0x472434u: goto label_472434;
        case 0x472438u: goto label_472438;
        case 0x47243cu: goto label_47243c;
        case 0x472440u: goto label_472440;
        case 0x472444u: goto label_472444;
        case 0x472448u: goto label_472448;
        case 0x47244cu: goto label_47244c;
        case 0x472450u: goto label_472450;
        case 0x472454u: goto label_472454;
        case 0x472458u: goto label_472458;
        case 0x47245cu: goto label_47245c;
        case 0x472460u: goto label_472460;
        case 0x472464u: goto label_472464;
        case 0x472468u: goto label_472468;
        case 0x47246cu: goto label_47246c;
        case 0x472470u: goto label_472470;
        case 0x472474u: goto label_472474;
        case 0x472478u: goto label_472478;
        case 0x47247cu: goto label_47247c;
        case 0x472480u: goto label_472480;
        case 0x472484u: goto label_472484;
        case 0x472488u: goto label_472488;
        case 0x47248cu: goto label_47248c;
        case 0x472490u: goto label_472490;
        case 0x472494u: goto label_472494;
        case 0x472498u: goto label_472498;
        case 0x47249cu: goto label_47249c;
        case 0x4724a0u: goto label_4724a0;
        case 0x4724a4u: goto label_4724a4;
        case 0x4724a8u: goto label_4724a8;
        case 0x4724acu: goto label_4724ac;
        case 0x4724b0u: goto label_4724b0;
        case 0x4724b4u: goto label_4724b4;
        case 0x4724b8u: goto label_4724b8;
        case 0x4724bcu: goto label_4724bc;
        case 0x4724c0u: goto label_4724c0;
        case 0x4724c4u: goto label_4724c4;
        case 0x4724c8u: goto label_4724c8;
        case 0x4724ccu: goto label_4724cc;
        case 0x4724d0u: goto label_4724d0;
        case 0x4724d4u: goto label_4724d4;
        case 0x4724d8u: goto label_4724d8;
        case 0x4724dcu: goto label_4724dc;
        case 0x4724e0u: goto label_4724e0;
        case 0x4724e4u: goto label_4724e4;
        case 0x4724e8u: goto label_4724e8;
        case 0x4724ecu: goto label_4724ec;
        case 0x4724f0u: goto label_4724f0;
        case 0x4724f4u: goto label_4724f4;
        case 0x4724f8u: goto label_4724f8;
        case 0x4724fcu: goto label_4724fc;
        case 0x472500u: goto label_472500;
        case 0x472504u: goto label_472504;
        case 0x472508u: goto label_472508;
        case 0x47250cu: goto label_47250c;
        case 0x472510u: goto label_472510;
        case 0x472514u: goto label_472514;
        case 0x472518u: goto label_472518;
        case 0x47251cu: goto label_47251c;
        case 0x472520u: goto label_472520;
        case 0x472524u: goto label_472524;
        case 0x472528u: goto label_472528;
        case 0x47252cu: goto label_47252c;
        case 0x472530u: goto label_472530;
        case 0x472534u: goto label_472534;
        case 0x472538u: goto label_472538;
        case 0x47253cu: goto label_47253c;
        case 0x472540u: goto label_472540;
        case 0x472544u: goto label_472544;
        case 0x472548u: goto label_472548;
        case 0x47254cu: goto label_47254c;
        case 0x472550u: goto label_472550;
        case 0x472554u: goto label_472554;
        case 0x472558u: goto label_472558;
        case 0x47255cu: goto label_47255c;
        case 0x472560u: goto label_472560;
        case 0x472564u: goto label_472564;
        case 0x472568u: goto label_472568;
        case 0x47256cu: goto label_47256c;
        case 0x472570u: goto label_472570;
        case 0x472574u: goto label_472574;
        case 0x472578u: goto label_472578;
        case 0x47257cu: goto label_47257c;
        case 0x472580u: goto label_472580;
        case 0x472584u: goto label_472584;
        case 0x472588u: goto label_472588;
        case 0x47258cu: goto label_47258c;
        case 0x472590u: goto label_472590;
        case 0x472594u: goto label_472594;
        case 0x472598u: goto label_472598;
        case 0x47259cu: goto label_47259c;
        case 0x4725a0u: goto label_4725a0;
        case 0x4725a4u: goto label_4725a4;
        case 0x4725a8u: goto label_4725a8;
        case 0x4725acu: goto label_4725ac;
        case 0x4725b0u: goto label_4725b0;
        case 0x4725b4u: goto label_4725b4;
        case 0x4725b8u: goto label_4725b8;
        case 0x4725bcu: goto label_4725bc;
        case 0x4725c0u: goto label_4725c0;
        case 0x4725c4u: goto label_4725c4;
        case 0x4725c8u: goto label_4725c8;
        case 0x4725ccu: goto label_4725cc;
        case 0x4725d0u: goto label_4725d0;
        case 0x4725d4u: goto label_4725d4;
        case 0x4725d8u: goto label_4725d8;
        case 0x4725dcu: goto label_4725dc;
        case 0x4725e0u: goto label_4725e0;
        case 0x4725e4u: goto label_4725e4;
        case 0x4725e8u: goto label_4725e8;
        case 0x4725ecu: goto label_4725ec;
        case 0x4725f0u: goto label_4725f0;
        case 0x4725f4u: goto label_4725f4;
        case 0x4725f8u: goto label_4725f8;
        case 0x4725fcu: goto label_4725fc;
        case 0x472600u: goto label_472600;
        case 0x472604u: goto label_472604;
        case 0x472608u: goto label_472608;
        case 0x47260cu: goto label_47260c;
        case 0x472610u: goto label_472610;
        case 0x472614u: goto label_472614;
        case 0x472618u: goto label_472618;
        case 0x47261cu: goto label_47261c;
        case 0x472620u: goto label_472620;
        case 0x472624u: goto label_472624;
        case 0x472628u: goto label_472628;
        case 0x47262cu: goto label_47262c;
        case 0x472630u: goto label_472630;
        case 0x472634u: goto label_472634;
        case 0x472638u: goto label_472638;
        case 0x47263cu: goto label_47263c;
        case 0x472640u: goto label_472640;
        case 0x472644u: goto label_472644;
        case 0x472648u: goto label_472648;
        case 0x47264cu: goto label_47264c;
        default: break;
    }

    ctx->pc = 0x4721e0u;

label_4721e0:
    // 0x4721e0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x4721e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_4721e4:
    // 0x4721e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4721e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4721e8:
    // 0x4721e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4721e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4721ec:
    // 0x4721ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4721ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4721f0:
    // 0x4721f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4721f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4721f4:
    // 0x4721f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4721f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4721f8:
    // 0x4721f8: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x4721f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
label_4721fc:
    // 0x4721fc: 0xafa501a0  sw          $a1, 0x1A0($sp)
    ctx->pc = 0x4721fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 5));
label_472200:
    // 0x472200: 0xafa601b0  sw          $a2, 0x1B0($sp)
    ctx->pc = 0x472200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
label_472204:
    // 0x472204: 0xafa701c0  sw          $a3, 0x1C0($sp)
    ctx->pc = 0x472204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 7));
label_472208:
    // 0x472208: 0xafa801d0  sw          $t0, 0x1D0($sp)
    ctx->pc = 0x472208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 8));
label_47220c:
    // 0x47220c: 0xafa901e0  sw          $t1, 0x1E0($sp)
    ctx->pc = 0x47220cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 9));
label_472210:
    // 0x472210: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x472210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_472214:
    // 0x472214: 0x27a50184  addiu       $a1, $sp, 0x184
    ctx->pc = 0x472214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
label_472218:
    // 0x472218: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x472218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_47221c:
    // 0x47221c: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x47221cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_472220:
    // 0x472220: 0x40f809  jalr        $v0
label_472224:
    if (ctx->pc == 0x472224u) {
        ctx->pc = 0x472228u;
        goto label_472228;
    }
    ctx->pc = 0x472220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472228u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472220u, 0x472228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472228u;
label_472228:
    // 0x472228: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x472228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_47222c:
    // 0x47222c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x47222cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_472230:
    // 0x472230: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x472230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_472234:
    // 0x472234: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x472234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_472238:
    // 0x472238: 0x40f809  jalr        $v0
label_47223c:
    if (ctx->pc == 0x47223Cu) {
        ctx->pc = 0x472240u;
        goto label_472240;
    }
    ctx->pc = 0x472238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472240u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472238u, 0x472240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472240u;
label_472240:
    // 0x472240: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x472240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_472244:
    // 0x472244: 0x27a5017c  addiu       $a1, $sp, 0x17C
    ctx->pc = 0x472244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_472248:
    // 0x472248: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x472248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_47224c:
    // 0x47224c: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x47224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_472250:
    // 0x472250: 0x40f809  jalr        $v0
label_472254:
    if (ctx->pc == 0x472254u) {
        ctx->pc = 0x472258u;
        goto label_472258;
    }
    ctx->pc = 0x472250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472258u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472250u, 0x472258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472258u;
label_472258:
    // 0x472258: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x472258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47225c:
    // 0x47225c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x47225cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_472260:
    // 0x472260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x472260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_472264:
    // 0x472264: 0x0  nop
    ctx->pc = 0x472264u;
    // NOP
label_472268:
    // 0x472268: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x472268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_47226c:
    // 0x47226c: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x47226cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_472270:
    // 0x472270: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x472270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_472274:
    // 0x472274: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x472274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472278:
    // 0x472278: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x472278u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_47227c:
    // 0x47227c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47227cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_472280:
    // 0x472280: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_472284:
    if (ctx->pc == 0x472284u) {
        ctx->pc = 0x472288u;
        goto label_472288;
    }
    ctx->pc = 0x472280u;
    {
        const bool branch_taken_0x472280 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x472280) {
            ctx->pc = 0x47228Cu;
            goto label_47228c;
        }
    }
    ctx->pc = 0x472288u;
label_472288:
    // 0x472288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x472288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47228c:
    // 0x47228c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47228cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_472290:
    // 0x472290: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_472294:
    if (ctx->pc == 0x472294u) {
        ctx->pc = 0x472298u;
        goto label_472298;
    }
    ctx->pc = 0x472290u;
    {
        const bool branch_taken_0x472290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x472290) {
            ctx->pc = 0x472340u;
            goto label_472340;
        }
    }
    ctx->pc = 0x472298u;
label_472298:
    // 0x472298: 0x8f82b3ac  lw          $v0, -0x4C54($gp)
    ctx->pc = 0x472298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947756)));
label_47229c:
    // 0x47229c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4722a0:
    if (ctx->pc == 0x4722A0u) {
        ctx->pc = 0x4722A4u;
        goto label_4722a4;
    }
    ctx->pc = 0x47229Cu;
    {
        const bool branch_taken_0x47229c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47229c) {
            ctx->pc = 0x472340u;
            goto label_472340;
        }
    }
    ctx->pc = 0x4722A4u;
label_4722a4:
    // 0x4722a4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4722a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4722a8:
    // 0x4722a8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4722a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4722ac:
    // 0x4722ac: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x4722acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4722b0:
    // 0x4722b0: 0xc115ee8  jal         func_457BA0
label_4722b4:
    if (ctx->pc == 0x4722B4u) {
        ctx->pc = 0x4722B8u;
        goto label_4722b8;
    }
    ctx->pc = 0x4722B0u;
    SET_GPR_U32(ctx, 31, 0x4722B8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4722B0u, 0x4722B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4722B8u;
label_4722b8:
    // 0x4722b8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4722bc:
    if (ctx->pc == 0x4722BCu) {
        ctx->pc = 0x4722C0u;
        goto label_4722c0;
    }
    ctx->pc = 0x4722B8u;
    {
        const bool branch_taken_0x4722b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4722b8) {
            ctx->pc = 0x472340u;
            goto label_472340;
        }
    }
    ctx->pc = 0x4722C0u;
label_4722c0:
    // 0x4722c0: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x4722c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_4722c4:
    // 0x4722c4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4722c8:
    if (ctx->pc == 0x4722C8u) {
        ctx->pc = 0x4722CCu;
        goto label_4722cc;
    }
    ctx->pc = 0x4722C4u;
    {
        const bool branch_taken_0x4722c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4722c4) {
            ctx->pc = 0x472340u;
            goto label_472340;
        }
    }
    ctx->pc = 0x4722CCu;
label_4722cc:
    // 0x4722cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4722ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4722d0:
    // 0x4722d0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4722d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4722d4:
    // 0x4722d4: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x4722d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_4722d8:
    // 0x4722d8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4722d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4722dc:
    // 0x4722dc: 0x24e701e0  addiu       $a3, $a3, 0x1E0
    ctx->pc = 0x4722dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
label_4722e0:
    // 0x4722e0: 0x2408014b  addiu       $t0, $zero, 0x14B
    ctx->pc = 0x4722e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 331));
label_4722e4:
    // 0x4722e4: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4722e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4722e8:
    // 0x4722e8: 0x252902a8  addiu       $t1, $t1, 0x2A8
    ctx->pc = 0x4722e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 680));
label_4722ec:
    // 0x4722ec: 0xc113940  jal         func_44E500
label_4722f0:
    if (ctx->pc == 0x4722F0u) {
        ctx->pc = 0x4722F4u;
        goto label_4722f4;
    }
    ctx->pc = 0x4722ECu;
    SET_GPR_U32(ctx, 31, 0x4722F4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4722ECu, 0x4722F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4722F4u;
label_4722f4:
    // 0x4722f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4722f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4722f8:
    // 0x4722f8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4722f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4722fc:
    // 0x4722fc: 0x24a502b8  addiu       $a1, $a1, 0x2B8
    ctx->pc = 0x4722fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 696));
label_472300:
    // 0x472300: 0xc115c24  jal         func_457090
label_472304:
    if (ctx->pc == 0x472304u) {
        ctx->pc = 0x472308u;
        goto label_472308;
    }
    ctx->pc = 0x472300u;
    SET_GPR_U32(ctx, 31, 0x472308u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x472300u, 0x472308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472308u;
label_472308:
    // 0x472308: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x472308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_47230c:
    // 0x47230c: 0x8fa20178  lw          $v0, 0x178($sp)
    ctx->pc = 0x47230cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_472310:
    // 0x472310: 0x40f809  jalr        $v0
label_472314:
    if (ctx->pc == 0x472314u) {
        ctx->pc = 0x472318u;
        goto label_472318;
    }
    ctx->pc = 0x472310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472318u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472310u, 0x472318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472318u;
label_472318:
    // 0x472318: 0xaf82b3ac  sw          $v0, -0x4C54($gp)
    ctx->pc = 0x472318u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947756), GPR_U32(ctx, 2));
label_47231c:
    // 0x47231c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x47231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_472320:
    // 0x472320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_472324:
    if (ctx->pc == 0x472324u) {
        ctx->pc = 0x472328u;
        goto label_472328;
    }
    ctx->pc = 0x472320u;
    {
        const bool branch_taken_0x472320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472320) {
            ctx->pc = 0x472330u;
            goto label_472330;
        }
    }
    ctx->pc = 0x472328u;
label_472328:
    // 0x472328: 0xd  break       0
    ctx->pc = 0x472328u;
    runtime->handleBreak(rdram, ctx);
label_47232c:
    // 0x47232c: 0x0  nop
    ctx->pc = 0x47232cu;
    // NOP
label_472330:
    // 0x472330: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x472330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_472334:
    // 0x472334: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x472334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_472338:
    // 0x472338: 0xc11392c  jal         func_44E4B0
label_47233c:
    if (ctx->pc == 0x47233Cu) {
        ctx->pc = 0x472340u;
        goto label_472340;
    }
    ctx->pc = 0x472338u;
    SET_GPR_U32(ctx, 31, 0x472340u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x472338u, 0x472340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472340u;
label_472340:
    // 0x472340: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x472340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_472344:
    // 0x472344: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x472344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_472348:
    // 0x472348: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x472348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47234c:
    // 0x47234c: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x47234cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472350:
    // 0x472350: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x472350u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_472354:
    // 0x472354: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x472354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_472358:
    // 0x472358: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x472358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_47235c:
    // 0x47235c: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x47235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_472360:
    // 0x472360: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x472360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_472364:
    // 0x472364: 0x27b301d0  addiu       $s3, $sp, 0x1D0
    ctx->pc = 0x472364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_472368:
    // 0x472368: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x472368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_47236c:
    // 0x47236c: 0xc105f96  jal         func_417E58
label_472370:
    if (ctx->pc == 0x472370u) {
        ctx->pc = 0x472374u;
        goto label_472374;
    }
    ctx->pc = 0x47236Cu;
    SET_GPR_U32(ctx, 31, 0x472374u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x47236Cu, 0x472374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472374u;
label_472374:
    // 0x472374: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_472378:
    if (ctx->pc == 0x472378u) {
        ctx->pc = 0x47237Cu;
        goto label_47237c;
    }
    ctx->pc = 0x472374u;
    {
        const bool branch_taken_0x472374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472374) {
            ctx->pc = 0x4724C0u;
            goto label_4724c0;
        }
    }
    ctx->pc = 0x47237Cu;
label_47237c:
    // 0x47237c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x47237cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_472380:
    // 0x472380: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x472380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_472384:
    // 0x472384: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x472384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_472388:
    // 0x472388: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x472388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_47238c:
    // 0x47238c: 0x40f809  jalr        $v0
label_472390:
    if (ctx->pc == 0x472390u) {
        ctx->pc = 0x472394u;
        goto label_472394;
    }
    ctx->pc = 0x47238Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472394u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47238Cu, 0x472394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472394u;
label_472394:
    // 0x472394: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x472394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_472398:
    // 0x472398: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x472398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47239c:
    // 0x47239c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x47239cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4723a0:
    // 0x4723a0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x4723a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_4723a4:
    // 0x4723a4: 0x40f809  jalr        $v0
label_4723a8:
    if (ctx->pc == 0x4723A8u) {
        ctx->pc = 0x4723ACu;
        goto label_4723ac;
    }
    ctx->pc = 0x4723A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4723ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4723A4u, 0x4723ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4723ACu;
label_4723ac:
    // 0x4723ac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4723acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4723b0:
    // 0x4723b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4723b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4723b4:
    // 0x4723b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4723b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4723b8:
    // 0x4723b8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x4723b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_4723bc:
    // 0x4723bc: 0x40f809  jalr        $v0
label_4723c0:
    if (ctx->pc == 0x4723C0u) {
        ctx->pc = 0x4723C4u;
        goto label_4723c4;
    }
    ctx->pc = 0x4723BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4723C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4723BCu, 0x4723C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4723C4u;
label_4723c4:
    // 0x4723c4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4723c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4723c8:
    // 0x4723c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4723c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4723cc:
    // 0x4723cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4723ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4723d0:
    // 0x4723d0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x4723d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_4723d4:
    // 0x4723d4: 0x40f809  jalr        $v0
label_4723d8:
    if (ctx->pc == 0x4723D8u) {
        ctx->pc = 0x4723DCu;
        goto label_4723dc;
    }
    ctx->pc = 0x4723D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4723DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4723D4u, 0x4723DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4723DCu;
label_4723dc:
    // 0x4723dc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x4723dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4723e0:
    // 0x4723e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4723e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4723e4:
    // 0x4723e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4723e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4723e8:
    // 0x4723e8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x4723e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_4723ec:
    // 0x4723ec: 0x40f809  jalr        $v0
label_4723f0:
    if (ctx->pc == 0x4723F0u) {
        ctx->pc = 0x4723F4u;
        goto label_4723f4;
    }
    ctx->pc = 0x4723ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4723F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4723ECu, 0x4723F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4723F4u;
label_4723f4:
    // 0x4723f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4723f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4723f8:
    // 0x4723f8: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x4723f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_4723fc:
    // 0x4723fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4723fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_472400:
    // 0x472400: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x472400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_472404:
    // 0x472404: 0x40f809  jalr        $v0
label_472408:
    if (ctx->pc == 0x472408u) {
        ctx->pc = 0x47240Cu;
        goto label_47240c;
    }
    ctx->pc = 0x472404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47240Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472404u, 0x47240Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47240Cu;
label_47240c:
    // 0x47240c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x47240cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_472410:
    // 0x472410: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_472414:
    if (ctx->pc == 0x472414u) {
        ctx->pc = 0x472418u;
        goto label_472418;
    }
    ctx->pc = 0x472410u;
    {
        const bool branch_taken_0x472410 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x472410) {
            ctx->pc = 0x47242Cu;
            goto label_47242c;
        }
    }
    ctx->pc = 0x472418u;
label_472418:
    // 0x472418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x472418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47241c:
    // 0x47241c: 0x0  nop
    ctx->pc = 0x47241cu;
    // NOP
label_472420:
    // 0x472420: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x472420u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_472424:
    // 0x472424: 0x10000008  b           . + 4 + (0x8 << 2)
label_472428:
    if (ctx->pc == 0x472428u) {
        ctx->pc = 0x47242Cu;
        goto label_47242c;
    }
    ctx->pc = 0x472424u;
    {
        const bool branch_taken_0x472424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472424) {
            ctx->pc = 0x472448u;
            goto label_472448;
        }
    }
    ctx->pc = 0x47242Cu;
label_47242c:
    // 0x47242c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x47242cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_472430:
    // 0x472430: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x472430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_472434:
    // 0x472434: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x472434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_472438:
    // 0x472438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x472438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47243c:
    // 0x47243c: 0x0  nop
    ctx->pc = 0x47243cu;
    // NOP
label_472440:
    // 0x472440: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x472440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_472444:
    // 0x472444: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x472444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_472448:
    // 0x472448: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x472448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47244c:
    // 0x47244c: 0x46010382  mul.s       $f14, $f0, $f1
    ctx->pc = 0x47244cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_472450:
    // 0x472450: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x472450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_472454:
    // 0x472454: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_472458:
    if (ctx->pc == 0x472458u) {
        ctx->pc = 0x47245Cu;
        goto label_47245c;
    }
    ctx->pc = 0x472454u;
    {
        const bool branch_taken_0x472454 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x472454) {
            ctx->pc = 0x472470u;
            goto label_472470;
        }
    }
    ctx->pc = 0x47245Cu;
label_47245c:
    // 0x47245c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47245cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_472460:
    // 0x472460: 0x0  nop
    ctx->pc = 0x472460u;
    // NOP
label_472464:
    // 0x472464: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x472464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_472468:
    // 0x472468: 0x10000008  b           . + 4 + (0x8 << 2)
label_47246c:
    if (ctx->pc == 0x47246Cu) {
        ctx->pc = 0x472470u;
        goto label_472470;
    }
    ctx->pc = 0x472468u;
    {
        const bool branch_taken_0x472468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472468) {
            ctx->pc = 0x47248Cu;
            goto label_47248c;
        }
    }
    ctx->pc = 0x472470u;
label_472470:
    // 0x472470: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x472470u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_472474:
    // 0x472474: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x472474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_472478:
    // 0x472478: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x472478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_47247c:
    // 0x47247c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47247cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_472480:
    // 0x472480: 0x0  nop
    ctx->pc = 0x472480u;
    // NOP
label_472484:
    // 0x472484: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x472484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_472488:
    // 0x472488: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x472488u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_47248c:
    // 0x47248c: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x47248cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472490:
    // 0x472490: 0x460103c2  mul.s       $f15, $f0, $f1
    ctx->pc = 0x472490u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_472494:
    // 0x472494: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x472494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_472498:
    // 0x472498: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x472498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_47249c:
    // 0x47249c: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x47249cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4724a0:
    // 0x4724a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4724a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4724a4:
    // 0x4724a4: 0xc450e89c  lwc1        $f16, -0x1764($v0)
    ctx->pc = 0x4724a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_4724a8:
    // 0x4724a8: 0xc7b10188  lwc1        $f17, 0x188($sp)
    ctx->pc = 0x4724a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_4724ac:
    // 0x4724ac: 0xc11c4a8  jal         func_4712A0
label_4724b0:
    if (ctx->pc == 0x4724B0u) {
        ctx->pc = 0x4724B4u;
        goto label_4724b4;
    }
    ctx->pc = 0x4724ACu;
    SET_GPR_U32(ctx, 31, 0x4724B4u);
    ctx->pc = 0x4712A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4712A0u, 0x4724ACu, 0x4724B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4724B4u;
label_4724b4:
    // 0x4724b4: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x4724b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_4724b8:
    // 0x4724b8: 0xc105f9e  jal         func_417E78
label_4724bc:
    if (ctx->pc == 0x4724BCu) {
        ctx->pc = 0x4724C0u;
        goto label_4724c0;
    }
    ctx->pc = 0x4724B8u;
    SET_GPR_U32(ctx, 31, 0x4724C0u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x4724B8u, 0x4724C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4724C0u;
label_4724c0:
    // 0x4724c0: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x4724c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_4724c4:
    // 0x4724c4: 0xc105f96  jal         func_417E58
label_4724c8:
    if (ctx->pc == 0x4724C8u) {
        ctx->pc = 0x4724CCu;
        goto label_4724cc;
    }
    ctx->pc = 0x4724C4u;
    SET_GPR_U32(ctx, 31, 0x4724CCu);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x4724C4u, 0x4724CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4724CCu;
label_4724cc:
    // 0x4724cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4724d0:
    if (ctx->pc == 0x4724D0u) {
        ctx->pc = 0x4724D4u;
        goto label_4724d4;
    }
    ctx->pc = 0x4724CCu;
    {
        const bool branch_taken_0x4724cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4724cc) {
            ctx->pc = 0x4724F8u;
            goto label_4724f8;
        }
    }
    ctx->pc = 0x4724D4u;
label_4724d4:
    // 0x4724d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4724d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4724d8:
    // 0x4724d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4724d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4724dc:
    // 0x4724dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4724dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4724e0:
    // 0x4724e0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x4724e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_4724e4:
    // 0x4724e4: 0x40f809  jalr        $v0
label_4724e8:
    if (ctx->pc == 0x4724E8u) {
        ctx->pc = 0x4724ECu;
        goto label_4724ec;
    }
    ctx->pc = 0x4724E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4724ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4724E4u, 0x4724ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4724ECu;
label_4724ec:
    // 0x4724ec: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x4724ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_4724f0:
    // 0x4724f0: 0xc105f9e  jal         func_417E78
label_4724f4:
    if (ctx->pc == 0x4724F4u) {
        ctx->pc = 0x4724F8u;
        goto label_4724f8;
    }
    ctx->pc = 0x4724F0u;
    SET_GPR_U32(ctx, 31, 0x4724F8u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x4724F0u, 0x4724F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4724F8u;
label_4724f8:
    // 0x4724f8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x4724f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_4724fc:
    // 0x4724fc: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x4724fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_472500:
    // 0x472500: 0x27b201d0  addiu       $s2, $sp, 0x1D0
    ctx->pc = 0x472500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_472504:
    // 0x472504: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x472504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_472508:
    // 0x472508: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x472508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_47250c:
    // 0x47250c: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x47250cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_472510:
    // 0x472510: 0x27b101c0  addiu       $s1, $sp, 0x1C0
    ctx->pc = 0x472510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_472514:
    // 0x472514: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x472514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_472518:
    // 0x472518: 0xc105f96  jal         func_417E58
label_47251c:
    if (ctx->pc == 0x47251Cu) {
        ctx->pc = 0x472520u;
        goto label_472520;
    }
    ctx->pc = 0x472518u;
    SET_GPR_U32(ctx, 31, 0x472520u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x472518u, 0x472520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472520u;
label_472520:
    // 0x472520: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_472524:
    if (ctx->pc == 0x472524u) {
        ctx->pc = 0x472528u;
        goto label_472528;
    }
    ctx->pc = 0x472520u;
    {
        const bool branch_taken_0x472520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472520) {
            ctx->pc = 0x4725ECu;
            goto label_4725ec;
        }
    }
    ctx->pc = 0x472528u;
label_472528:
    // 0x472528: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x472528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47252c:
    // 0x47252c: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x47252cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_472530:
    // 0x472530: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x472530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_472534:
    // 0x472534: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x472534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_472538:
    // 0x472538: 0x40f809  jalr        $v0
label_47253c:
    if (ctx->pc == 0x47253Cu) {
        ctx->pc = 0x472540u;
        goto label_472540;
    }
    ctx->pc = 0x472538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472540u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472538u, 0x472540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472540u;
label_472540:
    // 0x472540: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x472540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_472544:
    // 0x472544: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x472544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_472548:
    // 0x472548: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x472548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_47254c:
    // 0x47254c: 0xc7ae018c  lwc1        $f14, 0x18C($sp)
    ctx->pc = 0x47254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_472550:
    // 0x472550: 0xc7af018c  lwc1        $f15, 0x18C($sp)
    ctx->pc = 0x472550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_472554:
    // 0x472554: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x472554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_472558:
    // 0x472558: 0xc450e89c  lwc1        $f16, -0x1764($v0)
    ctx->pc = 0x472558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_47255c:
    // 0x47255c: 0xc7b10188  lwc1        $f17, 0x188($sp)
    ctx->pc = 0x47255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_472560:
    // 0x472560: 0xc11c4a8  jal         func_4712A0
label_472564:
    if (ctx->pc == 0x472564u) {
        ctx->pc = 0x472568u;
        goto label_472568;
    }
    ctx->pc = 0x472560u;
    SET_GPR_U32(ctx, 31, 0x472568u);
    ctx->pc = 0x4712A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4712A0u, 0x472560u, 0x472568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472568u;
label_472568:
    // 0x472568: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x472568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_47256c:
    // 0x47256c: 0x8fa50184  lw          $a1, 0x184($sp)
    ctx->pc = 0x47256cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_472570:
    // 0x472570: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x472570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_472574:
    // 0x472574: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x472574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_472578:
    // 0x472578: 0x40f809  jalr        $v0
label_47257c:
    if (ctx->pc == 0x47257Cu) {
        ctx->pc = 0x472580u;
        goto label_472580;
    }
    ctx->pc = 0x472578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472580u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472578u, 0x472580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472580u;
label_472580:
    // 0x472580: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x472580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_472584:
    // 0x472584: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x472584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_472588:
    // 0x472588: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x472588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_47258c:
    // 0x47258c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x47258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_472590:
    // 0x472590: 0x40f809  jalr        $v0
label_472594:
    if (ctx->pc == 0x472594u) {
        ctx->pc = 0x472598u;
        goto label_472598;
    }
    ctx->pc = 0x472590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472598u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472590u, 0x472598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472598u;
label_472598:
    // 0x472598: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x472598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_47259c:
    // 0x47259c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x47259cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4725a0:
    // 0x4725a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4725a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4725a4:
    // 0x4725a4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x4725a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_4725a8:
    // 0x4725a8: 0x40f809  jalr        $v0
label_4725ac:
    if (ctx->pc == 0x4725ACu) {
        ctx->pc = 0x4725B0u;
        goto label_4725b0;
    }
    ctx->pc = 0x4725A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4725B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4725A8u, 0x4725B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4725B0u;
label_4725b0:
    // 0x4725b0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4725b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4725b4:
    // 0x4725b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4725b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4725b8:
    // 0x4725b8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4725b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4725bc:
    // 0x4725bc: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x4725bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_4725c0:
    // 0x4725c0: 0x40f809  jalr        $v0
label_4725c4:
    if (ctx->pc == 0x4725C4u) {
        ctx->pc = 0x4725C8u;
        goto label_4725c8;
    }
    ctx->pc = 0x4725C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4725C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4725C0u, 0x4725C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4725C8u;
label_4725c8:
    // 0x4725c8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x4725c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4725cc:
    // 0x4725cc: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x4725ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_4725d0:
    // 0x4725d0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4725d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4725d4:
    // 0x4725d4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x4725d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_4725d8:
    // 0x4725d8: 0x40f809  jalr        $v0
label_4725dc:
    if (ctx->pc == 0x4725DCu) {
        ctx->pc = 0x4725E0u;
        goto label_4725e0;
    }
    ctx->pc = 0x4725D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4725E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4725D8u, 0x4725E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4725E0u;
label_4725e0:
    // 0x4725e0: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x4725e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_4725e4:
    // 0x4725e4: 0xc105f9e  jal         func_417E78
label_4725e8:
    if (ctx->pc == 0x4725E8u) {
        ctx->pc = 0x4725ECu;
        goto label_4725ec;
    }
    ctx->pc = 0x4725E4u;
    SET_GPR_U32(ctx, 31, 0x4725ECu);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x4725E4u, 0x4725ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4725ECu;
label_4725ec:
    // 0x4725ec: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x4725ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_4725f0:
    // 0x4725f0: 0xc105f96  jal         func_417E58
label_4725f4:
    if (ctx->pc == 0x4725F4u) {
        ctx->pc = 0x4725F8u;
        goto label_4725f8;
    }
    ctx->pc = 0x4725F0u;
    SET_GPR_U32(ctx, 31, 0x4725F8u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x4725F0u, 0x4725F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4725F8u;
label_4725f8:
    // 0x4725f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4725fc:
    if (ctx->pc == 0x4725FCu) {
        ctx->pc = 0x472600u;
        goto label_472600;
    }
    ctx->pc = 0x4725F8u;
    {
        const bool branch_taken_0x4725f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4725f8) {
            ctx->pc = 0x472624u;
            goto label_472624;
        }
    }
    ctx->pc = 0x472600u;
label_472600:
    // 0x472600: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x472600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_472604:
    // 0x472604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x472604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472608:
    // 0x472608: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x472608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_47260c:
    // 0x47260c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x47260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_472610:
    // 0x472610: 0x40f809  jalr        $v0
label_472614:
    if (ctx->pc == 0x472614u) {
        ctx->pc = 0x472618u;
        goto label_472618;
    }
    ctx->pc = 0x472610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472618u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472610u, 0x472618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472618u;
label_472618:
    // 0x472618: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x472618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_47261c:
    // 0x47261c: 0xc105f9e  jal         func_417E78
label_472620:
    if (ctx->pc == 0x472620u) {
        ctx->pc = 0x472624u;
        goto label_472624;
    }
    ctx->pc = 0x47261Cu;
    SET_GPR_U32(ctx, 31, 0x472624u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x47261Cu, 0x472624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472624u;
label_472624:
    // 0x472624: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x472624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_472628:
    // 0x472628: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x472628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_47262c:
    // 0x47262c: 0x27b001c0  addiu       $s0, $sp, 0x1C0
    ctx->pc = 0x47262cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_472630:
    // 0x472630: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x472630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_472634:
    // 0x472634: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x472634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_472638:
    // 0x472638: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x472638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47263c:
    // 0x47263c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47263cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_472640:
    // 0x472640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x472640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_472644:
    // 0x472644: 0x27bd01f0  addiu       $sp, $sp, 0x1F0
    ctx->pc = 0x472644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_472648:
    // 0x472648: 0x3e00008  jr          $ra
label_47264c:
    if (ctx->pc == 0x47264Cu) {
        ctx->pc = 0x472650u;
        goto label_fallthrough_0x472648;
    }
    ctx->pc = 0x472648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x472648:
    ctx->pc = 0x472650u;
}
