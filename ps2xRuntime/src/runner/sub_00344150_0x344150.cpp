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

// Function: sub_00344150
// Address: 0x344150 - 0x344570
void sub_00344150_0x344150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344150_0x344150");
#endif

    switch (ctx->pc) {
        case 0x344150u: goto label_344150;
        case 0x344154u: goto label_344154;
        case 0x344158u: goto label_344158;
        case 0x34415cu: goto label_34415c;
        case 0x344160u: goto label_344160;
        case 0x344164u: goto label_344164;
        case 0x344168u: goto label_344168;
        case 0x34416cu: goto label_34416c;
        case 0x344170u: goto label_344170;
        case 0x344174u: goto label_344174;
        case 0x344178u: goto label_344178;
        case 0x34417cu: goto label_34417c;
        case 0x344180u: goto label_344180;
        case 0x344184u: goto label_344184;
        case 0x344188u: goto label_344188;
        case 0x34418cu: goto label_34418c;
        case 0x344190u: goto label_344190;
        case 0x344194u: goto label_344194;
        case 0x344198u: goto label_344198;
        case 0x34419cu: goto label_34419c;
        case 0x3441a0u: goto label_3441a0;
        case 0x3441a4u: goto label_3441a4;
        case 0x3441a8u: goto label_3441a8;
        case 0x3441acu: goto label_3441ac;
        case 0x3441b0u: goto label_3441b0;
        case 0x3441b4u: goto label_3441b4;
        case 0x3441b8u: goto label_3441b8;
        case 0x3441bcu: goto label_3441bc;
        case 0x3441c0u: goto label_3441c0;
        case 0x3441c4u: goto label_3441c4;
        case 0x3441c8u: goto label_3441c8;
        case 0x3441ccu: goto label_3441cc;
        case 0x3441d0u: goto label_3441d0;
        case 0x3441d4u: goto label_3441d4;
        case 0x3441d8u: goto label_3441d8;
        case 0x3441dcu: goto label_3441dc;
        case 0x3441e0u: goto label_3441e0;
        case 0x3441e4u: goto label_3441e4;
        case 0x3441e8u: goto label_3441e8;
        case 0x3441ecu: goto label_3441ec;
        case 0x3441f0u: goto label_3441f0;
        case 0x3441f4u: goto label_3441f4;
        case 0x3441f8u: goto label_3441f8;
        case 0x3441fcu: goto label_3441fc;
        case 0x344200u: goto label_344200;
        case 0x344204u: goto label_344204;
        case 0x344208u: goto label_344208;
        case 0x34420cu: goto label_34420c;
        case 0x344210u: goto label_344210;
        case 0x344214u: goto label_344214;
        case 0x344218u: goto label_344218;
        case 0x34421cu: goto label_34421c;
        case 0x344220u: goto label_344220;
        case 0x344224u: goto label_344224;
        case 0x344228u: goto label_344228;
        case 0x34422cu: goto label_34422c;
        case 0x344230u: goto label_344230;
        case 0x344234u: goto label_344234;
        case 0x344238u: goto label_344238;
        case 0x34423cu: goto label_34423c;
        case 0x344240u: goto label_344240;
        case 0x344244u: goto label_344244;
        case 0x344248u: goto label_344248;
        case 0x34424cu: goto label_34424c;
        case 0x344250u: goto label_344250;
        case 0x344254u: goto label_344254;
        case 0x344258u: goto label_344258;
        case 0x34425cu: goto label_34425c;
        case 0x344260u: goto label_344260;
        case 0x344264u: goto label_344264;
        case 0x344268u: goto label_344268;
        case 0x34426cu: goto label_34426c;
        case 0x344270u: goto label_344270;
        case 0x344274u: goto label_344274;
        case 0x344278u: goto label_344278;
        case 0x34427cu: goto label_34427c;
        case 0x344280u: goto label_344280;
        case 0x344284u: goto label_344284;
        case 0x344288u: goto label_344288;
        case 0x34428cu: goto label_34428c;
        case 0x344290u: goto label_344290;
        case 0x344294u: goto label_344294;
        case 0x344298u: goto label_344298;
        case 0x34429cu: goto label_34429c;
        case 0x3442a0u: goto label_3442a0;
        case 0x3442a4u: goto label_3442a4;
        case 0x3442a8u: goto label_3442a8;
        case 0x3442acu: goto label_3442ac;
        case 0x3442b0u: goto label_3442b0;
        case 0x3442b4u: goto label_3442b4;
        case 0x3442b8u: goto label_3442b8;
        case 0x3442bcu: goto label_3442bc;
        case 0x3442c0u: goto label_3442c0;
        case 0x3442c4u: goto label_3442c4;
        case 0x3442c8u: goto label_3442c8;
        case 0x3442ccu: goto label_3442cc;
        case 0x3442d0u: goto label_3442d0;
        case 0x3442d4u: goto label_3442d4;
        case 0x3442d8u: goto label_3442d8;
        case 0x3442dcu: goto label_3442dc;
        case 0x3442e0u: goto label_3442e0;
        case 0x3442e4u: goto label_3442e4;
        case 0x3442e8u: goto label_3442e8;
        case 0x3442ecu: goto label_3442ec;
        case 0x3442f0u: goto label_3442f0;
        case 0x3442f4u: goto label_3442f4;
        case 0x3442f8u: goto label_3442f8;
        case 0x3442fcu: goto label_3442fc;
        case 0x344300u: goto label_344300;
        case 0x344304u: goto label_344304;
        case 0x344308u: goto label_344308;
        case 0x34430cu: goto label_34430c;
        case 0x344310u: goto label_344310;
        case 0x344314u: goto label_344314;
        case 0x344318u: goto label_344318;
        case 0x34431cu: goto label_34431c;
        case 0x344320u: goto label_344320;
        case 0x344324u: goto label_344324;
        case 0x344328u: goto label_344328;
        case 0x34432cu: goto label_34432c;
        case 0x344330u: goto label_344330;
        case 0x344334u: goto label_344334;
        case 0x344338u: goto label_344338;
        case 0x34433cu: goto label_34433c;
        case 0x344340u: goto label_344340;
        case 0x344344u: goto label_344344;
        case 0x344348u: goto label_344348;
        case 0x34434cu: goto label_34434c;
        case 0x344350u: goto label_344350;
        case 0x344354u: goto label_344354;
        case 0x344358u: goto label_344358;
        case 0x34435cu: goto label_34435c;
        case 0x344360u: goto label_344360;
        case 0x344364u: goto label_344364;
        case 0x344368u: goto label_344368;
        case 0x34436cu: goto label_34436c;
        case 0x344370u: goto label_344370;
        case 0x344374u: goto label_344374;
        case 0x344378u: goto label_344378;
        case 0x34437cu: goto label_34437c;
        case 0x344380u: goto label_344380;
        case 0x344384u: goto label_344384;
        case 0x344388u: goto label_344388;
        case 0x34438cu: goto label_34438c;
        case 0x344390u: goto label_344390;
        case 0x344394u: goto label_344394;
        case 0x344398u: goto label_344398;
        case 0x34439cu: goto label_34439c;
        case 0x3443a0u: goto label_3443a0;
        case 0x3443a4u: goto label_3443a4;
        case 0x3443a8u: goto label_3443a8;
        case 0x3443acu: goto label_3443ac;
        case 0x3443b0u: goto label_3443b0;
        case 0x3443b4u: goto label_3443b4;
        case 0x3443b8u: goto label_3443b8;
        case 0x3443bcu: goto label_3443bc;
        case 0x3443c0u: goto label_3443c0;
        case 0x3443c4u: goto label_3443c4;
        case 0x3443c8u: goto label_3443c8;
        case 0x3443ccu: goto label_3443cc;
        case 0x3443d0u: goto label_3443d0;
        case 0x3443d4u: goto label_3443d4;
        case 0x3443d8u: goto label_3443d8;
        case 0x3443dcu: goto label_3443dc;
        case 0x3443e0u: goto label_3443e0;
        case 0x3443e4u: goto label_3443e4;
        case 0x3443e8u: goto label_3443e8;
        case 0x3443ecu: goto label_3443ec;
        case 0x3443f0u: goto label_3443f0;
        case 0x3443f4u: goto label_3443f4;
        case 0x3443f8u: goto label_3443f8;
        case 0x3443fcu: goto label_3443fc;
        case 0x344400u: goto label_344400;
        case 0x344404u: goto label_344404;
        case 0x344408u: goto label_344408;
        case 0x34440cu: goto label_34440c;
        case 0x344410u: goto label_344410;
        case 0x344414u: goto label_344414;
        case 0x344418u: goto label_344418;
        case 0x34441cu: goto label_34441c;
        case 0x344420u: goto label_344420;
        case 0x344424u: goto label_344424;
        case 0x344428u: goto label_344428;
        case 0x34442cu: goto label_34442c;
        case 0x344430u: goto label_344430;
        case 0x344434u: goto label_344434;
        case 0x344438u: goto label_344438;
        case 0x34443cu: goto label_34443c;
        case 0x344440u: goto label_344440;
        case 0x344444u: goto label_344444;
        case 0x344448u: goto label_344448;
        case 0x34444cu: goto label_34444c;
        case 0x344450u: goto label_344450;
        case 0x344454u: goto label_344454;
        case 0x344458u: goto label_344458;
        case 0x34445cu: goto label_34445c;
        case 0x344460u: goto label_344460;
        case 0x344464u: goto label_344464;
        case 0x344468u: goto label_344468;
        case 0x34446cu: goto label_34446c;
        case 0x344470u: goto label_344470;
        case 0x344474u: goto label_344474;
        case 0x344478u: goto label_344478;
        case 0x34447cu: goto label_34447c;
        case 0x344480u: goto label_344480;
        case 0x344484u: goto label_344484;
        case 0x344488u: goto label_344488;
        case 0x34448cu: goto label_34448c;
        case 0x344490u: goto label_344490;
        case 0x344494u: goto label_344494;
        case 0x344498u: goto label_344498;
        case 0x34449cu: goto label_34449c;
        case 0x3444a0u: goto label_3444a0;
        case 0x3444a4u: goto label_3444a4;
        case 0x3444a8u: goto label_3444a8;
        case 0x3444acu: goto label_3444ac;
        case 0x3444b0u: goto label_3444b0;
        case 0x3444b4u: goto label_3444b4;
        case 0x3444b8u: goto label_3444b8;
        case 0x3444bcu: goto label_3444bc;
        case 0x3444c0u: goto label_3444c0;
        case 0x3444c4u: goto label_3444c4;
        case 0x3444c8u: goto label_3444c8;
        case 0x3444ccu: goto label_3444cc;
        case 0x3444d0u: goto label_3444d0;
        case 0x3444d4u: goto label_3444d4;
        case 0x3444d8u: goto label_3444d8;
        case 0x3444dcu: goto label_3444dc;
        case 0x3444e0u: goto label_3444e0;
        case 0x3444e4u: goto label_3444e4;
        case 0x3444e8u: goto label_3444e8;
        case 0x3444ecu: goto label_3444ec;
        case 0x3444f0u: goto label_3444f0;
        case 0x3444f4u: goto label_3444f4;
        case 0x3444f8u: goto label_3444f8;
        case 0x3444fcu: goto label_3444fc;
        case 0x344500u: goto label_344500;
        case 0x344504u: goto label_344504;
        case 0x344508u: goto label_344508;
        case 0x34450cu: goto label_34450c;
        case 0x344510u: goto label_344510;
        case 0x344514u: goto label_344514;
        case 0x344518u: goto label_344518;
        case 0x34451cu: goto label_34451c;
        case 0x344520u: goto label_344520;
        case 0x344524u: goto label_344524;
        case 0x344528u: goto label_344528;
        case 0x34452cu: goto label_34452c;
        case 0x344530u: goto label_344530;
        case 0x344534u: goto label_344534;
        case 0x344538u: goto label_344538;
        case 0x34453cu: goto label_34453c;
        case 0x344540u: goto label_344540;
        case 0x344544u: goto label_344544;
        case 0x344548u: goto label_344548;
        case 0x34454cu: goto label_34454c;
        case 0x344550u: goto label_344550;
        case 0x344554u: goto label_344554;
        case 0x344558u: goto label_344558;
        case 0x34455cu: goto label_34455c;
        case 0x344560u: goto label_344560;
        case 0x344564u: goto label_344564;
        case 0x344568u: goto label_344568;
        case 0x34456cu: goto label_34456c;
        default: break;
    }

    ctx->pc = 0x344150u;

