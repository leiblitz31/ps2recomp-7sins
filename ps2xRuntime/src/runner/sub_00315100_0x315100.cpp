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

// Function: sub_00315100
// Address: 0x315100 - 0x315408
void sub_00315100_0x315100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315100_0x315100");
#endif

    switch (ctx->pc) {
        case 0x315100u: goto label_315100;
        case 0x315104u: goto label_315104;
        case 0x315108u: goto label_315108;
        case 0x31510cu: goto label_31510c;
        case 0x315110u: goto label_315110;
        case 0x315114u: goto label_315114;
        case 0x315118u: goto label_315118;
        case 0x31511cu: goto label_31511c;
        case 0x315120u: goto label_315120;
        case 0x315124u: goto label_315124;
        case 0x315128u: goto label_315128;
        case 0x31512cu: goto label_31512c;
        case 0x315130u: goto label_315130;
        case 0x315134u: goto label_315134;
        case 0x315138u: goto label_315138;
        case 0x31513cu: goto label_31513c;
        case 0x315140u: goto label_315140;
        case 0x315144u: goto label_315144;
        case 0x315148u: goto label_315148;
        case 0x31514cu: goto label_31514c;
        case 0x315150u: goto label_315150;
        case 0x315154u: goto label_315154;
        case 0x315158u: goto label_315158;
        case 0x31515cu: goto label_31515c;
        case 0x315160u: goto label_315160;
        case 0x315164u: goto label_315164;
        case 0x315168u: goto label_315168;
        case 0x31516cu: goto label_31516c;
        case 0x315170u: goto label_315170;
        case 0x315174u: goto label_315174;
        case 0x315178u: goto label_315178;
        case 0x31517cu: goto label_31517c;
        case 0x315180u: goto label_315180;
        case 0x315184u: goto label_315184;
        case 0x315188u: goto label_315188;
        case 0x31518cu: goto label_31518c;
        case 0x315190u: goto label_315190;
        case 0x315194u: goto label_315194;
        case 0x315198u: goto label_315198;
        case 0x31519cu: goto label_31519c;
        case 0x3151a0u: goto label_3151a0;
        case 0x3151a4u: goto label_3151a4;
        case 0x3151a8u: goto label_3151a8;
        case 0x3151acu: goto label_3151ac;
        case 0x3151b0u: goto label_3151b0;
        case 0x3151b4u: goto label_3151b4;
        case 0x3151b8u: goto label_3151b8;
        case 0x3151bcu: goto label_3151bc;
        case 0x3151c0u: goto label_3151c0;
        case 0x3151c4u: goto label_3151c4;
        case 0x3151c8u: goto label_3151c8;
        case 0x3151ccu: goto label_3151cc;
        case 0x3151d0u: goto label_3151d0;
        case 0x3151d4u: goto label_3151d4;
        case 0x3151d8u: goto label_3151d8;
        case 0x3151dcu: goto label_3151dc;
        case 0x3151e0u: goto label_3151e0;
        case 0x3151e4u: goto label_3151e4;
        case 0x3151e8u: goto label_3151e8;
        case 0x3151ecu: goto label_3151ec;
        case 0x3151f0u: goto label_3151f0;
        case 0x3151f4u: goto label_3151f4;
        case 0x3151f8u: goto label_3151f8;
        case 0x3151fcu: goto label_3151fc;
        case 0x315200u: goto label_315200;
        case 0x315204u: goto label_315204;
        case 0x315208u: goto label_315208;
        case 0x31520cu: goto label_31520c;
        case 0x315210u: goto label_315210;
        case 0x315214u: goto label_315214;
        case 0x315218u: goto label_315218;
        case 0x31521cu: goto label_31521c;
        case 0x315220u: goto label_315220;
        case 0x315224u: goto label_315224;
        case 0x315228u: goto label_315228;
        case 0x31522cu: goto label_31522c;
        case 0x315230u: goto label_315230;
        case 0x315234u: goto label_315234;
        case 0x315238u: goto label_315238;
        case 0x31523cu: goto label_31523c;
        case 0x315240u: goto label_315240;
        case 0x315244u: goto label_315244;
        case 0x315248u: goto label_315248;
        case 0x31524cu: goto label_31524c;
        case 0x315250u: goto label_315250;
        case 0x315254u: goto label_315254;
        case 0x315258u: goto label_315258;
        case 0x31525cu: goto label_31525c;
        case 0x315260u: goto label_315260;
        case 0x315264u: goto label_315264;
        case 0x315268u: goto label_315268;
        case 0x31526cu: goto label_31526c;
        case 0x315270u: goto label_315270;
        case 0x315274u: goto label_315274;
        case 0x315278u: goto label_315278;
        case 0x31527cu: goto label_31527c;
        case 0x315280u: goto label_315280;
        case 0x315284u: goto label_315284;
        case 0x315288u: goto label_315288;
        case 0x31528cu: goto label_31528c;
        case 0x315290u: goto label_315290;
        case 0x315294u: goto label_315294;
        case 0x315298u: goto label_315298;
        case 0x31529cu: goto label_31529c;
        case 0x3152a0u: goto label_3152a0;
        case 0x3152a4u: goto label_3152a4;
        case 0x3152a8u: goto label_3152a8;
        case 0x3152acu: goto label_3152ac;
        case 0x3152b0u: goto label_3152b0;
        case 0x3152b4u: goto label_3152b4;
        case 0x3152b8u: goto label_3152b8;
        case 0x3152bcu: goto label_3152bc;
        case 0x3152c0u: goto label_3152c0;
        case 0x3152c4u: goto label_3152c4;
        case 0x3152c8u: goto label_3152c8;
        case 0x3152ccu: goto label_3152cc;
        case 0x3152d0u: goto label_3152d0;
        case 0x3152d4u: goto label_3152d4;
        case 0x3152d8u: goto label_3152d8;
        case 0x3152dcu: goto label_3152dc;
        case 0x3152e0u: goto label_3152e0;
        case 0x3152e4u: goto label_3152e4;
        case 0x3152e8u: goto label_3152e8;
        case 0x3152ecu: goto label_3152ec;
        case 0x3152f0u: goto label_3152f0;
        case 0x3152f4u: goto label_3152f4;
        case 0x3152f8u: goto label_3152f8;
        case 0x3152fcu: goto label_3152fc;
        case 0x315300u: goto label_315300;
        case 0x315304u: goto label_315304;
        case 0x315308u: goto label_315308;
        case 0x31530cu: goto label_31530c;
        case 0x315310u: goto label_315310;
        case 0x315314u: goto label_315314;
        case 0x315318u: goto label_315318;
        case 0x31531cu: goto label_31531c;
        case 0x315320u: goto label_315320;
        case 0x315324u: goto label_315324;
        case 0x315328u: goto label_315328;
        case 0x31532cu: goto label_31532c;
        case 0x315330u: goto label_315330;
        case 0x315334u: goto label_315334;
        case 0x315338u: goto label_315338;
        case 0x31533cu: goto label_31533c;
        case 0x315340u: goto label_315340;
        case 0x315344u: goto label_315344;
        case 0x315348u: goto label_315348;
        case 0x31534cu: goto label_31534c;
        case 0x315350u: goto label_315350;
        case 0x315354u: goto label_315354;
        case 0x315358u: goto label_315358;
        case 0x31535cu: goto label_31535c;
        case 0x315360u: goto label_315360;
        case 0x315364u: goto label_315364;
        case 0x315368u: goto label_315368;
        case 0x31536cu: goto label_31536c;
        case 0x315370u: goto label_315370;
        case 0x315374u: goto label_315374;
        case 0x315378u: goto label_315378;
        case 0x31537cu: goto label_31537c;
        case 0x315380u: goto label_315380;
        case 0x315384u: goto label_315384;
        case 0x315388u: goto label_315388;
        case 0x31538cu: goto label_31538c;
        case 0x315390u: goto label_315390;
        case 0x315394u: goto label_315394;
        case 0x315398u: goto label_315398;
        case 0x31539cu: goto label_31539c;
        case 0x3153a0u: goto label_3153a0;
        case 0x3153a4u: goto label_3153a4;
        case 0x3153a8u: goto label_3153a8;
        case 0x3153acu: goto label_3153ac;
        case 0x3153b0u: goto label_3153b0;
        case 0x3153b4u: goto label_3153b4;
        case 0x3153b8u: goto label_3153b8;
        case 0x3153bcu: goto label_3153bc;
        case 0x3153c0u: goto label_3153c0;
        case 0x3153c4u: goto label_3153c4;
        case 0x3153c8u: goto label_3153c8;
        case 0x3153ccu: goto label_3153cc;
        case 0x3153d0u: goto label_3153d0;
        case 0x3153d4u: goto label_3153d4;
        case 0x3153d8u: goto label_3153d8;
        case 0x3153dcu: goto label_3153dc;
        case 0x3153e0u: goto label_3153e0;
        case 0x3153e4u: goto label_3153e4;
        case 0x3153e8u: goto label_3153e8;
        case 0x3153ecu: goto label_3153ec;
        case 0x3153f0u: goto label_3153f0;
        case 0x3153f4u: goto label_3153f4;
        case 0x3153f8u: goto label_3153f8;
        case 0x3153fcu: goto label_3153fc;
        case 0x315400u: goto label_315400;
        case 0x315404u: goto label_315404;
        default: break;
    }

    ctx->pc = 0x315100u;

