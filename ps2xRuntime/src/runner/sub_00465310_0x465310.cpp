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

// Function: sub_00465310
// Address: 0x465310 - 0x4655a0
void sub_00465310_0x465310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465310_0x465310");
#endif

    switch (ctx->pc) {
        case 0x465310u: goto label_465310;
        case 0x465314u: goto label_465314;
        case 0x465318u: goto label_465318;
        case 0x46531cu: goto label_46531c;
        case 0x465320u: goto label_465320;
        case 0x465324u: goto label_465324;
        case 0x465328u: goto label_465328;
        case 0x46532cu: goto label_46532c;
        case 0x465330u: goto label_465330;
        case 0x465334u: goto label_465334;
        case 0x465338u: goto label_465338;
        case 0x46533cu: goto label_46533c;
        case 0x465340u: goto label_465340;
        case 0x465344u: goto label_465344;
        case 0x465348u: goto label_465348;
        case 0x46534cu: goto label_46534c;
        case 0x465350u: goto label_465350;
        case 0x465354u: goto label_465354;
        case 0x465358u: goto label_465358;
        case 0x46535cu: goto label_46535c;
        case 0x465360u: goto label_465360;
        case 0x465364u: goto label_465364;
        case 0x465368u: goto label_465368;
        case 0x46536cu: goto label_46536c;
        case 0x465370u: goto label_465370;
        case 0x465374u: goto label_465374;
        case 0x465378u: goto label_465378;
        case 0x46537cu: goto label_46537c;
        case 0x465380u: goto label_465380;
        case 0x465384u: goto label_465384;
        case 0x465388u: goto label_465388;
        case 0x46538cu: goto label_46538c;
        case 0x465390u: goto label_465390;
        case 0x465394u: goto label_465394;
        case 0x465398u: goto label_465398;
        case 0x46539cu: goto label_46539c;
        case 0x4653a0u: goto label_4653a0;
        case 0x4653a4u: goto label_4653a4;
        case 0x4653a8u: goto label_4653a8;
        case 0x4653acu: goto label_4653ac;
        case 0x4653b0u: goto label_4653b0;
        case 0x4653b4u: goto label_4653b4;
        case 0x4653b8u: goto label_4653b8;
        case 0x4653bcu: goto label_4653bc;
        case 0x4653c0u: goto label_4653c0;
        case 0x4653c4u: goto label_4653c4;
        case 0x4653c8u: goto label_4653c8;
        case 0x4653ccu: goto label_4653cc;
        case 0x4653d0u: goto label_4653d0;
        case 0x4653d4u: goto label_4653d4;
        case 0x4653d8u: goto label_4653d8;
        case 0x4653dcu: goto label_4653dc;
        case 0x4653e0u: goto label_4653e0;
        case 0x4653e4u: goto label_4653e4;
        case 0x4653e8u: goto label_4653e8;
        case 0x4653ecu: goto label_4653ec;
        case 0x4653f0u: goto label_4653f0;
        case 0x4653f4u: goto label_4653f4;
        case 0x4653f8u: goto label_4653f8;
        case 0x4653fcu: goto label_4653fc;
        case 0x465400u: goto label_465400;
        case 0x465404u: goto label_465404;
        case 0x465408u: goto label_465408;
        case 0x46540cu: goto label_46540c;
        case 0x465410u: goto label_465410;
        case 0x465414u: goto label_465414;
        case 0x465418u: goto label_465418;
        case 0x46541cu: goto label_46541c;
        case 0x465420u: goto label_465420;
        case 0x465424u: goto label_465424;
        case 0x465428u: goto label_465428;
        case 0x46542cu: goto label_46542c;
        case 0x465430u: goto label_465430;
        case 0x465434u: goto label_465434;
        case 0x465438u: goto label_465438;
        case 0x46543cu: goto label_46543c;
        case 0x465440u: goto label_465440;
        case 0x465444u: goto label_465444;
        case 0x465448u: goto label_465448;
        case 0x46544cu: goto label_46544c;
        case 0x465450u: goto label_465450;
        case 0x465454u: goto label_465454;
        case 0x465458u: goto label_465458;
        case 0x46545cu: goto label_46545c;
        case 0x465460u: goto label_465460;
        case 0x465464u: goto label_465464;
        case 0x465468u: goto label_465468;
        case 0x46546cu: goto label_46546c;
        case 0x465470u: goto label_465470;
        case 0x465474u: goto label_465474;
        case 0x465478u: goto label_465478;
        case 0x46547cu: goto label_46547c;
        case 0x465480u: goto label_465480;
        case 0x465484u: goto label_465484;
        case 0x465488u: goto label_465488;
        case 0x46548cu: goto label_46548c;
        case 0x465490u: goto label_465490;
        case 0x465494u: goto label_465494;
        case 0x465498u: goto label_465498;
        case 0x46549cu: goto label_46549c;
        case 0x4654a0u: goto label_4654a0;
        case 0x4654a4u: goto label_4654a4;
        case 0x4654a8u: goto label_4654a8;
        case 0x4654acu: goto label_4654ac;
        case 0x4654b0u: goto label_4654b0;
        case 0x4654b4u: goto label_4654b4;
        case 0x4654b8u: goto label_4654b8;
        case 0x4654bcu: goto label_4654bc;
        case 0x4654c0u: goto label_4654c0;
        case 0x4654c4u: goto label_4654c4;
        case 0x4654c8u: goto label_4654c8;
        case 0x4654ccu: goto label_4654cc;
        case 0x4654d0u: goto label_4654d0;
        case 0x4654d4u: goto label_4654d4;
        case 0x4654d8u: goto label_4654d8;
        case 0x4654dcu: goto label_4654dc;
        case 0x4654e0u: goto label_4654e0;
        case 0x4654e4u: goto label_4654e4;
        case 0x4654e8u: goto label_4654e8;
        case 0x4654ecu: goto label_4654ec;
        case 0x4654f0u: goto label_4654f0;
        case 0x4654f4u: goto label_4654f4;
        case 0x4654f8u: goto label_4654f8;
        case 0x4654fcu: goto label_4654fc;
        case 0x465500u: goto label_465500;
        case 0x465504u: goto label_465504;
        case 0x465508u: goto label_465508;
        case 0x46550cu: goto label_46550c;
        case 0x465510u: goto label_465510;
        case 0x465514u: goto label_465514;
        case 0x465518u: goto label_465518;
        case 0x46551cu: goto label_46551c;
        case 0x465520u: goto label_465520;
        case 0x465524u: goto label_465524;
        case 0x465528u: goto label_465528;
        case 0x46552cu: goto label_46552c;
        case 0x465530u: goto label_465530;
        case 0x465534u: goto label_465534;
        case 0x465538u: goto label_465538;
        case 0x46553cu: goto label_46553c;
        case 0x465540u: goto label_465540;
        case 0x465544u: goto label_465544;
        case 0x465548u: goto label_465548;
        case 0x46554cu: goto label_46554c;
        case 0x465550u: goto label_465550;
        case 0x465554u: goto label_465554;
        case 0x465558u: goto label_465558;
        case 0x46555cu: goto label_46555c;
        case 0x465560u: goto label_465560;
        case 0x465564u: goto label_465564;
        case 0x465568u: goto label_465568;
        case 0x46556cu: goto label_46556c;
        case 0x465570u: goto label_465570;
        case 0x465574u: goto label_465574;
        case 0x465578u: goto label_465578;
        case 0x46557cu: goto label_46557c;
        case 0x465580u: goto label_465580;
        case 0x465584u: goto label_465584;
        case 0x465588u: goto label_465588;
        case 0x46558cu: goto label_46558c;
        case 0x465590u: goto label_465590;
        case 0x465594u: goto label_465594;
        case 0x465598u: goto label_465598;
        case 0x46559cu: goto label_46559c;
        default: break;
    }

    ctx->pc = 0x465310u;