label_344150:
    // 0x344150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x344150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_344154:
    // 0x344154: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x344154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_344158:
    // 0x344158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x344158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34415c:
    // 0x34415c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34415cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_344160:
    // 0x344160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_344164:
    // 0x344164: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_344168:
    if (ctx->pc == 0x344168u) {
        ctx->pc = 0x344168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344164u;
        // 0x344168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34416Cu;
        goto label_34416c;
    }
    ctx->pc = 0x344164u;
    {
        const bool branch_taken_0x344164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344164u;
        // 0x344168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344164) {
            ctx->pc = 0x344244u;
            goto label_344244;
        }
    }
    ctx->pc = 0x34416Cu;
label_34416c:
    // 0x34416c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x34416cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_344170:
    // 0x344170: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x344170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_344174:
    // 0x344174: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_344178:
    if (ctx->pc == 0x344178u) {
        ctx->pc = 0x344178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344174u;
        // 0x344178: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34417Cu;
        goto label_34417c;
    }
    ctx->pc = 0x344174u;
    {
        const bool branch_taken_0x344174 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x344178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344174u;
        // 0x344178: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344174) {
            ctx->pc = 0x344240u;
            goto label_344240;
        }
    }
    ctx->pc = 0x34417Cu;
label_34417c:
    // 0x34417c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x34417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_344180:
    // 0x344180: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x344180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344184:
    // 0x344184: 0x2443c2c8  addiu       $v1, $v0, -0x3D38
    ctx->pc = 0x344184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