label_315100:
    // 0x315100: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x315100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_315104:
    // 0x315104: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x315104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_315108:
    // 0x315108: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x315108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_31510c:
    // 0x31510c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31510cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315110:
    // 0x315110: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x315110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_315114:
    // 0x315114: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x315114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_315118:
    // 0x315118: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x315118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_31511c:
    // 0x31511c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x31511cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_315120:
    // 0x315120: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x315120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_315124:
    // 0x315124: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x315124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_315128:
    // 0x315128: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x315128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_31512c:
    // 0x31512c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31512cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_315130:
    // 0x315130: 0x96820084  lhu         $v0, 0x84($s4)
    ctx->pc = 0x315130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 132)));
label_315134:
    // 0x315134: 0x504000a7  beql        $v0, $zero, . + 4 + (0xA7 << 2)
label_315138:
    if (ctx->pc == 0x315138u) {
        ctx->pc = 0x315138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315134u;
        // 0x315138: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31513Cu;
        goto label_31513c;
    }
    ctx->pc = 0x315134u;
    {
        const bool branch_taken_0x315134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315134) {
            ctx->pc = 0x315138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315134u;
            // 0x315138: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3153D4u;
            goto label_3153d4;
        }
    }
    ctx->pc = 0x31513Cu;
label_31513c:
    // 0x31513c: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x31513cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_315140:
    // 0x315140: 0x122000a3  beqz        $s1, . + 4 + (0xA3 << 2)
