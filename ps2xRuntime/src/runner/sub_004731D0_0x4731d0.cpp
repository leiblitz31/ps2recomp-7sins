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

// Function: sub_004731D0
// Address: 0x4731d0 - 0x4733c0
void sub_004731D0_0x4731d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004731D0_0x4731d0");
#endif

    switch (ctx->pc) {
        case 0x4731d0u: goto label_4731d0;
        case 0x4731d4u: goto label_4731d4;
        case 0x4731d8u: goto label_4731d8;
        case 0x4731dcu: goto label_4731dc;
        case 0x4731e0u: goto label_4731e0;
        case 0x4731e4u: goto label_4731e4;
        case 0x4731e8u: goto label_4731e8;
        case 0x4731ecu: goto label_4731ec;
        case 0x4731f0u: goto label_4731f0;
        case 0x4731f4u: goto label_4731f4;
        case 0x4731f8u: goto label_4731f8;
        case 0x4731fcu: goto label_4731fc;
        case 0x473200u: goto label_473200;
        case 0x473204u: goto label_473204;
        case 0x473208u: goto label_473208;
        case 0x47320cu: goto label_47320c;
        case 0x473210u: goto label_473210;
        case 0x473214u: goto label_473214;
        case 0x473218u: goto label_473218;
        case 0x47321cu: goto label_47321c;
        case 0x473220u: goto label_473220;
        case 0x473224u: goto label_473224;
        case 0x473228u: goto label_473228;
        case 0x47322cu: goto label_47322c;
        case 0x473230u: goto label_473230;
        case 0x473234u: goto label_473234;
        case 0x473238u: goto label_473238;
        case 0x47323cu: goto label_47323c;
        case 0x473240u: goto label_473240;
        case 0x473244u: goto label_473244;
        case 0x473248u: goto label_473248;
        case 0x47324cu: goto label_47324c;
        case 0x473250u: goto label_473250;
        case 0x473254u: goto label_473254;
        case 0x473258u: goto label_473258;
        case 0x47325cu: goto label_47325c;
        case 0x473260u: goto label_473260;
        case 0x473264u: goto label_473264;
        case 0x473268u: goto label_473268;
        case 0x47326cu: goto label_47326c;
        case 0x473270u: goto label_473270;
        case 0x473274u: goto label_473274;
        case 0x473278u: goto label_473278;
        case 0x47327cu: goto label_47327c;
        case 0x473280u: goto label_473280;
        case 0x473284u: goto label_473284;
        case 0x473288u: goto label_473288;
        case 0x47328cu: goto label_47328c;
        case 0x473290u: goto label_473290;
        case 0x473294u: goto label_473294;
        case 0x473298u: goto label_473298;
        case 0x47329cu: goto label_47329c;
        case 0x4732a0u: goto label_4732a0;
        case 0x4732a4u: goto label_4732a4;
        case 0x4732a8u: goto label_4732a8;
        case 0x4732acu: goto label_4732ac;
        case 0x4732b0u: goto label_4732b0;
        case 0x4732b4u: goto label_4732b4;
        case 0x4732b8u: goto label_4732b8;
        case 0x4732bcu: goto label_4732bc;
        case 0x4732c0u: goto label_4732c0;
        case 0x4732c4u: goto label_4732c4;
        case 0x4732c8u: goto label_4732c8;
        case 0x4732ccu: goto label_4732cc;
        case 0x4732d0u: goto label_4732d0;
        case 0x4732d4u: goto label_4732d4;
        case 0x4732d8u: goto label_4732d8;
        case 0x4732dcu: goto label_4732dc;
        case 0x4732e0u: goto label_4732e0;
        case 0x4732e4u: goto label_4732e4;
        case 0x4732e8u: goto label_4732e8;
        case 0x4732ecu: goto label_4732ec;
        case 0x4732f0u: goto label_4732f0;
        case 0x4732f4u: goto label_4732f4;
        case 0x4732f8u: goto label_4732f8;
        case 0x4732fcu: goto label_4732fc;
        case 0x473300u: goto label_473300;
        case 0x473304u: goto label_473304;
        case 0x473308u: goto label_473308;
        case 0x47330cu: goto label_47330c;
        case 0x473310u: goto label_473310;
        case 0x473314u: goto label_473314;
        case 0x473318u: goto label_473318;
        case 0x47331cu: goto label_47331c;
        case 0x473320u: goto label_473320;
        case 0x473324u: goto label_473324;
        case 0x473328u: goto label_473328;
        case 0x47332cu: goto label_47332c;
        case 0x473330u: goto label_473330;
        case 0x473334u: goto label_473334;
        case 0x473338u: goto label_473338;
        case 0x47333cu: goto label_47333c;
        case 0x473340u: goto label_473340;
        case 0x473344u: goto label_473344;
        case 0x473348u: goto label_473348;
        case 0x47334cu: goto label_47334c;
        case 0x473350u: goto label_473350;
        case 0x473354u: goto label_473354;
        case 0x473358u: goto label_473358;
        case 0x47335cu: goto label_47335c;
        case 0x473360u: goto label_473360;
        case 0x473364u: goto label_473364;
        case 0x473368u: goto label_473368;
        case 0x47336cu: goto label_47336c;
        case 0x473370u: goto label_473370;
        case 0x473374u: goto label_473374;
        case 0x473378u: goto label_473378;
        case 0x47337cu: goto label_47337c;
        case 0x473380u: goto label_473380;
        case 0x473384u: goto label_473384;
        case 0x473388u: goto label_473388;
        case 0x47338cu: goto label_47338c;
        case 0x473390u: goto label_473390;
        case 0x473394u: goto label_473394;
        case 0x473398u: goto label_473398;
        case 0x47339cu: goto label_47339c;
        case 0x4733a0u: goto label_4733a0;
        case 0x4733a4u: goto label_4733a4;
        case 0x4733a8u: goto label_4733a8;
        case 0x4733acu: goto label_4733ac;
        case 0x4733b0u: goto label_4733b0;
        case 0x4733b4u: goto label_4733b4;
        case 0x4733b8u: goto label_4733b8;
        case 0x4733bcu: goto label_4733bc;
        default: break;
    }

    ctx->pc = 0x4731d0u;