label_465310:
    // 0x465310: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x465310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
label_465314:
    // 0x465314: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x465314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_465318:
    // 0x465318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x465318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46531c:
    // 0x46531c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_465320:
    // 0x465320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x465320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_465324:
    // 0x465324: 0xafa402b0  sw          $a0, 0x2B0($sp)
    ctx->pc = 0x465324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 4));
label_465328:
    // 0x465328: 0xafa502c0  sw          $a1, 0x2C0($sp)
    ctx->pc = 0x465328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 5));
label_46532c:
    // 0x46532c: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x46532cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_465330:
    // 0x465330: 0xc04e240  jal         func_138900
label_465334:
    if (ctx->pc == 0x465334u) {
        ctx->pc = 0x465338u;
        goto label_465338;
    }
    ctx->pc = 0x465330u;
    SET_GPR_U32(ctx, 31, 0x465338u);
    ctx->pc = 0x138900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138900u, 0x465330u, 0x465338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465338u;
label_465338:
    // 0x465338: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x465338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_46533c:
    // 0x46533c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x46533cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_465340:
    // 0x465340: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_465344:
    if (ctx->pc == 0x465344u) {
        ctx->pc = 0x465348u;
        goto label_465348;
    }
    ctx->pc = 0x465340u;
    {
        const bool branch_taken_0x465340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x465340) {
            ctx->pc = 0x4653F0u;
            goto label_4653f0;
        }
    }
    ctx->pc = 0x465348u;
