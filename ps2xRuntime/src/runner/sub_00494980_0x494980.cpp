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

// Function: sub_00494980
// Address: 0x494980 - 0x494ae0
void sub_00494980_0x494980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494980_0x494980");
#endif

    switch (ctx->pc) {
        case 0x494980u: goto label_494980;
        case 0x494984u: goto label_494984;
        case 0x494988u: goto label_494988;
        case 0x49498cu: goto label_49498c;
        case 0x494990u: goto label_494990;
        case 0x494994u: goto label_494994;
        case 0x494998u: goto label_494998;
        case 0x49499cu: goto label_49499c;
        case 0x4949a0u: goto label_4949a0;
        case 0x4949a4u: goto label_4949a4;
        case 0x4949a8u: goto label_4949a8;
        case 0x4949acu: goto label_4949ac;
        case 0x4949b0u: goto label_4949b0;
        case 0x4949b4u: goto label_4949b4;
        case 0x4949b8u: goto label_4949b8;
        case 0x4949bcu: goto label_4949bc;
        case 0x4949c0u: goto label_4949c0;
        case 0x4949c4u: goto label_4949c4;
        case 0x4949c8u: goto label_4949c8;
        case 0x4949ccu: goto label_4949cc;
        case 0x4949d0u: goto label_4949d0;
        case 0x4949d4u: goto label_4949d4;
        case 0x4949d8u: goto label_4949d8;
        case 0x4949dcu: goto label_4949dc;
        case 0x4949e0u: goto label_4949e0;
        case 0x4949e4u: goto label_4949e4;
        case 0x4949e8u: goto label_4949e8;
        case 0x4949ecu: goto label_4949ec;
        case 0x4949f0u: goto label_4949f0;
        case 0x4949f4u: goto label_4949f4;
        case 0x4949f8u: goto label_4949f8;
        case 0x4949fcu: goto label_4949fc;
        case 0x494a00u: goto label_494a00;
        case 0x494a04u: goto label_494a04;
        case 0x494a08u: goto label_494a08;
        case 0x494a0cu: goto label_494a0c;
        case 0x494a10u: goto label_494a10;
        case 0x494a14u: goto label_494a14;
        case 0x494a18u: goto label_494a18;
        case 0x494a1cu: goto label_494a1c;
        case 0x494a20u: goto label_494a20;
        case 0x494a24u: goto label_494a24;
        case 0x494a28u: goto label_494a28;
        case 0x494a2cu: goto label_494a2c;
        case 0x494a30u: goto label_494a30;
        case 0x494a34u: goto label_494a34;
        case 0x494a38u: goto label_494a38;
        case 0x494a3cu: goto label_494a3c;
        case 0x494a40u: goto label_494a40;
        case 0x494a44u: goto label_494a44;
        case 0x494a48u: goto label_494a48;
        case 0x494a4cu: goto label_494a4c;
        case 0x494a50u: goto label_494a50;
        case 0x494a54u: goto label_494a54;
        case 0x494a58u: goto label_494a58;
        case 0x494a5cu: goto label_494a5c;
        case 0x494a60u: goto label_494a60;
        case 0x494a64u: goto label_494a64;
        case 0x494a68u: goto label_494a68;
        case 0x494a6cu: goto label_494a6c;
        case 0x494a70u: goto label_494a70;
        case 0x494a74u: goto label_494a74;
        case 0x494a78u: goto label_494a78;
        case 0x494a7cu: goto label_494a7c;
        case 0x494a80u: goto label_494a80;
        case 0x494a84u: goto label_494a84;
        case 0x494a88u: goto label_494a88;
        case 0x494a8cu: goto label_494a8c;
        case 0x494a90u: goto label_494a90;
        case 0x494a94u: goto label_494a94;
        case 0x494a98u: goto label_494a98;
        case 0x494a9cu: goto label_494a9c;
        case 0x494aa0u: goto label_494aa0;
        case 0x494aa4u: goto label_494aa4;
        case 0x494aa8u: goto label_494aa8;
        case 0x494aacu: goto label_494aac;
        case 0x494ab0u: goto label_494ab0;
        case 0x494ab4u: goto label_494ab4;
        case 0x494ab8u: goto label_494ab8;
        case 0x494abcu: goto label_494abc;
        case 0x494ac0u: goto label_494ac0;
        case 0x494ac4u: goto label_494ac4;
        case 0x494ac8u: goto label_494ac8;
        case 0x494accu: goto label_494acc;
        case 0x494ad0u: goto label_494ad0;
        case 0x494ad4u: goto label_494ad4;
        case 0x494ad8u: goto label_494ad8;
        case 0x494adcu: goto label_494adc;
        default: break;
    }

    ctx->pc = 0x494980u;

