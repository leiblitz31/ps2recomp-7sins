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

// Function: sub_00490FA0
// Address: 0x490fa0 - 0x4910e0
void sub_00490FA0_0x490fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490FA0_0x490fa0");
#endif

    switch (ctx->pc) {
        case 0x490fa0u: goto label_490fa0;
        case 0x490fa4u: goto label_490fa4;
        case 0x490fa8u: goto label_490fa8;
        case 0x490facu: goto label_490fac;
        case 0x490fb0u: goto label_490fb0;
        case 0x490fb4u: goto label_490fb4;
        case 0x490fb8u: goto label_490fb8;
        case 0x490fbcu: goto label_490fbc;
        case 0x490fc0u: goto label_490fc0;
        case 0x490fc4u: goto label_490fc4;
        case 0x490fc8u: goto label_490fc8;
        case 0x490fccu: goto label_490fcc;
        case 0x490fd0u: goto label_490fd0;
        case 0x490fd4u: goto label_490fd4;
        case 0x490fd8u: goto label_490fd8;
        case 0x490fdcu: goto label_490fdc;
        case 0x490fe0u: goto label_490fe0;
        case 0x490fe4u: goto label_490fe4;
        case 0x490fe8u: goto label_490fe8;
        case 0x490fecu: goto label_490fec;
        case 0x490ff0u: goto label_490ff0;
        case 0x490ff4u: goto label_490ff4;
        case 0x490ff8u: goto label_490ff8;
        case 0x490ffcu: goto label_490ffc;
        case 0x491000u: goto label_491000;
        case 0x491004u: goto label_491004;
        case 0x491008u: goto label_491008;
        case 0x49100cu: goto label_49100c;
        case 0x491010u: goto label_491010;
        case 0x491014u: goto label_491014;
        case 0x491018u: goto label_491018;
        case 0x49101cu: goto label_49101c;
        case 0x491020u: goto label_491020;
        case 0x491024u: goto label_491024;
        case 0x491028u: goto label_491028;
        case 0x49102cu: goto label_49102c;
        case 0x491030u: goto label_491030;
        case 0x491034u: goto label_491034;
        case 0x491038u: goto label_491038;
        case 0x49103cu: goto label_49103c;
        case 0x491040u: goto label_491040;
        case 0x491044u: goto label_491044;
        case 0x491048u: goto label_491048;
        case 0x49104cu: goto label_49104c;
        case 0x491050u: goto label_491050;
        case 0x491054u: goto label_491054;
        case 0x491058u: goto label_491058;
        case 0x49105cu: goto label_49105c;
        case 0x491060u: goto label_491060;
        case 0x491064u: goto label_491064;
        case 0x491068u: goto label_491068;
        case 0x49106cu: goto label_49106c;
        case 0x491070u: goto label_491070;
        case 0x491074u: goto label_491074;
        case 0x491078u: goto label_491078;
        case 0x49107cu: goto label_49107c;
        case 0x491080u: goto label_491080;
        case 0x491084u: goto label_491084;
        case 0x491088u: goto label_491088;
        case 0x49108cu: goto label_49108c;
        case 0x491090u: goto label_491090;
        case 0x491094u: goto label_491094;
        case 0x491098u: goto label_491098;
        case 0x49109cu: goto label_49109c;
        case 0x4910a0u: goto label_4910a0;
        case 0x4910a4u: goto label_4910a4;
        case 0x4910a8u: goto label_4910a8;
        case 0x4910acu: goto label_4910ac;
        case 0x4910b0u: goto label_4910b0;
        case 0x4910b4u: goto label_4910b4;
        case 0x4910b8u: goto label_4910b8;
        case 0x4910bcu: goto label_4910bc;
        case 0x4910c0u: goto label_4910c0;
        case 0x4910c4u: goto label_4910c4;
        case 0x4910c8u: goto label_4910c8;
        case 0x4910ccu: goto label_4910cc;
        case 0x4910d0u: goto label_4910d0;
        case 0x4910d4u: goto label_4910d4;
        case 0x4910d8u: goto label_4910d8;
        case 0x4910dcu: goto label_4910dc;
        default: break;
    }

    ctx->pc = 0x490fa0u;

label_490fa0:
    // 0x490fa0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x490fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_490fa4:
    // 0x490fa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x490fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_490fa8:
    // 0x490fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x490fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_490fac:
    // 0x490fac: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x490facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
label_490fb0:
    // 0x490fb0: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x490fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
label_490fb4:
    // 0x490fb4: 0x8f82c0f4  lw          $v0, -0x3F0C($gp)
    ctx->pc = 0x490fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951156)));
label_490fb8:
    // 0x490fb8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_490fbc:
    if (ctx->pc == 0x490FBCu) {
        ctx->pc = 0x490FC0u;
        goto label_490fc0;
    }
    ctx->pc = 0x490FB8u;
    {
        const bool branch_taken_0x490fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x490fb8) {
            ctx->pc = 0x491064u;
            goto label_491064;
        }
    }
    ctx->pc = 0x490FC0u;