label_315144:
    if (ctx->pc == 0x315144u) {
        ctx->pc = 0x315144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315140u;
        // 0x315144: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315148u;
        goto label_315148;
    }
    ctx->pc = 0x315140u;
    {
        const bool branch_taken_0x315140 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x315144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315140u;
        // 0x315144: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315140) {
            ctx->pc = 0x3153D0u;
            goto label_3153d0;
        }
    }
    ctx->pc = 0x315148u;
label_315148:
    // 0x315148: 0x96950082  lhu         $s5, 0x82($s4)
    ctx->pc = 0x315148u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 130)));
label_31514c:
    // 0x31514c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31514cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315150:
    // 0x315150: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
label_315154:
    if (ctx->pc == 0x315154u) {
        ctx->pc = 0x315154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315150u;
        // 0x315154: 0x8e970008  lw          $s7, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315158u;
        goto label_315158;
    }
    ctx->pc = 0x315150u;
    {
        const bool branch_taken_0x315150 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x315154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315150u;
        // 0x315154: 0x8e970008  lw          $s7, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315150) {
            ctx->pc = 0x315164u;
            goto label_315164;
        }
    }
    ctx->pc = 0x315158u;
label_315158:
    // 0x315158: 0xc0c5502  jal         func_315408
label_31515c:
    if (ctx->pc == 0x31515Cu) {
        ctx->pc = 0x31515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315158u;
        // 0x31515c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315160u;
        goto label_315160;
    }
    ctx->pc = 0x315158u;
    SET_GPR_U32(ctx, 31, 0x315160u);
    ctx->pc = 0x31515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315158u;
    // 0x31515c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315408u, 0x315158u, 0x315160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315160u;
label_315160:
    // 0x315160: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x315160u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_315164:
    // 0x315164: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x315164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_315168:
    // 0x315168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x315168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_31516c:
    // 0x31516c: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
