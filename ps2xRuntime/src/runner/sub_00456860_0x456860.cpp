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

// Function: sub_00456860
// Address: 0x456860 - 0x456a30
void sub_00456860_0x456860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456860_0x456860");
#endif

    switch (ctx->pc) {
        case 0x456860u: goto label_456860;
        case 0x456864u: goto label_456864;
        case 0x456868u: goto label_456868;
        case 0x45686cu: goto label_45686c;
        case 0x456870u: goto label_456870;
        case 0x456874u: goto label_456874;
        case 0x456878u: goto label_456878;
        case 0x45687cu: goto label_45687c;
        case 0x456880u: goto label_456880;
        case 0x456884u: goto label_456884;
        case 0x456888u: goto label_456888;
        case 0x45688cu: goto label_45688c;
        case 0x456890u: goto label_456890;
        case 0x456894u: goto label_456894;
        case 0x456898u: goto label_456898;
        case 0x45689cu: goto label_45689c;
        case 0x4568a0u: goto label_4568a0;
        case 0x4568a4u: goto label_4568a4;
        case 0x4568a8u: goto label_4568a8;
        case 0x4568acu: goto label_4568ac;
        case 0x4568b0u: goto label_4568b0;
        case 0x4568b4u: goto label_4568b4;
        case 0x4568b8u: goto label_4568b8;
        case 0x4568bcu: goto label_4568bc;
        case 0x4568c0u: goto label_4568c0;
        case 0x4568c4u: goto label_4568c4;
        case 0x4568c8u: goto label_4568c8;
        case 0x4568ccu: goto label_4568cc;
        case 0x4568d0u: goto label_4568d0;
        case 0x4568d4u: goto label_4568d4;
        case 0x4568d8u: goto label_4568d8;
        case 0x4568dcu: goto label_4568dc;
        case 0x4568e0u: goto label_4568e0;
        case 0x4568e4u: goto label_4568e4;
        case 0x4568e8u: goto label_4568e8;
        case 0x4568ecu: goto label_4568ec;
        case 0x4568f0u: goto label_4568f0;
        case 0x4568f4u: goto label_4568f4;
        case 0x4568f8u: goto label_4568f8;
        case 0x4568fcu: goto label_4568fc;
        case 0x456900u: goto label_456900;
        case 0x456904u: goto label_456904;
        case 0x456908u: goto label_456908;
        case 0x45690cu: goto label_45690c;
        case 0x456910u: goto label_456910;
        case 0x456914u: goto label_456914;
        case 0x456918u: goto label_456918;
        case 0x45691cu: goto label_45691c;
        case 0x456920u: goto label_456920;
        case 0x456924u: goto label_456924;
        case 0x456928u: goto label_456928;
        case 0x45692cu: goto label_45692c;
        case 0x456930u: goto label_456930;
        case 0x456934u: goto label_456934;
        case 0x456938u: goto label_456938;
        case 0x45693cu: goto label_45693c;
        case 0x456940u: goto label_456940;
        case 0x456944u: goto label_456944;
        case 0x456948u: goto label_456948;
        case 0x45694cu: goto label_45694c;
        case 0x456950u: goto label_456950;
        case 0x456954u: goto label_456954;
        case 0x456958u: goto label_456958;
        case 0x45695cu: goto label_45695c;
        case 0x456960u: goto label_456960;
        case 0x456964u: goto label_456964;
        case 0x456968u: goto label_456968;
        case 0x45696cu: goto label_45696c;
        case 0x456970u: goto label_456970;
        case 0x456974u: goto label_456974;
        case 0x456978u: goto label_456978;
        case 0x45697cu: goto label_45697c;
        case 0x456980u: goto label_456980;
        case 0x456984u: goto label_456984;
        case 0x456988u: goto label_456988;
        case 0x45698cu: goto label_45698c;
        case 0x456990u: goto label_456990;
        case 0x456994u: goto label_456994;
        case 0x456998u: goto label_456998;
        case 0x45699cu: goto label_45699c;
        case 0x4569a0u: goto label_4569a0;
        case 0x4569a4u: goto label_4569a4;
        case 0x4569a8u: goto label_4569a8;
        case 0x4569acu: goto label_4569ac;
        case 0x4569b0u: goto label_4569b0;
        case 0x4569b4u: goto label_4569b4;
        case 0x4569b8u: goto label_4569b8;
        case 0x4569bcu: goto label_4569bc;
        case 0x4569c0u: goto label_4569c0;
        case 0x4569c4u: goto label_4569c4;
        case 0x4569c8u: goto label_4569c8;
        case 0x4569ccu: goto label_4569cc;
        case 0x4569d0u: goto label_4569d0;
        case 0x4569d4u: goto label_4569d4;
        case 0x4569d8u: goto label_4569d8;
        case 0x4569dcu: goto label_4569dc;
        case 0x4569e0u: goto label_4569e0;
        case 0x4569e4u: goto label_4569e4;
        case 0x4569e8u: goto label_4569e8;
        case 0x4569ecu: goto label_4569ec;
        case 0x4569f0u: goto label_4569f0;
        case 0x4569f4u: goto label_4569f4;
        case 0x4569f8u: goto label_4569f8;
        case 0x4569fcu: goto label_4569fc;
        case 0x456a00u: goto label_456a00;
        case 0x456a04u: goto label_456a04;
        case 0x456a08u: goto label_456a08;
        case 0x456a0cu: goto label_456a0c;
        case 0x456a10u: goto label_456a10;
        case 0x456a14u: goto label_456a14;
        case 0x456a18u: goto label_456a18;
        case 0x456a1cu: goto label_456a1c;
        case 0x456a20u: goto label_456a20;
        case 0x456a24u: goto label_456a24;
        case 0x456a28u: goto label_456a28;
        case 0x456a2cu: goto label_456a2c;
        default: break;
    }

    ctx->pc = 0x456860u;