label_490fc0:
    // 0x490fc0: 0x8f82b6dc  lw          $v0, -0x4924($gp)
    ctx->pc = 0x490fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948572)));
label_490fc4:
    // 0x490fc4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_490fc8:
    if (ctx->pc == 0x490FC8u) {
        ctx->pc = 0x490FCCu;
        goto label_490fcc;
    }
    ctx->pc = 0x490FC4u;
    {
        const bool branch_taken_0x490fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490fc4) {
            ctx->pc = 0x491064u;
            goto label_491064;
        }
    }
    ctx->pc = 0x490FCCu;
label_490fcc:
    // 0x490fcc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x490fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_490fd0:
    // 0x490fd0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x490fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_490fd4:
    // 0x490fd4: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x490fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_490fd8:
    // 0x490fd8: 0xc115ee8  jal         func_457BA0
label_490fdc:
    if (ctx->pc == 0x490FDCu) {
        ctx->pc = 0x490FE0u;
        goto label_490fe0;
    }
    ctx->pc = 0x490FD8u;
    SET_GPR_U32(ctx, 31, 0x490FE0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x490FD8u, 0x490FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490FE0u;
label_490fe0:
    // 0x490fe0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_490fe4:
    if (ctx->pc == 0x490FE4u) {
        ctx->pc = 0x490FE8u;
        goto label_490fe8;
    }
    ctx->pc = 0x490FE0u;
    {
        const bool branch_taken_0x490fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490fe0) {
            ctx->pc = 0x491064u;
            goto label_491064;
        }
    }
    ctx->pc = 0x490FE8u;
label_490fe8:
    // 0x490fe8: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x490fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_490fec:
    // 0x490fec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_490ff0:
    if (ctx->pc == 0x490FF0u) {
        ctx->pc = 0x490FF4u;
        goto label_490ff4;
    }
    ctx->pc = 0x490FECu;
    {
        const bool branch_taken_0x490fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490fec) {
            ctx->pc = 0x491064u;
            goto label_491064;
        }
    }
    ctx->pc = 0x490FF4u;
label_490ff4:
    // 0x490ff4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x490ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_490ff8:
    // 0x490ff8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x490ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_490ffc:
    // 0x490ffc: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x490ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_491000:
    // 0x491000: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x491000u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_491004:
    // 0x491004: 0x24e75050  addiu       $a3, $a3, 0x5050
    ctx->pc = 0x491004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20560));
label_491008:
    // 0x491008: 0x240800a1  addiu       $t0, $zero, 0xA1
    ctx->pc = 0x491008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_49100c:
    // 0x49100c: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x49100cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_491010:
    // 0x491010: 0x25295070  addiu       $t1, $t1, 0x5070
    ctx->pc = 0x491010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20592));
label_491014:
    // 0x491014: 0xc113940  jal         func_44E500
label_491018:
    if (ctx->pc == 0x491018u) {
        ctx->pc = 0x49101Cu;
        goto label_49101c;
    }
    ctx->pc = 0x491014u;
    SET_GPR_U32(ctx, 31, 0x49101Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x491014u, 0x49101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49101Cu;
label_49101c:
    // 0x49101c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x49101cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491020:
    // 0x491020: 0x2785b6e0  addiu       $a1, $gp, -0x4920
    ctx->pc = 0x491020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948576));
label_491024:
    // 0x491024: 0xc115c24  jal         func_457090
label_491028:
    if (ctx->pc == 0x491028u) {
        ctx->pc = 0x49102Cu;
        goto label_49102c;
    }
    ctx->pc = 0x491024u;
    SET_GPR_U32(ctx, 31, 0x49102Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x491024u, 0x49102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49102Cu;
label_49102c:
    // 0x49102c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x49102cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491030:
    // 0x491030: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x491030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_491034:
    // 0x491034: 0x40f809  jalr        $v0
label_491038:
    if (ctx->pc == 0x491038u) {
        ctx->pc = 0x49103Cu;
        goto label_49103c;
    }
    ctx->pc = 0x491034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49103Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491034u, 0x49103Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49103Cu;
label_49103c:
    // 0x49103c: 0xaf82b6dc  sw          $v0, -0x4924($gp)
    ctx->pc = 0x49103cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948572), GPR_U32(ctx, 2));
label_491040:
    // 0x491040: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x491040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_491044:
    // 0x491044: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_491048:
    if (ctx->pc == 0x491048u) {
        ctx->pc = 0x49104Cu;
        goto label_49104c;
    }
    ctx->pc = 0x491044u;
    {
        const bool branch_taken_0x491044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491044) {
            ctx->pc = 0x491054u;
            goto label_491054;
        }
    }
    ctx->pc = 0x49104Cu;