label_465348:
    // 0x465348: 0x8f82b298  lw          $v0, -0x4D68($gp)
    ctx->pc = 0x465348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947480)));
label_46534c:
    // 0x46534c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_465350:
    if (ctx->pc == 0x465350u) {
        ctx->pc = 0x465354u;
        goto label_465354;
    }
    ctx->pc = 0x46534Cu;
    {
        const bool branch_taken_0x46534c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46534c) {
            ctx->pc = 0x4653F0u;
            goto label_4653f0;
        }
    }
    ctx->pc = 0x465354u;
label_465354:
    // 0x465354: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x465354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_465358:
    // 0x465358: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x465358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_46535c:
    // 0x46535c: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x46535cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_465360:
    // 0x465360: 0xc115ee8  jal         func_457BA0
label_465364:
    if (ctx->pc == 0x465364u) {
        ctx->pc = 0x465368u;
        goto label_465368;
    }
    ctx->pc = 0x465360u;
    SET_GPR_U32(ctx, 31, 0x465368u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x465360u, 0x465368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465368u;
label_465368:
    // 0x465368: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_46536c:
    if (ctx->pc == 0x46536Cu) {
        ctx->pc = 0x465370u;
        goto label_465370;
    }
    ctx->pc = 0x465368u;
    {
        const bool branch_taken_0x465368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465368) {
            ctx->pc = 0x4653F0u;
            goto label_4653f0;
        }
    }
    ctx->pc = 0x465370u;
label_465370:
    // 0x465370: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x465370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_465374:
    // 0x465374: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_465378:
    if (ctx->pc == 0x465378u) {
        ctx->pc = 0x46537Cu;
        goto label_46537c;
    }
    ctx->pc = 0x465374u;
    {
        const bool branch_taken_0x465374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465374) {
            ctx->pc = 0x4653F0u;
            goto label_4653f0;
        }
    }
    ctx->pc = 0x46537Cu;
label_46537c:
    // 0x46537c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x46537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_465380:
    // 0x465380: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x465380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_465384:
    // 0x465384: 0x8fa602a4  lw          $a2, 0x2A4($sp)
    ctx->pc = 0x465384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_465388:
    // 0x465388: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x465388u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_46538c:
    // 0x46538c: 0x24e7f450  addiu       $a3, $a3, -0xBB0
    ctx->pc = 0x46538cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964304));
label_465390:
    // 0x465390: 0x240800f2  addiu       $t0, $zero, 0xF2
    ctx->pc = 0x465390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
label_465394:
    // 0x465394: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x465394u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_465398:
    // 0x465398: 0x2529f470  addiu       $t1, $t1, -0xB90
    ctx->pc = 0x465398u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964336));
label_46539c:
    // 0x46539c: 0xc113940  jal         func_44E500