label_494980:
    // 0x494980: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x494980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
label_494984:
    // 0x494984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x494984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_494988:
    // 0x494988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x494988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49498c:
    // 0x49498c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49498cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_494990:
    // 0x494990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x494990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_494994:
    // 0x494994: 0xa3a404b0  sb          $a0, 0x4B0($sp)
    ctx->pc = 0x494994u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1200), (uint8_t)GPR_U32(ctx, 4));
label_494998:
    // 0x494998: 0xc125228  jal         func_4948A0
label_49499c:
    if (ctx->pc == 0x49499Cu) {
        ctx->pc = 0x4949A0u;
        goto label_4949a0;
    }
    ctx->pc = 0x494998u;
    SET_GPR_U32(ctx, 31, 0x4949A0u);
    ctx->pc = 0x4948A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4948A0u, 0x494998u, 0x4949A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4949A0u;
label_4949a0:
    // 0x4949a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4949a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4949a4:
    // 0x4949a4: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_4949a8:
    if (ctx->pc == 0x4949A8u) {
        ctx->pc = 0x4949ACu;
        goto label_4949ac;
    }
    ctx->pc = 0x4949A4u;
    {
        const bool branch_taken_0x4949a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4949a4) {
            ctx->pc = 0x494A54u;
            goto label_494a54;
        }
    }
    ctx->pc = 0x4949ACu;
label_4949ac:
    // 0x4949ac: 0x8f82b73c  lw          $v0, -0x48C4($gp)
    ctx->pc = 0x4949acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948668)));
label_4949b0:
    // 0x4949b0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4949b4:
    if (ctx->pc == 0x4949B4u) {
        ctx->pc = 0x4949B8u;
        goto label_4949b8;
    }
    ctx->pc = 0x4949B0u;
    {
        const bool branch_taken_0x4949b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4949b0) {
            ctx->pc = 0x494A54u;
            goto label_494a54;
        }
    }
    ctx->pc = 0x4949B8u;
label_4949b8:
    // 0x4949b8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4949b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4949bc:
    // 0x4949bc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4949bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4949c0:
    // 0x4949c0: 0x27a604a0  addiu       $a2, $sp, 0x4A0
    ctx->pc = 0x4949c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_4949c4:
    // 0x4949c4: 0xc115ee8  jal         func_457BA0
label_4949c8:
    if (ctx->pc == 0x4949C8u) {
        ctx->pc = 0x4949CCu;
        goto label_4949cc;
    }
    ctx->pc = 0x4949C4u;
    SET_GPR_U32(ctx, 31, 0x4949CCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4949C4u, 0x4949CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4949CCu;
label_4949cc:
    // 0x4949cc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4949d0:
    if (ctx->pc == 0x4949D0u) {
        ctx->pc = 0x4949D4u;
        goto label_4949d4;
    }
    ctx->pc = 0x4949CCu;
    {
        const bool branch_taken_0x4949cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4949cc) {
            ctx->pc = 0x494A54u;
            goto label_494a54;
        }
    }
    ctx->pc = 0x4949D4u;
label_4949d4:
    // 0x4949d4: 0x8fa204a8  lw          $v0, 0x4A8($sp)
    ctx->pc = 0x4949d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
label_4949d8:
    // 0x4949d8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4949dc:
    if (ctx->pc == 0x4949DCu) {
        ctx->pc = 0x4949E0u;
        goto label_4949e0;
    }
    ctx->pc = 0x4949D8u;
    {
        const bool branch_taken_0x4949d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4949d8) {
            ctx->pc = 0x494A54u;
            goto label_494a54;
        }
    }
    ctx->pc = 0x4949E0u;
label_4949e0:
    // 0x4949e0: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x4949e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_4949e4:
    // 0x4949e4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4949e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4949e8:
    // 0x4949e8: 0x8fa604a4  lw          $a2, 0x4A4($sp)
    ctx->pc = 0x4949e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
label_4949ec:
    // 0x4949ec: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4949ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_4949f0:
    // 0x4949f0: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x4949f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_4949f4:
    // 0x4949f4: 0x24080106  addiu       $t0, $zero, 0x106
    ctx->pc = 0x4949f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