label_315170:
    if (ctx->pc == 0x315170u) {
        ctx->pc = 0x315170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31516Cu;
        // 0x315170: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315174u;
        goto label_315174;
    }
    ctx->pc = 0x31516Cu;
    {
        const bool branch_taken_0x31516c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31516Cu;
        // 0x315170: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31516c) {
            ctx->pc = 0x315380u;
            goto label_315380;
        }
    }
    ctx->pc = 0x315174u;
label_315174:
    // 0x315174: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x315174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_315178:
    // 0x315178: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x315178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_31517c:
    // 0x31517c: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x31517cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_315180:
    // 0x315180: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x315180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_315184:
    // 0x315184: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x315184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_315188:
    // 0x315188: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x315188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_31518c:
    // 0x31518c: 0x34a5011d  ori         $a1, $a1, 0x11D
    ctx->pc = 0x31518cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)285);
label_315190:
    // 0x315190: 0x40f809  jalr        $v0
label_315194:
    if (ctx->pc == 0x315194u) {
        ctx->pc = 0x315194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315190u;
        // 0x315194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315198u;
        goto label_315198;
    }
    ctx->pc = 0x315190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315198u);
        ctx->pc = 0x315194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315190u;
        // 0x315194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315190u, 0x315198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315198u;
label_315198:
    // 0x315198: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x315198u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31519c:
    // 0x31519c: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
label_3151a0:
    if (ctx->pc == 0x3151A0u) {
        ctx->pc = 0x3151A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31519Cu;
        // 0x3151a0: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151A4u;
        goto label_3151a4;
    }
    ctx->pc = 0x31519Cu;
    {
        const bool branch_taken_0x31519c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3151A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31519Cu;
        // 0x3151a0: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31519c) {
            ctx->pc = 0x3151D0u;
            goto label_3151d0;
        }
    }
    ctx->pc = 0x3151A4u;
label_3151a4:
    // 0x3151a4: 0x2402011d  addiu       $v0, $zero, 0x11D
    ctx->pc = 0x3151a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_3151a8:
    // 0x3151a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3151a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3151ac:
    // 0x3151ac: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3151acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_3151b0:
    // 0x3151b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3151b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3151b4:
    // 0x3151b4: 0xc1035f6  jal         func_40D7D8
label_3151b8:
    if (ctx->pc == 0x3151B8u) {
        ctx->pc = 0x3151B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151B4u;
        // 0x3151b8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151BCu;
        goto label_3151bc;
    }
    ctx->pc = 0x3151B4u;
    SET_GPR_U32(ctx, 31, 0x3151BCu);
    ctx->pc = 0x3151B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151B4u;
    // 0x3151b8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3151B4u, 0x3151BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3151BCu;
label_3151bc:
    // 0x3151bc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3151bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3151c0:
    // 0x3151c0: 0xc103628  jal         func_40D8A0
label_3151c4:
    if (ctx->pc == 0x3151C4u) {
        ctx->pc = 0x3151C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151C0u;
        // 0x3151c4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151C8u;
        goto label_3151c8;
    }
    ctx->pc = 0x3151C0u;
    SET_GPR_U32(ctx, 31, 0x3151C8u);
    ctx->pc = 0x3151C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151C0u;
    // 0x3151c4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3151C0u, 0x3151C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3151C8u;
label_3151c8:
    // 0x3151c8: 0x10000075  b           . + 4 + (0x75 << 2)
label_3151cc:
    if (ctx->pc == 0x3151CCu) {
        ctx->pc = 0x3151CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151C8u;
        // 0x3151cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151D0u;
        goto label_3151d0;
    }
    ctx->pc = 0x3151C8u;
    {
        const bool branch_taken_0x3151c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3151CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151C8u;
        // 0x3151cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3151c8) {
            ctx->pc = 0x3153A0u;
            goto label_3153a0;
        }
    }
    ctx->pc = 0x3151D0u;
label_3151d0:
    // 0x3151d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3151d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3151d4:
    // 0x3151d4: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x3151d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3151d8:
    // 0x3151d8: 0x1230c0  sll         $a2, $s2, 3
    ctx->pc = 0x3151d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_3151dc:
    // 0x3151dc: 0xc0bb778  jal         func_2EDDE0