label_4653a0:
    if (ctx->pc == 0x4653A0u) {
        ctx->pc = 0x4653A4u;
        goto label_4653a4;
    }
    ctx->pc = 0x46539Cu;
    SET_GPR_U32(ctx, 31, 0x4653A4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x46539Cu, 0x4653A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4653A4u;
label_4653a4:
    // 0x4653a4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4653a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4653a8:
    // 0x4653a8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4653a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4653ac:
    // 0x4653ac: 0x24a5f490  addiu       $a1, $a1, -0xB70
    ctx->pc = 0x4653acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964368));
label_4653b0:
    // 0x4653b0: 0xc115c24  jal         func_457090
label_4653b4:
    if (ctx->pc == 0x4653B4u) {
        ctx->pc = 0x4653B8u;
        goto label_4653b8;
    }
    ctx->pc = 0x4653B0u;
    SET_GPR_U32(ctx, 31, 0x4653B8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4653B0u, 0x4653B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4653B8u;
label_4653b8:
    // 0x4653b8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4653b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4653bc:
    // 0x4653bc: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x4653bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_4653c0:
    // 0x4653c0: 0x40f809  jalr        $v0
label_4653c4:
    if (ctx->pc == 0x4653C4u) {
        ctx->pc = 0x4653C8u;
        goto label_4653c8;
    }
    ctx->pc = 0x4653C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4653C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4653C0u, 0x4653C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4653C8u;
label_4653c8:
    // 0x4653c8: 0xaf82b298  sw          $v0, -0x4D68($gp)
    ctx->pc = 0x4653c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947480), GPR_U32(ctx, 2));
label_4653cc:
    // 0x4653cc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4653ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4653d0:
    // 0x4653d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4653d4:
    if (ctx->pc == 0x4653D4u) {
        ctx->pc = 0x4653D8u;
        goto label_4653d8;
    }
    ctx->pc = 0x4653D0u;
    {
        const bool branch_taken_0x4653d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4653d0) {
            ctx->pc = 0x4653E0u;
            goto label_4653e0;
        }
    }
    ctx->pc = 0x4653D8u;
label_4653d8:
    // 0x4653d8: 0xd  break       0
    ctx->pc = 0x4653d8u;
    runtime->handleBreak(rdram, ctx);
label_4653dc:
    // 0x4653dc: 0x0  nop
    ctx->pc = 0x4653dcu;
    // NOP
label_4653e0:
    // 0x4653e0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4653e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4653e4:
    // 0x4653e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4653e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4653e8:
    // 0x4653e8: 0xc11392c  jal         func_44E4B0