label_4949f8:
    // 0x4949f8: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x4949f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_4949fc:
    // 0x4949fc: 0x25295300  addiu       $t1, $t1, 0x5300
    ctx->pc = 0x4949fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21248));
label_494a00:
    // 0x494a00: 0xc113940  jal         func_44E500
label_494a04:
    if (ctx->pc == 0x494A04u) {
        ctx->pc = 0x494A08u;
        goto label_494a08;
    }
    ctx->pc = 0x494A00u;
    SET_GPR_U32(ctx, 31, 0x494A08u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x494A00u, 0x494A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494A08u;
label_494a08:
    // 0x494a08: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x494a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_494a0c:
    // 0x494a0c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x494a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_494a10:
    // 0x494a10: 0x24a55310  addiu       $a1, $a1, 0x5310
    ctx->pc = 0x494a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21264));
label_494a14:
    // 0x494a14: 0xc115c24  jal         func_457090
label_494a18:
    if (ctx->pc == 0x494A18u) {
        ctx->pc = 0x494A1Cu;
        goto label_494a1c;
    }
    ctx->pc = 0x494A14u;
    SET_GPR_U32(ctx, 31, 0x494A1Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x494A14u, 0x494A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494A1Cu;
label_494a1c:
    // 0x494a1c: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x494a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_494a20:
    // 0x494a20: 0x8fa204a8  lw          $v0, 0x4A8($sp)
    ctx->pc = 0x494a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
label_494a24:
    // 0x494a24: 0x40f809  jalr        $v0
label_494a28:
    if (ctx->pc == 0x494A28u) {
        ctx->pc = 0x494A2Cu;
        goto label_494a2c;
    }
    ctx->pc = 0x494A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x494A2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494A24u, 0x494A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x494A2Cu;
label_494a2c:
    // 0x494a2c: 0xaf82b73c  sw          $v0, -0x48C4($gp)
    ctx->pc = 0x494a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948668), GPR_U32(ctx, 2));
label_494a30:
    // 0x494a30: 0x8fa20370  lw          $v0, 0x370($sp)
    ctx->pc = 0x494a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
label_494a34:
    // 0x494a34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_494a38:
    if (ctx->pc == 0x494A38u) {
        ctx->pc = 0x494A3Cu;
        goto label_494a3c;
    }
    ctx->pc = 0x494A34u;
    {
        const bool branch_taken_0x494a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494a34) {
            ctx->pc = 0x494A44u;
            goto label_494a44;
        }
    }
    ctx->pc = 0x494A3Cu;
label_494a3c:
    // 0x494a3c: 0xd  break       0
    ctx->pc = 0x494a3cu;
    runtime->handleBreak(rdram, ctx);
label_494a40:
    // 0x494a40: 0x0  nop
    ctx->pc = 0x494a40u;
    // NOP
label_494a44:
    // 0x494a44: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x494a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_494a48:
    // 0x494a48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x494a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_494a4c:
    // 0x494a4c: 0xc11392c  jal         func_44E4B0
label_494a50:
    if (ctx->pc == 0x494A50u) {
        ctx->pc = 0x494A54u;
        goto label_494a54;
    }
    ctx->pc = 0x494A4Cu;
    SET_GPR_U32(ctx, 31, 0x494A54u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x494A4Cu, 0x494A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494A54u;
label_494a54:
    // 0x494a54: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_494a58:
    if (ctx->pc == 0x494A58u) {
        ctx->pc = 0x494A5Cu;
        goto label_494a5c;
    }
    ctx->pc = 0x494A54u;
    {
        const bool branch_taken_0x494a54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x494a54) {
            ctx->pc = 0x494A68u;
            goto label_494a68;
        }
    }
    ctx->pc = 0x494A5Cu;
label_494a5c:
    // 0x494a5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x494a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_494a60:
    // 0x494a60: 0x10000016  b           . + 4 + (0x16 << 2)
label_494a64:
    if (ctx->pc == 0x494A64u) {
        ctx->pc = 0x494A68u;
        goto label_494a68;
    }
    ctx->pc = 0x494A60u;
    {
        const bool branch_taken_0x494a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494a60) {
            ctx->pc = 0x494ABCu;
            goto label_494abc;
        }
    }
    ctx->pc = 0x494A68u;