label_49104c:
    // 0x49104c: 0xd  break       0
    ctx->pc = 0x49104cu;
    runtime->handleBreak(rdram, ctx);
label_491050:
    // 0x491050: 0x0  nop
    ctx->pc = 0x491050u;
    // NOP
label_491054:
    // 0x491054: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x491054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_491058:
    // 0x491058: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x491058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_49105c:
    // 0x49105c: 0xc11392c  jal         func_44E4B0
label_491060:
    if (ctx->pc == 0x491060u) {
        ctx->pc = 0x491064u;
        goto label_491064;
    }
    ctx->pc = 0x49105Cu;
    SET_GPR_U32(ctx, 31, 0x491064u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x49105Cu, 0x491064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491064u;
label_491064:
    // 0x491064: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x491064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_491068:
    // 0x491068: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_49106c:
    if (ctx->pc == 0x49106Cu) {
        ctx->pc = 0x491070u;
        goto label_491070;
    }
    ctx->pc = 0x491068u;
    {
        const bool branch_taken_0x491068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491068) {
            ctx->pc = 0x49107Cu;
            goto label_49107c;
        }
    }
    ctx->pc = 0x491070u;
label_491070:
    // 0x491070: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x491070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_491074:
    // 0x491074: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_491078:
    if (ctx->pc == 0x491078u) {
        ctx->pc = 0x49107Cu;
        goto label_49107c;
    }
    ctx->pc = 0x491074u;
    {
        const bool branch_taken_0x491074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491074) {
            ctx->pc = 0x491088u;
            goto label_491088;
        }
    }
    ctx->pc = 0x49107Cu;
label_49107c:
    // 0x49107c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x49107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_491080:
    // 0x491080: 0x10000010  b           . + 4 + (0x10 << 2)
label_491084:
    if (ctx->pc == 0x491084u) {
        ctx->pc = 0x491088u;
        goto label_491088;
    }
    ctx->pc = 0x491080u;
    {
        const bool branch_taken_0x491080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491080) {
            ctx->pc = 0x4910C4u;
            goto label_4910c4;
        }
    }
    ctx->pc = 0x491088u;
label_491088:
    // 0x491088: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x491088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49108c:
    // 0x49108c: 0x10000008  b           . + 4 + (0x8 << 2)
label_491090:
    if (ctx->pc == 0x491090u) {
        ctx->pc = 0x491094u;
        goto label_491094;
    }
    ctx->pc = 0x49108Cu;
    {
        const bool branch_taken_0x49108c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49108c) {
            ctx->pc = 0x4910B0u;
            goto label_4910b0;
        }
    }
    ctx->pc = 0x491094u;
label_491094:
    // 0x491094: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x491094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_491098:
    // 0x491098: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x491098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_49109c:
    // 0x49109c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x49109cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4910a0:
    // 0x4910a0: 0x8f84c0f8  lw          $a0, -0x3F08($gp)
    ctx->pc = 0x4910a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951160)));
label_4910a4:
    // 0x4910a4: 0xc124438  jal         func_4910E0
label_4910a8:
    if (ctx->pc == 0x4910A8u) {
        ctx->pc = 0x4910ACu;
        goto label_4910ac;
    }
    ctx->pc = 0x4910A4u;
    SET_GPR_U32(ctx, 31, 0x4910ACu);
    ctx->pc = 0x4910E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4910E0u, 0x4910A4u, 0x4910ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4910ACu;
label_4910ac:
    // 0x4910ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4910acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4910b0:
    // 0x4910b0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4910b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4910b4:
    // 0x4910b4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4910b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4910b8:
    // 0x4910b8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_4910bc:
    if (ctx->pc == 0x4910BCu) {
        ctx->pc = 0x4910C0u;
        goto label_4910c0;
    }
    ctx->pc = 0x4910B8u;
    {
        const bool branch_taken_0x4910b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4910b8) {
            ctx->pc = 0x491094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_491094;
        }
    }
    ctx->pc = 0x4910C0u;
label_4910c0:
    // 0x4910c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4910c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4910c4:
    // 0x4910c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4910c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4910c8:
    // 0x4910c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4910c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4910cc:
    // 0x4910cc: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x4910ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4910d0:
    // 0x4910d0: 0x3e00008  jr          $ra
label_4910d4:
    if (ctx->pc == 0x4910D4u) {
        ctx->pc = 0x4910D8u;
        goto label_4910d8;
    }
    ctx->pc = 0x4910D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4910D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4910D8u;
label_4910d8:
    // 0x4910d8: 0x0  nop
    ctx->pc = 0x4910d8u;
    // NOP
label_4910dc:
    // 0x4910dc: 0x0  nop
    ctx->pc = 0x4910dcu;
    // NOP
    ctx->pc = 0x4910e0u;
}