label_4731d0:
    // 0x4731d0: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x4731d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
label_4731d4:
    // 0x4731d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4731d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4731d8:
    // 0x4731d8: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x4731d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_4731dc:
    // 0x4731dc: 0xe7ac0290  swc1        $f12, 0x290($sp)
    ctx->pc = 0x4731dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_4731e0:
    // 0x4731e0: 0xe7ad02a0  swc1        $f13, 0x2A0($sp)
    ctx->pc = 0x4731e0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_4731e4:
    // 0x4731e4: 0xe7ae02b0  swc1        $f14, 0x2B0($sp)
    ctx->pc = 0x4731e4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_4731e8:
    // 0x4731e8: 0xe7af02c0  swc1        $f15, 0x2C0($sp)
    ctx->pc = 0x4731e8u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_4731ec:
    // 0x4731ec: 0xc11c1fc  jal         func_4707F0
label_4731f0:
    if (ctx->pc == 0x4731F0u) {
        ctx->pc = 0x4731F4u;
        goto label_4731f4;
    }
    ctx->pc = 0x4731ECu;
    SET_GPR_U32(ctx, 31, 0x4731F4u);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x4731ECu, 0x4731F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4731F4u;
label_4731f4:
    // 0x4731f4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4731f8:
    if (ctx->pc == 0x4731F8u) {
        ctx->pc = 0x4731FCu;
        goto label_4731fc;
    }
    ctx->pc = 0x4731F4u;
    {
        const bool branch_taken_0x4731f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4731f4) {
            ctx->pc = 0x4732A4u;
            goto label_4732a4;
        }
    }
    ctx->pc = 0x4731FCu;
label_4731fc:
    // 0x4731fc: 0x8f82b3d4  lw          $v0, -0x4C2C($gp)
    ctx->pc = 0x4731fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947796)));
label_473200:
    // 0x473200: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_473204:
    if (ctx->pc == 0x473204u) {
        ctx->pc = 0x473208u;
        goto label_473208;
    }
    ctx->pc = 0x473200u;
    {
        const bool branch_taken_0x473200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473200) {
            ctx->pc = 0x4732A4u;
            goto label_4732a4;
        }
    }
    ctx->pc = 0x473208u;