label_344188:
    // 0x344188: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x344188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_34418c:
    // 0x34418c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_344190:
    if (ctx->pc == 0x344190u) {
        ctx->pc = 0x344190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34418Cu;
        // 0x344190: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344194u;
        goto label_344194;
    }
    ctx->pc = 0x34418Cu;
    {
        const bool branch_taken_0x34418c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34418Cu;
        // 0x344190: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34418c) {
            ctx->pc = 0x3441F8u;
            goto label_3441f8;
        }
    }
    ctx->pc = 0x344194u;
label_344194:
    // 0x344194: 0x54500009  bnel        $v0, $s0, . + 4 + (0x9 << 2)
label_344198:
    if (ctx->pc == 0x344198u) {
        ctx->pc = 0x344198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344194u;
        // 0x344198: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34419Cu;
        goto label_34419c;
    }
    ctx->pc = 0x344194u;
    {
        const bool branch_taken_0x344194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x344194) {
            ctx->pc = 0x344198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344194u;
            // 0x344198: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3441BCu;
            goto label_3441bc;
        }
    }
    ctx->pc = 0x34419Cu;
label_34419c:
    // 0x34419c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x34419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3441a0:
    // 0x3441a0: 0x54500006  bnel        $v0, $s0, . + 4 + (0x6 << 2)
label_3441a4:
    if (ctx->pc == 0x3441A4u) {
        ctx->pc = 0x3441A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441A0u;
        // 0x3441a4: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3441A8u;
        goto label_3441a8;
    }
    ctx->pc = 0x3441A0u;
    {
        const bool branch_taken_0x3441a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3441a0) {
            ctx->pc = 0x3441A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3441A0u;
            // 0x3441a4: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3441BCu;
            goto label_3441bc;
        }
    }
    ctx->pc = 0x3441A8u;
label_3441a8:
    // 0x3441a8: 0x10000013  b           . + 4 + (0x13 << 2)
label_3441ac:
    if (ctx->pc == 0x3441ACu) {
        ctx->pc = 0x3441ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441A8u;
        // 0x3441ac: 0xac600068  sw          $zero, 0x68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3441B0u;
        goto label_3441b0;
    }
    ctx->pc = 0x3441A8u;
    {
        const bool branch_taken_0x3441a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3441ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441A8u;
        // 0x3441ac: 0xac600068  sw          $zero, 0x68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3441a8) {
            ctx->pc = 0x3441F8u;
            goto label_3441f8;
        }
    }
    ctx->pc = 0x3441B0u;