label_456860:
    // 0x456860: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x456860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
label_456864:
    // 0x456864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x456864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_456868:
    // 0x456868: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x456868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_45686c:
    // 0x45686c: 0xafa50280  sw          $a1, 0x280($sp)
    ctx->pc = 0x45686cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 5));
label_456870:
    // 0x456870: 0xafa60290  sw          $a2, 0x290($sp)
    ctx->pc = 0x456870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 6));
label_456874:
    // 0x456874: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x456874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_456878:
    // 0x456878: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
label_45687c:
    if (ctx->pc == 0x45687Cu) {
        ctx->pc = 0x456880u;
        goto label_456880;
    }
    ctx->pc = 0x456878u;
    {
        const bool branch_taken_0x456878 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x456878) {
            ctx->pc = 0x456948u;
            goto label_456948;
        }
    }
    ctx->pc = 0x456880u;
label_456880:
    // 0x456880: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x456880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_456884:
    // 0x456884: 0xc1159c4  jal         func_456710
label_456888:
    if (ctx->pc == 0x456888u) {
        ctx->pc = 0x45688Cu;
        goto label_45688c;
    }
    ctx->pc = 0x456884u;
    SET_GPR_U32(ctx, 31, 0x45688Cu);
    ctx->pc = 0x456710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456710u, 0x456884u, 0x45688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45688Cu;
label_45688c:
    // 0x45688c: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x45688cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_456890:
    // 0x456890: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x456890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_456894:
    // 0x456894: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x456894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_456898:
    // 0x456898: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_45689c:
    if (ctx->pc == 0x45689Cu) {
        ctx->pc = 0x4568A0u;
        goto label_4568a0;
    }
    ctx->pc = 0x456898u;
    {
        const bool branch_taken_0x456898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456898) {
            ctx->pc = 0x456948u;
            goto label_456948;
        }
    }
    ctx->pc = 0x4568A0u;
label_4568a0:
    // 0x4568a0: 0x8f82b0a0  lw          $v0, -0x4F60($gp)
    ctx->pc = 0x4568a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946976)));
label_4568a4:
    // 0x4568a4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4568a8:
    if (ctx->pc == 0x4568A8u) {
        ctx->pc = 0x4568ACu;
        goto label_4568ac;
    }
    ctx->pc = 0x4568A4u;
    {
        const bool branch_taken_0x4568a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4568a4) {
            ctx->pc = 0x456948u;
            goto label_456948;
        }
    }
    ctx->pc = 0x4568ACu;