label_3151e0:
    if (ctx->pc == 0x3151E0u) {
        ctx->pc = 0x3151E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151DCu;
        // 0x3151e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151E4u;
        goto label_3151e4;
    }
    ctx->pc = 0x3151DCu;
    SET_GPR_U32(ctx, 31, 0x3151E4u);
    ctx->pc = 0x3151E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151DCu;
    // 0x3151e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3151DCu, 0x3151E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3151E4u;
label_3151e4:
    // 0x3151e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3151e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3151e8:
    // 0x3151e8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3151e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3151ec:
    // 0x3151ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3151ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3151f0:
    // 0x3151f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3151f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3151f4:
    // 0x3151f4: 0xc0c5198  jal         func_314660
label_3151f8:
    if (ctx->pc == 0x3151F8u) {
        ctx->pc = 0x3151F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151F4u;
        // 0x3151f8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3151FCu;
        goto label_3151fc;
    }
    ctx->pc = 0x3151F4u;
    SET_GPR_U32(ctx, 31, 0x3151FCu);
    ctx->pc = 0x3151F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151F4u;
    // 0x3151f8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314660u, 0x3151F4u, 0x3151FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3151FCu;
label_3151fc:
    // 0x3151fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3151fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315200:
    // 0x315200: 0x12a0005a  beqz        $s5, . + 4 + (0x5A << 2)
label_315204:
    if (ctx->pc == 0x315204u) {
        ctx->pc = 0x315204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315200u;
        // 0x315204: 0x27c3e880  addiu       $v1, $fp, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315208u;
        goto label_315208;
    }
    ctx->pc = 0x315200u;
    {
        const bool branch_taken_0x315200 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x315204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315200u;
        // 0x315204: 0x27c3e880  addiu       $v1, $fp, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315200) {
            ctx->pc = 0x31536Cu;
            goto label_31536c;
        }
    }
    ctx->pc = 0x315208u;
label_315208:
    // 0x315208: 0x12400050  beqz        $s2, . + 4 + (0x50 << 2)
label_31520c:
    if (ctx->pc == 0x31520Cu) {
        ctx->pc = 0x31520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315208u;
        // 0x31520c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315210u;
        goto label_315210;
    }
    ctx->pc = 0x315208u;
    {
        const bool branch_taken_0x315208 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315208u;
        // 0x31520c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315208) {
            ctx->pc = 0x31534Cu;
            goto label_31534c;
        }
    }
    ctx->pc = 0x315210u;
label_315210:
    // 0x315210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x315210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315214:
    // 0x315214: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x315214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315218:
    // 0x315218: 0x1a40001c  blez        $s2, . + 4 + (0x1C << 2)
label_31521c:
    if (ctx->pc == 0x31521Cu) {
        ctx->pc = 0x31521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315218u;
        // 0x31521c: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315220u;
        goto label_315220;
    }
    ctx->pc = 0x315218u;
    {
        const bool branch_taken_0x315218 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x31521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315218u;
        // 0x31521c: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315218) {
            ctx->pc = 0x31528Cu;
            goto label_31528c;
        }
    }
    ctx->pc = 0x315220u;
label_315220:
    // 0x315220: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_315224:
    if (ctx->pc == 0x315224u) {
        ctx->pc = 0x315224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315220u;
        // 0x315224: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315228u;
        goto label_315228;
    }
    ctx->pc = 0x315220u;
    {
        const bool branch_taken_0x315220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x315224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315220u;
        // 0x315224: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315220) {
            ctx->pc = 0x3152BCu;
            goto label_3152bc;
        }
    }
    ctx->pc = 0x315228u;
label_315228:
    // 0x315228: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_31522c:
    if (ctx->pc == 0x31522Cu) {
        ctx->pc = 0x31522Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315228u;
        // 0x31522c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315230u;
        goto label_315230;
    }
    ctx->pc = 0x315228u;
    {
        const bool branch_taken_0x315228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315228) {
            ctx->pc = 0x31522Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315228u;
            // 0x31522c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315290u;
            goto label_315290;
        }
    }
    ctx->pc = 0x315230u;