label_3441b0:
    // 0x3441b0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3441b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_3441b4:
    // 0x3441b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3441b8:
    if (ctx->pc == 0x3441B8u) {
        ctx->pc = 0x3441B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441B4u;
        // 0x3441b8: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3441BCu;
        goto label_3441bc;
    }
    ctx->pc = 0x3441B4u;
    {
        const bool branch_taken_0x3441b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3441B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441B4u;
        // 0x3441b8: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3441b4) {
            ctx->pc = 0x3441E8u;
            goto label_3441e8;
        }
    }
    ctx->pc = 0x3441BCu;
label_3441bc:
    // 0x3441bc: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x3441bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_3441c0:
    // 0x3441c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3441c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3441c4:
    // 0x3441c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3441c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3441c8:
    // 0x3441c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3441c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3441cc:
    // 0x3441cc: 0x0  nop
    ctx->pc = 0x3441ccu;
    // NOP
label_3441d0:
    // 0x3441d0: 0x5050fff7  beql        $v0, $s0, . + 4 + (-0x9 << 2)
label_3441d4:
    if (ctx->pc == 0x3441D4u) {
        ctx->pc = 0x3441D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441D0u;
        // 0x3441d4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3441D8u;
        goto label_3441d8;
    }
    ctx->pc = 0x3441D0u;
    {
        const bool branch_taken_0x3441d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3441d0) {
            ctx->pc = 0x3441D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3441D0u;
            // 0x3441d4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3441B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3441b0;
        }
    }
    ctx->pc = 0x3441D8u;
label_3441d8:
    // 0x3441d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3441d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3441dc:
    // 0x3441dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3441dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3441e0:
    // 0x3441e0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3441e4:
    if (ctx->pc == 0x3441E4u) {
        ctx->pc = 0x3441E8u;
        goto label_3441e8;
    }
    ctx->pc = 0x3441E0u;
    {
        const bool branch_taken_0x3441e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3441e0) {
            ctx->pc = 0x3441D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3441d0;
        }
    }
    ctx->pc = 0x3441E8u;
label_3441e8:
    // 0x3441e8: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38
    ctx->pc = 0x3441e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
label_3441ec:
    // 0x3441ec: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x3441ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_3441f0:
    // 0x3441f0: 0x50500002  beql        $v0, $s0, . + 4 + (0x2 << 2)
label_3441f4:
    if (ctx->pc == 0x3441F4u) {
        ctx->pc = 0x3441F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441F0u;
        // 0x3441f4: 0xac640068  sw          $a0, 0x68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3441F8u;
        goto label_3441f8;
    }
    ctx->pc = 0x3441F0u;
    {
        const bool branch_taken_0x3441f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3441f0) {
            ctx->pc = 0x3441F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3441F0u;
            // 0x3441f4: 0xac640068  sw          $a0, 0x68($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3441FCu;
            goto label_3441fc;
        }
    }
    ctx->pc = 0x3441F8u;
label_3441f8:
    // 0x3441f8: 0x24a3c2c8  addiu       $v1, $a1, -0x3D38
    ctx->pc = 0x3441f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
label_3441fc:
    // 0x3441fc: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x3441fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_344200:
    // 0x344200: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
label_344204:
    if (ctx->pc == 0x344204u) {
        ctx->pc = 0x344204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344200u;
        // 0x344204: 0x8c620090  lw          $v0, 0x90($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344208u;
        goto label_344208;
    }
    ctx->pc = 0x344200u;
    {
        const bool branch_taken_0x344200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x344200) {
            ctx->pc = 0x344204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344200u;
            // 0x344204: 0x8c620090  lw          $v0, 0x90($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344210u;
            goto label_344210;
        }
    }
    ctx->pc = 0x344208u;
label_344208:
    // 0x344208: 0x10000003  b           . + 4 + (0x3 << 2)
label_34420c:
    if (ctx->pc == 0x34420Cu) {
        ctx->pc = 0x34420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344208u;
        // 0x34420c: 0xac600094  sw          $zero, 0x94($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344210u;
        goto label_344210;
    }
    ctx->pc = 0x344208u;
    {
        const bool branch_taken_0x344208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344208u;
        // 0x34420c: 0xac600094  sw          $zero, 0x94($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344208) {
            ctx->pc = 0x344218u;
            goto label_344218;
        }
    }
    ctx->pc = 0x344210u;
label_344210:
    // 0x344210: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
label_344214:
    if (ctx->pc == 0x344214u) {
        ctx->pc = 0x344214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344210u;
        // 0x344214: 0xac600090  sw          $zero, 0x90($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344218u;
        goto label_344218;
    }
    ctx->pc = 0x344210u;
    {
        const bool branch_taken_0x344210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x344210) {
            ctx->pc = 0x344214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344210u;
            // 0x344214: 0xac600090  sw          $zero, 0x90($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344218u;
            goto label_344218;
        }
    }
    ctx->pc = 0x344218u;
label_344218:
    // 0x344218: 0x24a2c2c8  addiu       $v0, $a1, -0x3D38
    ctx->pc = 0x344218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
label_34421c:
    // 0x34421c: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x34421cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_344220:
    // 0x344220: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_344224:
    if (ctx->pc == 0x344224u) {
        ctx->pc = 0x344224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344220u;
        // 0x344224: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344228u;
        goto label_344228;
    }
    ctx->pc = 0x344220u;
    {
        const bool branch_taken_0x344220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344220u;
        // 0x344224: 0x2623e880  addiu       $v1, $s1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344220) {
            ctx->pc = 0x344234u;
            goto label_344234;
        }
    }
    ctx->pc = 0x344228u;
label_344228:
    // 0x344228: 0x40f809  jalr        $v0