label_4568ac:
    // 0x4568ac: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4568acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4568b0:
    // 0x4568b0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4568b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4568b4:
    // 0x4568b4: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x4568b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4568b8:
    // 0x4568b8: 0xc115ee8  jal         func_457BA0
label_4568bc:
    if (ctx->pc == 0x4568BCu) {
        ctx->pc = 0x4568C0u;
        goto label_4568c0;
    }
    ctx->pc = 0x4568B8u;
    SET_GPR_U32(ctx, 31, 0x4568C0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4568B8u, 0x4568C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4568C0u;
label_4568c0:
    // 0x4568c0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4568c4:
    if (ctx->pc == 0x4568C4u) {
        ctx->pc = 0x4568C8u;
        goto label_4568c8;
    }
    ctx->pc = 0x4568C0u;
    {
        const bool branch_taken_0x4568c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4568c0) {
            ctx->pc = 0x456948u;
            goto label_456948;
        }
    }
    ctx->pc = 0x4568C8u;
label_4568c8:
    // 0x4568c8: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x4568c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_4568cc:
    // 0x4568cc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4568d0:
    if (ctx->pc == 0x4568D0u) {
        ctx->pc = 0x4568D4u;
        goto label_4568d4;
    }
    ctx->pc = 0x4568CCu;
    {
        const bool branch_taken_0x4568cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4568cc) {
            ctx->pc = 0x456948u;
            goto label_456948;
        }
    }
    ctx->pc = 0x4568D4u;
label_4568d4:
    // 0x4568d4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4568d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4568d8:
    // 0x4568d8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4568d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4568dc:
    // 0x4568dc: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x4568dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_4568e0:
    // 0x4568e0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4568e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4568e4:
    // 0x4568e4: 0x24e7e390  addiu       $a3, $a3, -0x1C70
    ctx->pc = 0x4568e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960016));
label_4568e8:
    // 0x4568e8: 0x24080049  addiu       $t0, $zero, 0x49
    ctx->pc = 0x4568e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_4568ec:
    // 0x4568ec: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4568ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4568f0:
    // 0x4568f0: 0x2529e3e0  addiu       $t1, $t1, -0x1C20
    ctx->pc = 0x4568f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294960096));
label_4568f4:
    // 0x4568f4: 0xc113940  jal         func_44E500
label_4568f8:
    if (ctx->pc == 0x4568F8u) {
        ctx->pc = 0x4568FCu;
        goto label_4568fc;
    }
    ctx->pc = 0x4568F4u;
    SET_GPR_U32(ctx, 31, 0x4568FCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4568F4u, 0x4568FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4568FCu;
label_4568fc:
    // 0x4568fc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4568fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_456900:
    // 0x456900: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x456900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_456904:
    // 0x456904: 0x24a5e400  addiu       $a1, $a1, -0x1C00
    ctx->pc = 0x456904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960128));
label_456908:
    // 0x456908: 0xc115c24  jal         func_457090
label_45690c:
    if (ctx->pc == 0x45690Cu) {
        ctx->pc = 0x456910u;
        goto label_456910;
    }
    ctx->pc = 0x456908u;
    SET_GPR_U32(ctx, 31, 0x456910u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x456908u, 0x456910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456910u;
label_456910:
    // 0x456910: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x456910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_456914:
    // 0x456914: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x456914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_456918:
    // 0x456918: 0x40f809  jalr        $v0
label_45691c:
    if (ctx->pc == 0x45691Cu) {
        ctx->pc = 0x456920u;
        goto label_456920;
    }
    ctx->pc = 0x456918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x456920u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456918u, 0x456920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x456920u;
label_456920:
    // 0x456920: 0xaf82b0a0  sw          $v0, -0x4F60($gp)
    ctx->pc = 0x456920u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946976), GPR_U32(ctx, 2));
label_456924:
    // 0x456924: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x456924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_456928:
    // 0x456928: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45692c:
    if (ctx->pc == 0x45692Cu) {
        ctx->pc = 0x456930u;
        goto label_456930;
    }
    ctx->pc = 0x456928u;
    {
        const bool branch_taken_0x456928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456928) {
            ctx->pc = 0x456938u;
            goto label_456938;
        }
    }
    ctx->pc = 0x456930u;