label_315230:
    // 0x315230: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x315230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_315234:
    // 0x315234: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_315238:
    if (ctx->pc == 0x315238u) {
        ctx->pc = 0x315238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315234u;
        // 0x315238: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31523Cu;
        goto label_31523c;
    }
    ctx->pc = 0x315234u;
    {
        const bool branch_taken_0x315234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x315234) {
            ctx->pc = 0x315238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315234u;
            // 0x315238: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315268u;
            goto label_315268;
        }
    }
    ctx->pc = 0x31523Cu;
label_31523c:
    // 0x31523c: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x31523cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_315240:
    // 0x315240: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x315240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_315244:
    // 0x315244: 0x26640002  addiu       $a0, $s3, 0x2
    ctx->pc = 0x315244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_315248:
    // 0x315248: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x315248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31524c:
    // 0x31524c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31524cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_315250:
    // 0x315250: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x315250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_315254:
    // 0x315254: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x315254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_315258:
    // 0x315258: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x315258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_31525c:
    // 0x31525c: 0xb2230007  sdl         $v1, 0x7($s1)
    ctx->pc = 0x31525cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_315260:
    // 0x315260: 0xb6230000  sdr         $v1, 0x0($s1)
    ctx->pc = 0x315260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_315264:
    // 0x315264: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x315264u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_315268:
    // 0x315268: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x315268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_31526c:
    // 0x31526c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x31526cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_315270:
    // 0x315270: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x315270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_315274:
    // 0x315274: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x315274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_315278:
    // 0x315278: 0x684a0007  ldl         $t2, 0x7($v0)
    ctx->pc = 0x315278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_31527c:
    // 0x31527c: 0x6c4a0000  ldr         $t2, 0x0($v0)
    ctx->pc = 0x31527cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_315280:
    // 0x315280: 0xb0ca0007  sdl         $t2, 0x7($a2)
    ctx->pc = 0x315280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_315284:
    // 0x315284: 0xb4ca0000  sdr         $t2, 0x0($a2)
    ctx->pc = 0x315284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_315288:
    // 0x315288: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x315288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_31528c:
    // 0x31528c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x31528cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_315290:
    // 0x315290: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x315290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_315294:
    // 0x315294: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x315294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_315298:
    // 0x315298: 0xf2402b  sltu        $t0, $a3, $s2
    ctx->pc = 0x315298u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_31529c:
    // 0x31529c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31529cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3152a0:
    // 0x3152a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3152a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3152a4:
    // 0x3152a4: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x3152a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_3152a8:
    // 0x3152a8: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x3152a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3152ac:
    // 0x3152ac: 0xb0c90007  sdl         $t1, 0x7($a2)
    ctx->pc = 0x3152acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3152b0:
    // 0x3152b0: 0xb4c90000  sdr         $t1, 0x0($a2)
    ctx->pc = 0x3152b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3152b4:
    // 0x3152b4: 0x11000025  beqz        $t0, . + 4 + (0x25 << 2)
label_3152b8:
    if (ctx->pc == 0x3152B8u) {
        ctx->pc = 0x3152B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152B4u;
        // 0x3152b8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3152BCu;
        goto label_3152bc;
    }
    ctx->pc = 0x3152B4u;
    {
        const bool branch_taken_0x3152b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3152B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152B4u;
        // 0x3152b8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152b4) {
            ctx->pc = 0x31534Cu;
            goto label_31534c;
        }
    }
    ctx->pc = 0x3152BCu;
label_3152bc:
    // 0x3152bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3152bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3152c0:
    // 0x3152c0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3152c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3152c4:
    // 0x3152c4: 0x0  nop
    ctx->pc = 0x3152c4u;
    // NOP