label_4653ec:
    if (ctx->pc == 0x4653ECu) {
        ctx->pc = 0x4653F0u;
        goto label_4653f0;
    }
    ctx->pc = 0x4653E8u;
    SET_GPR_U32(ctx, 31, 0x4653F0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4653E8u, 0x4653F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4653F0u;
label_4653f0:
    // 0x4653f0: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x4653f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_4653f4:
    // 0x4653f4: 0xc041b48  jal         func_106D20
label_4653f8:
    if (ctx->pc == 0x4653F8u) {
        ctx->pc = 0x4653FCu;
        goto label_4653fc;
    }
    ctx->pc = 0x4653F4u;
    SET_GPR_U32(ctx, 31, 0x4653FCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x4653F4u, 0x4653FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4653FCu;
label_4653fc:
    // 0x4653fc: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x4653fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_465400:
    // 0x465400: 0xc04ddfc  jal         func_1377F0
label_465404:
    if (ctx->pc == 0x465404u) {
        ctx->pc = 0x465408u;
        goto label_465408;
    }
    ctx->pc = 0x465400u;
    SET_GPR_U32(ctx, 31, 0x465408u);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x465400u, 0x465408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465408u;
label_465408:
    // 0x465408: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x465408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_46540c:
    // 0x46540c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x46540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_465410:
    // 0x465410: 0xc119354  jal         func_464D50
label_465414:
    if (ctx->pc == 0x465414u) {
        ctx->pc = 0x465418u;
        goto label_465418;
    }
    ctx->pc = 0x465410u;
    SET_GPR_U32(ctx, 31, 0x465418u);
    ctx->pc = 0x464D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464D50u, 0x465410u, 0x465418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465418u;
label_465418:
    // 0x465418: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x465418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46541c:
    // 0x46541c: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x46541cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_465420:
    // 0x465420: 0xc04e240  jal         func_138900
label_465424:
    if (ctx->pc == 0x465424u) {
        ctx->pc = 0x465428u;
        goto label_465428;
    }
    ctx->pc = 0x465420u;
    SET_GPR_U32(ctx, 31, 0x465428u);
    ctx->pc = 0x138900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138900u, 0x465420u, 0x465428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465428u;
label_465428:
    // 0x465428: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x465428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_46542c:
    // 0x46542c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_465430:
    // 0x465430: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x465430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_465434:
    // 0x465434: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x465434u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_465438:
    // 0x465438: 0x1000003f  b           . + 4 + (0x3F << 2)
label_46543c:
    if (ctx->pc == 0x46543Cu) {
        ctx->pc = 0x465440u;
        goto label_465440;
    }
    ctx->pc = 0x465438u;
    {
        const bool branch_taken_0x465438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465438) {
            ctx->pc = 0x465538u;
            goto label_465538;
        }
    }
    ctx->pc = 0x465440u;
label_465440:
    // 0x465440: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x465440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_465444:
    // 0x465444: 0xc04e240  jal         func_138900
label_465448:
    if (ctx->pc == 0x465448u) {
        ctx->pc = 0x46544Cu;
        goto label_46544c;
    }
    ctx->pc = 0x465444u;
    SET_GPR_U32(ctx, 31, 0x46544Cu);
    ctx->pc = 0x138900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138900u, 0x465444u, 0x46544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46544Cu;
label_46544c:
    // 0x46544c: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x46544cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_465450:
    // 0x465450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x465450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_465454:
    // 0x465454: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x465454u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_465458:
    // 0x465458: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x465458u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_46545c:
    // 0x46545c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x46545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_465460:
    // 0x465460: 0x28420100  slti        $v0, $v0, 0x100
    ctx->pc = 0x465460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_465464:
    // 0x465464: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x465464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_465468:
    // 0x465468: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_46546c:
    if (ctx->pc == 0x46546Cu) {
        ctx->pc = 0x465470u;
        goto label_465470;
    }
    ctx->pc = 0x465468u;
    {
        const bool branch_taken_0x465468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x465468) {
            ctx->pc = 0x465518u;
            goto label_465518;
        }
    }
    ctx->pc = 0x465470u;
label_465470:
    // 0x465470: 0x8f82b29c  lw          $v0, -0x4D64($gp)
    ctx->pc = 0x465470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947484)));
label_465474:
    // 0x465474: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_465478:
    if (ctx->pc == 0x465478u) {
        ctx->pc = 0x46547Cu;
        goto label_46547c;
    }
    ctx->pc = 0x465474u;
    {
        const bool branch_taken_0x465474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465474) {
            ctx->pc = 0x465518u;
            goto label_465518;
        }
    }
    ctx->pc = 0x46547Cu;
label_46547c:
    // 0x46547c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46547cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_465480:
    // 0x465480: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x465480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_465484:
    // 0x465484: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x465484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_465488:
    // 0x465488: 0xc115ee8  jal         func_457BA0
label_46548c:
    if (ctx->pc == 0x46548Cu) {
        ctx->pc = 0x465490u;
        goto label_465490;
    }
    ctx->pc = 0x465488u;
    SET_GPR_U32(ctx, 31, 0x465490u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x465488u, 0x465490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465490u;
label_465490:
    // 0x465490: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_465494:
    if (ctx->pc == 0x465494u) {
        ctx->pc = 0x465498u;
        goto label_465498;
    }
    ctx->pc = 0x465490u;
    {
        const bool branch_taken_0x465490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465490) {
            ctx->pc = 0x465518u;
            goto label_465518;
        }
    }
    ctx->pc = 0x465498u;