label_456930:
    // 0x456930: 0xd  break       0
    ctx->pc = 0x456930u;
    runtime->handleBreak(rdram, ctx);
label_456934:
    // 0x456934: 0x0  nop
    ctx->pc = 0x456934u;
    // NOP
label_456938:
    // 0x456938: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x456938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_45693c:
    // 0x45693c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45693cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_456940:
    // 0x456940: 0xc11392c  jal         func_44E4B0
label_456944:
    if (ctx->pc == 0x456944u) {
        ctx->pc = 0x456948u;
        goto label_456948;
    }
    ctx->pc = 0x456940u;
    SET_GPR_U32(ctx, 31, 0x456948u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x456940u, 0x456948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456948u;
label_456948:
    // 0x456948: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x456948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_45694c:
    // 0x45694c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x45694cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_456950:
    // 0x456950: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x456950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_456954:
    // 0x456954: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_456958:
    if (ctx->pc == 0x456958u) {
        ctx->pc = 0x45695Cu;
        goto label_45695c;
    }
    ctx->pc = 0x456954u;
    {
        const bool branch_taken_0x456954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456954) {
            ctx->pc = 0x456A04u;
            goto label_456a04;
        }
    }
    ctx->pc = 0x45695Cu;
label_45695c:
    // 0x45695c: 0x8f82b0a4  lw          $v0, -0x4F5C($gp)
    ctx->pc = 0x45695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946980)));
label_456960:
    // 0x456960: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_456964:
    if (ctx->pc == 0x456964u) {
        ctx->pc = 0x456968u;
        goto label_456968;
    }
    ctx->pc = 0x456960u;
    {
        const bool branch_taken_0x456960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456960) {
            ctx->pc = 0x456A04u;
            goto label_456a04;
        }
    }
    ctx->pc = 0x456968u;
label_456968:
    // 0x456968: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x456968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45696c:
    // 0x45696c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45696cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_456970:
    // 0x456970: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x456970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_456974:
    // 0x456974: 0xc115ee8  jal         func_457BA0
label_456978:
    if (ctx->pc == 0x456978u) {
        ctx->pc = 0x45697Cu;
        goto label_45697c;
    }
    ctx->pc = 0x456974u;
    SET_GPR_U32(ctx, 31, 0x45697Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x456974u, 0x45697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45697Cu;
label_45697c:
    // 0x45697c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_456980:
    if (ctx->pc == 0x456980u) {
        ctx->pc = 0x456984u;
        goto label_456984;
    }
    ctx->pc = 0x45697Cu;
    {
        const bool branch_taken_0x45697c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45697c) {
            ctx->pc = 0x456A04u;
            goto label_456a04;
        }
    }
    ctx->pc = 0x456984u;
label_456984:
    // 0x456984: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x456984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_456988:
    // 0x456988: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_45698c:
    if (ctx->pc == 0x45698Cu) {
        ctx->pc = 0x456990u;
        goto label_456990;
    }
    ctx->pc = 0x456988u;
    {
        const bool branch_taken_0x456988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456988) {
            ctx->pc = 0x456A04u;
            goto label_456a04;
        }
    }
    ctx->pc = 0x456990u;
label_456990:
    // 0x456990: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x456990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_456994:
    // 0x456994: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x456994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_456998:
    // 0x456998: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x456998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_45699c:
    // 0x45699c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45699cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4569a0:
    // 0x4569a0: 0x24e7e390  addiu       $a3, $a3, -0x1C70
    ctx->pc = 0x4569a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960016));
label_4569a4:
    // 0x4569a4: 0x2408004c  addiu       $t0, $zero, 0x4C
    ctx->pc = 0x4569a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_4569a8:
    // 0x4569a8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4569a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4569ac:
    // 0x4569ac: 0x2529e430  addiu       $t1, $t1, -0x1BD0
    ctx->pc = 0x4569acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294960176));
label_4569b0:
    // 0x4569b0: 0xc113940  jal         func_44E500