label_3152c8:
    // 0x3152c8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3152c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_3152cc:
    // 0x3152cc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3152ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3152d0:
    // 0x3152d0: 0xf2402b  sltu        $t0, $a3, $s2
    ctx->pc = 0x3152d0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3152d4:
    // 0x3152d4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3152d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3152d8:
    // 0x3152d8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3152d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3152dc:
    // 0x3152dc: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x3152dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3152e0:
    // 0x3152e0: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x3152e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3152e4:
    // 0x3152e4: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x3152e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3152e8:
    // 0x3152e8: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x3152e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3152ec:
    // 0x3152ec: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x3152ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3152f0:
    // 0x3152f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3152f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3152f4:
    // 0x3152f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3152f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3152f8:
    // 0x3152f8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x3152f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3152fc:
    // 0x3152fc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x3152fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_315300:
    // 0x315300: 0xb083000f  sdl         $v1, 0xF($a0)
    ctx->pc = 0x315300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_315304:
    // 0x315304: 0xb4830008  sdr         $v1, 0x8($a0)
    ctx->pc = 0x315304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_315308:
    // 0x315308: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x315308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_31530c:
    // 0x31530c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x31530cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_315310:
    // 0x315310: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x315310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_315314:
    // 0x315314: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x315314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_315318:
    // 0x315318: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x315318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_31531c:
    // 0x31531c: 0xb0820017  sdl         $v0, 0x17($a0)
    ctx->pc = 0x31531cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_315320:
    // 0x315320: 0xb4820010  sdr         $v0, 0x10($a0)
    ctx->pc = 0x315320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_315324:
    // 0x315324: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x315324u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
label_315328:
    // 0x315328: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x315328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_31532c:
    // 0x31532c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31532cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_315330:
    // 0x315330: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x315330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_315334:
    // 0x315334: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x315334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_315338:
    // 0x315338: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x315338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_31533c:
    // 0x31533c: 0xb083001f  sdl         $v1, 0x1F($a0)
    ctx->pc = 0x31533cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_315340:
    // 0x315340: 0xb4830018  sdr         $v1, 0x18($a0)
    ctx->pc = 0x315340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_315344:
    // 0x315344: 0x1500ffe0  bnez        $t0, . + 4 + (-0x20 << 2)
label_315348:
    if (ctx->pc == 0x315348u) {
        ctx->pc = 0x315348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315344u;
        // 0x315348: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31534Cu;
        goto label_31534c;
    }
    ctx->pc = 0x315344u;
    {
        const bool branch_taken_0x315344 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x315348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315344u;
        // 0x315348: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315344) {
            ctx->pc = 0x3152C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3152c8;
        }
    }
    ctx->pc = 0x31534Cu;
label_31534c:
    // 0x31534c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x31534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_315350:
    // 0x315350: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_315354:
    if (ctx->pc == 0x315354u) {
        ctx->pc = 0x315354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315350u;
        // 0x315354: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315358u;
        goto label_315358;
    }
    ctx->pc = 0x315350u;
    {
        const bool branch_taken_0x315350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315350u;
        // 0x315354: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315350) {
            ctx->pc = 0x315368u;
            goto label_315368;
        }
    }
    ctx->pc = 0x315358u;
label_315358:
    // 0x315358: 0x8ec70008  lw          $a3, 0x8($s6)
    ctx->pc = 0x315358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_31535c:
    // 0x31535c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x31535cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_315360:
    // 0x315360: 0x40f809  jalr        $v0
label_315364:
    if (ctx->pc == 0x315364u) {
        ctx->pc = 0x315364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315360u;
        // 0x315364: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315368u;
        goto label_315368;
    }
    ctx->pc = 0x315360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315368u);
        ctx->pc = 0x315364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315360u;
        // 0x315364: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315360u, 0x315368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315368u;
label_315368:
    // 0x315368: 0x27c3e880  addiu       $v1, $fp, -0x1780
    ctx->pc = 0x315368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961280));
label_31536c:
    // 0x31536c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x31536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_315370:
    // 0x315370: 0x40f809  jalr        $v0
label_315374:
    if (ctx->pc == 0x315374u) {
        ctx->pc = 0x315374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315370u;
        // 0x315374: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315378u;
        goto label_315378;
    }
    ctx->pc = 0x315370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315378u);
        ctx->pc = 0x315374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315370u;
        // 0x315374: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315370u, 0x315378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315378u;
label_315378:
    // 0x315378: 0x10000009  b           . + 4 + (0x9 << 2)
label_31537c:
    if (ctx->pc == 0x31537Cu) {
        ctx->pc = 0x31537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315378u;
        // 0x31537c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315380u;
        goto label_315380;
    }
    ctx->pc = 0x315378u;
    {
        const bool branch_taken_0x315378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315378u;
        // 0x31537c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315378) {
            ctx->pc = 0x3153A0u;
            goto label_3153a0;
        }
    }
    ctx->pc = 0x315380u;