label_34422c:
    if (ctx->pc == 0x34422Cu) {
        ctx->pc = 0x34422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344228u;
        // 0x34422c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344230u;
        goto label_344230;
    }
    ctx->pc = 0x344228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x344230u);
        ctx->pc = 0x34422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344228u;
        // 0x34422c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344228u, 0x344230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x344230u;
label_344230:
    // 0x344230: 0x2623e880  addiu       $v1, $s1, -0x1780
    ctx->pc = 0x344230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_344234:
    // 0x344234: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x344234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_344238:
    // 0x344238: 0x40f809  jalr        $v0
label_34423c:
    if (ctx->pc == 0x34423Cu) {
        ctx->pc = 0x34423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344238u;
        // 0x34423c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344240u;
        goto label_344240;
    }
    ctx->pc = 0x344238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x344240u);
        ctx->pc = 0x34423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344238u;
        // 0x34423c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344238u, 0x344240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x344240u;
label_344240:
    // 0x344240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x344240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_344244:
    // 0x344244: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x344244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_344248:
    // 0x344248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x344248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34424c:
    // 0x34424c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34424cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344250:
    // 0x344250: 0x3e00008  jr          $ra
label_344254:
    if (ctx->pc == 0x344254u) {
        ctx->pc = 0x344254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344250u;
        // 0x344254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344258u;
        goto label_344258;
    }
    ctx->pc = 0x344250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344250u;
        // 0x344254: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344258u;
label_344258:
    // 0x344258: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x344258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_34425c:
    // 0x34425c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x34425cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_344260:
    // 0x344260: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x344260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_344264:
    // 0x344264: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x344264u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344268:
    // 0x344268: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x344268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_34426c:
    // 0x34426c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34426cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_344270:
    // 0x344270: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x344270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_344274:
    // 0x344274: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x344274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_344278:
    // 0x344278: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x344278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_34427c:
    // 0x34427c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34427cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344280:
    // 0x344280: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x344280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_344284:
    // 0x344284: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x344284u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_344288:
    // 0x344288: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x344288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_34428c:
    // 0x34428c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x34428cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344290:
    // 0x344290: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x344290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_344294:
    // 0x344294: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x344294u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_344298:
    // 0x344298: 0x1a200034  blez        $s1, . + 4 + (0x34 << 2)
label_34429c:
    if (ctx->pc == 0x34429Cu) {
        ctx->pc = 0x34429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344298u;
        // 0x34429c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3442A0u;
        goto label_3442a0;
    }
    ctx->pc = 0x344298u;
    {
        const bool branch_taken_0x344298 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x34429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344298u;
        // 0x34429c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344298) {
            ctx->pc = 0x34436Cu;
            goto label_34436c;
        }
    }
    ctx->pc = 0x3442A0u;
label_3442a0:
    // 0x3442a0: 0x8e090010  lw          $t1, 0x10($s0)
    ctx->pc = 0x3442a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3442a4:
    // 0x3442a4: 0x0  nop
    ctx->pc = 0x3442a4u;
    // NOP
label_3442a8:
    // 0x3442a8: 0x1920002c  blez        $t1, . + 4 + (0x2C << 2)
label_3442ac:
    if (ctx->pc == 0x3442ACu) {
        ctx->pc = 0x3442ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442A8u;
        // 0x3442ac: 0x256a0001  addiu       $t2, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3442B0u;
        goto label_3442b0;
    }
    ctx->pc = 0x3442A8u;
    {
        const bool branch_taken_0x3442a8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3442ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442A8u;
        // 0x3442ac: 0x256a0001  addiu       $t2, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3442a8) {
            ctx->pc = 0x34435Cu;
            goto label_34435c;
        }
    }
    ctx->pc = 0x3442B0u;
label_3442b0:
    // 0x3442b0: 0xb1880  sll         $v1, $t3, 2
    ctx->pc = 0x3442b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_3442b4:
    // 0x3442b4: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x3442b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3442b8:
    // 0x3442b8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3442b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3442bc:
    // 0x3442bc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3442bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3442c0:
    // 0x3442c0: 0x71023  negu        $v0, $a3
    ctx->pc = 0x3442c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_3442c4:
    // 0x3442c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3442c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3442c8:
    // 0x3442c8: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x3442c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3442cc:
    // 0x3442cc: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_3442d0:
    if (ctx->pc == 0x3442D0u) {
        ctx->pc = 0x3442D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442CCu;
        // 0x3442d0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3442D4u;
        goto label_3442d4;
    }
    ctx->pc = 0x3442CCu;
    {
        const bool branch_taken_0x3442cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3442D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442CCu;
        // 0x3442d0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3442cc) {
            ctx->pc = 0x344320u;
            goto label_344320;
        }
    }
    ctx->pc = 0x3442D4u;
label_3442d4:
    // 0x3442d4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3442d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_3442d8:
    // 0x3442d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3442dc:
    if (ctx->pc == 0x3442DCu) {
        ctx->pc = 0x3442DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442D8u;
        // 0x3442dc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3442E0u;
        goto label_3442e0;
    }
    ctx->pc = 0x3442D8u;
    {
        const bool branch_taken_0x3442d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3442DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442D8u;
        // 0x3442dc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3442d8) {
            ctx->pc = 0x344310u;
            goto label_344310;
        }
    }
    ctx->pc = 0x3442E0u;
label_3442e0:
    // 0x3442e0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3442e4:
    if (ctx->pc == 0x3442E4u) {
        ctx->pc = 0x3442E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442E0u;
        // 0x3442e4: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3442E8u;
        goto label_3442e8;
    }
    ctx->pc = 0x3442E0u;
    {
        const bool branch_taken_0x3442e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3442e0) {
            ctx->pc = 0x3442E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3442E0u;
            // 0x3442e4: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344300u;
            goto label_344300;
        }
    }
    ctx->pc = 0x3442E8u;