label_473208:
    // 0x473208: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x473208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47320c:
    // 0x47320c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473210:
    // 0x473210: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x473210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_473214:
    // 0x473214: 0xc115ee8  jal         func_457BA0
label_473218:
    if (ctx->pc == 0x473218u) {
        ctx->pc = 0x47321Cu;
        goto label_47321c;
    }
    ctx->pc = 0x473214u;
    SET_GPR_U32(ctx, 31, 0x47321Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x473214u, 0x47321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47321Cu;
label_47321c:
    // 0x47321c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_473220:
    if (ctx->pc == 0x473220u) {
        ctx->pc = 0x473224u;
        goto label_473224;
    }
    ctx->pc = 0x47321Cu;
    {
        const bool branch_taken_0x47321c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47321c) {
            ctx->pc = 0x4732A4u;
            goto label_4732a4;
        }
    }
    ctx->pc = 0x473224u;
label_473224:
    // 0x473224: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x473224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_473228:
    // 0x473228: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47322c:
    if (ctx->pc == 0x47322Cu) {
        ctx->pc = 0x473230u;
        goto label_473230;
    }
    ctx->pc = 0x473228u;
    {
        const bool branch_taken_0x473228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473228) {
            ctx->pc = 0x4732A4u;
            goto label_4732a4;
        }
    }
    ctx->pc = 0x473230u;
label_473230:
    // 0x473230: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x473230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_473234:
    // 0x473234: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473238:
    // 0x473238: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x473238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_47323c:
    // 0x47323c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47323cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_473240:
    // 0x473240: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x473240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_473244:
    // 0x473244: 0x240800b2  addiu       $t0, $zero, 0xB2
    ctx->pc = 0x473244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_473248:
    // 0x473248: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x473248u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47324c:
    // 0x47324c: 0x25290340  addiu       $t1, $t1, 0x340
    ctx->pc = 0x47324cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 832));
label_473250:
    // 0x473250: 0xc113940  jal         func_44E500
label_473254:
    if (ctx->pc == 0x473254u) {
        ctx->pc = 0x473258u;
        goto label_473258;
    }
    ctx->pc = 0x473250u;
    SET_GPR_U32(ctx, 31, 0x473258u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x473250u, 0x473258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473258u;
label_473258:
    // 0x473258: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x473258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_47325c:
    // 0x47325c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47325cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_473260:
    // 0x473260: 0x24a505d0  addiu       $a1, $a1, 0x5D0
    ctx->pc = 0x473260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1488));
label_473264:
    // 0x473264: 0xc115c24  jal         func_457090
label_473268:
    if (ctx->pc == 0x473268u) {
        ctx->pc = 0x47326Cu;
        goto label_47326c;
    }
    ctx->pc = 0x473264u;
    SET_GPR_U32(ctx, 31, 0x47326Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x473264u, 0x47326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47326Cu;
label_47326c:
    // 0x47326c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x47326cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_473270:
    // 0x473270: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x473270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_473274:
    // 0x473274: 0x40f809  jalr        $v0
label_473278:
    if (ctx->pc == 0x473278u) {
        ctx->pc = 0x47327Cu;
        goto label_47327c;
    }
    ctx->pc = 0x473274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47327Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473274u, 0x47327Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47327Cu;
label_47327c:
    // 0x47327c: 0xaf82b3d4  sw          $v0, -0x4C2C($gp)
    ctx->pc = 0x47327cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947796), GPR_U32(ctx, 2));
label_473280:
    // 0x473280: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x473280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_473284:
    // 0x473284: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_473288:
    if (ctx->pc == 0x473288u) {
        ctx->pc = 0x47328Cu;
        goto label_47328c;
    }
    ctx->pc = 0x473284u;
    {
        const bool branch_taken_0x473284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473284) {
            ctx->pc = 0x473294u;
            goto label_473294;
        }
    }
    ctx->pc = 0x47328Cu;
label_47328c:
    // 0x47328c: 0xd  break       0
    ctx->pc = 0x47328cu;
    runtime->handleBreak(rdram, ctx);
label_473290:
    // 0x473290: 0x0  nop
    ctx->pc = 0x473290u;
    // NOP
label_473294:
    // 0x473294: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x473294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_473298:
    // 0x473298: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x473298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47329c:
    // 0x47329c: 0xc11392c  jal         func_44E4B0