label_465498:
    // 0x465498: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x465498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_46549c:
    // 0x46549c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4654a0:
    if (ctx->pc == 0x4654A0u) {
        ctx->pc = 0x4654A4u;
        goto label_4654a4;
    }
    ctx->pc = 0x46549Cu;
    {
        const bool branch_taken_0x46549c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46549c) {
            ctx->pc = 0x465518u;
            goto label_465518;
        }
    }
    ctx->pc = 0x4654A4u;
label_4654a4:
    // 0x4654a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4654a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4654a8:
    // 0x4654a8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4654a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4654ac:
    // 0x4654ac: 0x8fa60284  lw          $a2, 0x284($sp)
    ctx->pc = 0x4654acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_4654b0:
    // 0x4654b0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4654b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4654b4:
    // 0x4654b4: 0x24e7f450  addiu       $a3, $a3, -0xBB0
    ctx->pc = 0x4654b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964304));
label_4654b8:
    // 0x4654b8: 0x240800fc  addiu       $t0, $zero, 0xFC
    ctx->pc = 0x4654b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_4654bc:
    // 0x4654bc: 0x2789b2a0  addiu       $t1, $gp, -0x4D60
    ctx->pc = 0x4654bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947488));
label_4654c0:
    // 0x4654c0: 0xc113940  jal         func_44E500
label_4654c4:
    if (ctx->pc == 0x4654C4u) {
        ctx->pc = 0x4654C8u;
        goto label_4654c8;
    }
    ctx->pc = 0x4654C0u;
    SET_GPR_U32(ctx, 31, 0x4654C8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4654C0u, 0x4654C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4654C8u;
label_4654c8:
    // 0x4654c8: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x4654c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_4654cc:
    // 0x4654cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4654ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4654d0:
    // 0x4654d0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4654d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4654d4:
    // 0x4654d4: 0x24a5f4c0  addiu       $a1, $a1, -0xB40
    ctx->pc = 0x4654d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964416));
label_4654d8:
    // 0x4654d8: 0xc115c24  jal         func_457090
label_4654dc:
    if (ctx->pc == 0x4654DCu) {
        ctx->pc = 0x4654E0u;
        goto label_4654e0;
    }
    ctx->pc = 0x4654D8u;
    SET_GPR_U32(ctx, 31, 0x4654E0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4654D8u, 0x4654E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4654E0u;
label_4654e0:
    // 0x4654e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4654e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4654e4:
    // 0x4654e4: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x4654e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_4654e8:
    // 0x4654e8: 0x40f809  jalr        $v0
label_4654ec:
    if (ctx->pc == 0x4654ECu) {
        ctx->pc = 0x4654F0u;
        goto label_4654f0;
    }
    ctx->pc = 0x4654E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4654F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4654E8u, 0x4654F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4654F0u;
label_4654f0:
    // 0x4654f0: 0xaf82b29c  sw          $v0, -0x4D64($gp)
    ctx->pc = 0x4654f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947484), GPR_U32(ctx, 2));
label_4654f4:
    // 0x4654f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4654f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4654f8:
    // 0x4654f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4654fc:
    if (ctx->pc == 0x4654FCu) {
        ctx->pc = 0x465500u;
        goto label_465500;
    }
    ctx->pc = 0x4654F8u;
    {
        const bool branch_taken_0x4654f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4654f8) {
            ctx->pc = 0x465508u;
            goto label_465508;
        }
    }
    ctx->pc = 0x465500u;
label_465500:
    // 0x465500: 0xd  break       0
    ctx->pc = 0x465500u;
    runtime->handleBreak(rdram, ctx);
label_465504:
    // 0x465504: 0x0  nop
    ctx->pc = 0x465504u;
    // NOP
label_465508:
    // 0x465508: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x465508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_46550c:
    // 0x46550c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46550cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_465510:
    // 0x465510: 0xc11392c  jal         func_44E4B0
label_465514:
    if (ctx->pc == 0x465514u) {
        ctx->pc = 0x465518u;
        goto label_465518;
    }
    ctx->pc = 0x465510u;
    SET_GPR_U32(ctx, 31, 0x465518u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x465510u, 0x465518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465518u;
label_465518:
    // 0x465518: 0x10963c  dsll32      $s2, $s0, 24
    ctx->pc = 0x465518u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 24));