label_3442e8:
    // 0x3442e8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3442e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3442ec:
    // 0x3442ec: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x3442ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3442f0:
    // 0x3442f0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3442f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3442f4:
    // 0x3442f4: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x3442f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_3442f8:
    // 0x3442f8: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x3442f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_3442fc:
    // 0x3442fc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3442fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_344300:
    // 0x344300: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x344300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_344304:
    // 0x344304: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x344304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_344308:
    // 0x344308: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x344308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_34430c:
    // 0x34430c: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x34430cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_344310:
    // 0x344310: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x344310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_344314:
    // 0x344314: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x344314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_344318:
    // 0x344318: 0x1000000d  b           . + 4 + (0xD << 2)
label_34431c:
    if (ctx->pc == 0x34431Cu) {
        ctx->pc = 0x34431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344318u;
        // 0x34431c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344320u;
        goto label_344320;
    }
    ctx->pc = 0x344318u;
    {
        const bool branch_taken_0x344318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344318u;
        // 0x34431c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344318) {
            ctx->pc = 0x344350u;
            goto label_344350;
        }
    }
    ctx->pc = 0x344320u;
label_344320:
    // 0x344320: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x344320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_344324:
    // 0x344324: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x344324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_344328:
    // 0x344328: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x344328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_34432c:
    // 0x34432c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x34432cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_344330:
    // 0x344330: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x344330u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_344334:
    // 0x344334: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x344334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_344338:
    // 0x344338: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x344338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_34433c:
    // 0x34433c: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x34433cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_344340:
    // 0x344340: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x344340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_344344:
    // 0x344344: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x344344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_344348:
    // 0x344348: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x344348u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_34434c:
    // 0x34434c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x34434cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_344350:
    // 0x344350: 0x831026  xor         $v0, $a0, $v1
    ctx->pc = 0x344350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_344354:
    // 0x344354: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
label_344358:
    if (ctx->pc == 0x344358u) {
        ctx->pc = 0x344358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344354u;
        // 0x344358: 0x2400a  movz        $t0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34435Cu;
        goto label_34435c;
    }
    ctx->pc = 0x344354u;
    {
        const bool branch_taken_0x344354 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x344358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344354u;
        // 0x344358: 0x2400a  movz        $t0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344354) {
            ctx->pc = 0x344320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344320;
        }
    }
    ctx->pc = 0x34435Cu;
label_34435c:
    // 0x34435c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x34435cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_344360:
    // 0x344360: 0x171102a  slt         $v0, $t3, $s1
    ctx->pc = 0x344360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_344364:
    // 0x344364: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_344368:
    if (ctx->pc == 0x344368u) {
        ctx->pc = 0x34436Cu;
        goto label_34436c;
    }
    ctx->pc = 0x344364u;
    {
        const bool branch_taken_0x344364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344364) {
            ctx->pc = 0x3442A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3442a8;
        }
    }
    ctx->pc = 0x34436Cu;
label_34436c:
    // 0x34436c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_344370:
    // 0x344370: 0x1502006e  bne         $t0, $v0, . + 4 + (0x6E << 2)
label_344374:
    if (ctx->pc == 0x344374u) {
        ctx->pc = 0x344374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344370u;
        // 0x344374: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344378u;
        goto label_344378;
    }
    ctx->pc = 0x344370u;
    {
        const bool branch_taken_0x344370 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x344374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344370u;
        // 0x344374: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344370) {
            ctx->pc = 0x34452Cu;
            goto label_34452c;
        }
    }
    ctx->pc = 0x344378u;
label_344378:
    // 0x344378: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x344378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_34437c:
    // 0x34437c: 0x8c82e988  lw          $v0, -0x1678($a0)
    ctx->pc = 0x34437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961544)));
label_344380:
    // 0x344380: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x344380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_344384:
    // 0x344384: 0x71a021  addu        $s4, $v1, $s1
    ctx->pc = 0x344384u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_344388:
    // 0x344388: 0x34a50130  ori         $a1, $a1, 0x130
    ctx->pc = 0x344388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
label_34438c:
    // 0x34438c: 0x40f809  jalr        $v0
label_344390:
    if (ctx->pc == 0x344390u) {
        ctx->pc = 0x344390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34438Cu;
        // 0x344390: 0x1420c0  sll         $a0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344394u;
        goto label_344394;
    }
    ctx->pc = 0x34438Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x344394u);
        ctx->pc = 0x344390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34438Cu;
        // 0x344390: 0x1420c0  sll         $a0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34438Cu, 0x344394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x344394u;
label_344394:
    // 0x344394: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x344394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344398:
    // 0x344398: 0x12400069  beqz        $s2, . + 4 + (0x69 << 2)
label_34439c:
    if (ctx->pc == 0x34439Cu) {
        ctx->pc = 0x34439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344398u;
        // 0x34439c: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3443A0u;
        goto label_3443a0;
    }
    ctx->pc = 0x344398u;
    {
        const bool branch_taken_0x344398 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x34439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344398u;
        // 0x34439c: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344398) {
            ctx->pc = 0x344540u;
            goto label_344540;
        }
    }
    ctx->pc = 0x3443A0u;
label_3443a0:
    // 0x3443a0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3443a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3443a4:
    // 0x3443a4: 0x2426821  addu        $t5, $s2, $v0
    ctx->pc = 0x3443a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3443a8:
    // 0x3443a8: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