label_4732a0:
    if (ctx->pc == 0x4732A0u) {
        ctx->pc = 0x4732A4u;
        goto label_4732a4;
    }
    ctx->pc = 0x47329Cu;
    SET_GPR_U32(ctx, 31, 0x4732A4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47329Cu, 0x4732A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4732A4u;
label_4732a4:
    // 0x4732a4: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4732a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4732a8:
    // 0x4732a8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x4732a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4732ac:
    // 0x4732ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4732acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4732b0:
    // 0x4732b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4732b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4732b4:
    // 0x4732b4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4732b8:
    if (ctx->pc == 0x4732B8u) {
        ctx->pc = 0x4732BCu;
        goto label_4732bc;
    }
    ctx->pc = 0x4732B4u;
    {
        const bool branch_taken_0x4732b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4732b4) {
            ctx->pc = 0x473364u;
            goto label_473364;
        }
    }
    ctx->pc = 0x4732BCu;
label_4732bc:
    // 0x4732bc: 0x8f82b3d8  lw          $v0, -0x4C28($gp)
    ctx->pc = 0x4732bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947800)));
label_4732c0:
    // 0x4732c0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4732c4:
    if (ctx->pc == 0x4732C4u) {
        ctx->pc = 0x4732C8u;
        goto label_4732c8;
    }
    ctx->pc = 0x4732C0u;
    {
        const bool branch_taken_0x4732c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4732c0) {
            ctx->pc = 0x473364u;
            goto label_473364;
        }
    }
    ctx->pc = 0x4732C8u;
label_4732c8:
    // 0x4732c8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4732c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4732cc:
    // 0x4732cc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4732ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4732d0:
    // 0x4732d0: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x4732d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4732d4:
    // 0x4732d4: 0xc115ee8  jal         func_457BA0
label_4732d8:
    if (ctx->pc == 0x4732D8u) {
        ctx->pc = 0x4732DCu;
        goto label_4732dc;
    }
    ctx->pc = 0x4732D4u;
    SET_GPR_U32(ctx, 31, 0x4732DCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4732D4u, 0x4732DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4732DCu;
label_4732dc:
    // 0x4732dc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4732e0:
    if (ctx->pc == 0x4732E0u) {
        ctx->pc = 0x4732E4u;
        goto label_4732e4;
    }
    ctx->pc = 0x4732DCu;
    {
        const bool branch_taken_0x4732dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4732dc) {
            ctx->pc = 0x473364u;
            goto label_473364;
        }
    }
    ctx->pc = 0x4732E4u;
label_4732e4:
    // 0x4732e4: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x4732e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4732e8:
    // 0x4732e8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4732ec:
    if (ctx->pc == 0x4732ECu) {
        ctx->pc = 0x4732F0u;
        goto label_4732f0;
    }
    ctx->pc = 0x4732E8u;
    {
        const bool branch_taken_0x4732e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4732e8) {
            ctx->pc = 0x473364u;
            goto label_473364;
        }
    }
    ctx->pc = 0x4732F0u;
label_4732f0:
    // 0x4732f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4732f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4732f4:
    // 0x4732f4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4732f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4732f8:
    // 0x4732f8: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x4732f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4732fc:
    // 0x4732fc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4732fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_473300:
    // 0x473300: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x473300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_473304:
    // 0x473304: 0x240800b3  addiu       $t0, $zero, 0xB3
    ctx->pc = 0x473304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
label_473308:
    // 0x473308: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x473308u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47330c:
    // 0x47330c: 0x252903c0  addiu       $t1, $t1, 0x3C0
    ctx->pc = 0x47330cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 960));
label_473310:
    // 0x473310: 0xc113940  jal         func_44E500
label_473314:
    if (ctx->pc == 0x473314u) {
        ctx->pc = 0x473318u;
        goto label_473318;
    }
    ctx->pc = 0x473310u;
    SET_GPR_U32(ctx, 31, 0x473318u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x473310u, 0x473318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473318u;
label_473318:
    // 0x473318: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x473318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_47331c:
    // 0x47331c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47331cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_473320:
    // 0x473320: 0x24a50630  addiu       $a1, $a1, 0x630
    ctx->pc = 0x473320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1584));
label_473324:
    // 0x473324: 0xc115c24  jal         func_457090