label_494a68:
    // 0x494a68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x494a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494a6c:
    // 0x494a6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x494a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494a70:
    // 0x494a70: 0x27a40490  addiu       $a0, $sp, 0x490
    ctx->pc = 0x494a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_494a74:
    // 0x494a74: 0xc0495e0  jal         func_125780
label_494a78:
    if (ctx->pc == 0x494A78u) {
        ctx->pc = 0x494A7Cu;
        goto label_494a7c;
    }
    ctx->pc = 0x494A74u;
    SET_GPR_U32(ctx, 31, 0x494A7Cu);
    ctx->pc = 0x125780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125780u, 0x494A74u, 0x494A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494A7Cu;
label_494a7c:
    // 0x494a7c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x494a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_494a80:
    // 0x494a80: 0xc048f2c  jal         func_123CB0
label_494a84:
    if (ctx->pc == 0x494A84u) {
        ctx->pc = 0x494A88u;
        goto label_494a88;
    }
    ctx->pc = 0x494A80u;
    SET_GPR_U32(ctx, 31, 0x494A88u);
    ctx->pc = 0x123CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CB0u, 0x494A80u, 0x494A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494A88u;
label_494a88:
    // 0x494a88: 0x93a204b0  lbu         $v0, 0x4B0($sp)
    ctx->pc = 0x494a88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1200)));
label_494a8c:
    // 0x494a8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_494a90:
    if (ctx->pc == 0x494A90u) {
        ctx->pc = 0x494A94u;
        goto label_494a94;
    }
    ctx->pc = 0x494A8Cu;
    {
        const bool branch_taken_0x494a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494a8c) {
            ctx->pc = 0x494AA4u;
            goto label_494aa4;
        }
    }
    ctx->pc = 0x494A94u;
label_494a94:
    // 0x494a94: 0xc1257e0  jal         func_495F80
label_494a98:
    if (ctx->pc == 0x494A98u) {
        ctx->pc = 0x494A9Cu;
        goto label_494a9c;
    }
    ctx->pc = 0x494A94u;
    SET_GPR_U32(ctx, 31, 0x494A9Cu);
    ctx->pc = 0x495F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495F80u, 0x494A94u, 0x494A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494A9Cu;
label_494a9c:
    // 0x494a9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_494aa0:
    if (ctx->pc == 0x494AA0u) {
        ctx->pc = 0x494AA4u;
        goto label_494aa4;
    }
    ctx->pc = 0x494A9Cu;
    {
        const bool branch_taken_0x494a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494a9c) {
            ctx->pc = 0x494ABCu;
            goto label_494abc;
        }
    }
    ctx->pc = 0x494AA4u;
label_494aa4:
    // 0x494aa4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x494aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_494aa8:
    // 0x494aa8: 0x8c447e74  lw          $a0, 0x7E74($v0)
    ctx->pc = 0x494aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32372)));
label_494aac:
    // 0x494aac: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x494aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_494ab0:
    // 0x494ab0: 0x8c457e78  lw          $a1, 0x7E78($v0)
    ctx->pc = 0x494ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_494ab4:
    // 0x494ab4: 0xc125834  jal         func_4960D0
label_494ab8:
    if (ctx->pc == 0x494AB8u) {
        ctx->pc = 0x494ABCu;
        goto label_494abc;
    }
    ctx->pc = 0x494AB4u;
    SET_GPR_U32(ctx, 31, 0x494ABCu);
    ctx->pc = 0x4960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4960D0u, 0x494AB4u, 0x494ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494ABCu;
label_494abc:
    // 0x494abc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x494abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_494ac0:
    // 0x494ac0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x494ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_494ac4:
    // 0x494ac4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x494ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_494ac8:
    // 0x494ac8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x494ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_494acc:
    // 0x494acc: 0x27bd04c0  addiu       $sp, $sp, 0x4C0
    ctx->pc = 0x494accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_494ad0:
    // 0x494ad0: 0x3e00008  jr          $ra
label_494ad4:
    if (ctx->pc == 0x494AD4u) {
        ctx->pc = 0x494AD8u;
        goto label_494ad8;
    }
    ctx->pc = 0x494AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494AD8u;
label_494ad8:
    // 0x494ad8: 0x0  nop
    ctx->pc = 0x494ad8u;
    // NOP
label_494adc:
    // 0x494adc: 0x0  nop
    ctx->pc = 0x494adcu;
    // NOP
    ctx->pc = 0x494ae0u;
}