label_3443ac:
    if (ctx->pc == 0x3443ACu) {
        ctx->pc = 0x3443ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443A8u;
        // 0x3443ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3443B0u;
        goto label_3443b0;
    }
    ctx->pc = 0x3443A8u;
    {
        const bool branch_taken_0x3443a8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3443ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443A8u;
        // 0x3443ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3443a8) {
            ctx->pc = 0x3443F0u;
            goto label_3443f0;
        }
    }
    ctx->pc = 0x3443B0u;
label_3443b0:
    // 0x3443b0: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x3443b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3443b4:
    // 0x3443b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3443b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3443b8:
    // 0x3443b8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x3443b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3443bc:
    // 0x3443bc: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x3443bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_3443c0:
    // 0x3443c0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3443c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3443c4:
    // 0x3443c4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3443c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_3443c8:
    // 0x3443c8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3443c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3443cc:
    // 0x3443cc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3443ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3443d0:
    // 0x3443d0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3443d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3443d4:
    // 0x3443d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3443d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3443d8:
    // 0x3443d8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3443d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3443dc:
    // 0x3443dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3443dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3443e0:
    // 0x3443e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3443e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3443e4:
    // 0x3443e4: 0x162102a  slt         $v0, $t3, $v0
    ctx->pc = 0x3443e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3443e8:
    // 0x3443e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3443ec:
    if (ctx->pc == 0x3443ECu) {
        ctx->pc = 0x3443ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443E8u;
        // 0x3443ec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3443F0u;
        goto label_3443f0;
    }
    ctx->pc = 0x3443E8u;
    {
        const bool branch_taken_0x3443e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3443ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443E8u;
        // 0x3443ec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3443e8) {
            ctx->pc = 0x3443C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3443c0;
        }
    }
    ctx->pc = 0x3443F0u;
label_3443f0:
    // 0x3443f0: 0x1a200049  blez        $s1, . + 4 + (0x49 << 2)
label_3443f4:
    if (ctx->pc == 0x3443F4u) {
        ctx->pc = 0x3443F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443F0u;
        // 0x3443f4: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3443F8u;
        goto label_3443f8;
    }
    ctx->pc = 0x3443F0u;
    {
        const bool branch_taken_0x3443f0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3443F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443F0u;
        // 0x3443f4: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3443f0) {
            ctx->pc = 0x344518u;
            goto label_344518;
        }
    }
    ctx->pc = 0x3443F8u;
label_3443f8:
    // 0x3443f8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3443f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3443fc:
    // 0x3443fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3443fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_344400:
    // 0x344400: 0x726021  addu        $t4, $v1, $s2
    ctx->pc = 0x344400u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_344404:
    // 0x344404: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x344404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_344408:
    // 0x344408: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x344408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_34440c:
    // 0x34440c: 0x111023  negu        $v0, $s1
    ctx->pc = 0x34440cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_344410:
    // 0x344410: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x344410u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_344414:
    // 0x344414: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x344414u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344418:
    // 0x344418: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x344418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_34441c:
    // 0x34441c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x34441cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_344420:
    // 0x344420: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x344420u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_344424:
    // 0x344424: 0x11000022  beqz        $t0, . + 4 + (0x22 << 2)
label_344428:
    if (ctx->pc == 0x344428u) {
        ctx->pc = 0x344428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344424u;
        // 0x344428: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34442Cu;
        goto label_34442c;
    }
    ctx->pc = 0x344424u;
    {
        const bool branch_taken_0x344424 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x344428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344424u;
        // 0x344428: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344424) {
            ctx->pc = 0x3444B0u;
            goto label_3444b0;
        }
    }
    ctx->pc = 0x34442Cu;
label_34442c:
    // 0x34442c: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x34442cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
label_344430:
    // 0x344430: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_344434:
    if (ctx->pc == 0x344434u) {
        ctx->pc = 0x344434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344430u;
        // 0x344434: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344438u;
        goto label_344438;
    }
    ctx->pc = 0x344430u;
    {
        const bool branch_taken_0x344430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344430u;
        // 0x344434: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344430) {
            ctx->pc = 0x344488u;
            goto label_344488;
        }
    }
    ctx->pc = 0x344438u;
label_344438:
    // 0x344438: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_34443c:
    if (ctx->pc == 0x34443Cu) {
        ctx->pc = 0x34443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344438u;
        // 0x34443c: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344440u;
        goto label_344440;
    }
    ctx->pc = 0x344438u;
    {
        const bool branch_taken_0x344438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344438) {
            ctx->pc = 0x34443Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344438u;
            // 0x34443c: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344468u;
            goto label_344468;
        }
    }
    ctx->pc = 0x344440u;
label_344440:
    // 0x344440: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x344440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_344444:
    // 0x344444: 0x24ea0004  addiu       $t2, $a3, 0x4
    ctx->pc = 0x344444u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_344448:
    // 0x344448: 0x24c90004  addiu       $t1, $a2, 0x4
    ctx->pc = 0x344448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_34444c:
    // 0x34444c: 0x262bffff  addiu       $t3, $s1, -0x1
    ctx->pc = 0x34444cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_344450:
    // 0x344450: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x344450u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