label_473328:
    if (ctx->pc == 0x473328u) {
        ctx->pc = 0x47332Cu;
        goto label_47332c;
    }
    ctx->pc = 0x473324u;
    SET_GPR_U32(ctx, 31, 0x47332Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x473324u, 0x47332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47332Cu;
label_47332c:
    // 0x47332c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47332cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_473330:
    // 0x473330: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x473330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_473334:
    // 0x473334: 0x40f809  jalr        $v0
label_473338:
    if (ctx->pc == 0x473338u) {
        ctx->pc = 0x47333Cu;
        goto label_47333c;
    }
    ctx->pc = 0x473334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47333Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473334u, 0x47333Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47333Cu;
label_47333c:
    // 0x47333c: 0xaf82b3d8  sw          $v0, -0x4C28($gp)
    ctx->pc = 0x47333cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947800), GPR_U32(ctx, 2));
label_473340:
    // 0x473340: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x473340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_473344:
    // 0x473344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_473348:
    if (ctx->pc == 0x473348u) {
        ctx->pc = 0x47334Cu;
        goto label_47334c;
    }
    ctx->pc = 0x473344u;
    {
        const bool branch_taken_0x473344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473344) {
            ctx->pc = 0x473354u;
            goto label_473354;
        }
    }
    ctx->pc = 0x47334Cu;
label_47334c:
    // 0x47334c: 0xd  break       0
    ctx->pc = 0x47334cu;
    runtime->handleBreak(rdram, ctx);
label_473350:
    // 0x473350: 0x0  nop
    ctx->pc = 0x473350u;
    // NOP
label_473354:
    // 0x473354: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x473354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_473358:
    // 0x473358: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x473358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47335c:
    // 0x47335c: 0xc11392c  jal         func_44E4B0
label_473360:
    if (ctx->pc == 0x473360u) {
        ctx->pc = 0x473364u;
        goto label_473364;
    }
    ctx->pc = 0x47335Cu;
    SET_GPR_U32(ctx, 31, 0x473364u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47335Cu, 0x473364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473364u;
label_473364:
    // 0x473364: 0xc7a002c0  lwc1        $f0, 0x2C0($sp)
    ctx->pc = 0x473364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473368:
    // 0x473368: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x473368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_47336c:
    // 0x47336c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x47336cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_473370:
    // 0x473370: 0xc7a00290  lwc1        $f0, 0x290($sp)
    ctx->pc = 0x473370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473374:
    // 0x473374: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x473374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_473378:
    // 0x473378: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x473378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47337c:
    // 0x47337c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x47337cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_473380:
    // 0x473380: 0xc7a002b0  lwc1        $f0, 0x2B0($sp)
    ctx->pc = 0x473380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473384:
    // 0x473384: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x473384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_473388:
    // 0x473388: 0xc7a002c0  lwc1        $f0, 0x2C0($sp)
    ctx->pc = 0x473388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47338c:
    // 0x47338c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x47338cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_473390:
    // 0x473390: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x473390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_473394:
    // 0x473394: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x473394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_473398:
    // 0x473398: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x473398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_47339c:
    // 0x47339c: 0xc0ed20c  jal         func_3B4830
label_4733a0:
    if (ctx->pc == 0x4733A0u) {
        ctx->pc = 0x4733A4u;
        goto label_4733a4;
    }
    ctx->pc = 0x47339Cu;
    SET_GPR_U32(ctx, 31, 0x4733A4u);
    ctx->pc = 0x3B4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4830u, 0x47339Cu, 0x4733A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4733A4u;
label_4733a4:
    // 0x4733a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4733a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4733a8:
    // 0x4733a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4733a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4733ac:
    // 0x4733ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4733acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4733b0:
    // 0x4733b0: 0x27bd02d0  addiu       $sp, $sp, 0x2D0
    ctx->pc = 0x4733b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_4733b4:
    // 0x4733b4: 0x3e00008  jr          $ra
label_4733b8:
    if (ctx->pc == 0x4733B8u) {
        ctx->pc = 0x4733BCu;
        goto label_4733bc;
    }
    ctx->pc = 0x4733B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4733B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4733BCu;
label_4733bc:
    // 0x4733bc: 0x0  nop
    ctx->pc = 0x4733bcu;
    // NOP
    ctx->pc = 0x4733c0u;
}