label_315380:
    // 0x315380: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x315380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_315384:
    // 0x315384: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x315384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_315388:
    // 0x315388: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x315388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31538c:
    // 0x31538c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x31538cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315390:
    // 0x315390: 0xc0c5198  jal         func_314660
label_315394:
    if (ctx->pc == 0x315394u) {
        ctx->pc = 0x315394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315390u;
        // 0x315394: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315398u;
        goto label_315398;
    }
    ctx->pc = 0x315390u;
    SET_GPR_U32(ctx, 31, 0x315398u);
    ctx->pc = 0x315394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315390u;
    // 0x315394: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314660u, 0x315390u, 0x315398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315398u;
label_315398:
    // 0x315398: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x315398u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31539c:
    // 0x31539c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x31539cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3153a0:
    // 0x3153a0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_3153a4:
    if (ctx->pc == 0x3153A4u) {
        ctx->pc = 0x3153A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153A0u;
        // 0x3153a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3153A8u;
        goto label_3153a8;
    }
    ctx->pc = 0x3153A0u;
    {
        const bool branch_taken_0x3153a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3153A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153A0u;
        // 0x3153a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3153a0) {
            ctx->pc = 0x3153D4u;
            goto label_3153d4;
        }
    }
    ctx->pc = 0x3153A8u;
label_3153a8:
    // 0x3153a8: 0x8f82a5b4  lw          $v0, -0x5A4C($gp)
    ctx->pc = 0x3153a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944180)));
label_3153ac:
    // 0x3153ac: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3153acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3153b0:
    // 0x3153b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3153b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3153b4:
    // 0x3153b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3153b8:
    if (ctx->pc == 0x3153B8u) {
        ctx->pc = 0x3153B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153B4u;
        // 0x3153b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3153BCu;
        goto label_3153bc;
    }
    ctx->pc = 0x3153B4u;
    {
        const bool branch_taken_0x3153b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3153B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153B4u;
        // 0x3153b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3153b4) {
            ctx->pc = 0x3153C8u;
            goto label_3153c8;
        }
    }
    ctx->pc = 0x3153BCu;
label_3153bc:
    // 0x3153bc: 0xc0c4b5a  jal         func_312D68
label_3153c0:
    if (ctx->pc == 0x3153C0u) {
        ctx->pc = 0x3153C4u;
        goto label_3153c4;
    }
    ctx->pc = 0x3153BCu;
    SET_GPR_U32(ctx, 31, 0x3153C4u);
    ctx->pc = 0x312D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312D68u, 0x3153BCu, 0x3153C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3153C4u;
label_3153c4:
    // 0x3153c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3153c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3153c8:
    // 0x3153c8: 0xc0c5280  jal         func_314A00
label_3153cc:
    if (ctx->pc == 0x3153CCu) {
        ctx->pc = 0x3153CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153C8u;
        // 0x3153cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3153D0u;
        goto label_3153d0;
    }
    ctx->pc = 0x3153C8u;
    SET_GPR_U32(ctx, 31, 0x3153D0u);
    ctx->pc = 0x3153CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3153C8u;
    // 0x3153cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314A00u, 0x3153C8u, 0x3153D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3153D0u;
label_3153d0:
    // 0x3153d0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3153d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3153d4:
    // 0x3153d4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3153d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3153d8:
    // 0x3153d8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3153d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3153dc:
    // 0x3153dc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3153dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3153e0:
    // 0x3153e0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3153e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3153e4:
    // 0x3153e4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3153e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3153e8:
    // 0x3153e8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3153e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3153ec:
    // 0x3153ec: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3153ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3153f0:
    // 0x3153f0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3153f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3153f4:
    // 0x3153f4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3153f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3153f8:
    // 0x3153f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3153f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3153fc:
    // 0x3153fc: 0x3e00008  jr          $ra
label_315400:
    if (ctx->pc == 0x315400u) {
        ctx->pc = 0x315400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153FCu;
        // 0x315400: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315404u;
        goto label_315404;
    }
    ctx->pc = 0x3153FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3153FCu;
        // 0x315400: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3153FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315404u;
label_315404:
    // 0x315404: 0x0  nop
    ctx->pc = 0x315404u;
    // NOP
    ctx->pc = 0x315408u;
}