label_344454:
    // 0x344454: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x344454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_344458:
    // 0x344458: 0x25840004  addiu       $a0, $t4, 0x4
    ctx->pc = 0x344458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_34445c:
    // 0x34445c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x34445cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_344460:
    // 0x344460: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x344460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_344464:
    // 0x344464: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x344464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_344468:
    // 0x344468: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x344468u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_34446c:
    // 0x34446c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x34446cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_344470:
    // 0x344470: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x344470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_344474:
    // 0x344474: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x344474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_344478:
    // 0x344478: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x344478u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_34447c:
    // 0x34447c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x34447cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_344480:
    // 0x344480: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x344480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_344484:
    // 0x344484: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x344484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_344488:
    // 0x344488: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x344488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_34448c:
    // 0x34448c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x34448cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_344490:
    // 0x344490: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x344490u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_344494:
    // 0x344494: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x344494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_344498:
    // 0x344498: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x344498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_34449c:
    // 0x34449c: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x34449cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_3444a0:
    // 0x3444a0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3444a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_3444a4:
    // 0x3444a4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x3444a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_3444a8:
    // 0x3444a8: 0x1160001b  beqz        $t3, . + 4 + (0x1B << 2)
label_3444ac:
    if (ctx->pc == 0x3444ACu) {
        ctx->pc = 0x3444ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444A8u;
        // 0x3444ac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3444B0u;
        goto label_3444b0;
    }
    ctx->pc = 0x3444A8u;
    {
        const bool branch_taken_0x3444a8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3444ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444A8u;
        // 0x3444ac: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3444a8) {
            ctx->pc = 0x344518u;
            goto label_344518;
        }
    }
    ctx->pc = 0x3444B0u;
label_3444b0:
    // 0x3444b0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3444b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3444b4:
    // 0x3444b4: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x3444b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3444b8:
    // 0x3444b8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x3444b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3444bc:
    // 0x3444bc: 0x0  nop
    ctx->pc = 0x3444bcu;
    // NOP
label_3444c0:
    // 0x3444c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3444c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3444c4:
    // 0x3444c4: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x3444c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
label_3444c8:
    // 0x3444c8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3444c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_3444cc:
    // 0x3444cc: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x3444ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3444d0:
    // 0x3444d0: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x3444d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_3444d4:
    // 0x3444d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3444d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3444d8:
    // 0x3444d8: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x3444d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_3444dc:
    // 0x3444dc: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x3444dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3444e0:
    // 0x3444e0: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x3444e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
label_3444e4:
    // 0x3444e4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3444e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3444e8:
    // 0x3444e8: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x3444e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_3444ec:
    // 0x3444ec: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x3444ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3444f0:
    // 0x3444f0: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x3444f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
label_3444f4:
    // 0x3444f4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3444f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3444f8:
    // 0x3444f8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3444f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3444fc:
    // 0x3444fc: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x3444fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_344500:
    // 0x344500: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x344500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_344504:
    // 0x344504: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x344504u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_344508:
    // 0x344508: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x344508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_34450c:
    // 0x34450c: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x34450cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_344510:
    // 0x344510: 0x1560ffeb  bnez        $t3, . + 4 + (-0x15 << 2)
label_344514:
    if (ctx->pc == 0x344514u) {
        ctx->pc = 0x344514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344510u;
        // 0x344514: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344518u;
        goto label_344518;
    }
    ctx->pc = 0x344510u;
    {
        const bool branch_taken_0x344510 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x344514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344510u;
        // 0x344514: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344510) {
            ctx->pc = 0x3444C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3444c0;
        }
    }
    ctx->pc = 0x344518u;
label_344518:
    // 0x344518: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x344518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34451c:
    // 0x34451c: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x34451cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_344520:
    // 0x344520: 0xc0d0f36  jal         func_343CD8
label_344524:
    if (ctx->pc == 0x344524u) {
        ctx->pc = 0x344524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344520u;
        // 0x344524: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344528u;
        goto label_344528;
    }
    ctx->pc = 0x344520u;
    SET_GPR_U32(ctx, 31, 0x344528u);
    ctx->pc = 0x344524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344520u;
    // 0x344524: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343CD8u, 0x344520u, 0x344528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344528u;
label_344528:
    // 0x344528: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x344528u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34452c:
    // 0x34452c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_344530:
    if (ctx->pc == 0x344530u) {
        ctx->pc = 0x344530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34452Cu;
        // 0x344530: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344534u;
        goto label_344534;
    }
    ctx->pc = 0x34452Cu;
    {
        const bool branch_taken_0x34452c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x344530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34452Cu;
        // 0x344530: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34452c) {
            ctx->pc = 0x344540u;
            goto label_344540;
        }
    }
    ctx->pc = 0x344534u;
label_344534:
    // 0x344534: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x344534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_344538:
    // 0x344538: 0x40f809  jalr        $v0
label_34453c:
    if (ctx->pc == 0x34453Cu) {
        ctx->pc = 0x34453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344538u;
        // 0x34453c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344540u;
        goto label_344540;
    }
    ctx->pc = 0x344538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x344540u);
        ctx->pc = 0x34453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344538u;
        // 0x34453c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344538u, 0x344540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x344540u;
label_344540:
    // 0x344540: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x344540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_344544:
    // 0x344544: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x344544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_344548:
    // 0x344548: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x344548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_34454c:
    // 0x34454c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x34454cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_344550:
    // 0x344550: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x344550u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_344554:
    // 0x344554: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x344554u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_344558:
    // 0x344558: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x344558u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34455c:
    // 0x34455c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x34455cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_344560:
    // 0x344560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344564:
    // 0x344564: 0x3e00008  jr          $ra
label_344568:
    if (ctx->pc == 0x344568u) {
        ctx->pc = 0x344568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344564u;
        // 0x344568: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34456Cu;
        goto label_34456c;
    }
    ctx->pc = 0x344564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344564u;
        // 0x344568: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34456Cu;
label_34456c:
    // 0x34456c: 0x0  nop
    ctx->pc = 0x34456cu;
    // NOP
    ctx->pc = 0x344570u;
}