label_4569b4:
    if (ctx->pc == 0x4569B4u) {
        ctx->pc = 0x4569B8u;
        goto label_4569b8;
    }
    ctx->pc = 0x4569B0u;
    SET_GPR_U32(ctx, 31, 0x4569B8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4569B0u, 0x4569B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4569B8u;
label_4569b8:
    // 0x4569b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4569b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4569bc:
    // 0x4569bc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4569bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4569c0:
    // 0x4569c0: 0x24a5e450  addiu       $a1, $a1, -0x1BB0
    ctx->pc = 0x4569c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960208));
label_4569c4:
    // 0x4569c4: 0xc115c24  jal         func_457090
label_4569c8:
    if (ctx->pc == 0x4569C8u) {
        ctx->pc = 0x4569CCu;
        goto label_4569cc;
    }
    ctx->pc = 0x4569C4u;
    SET_GPR_U32(ctx, 31, 0x4569CCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4569C4u, 0x4569CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4569CCu;
label_4569cc:
    // 0x4569cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4569ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4569d0:
    // 0x4569d0: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x4569d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_4569d4:
    // 0x4569d4: 0x40f809  jalr        $v0
label_4569d8:
    if (ctx->pc == 0x4569D8u) {
        ctx->pc = 0x4569DCu;
        goto label_4569dc;
    }
    ctx->pc = 0x4569D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4569DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4569D4u, 0x4569DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4569DCu;
label_4569dc:
    // 0x4569dc: 0xaf82b0a4  sw          $v0, -0x4F5C($gp)
    ctx->pc = 0x4569dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946980), GPR_U32(ctx, 2));
label_4569e0:
    // 0x4569e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4569e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4569e4:
    // 0x4569e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4569e8:
    if (ctx->pc == 0x4569E8u) {
        ctx->pc = 0x4569ECu;
        goto label_4569ec;
    }
    ctx->pc = 0x4569E4u;
    {
        const bool branch_taken_0x4569e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4569e4) {
            ctx->pc = 0x4569F4u;
            goto label_4569f4;
        }
    }
    ctx->pc = 0x4569ECu;
label_4569ec:
    // 0x4569ec: 0xd  break       0
    ctx->pc = 0x4569ecu;
    runtime->handleBreak(rdram, ctx);
label_4569f0:
    // 0x4569f0: 0x0  nop
    ctx->pc = 0x4569f0u;
    // NOP
label_4569f4:
    // 0x4569f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4569f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4569f8:
    // 0x4569f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4569f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4569fc:
    // 0x4569fc: 0xc11392c  jal         func_44E4B0
label_456a00:
    if (ctx->pc == 0x456A00u) {
        ctx->pc = 0x456A04u;
        goto label_456a04;
    }
    ctx->pc = 0x4569FCu;
    SET_GPR_U32(ctx, 31, 0x456A04u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4569FCu, 0x456A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456A04u;
label_456a04:
    // 0x456a04: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x456a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_456a08:
    // 0x456a08: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x456a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_456a0c:
    // 0x456a0c: 0x27a50280  addiu       $a1, $sp, 0x280
    ctx->pc = 0x456a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_456a10:
    // 0x456a10: 0xc114280  jal         func_450A00
label_456a14:
    if (ctx->pc == 0x456A14u) {
        ctx->pc = 0x456A18u;
        goto label_456a18;
    }
    ctx->pc = 0x456A10u;
    SET_GPR_U32(ctx, 31, 0x456A18u);
    ctx->pc = 0x450A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450A00u, 0x456A10u, 0x456A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456A18u;
label_456a18:
    // 0x456a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x456a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_456a1c:
    // 0x456a1c: 0x27bd02a0  addiu       $sp, $sp, 0x2A0
    ctx->pc = 0x456a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_456a20:
    // 0x456a20: 0x3e00008  jr          $ra
label_456a24:
    if (ctx->pc == 0x456A24u) {
        ctx->pc = 0x456A28u;
        goto label_456a28;
    }
    ctx->pc = 0x456A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x456A28u;
label_456a28:
    // 0x456a28: 0x0  nop
    ctx->pc = 0x456a28u;
    // NOP
label_456a2c:
    // 0x456a2c: 0x0  nop
    ctx->pc = 0x456a2cu;
    // NOP
    ctx->pc = 0x456a30u;
}