label_46551c:
    // 0x46551c: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x46551cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
label_465520:
    // 0x465520: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x465520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_465524:
    // 0x465524: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x465524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_465528:
    // 0x465528: 0xc05db18  jal         func_176C60
label_46552c:
    if (ctx->pc == 0x46552Cu) {
        ctx->pc = 0x465530u;
        goto label_465530;
    }
    ctx->pc = 0x465528u;
    SET_GPR_U32(ctx, 31, 0x465530u);
    ctx->pc = 0x176C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C60u, 0x465528u, 0x465530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465530u;
label_465530:
    // 0x465530: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x465530u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
label_465534:
    // 0x465534: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x465534u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_465538:
    // 0x465538: 0x1600ffc1  bnez        $s0, . + 4 + (-0x3F << 2)
label_46553c:
    if (ctx->pc == 0x46553Cu) {
        ctx->pc = 0x465540u;
        goto label_465540;
    }
    ctx->pc = 0x465538u;
    {
        const bool branch_taken_0x465538 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x465538) {
            ctx->pc = 0x465440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465440;
        }
    }
    ctx->pc = 0x465540u;
label_465540:
    // 0x465540: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x465540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_465544:
    // 0x465544: 0xc04ddfc  jal         func_1377F0
label_465548:
    if (ctx->pc == 0x465548u) {
        ctx->pc = 0x46554Cu;
        goto label_46554c;
    }
    ctx->pc = 0x465544u;
    SET_GPR_U32(ctx, 31, 0x46554Cu);
    ctx->pc = 0x1377F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1377F0u, 0x465544u, 0x46554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46554Cu;
label_46554c:
    // 0x46554c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x46554cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_465550:
    // 0x465550: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x465550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_465554:
    // 0x465554: 0xc0b9f60  jal         func_2E7D80
label_465558:
    if (ctx->pc == 0x465558u) {
        ctx->pc = 0x46555Cu;
        goto label_46555c;
    }
    ctx->pc = 0x465554u;
    SET_GPR_U32(ctx, 31, 0x46555Cu);
    ctx->pc = 0x2E7D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7D80u, 0x465554u, 0x46555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46555Cu;
label_46555c:
    // 0x46555c: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x46555cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_465560:
    // 0x465560: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x465560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_465564:
    // 0x465564: 0xc042844  jal         func_10A110
label_465568:
    if (ctx->pc == 0x465568u) {
        ctx->pc = 0x46556Cu;
        goto label_46556c;
    }
    ctx->pc = 0x465564u;
    SET_GPR_U32(ctx, 31, 0x46556Cu);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x465564u, 0x46556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46556Cu;
label_46556c:
    // 0x46556c: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x46556cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_465570:
    // 0x465570: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x465570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_465574:
    // 0x465574: 0xc0402d4  jal         func_100B50
label_465578:
    if (ctx->pc == 0x465578u) {
        ctx->pc = 0x46557Cu;
        goto label_46557c;
    }
    ctx->pc = 0x465574u;
    SET_GPR_U32(ctx, 31, 0x46557Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x465574u, 0x46557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46557Cu;
label_46557c:
    // 0x46557c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46557cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465580:
    // 0x465580: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x465580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_465584:
    // 0x465584: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x465584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_465588:
    // 0x465588: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46558c:
    // 0x46558c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46558cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_465590:
    // 0x465590: 0x27bd02d0  addiu       $sp, $sp, 0x2D0
    ctx->pc = 0x465590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_465594:
    // 0x465594: 0x3e00008  jr          $ra
label_465598:
    if (ctx->pc == 0x465598u) {
        ctx->pc = 0x46559Cu;
        goto label_46559c;
    }
    ctx->pc = 0x465594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46559Cu;
label_46559c:
    // 0x46559c: 0x0  nop
    ctx->pc = 0x46559cu;
    // NOP
    ctx->pc = 0x4655a0u;
}
