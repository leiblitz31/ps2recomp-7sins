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

// Function: sub_00492EB0
// Address: 0x492eb0 - 0x492ff0
void sub_00492EB0_0x492eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492EB0_0x492eb0");
#endif

    switch (ctx->pc) {
        case 0x492eb0u: goto label_492eb0;
        case 0x492eb4u: goto label_492eb4;
        case 0x492eb8u: goto label_492eb8;
        case 0x492ebcu: goto label_492ebc;
        case 0x492ec0u: goto label_492ec0;
        case 0x492ec4u: goto label_492ec4;
        case 0x492ec8u: goto label_492ec8;
        case 0x492eccu: goto label_492ecc;
        case 0x492ed0u: goto label_492ed0;
        case 0x492ed4u: goto label_492ed4;
        case 0x492ed8u: goto label_492ed8;
        case 0x492edcu: goto label_492edc;
        case 0x492ee0u: goto label_492ee0;
        case 0x492ee4u: goto label_492ee4;
        case 0x492ee8u: goto label_492ee8;
        case 0x492eecu: goto label_492eec;
        case 0x492ef0u: goto label_492ef0;
        case 0x492ef4u: goto label_492ef4;
        case 0x492ef8u: goto label_492ef8;
        case 0x492efcu: goto label_492efc;
        case 0x492f00u: goto label_492f00;
        case 0x492f04u: goto label_492f04;
        case 0x492f08u: goto label_492f08;
        case 0x492f0cu: goto label_492f0c;
        case 0x492f10u: goto label_492f10;
        case 0x492f14u: goto label_492f14;
        case 0x492f18u: goto label_492f18;
        case 0x492f1cu: goto label_492f1c;
        case 0x492f20u: goto label_492f20;
        case 0x492f24u: goto label_492f24;
        case 0x492f28u: goto label_492f28;
        case 0x492f2cu: goto label_492f2c;
        case 0x492f30u: goto label_492f30;
        case 0x492f34u: goto label_492f34;
        case 0x492f38u: goto label_492f38;
        case 0x492f3cu: goto label_492f3c;
        case 0x492f40u: goto label_492f40;
        case 0x492f44u: goto label_492f44;
        case 0x492f48u: goto label_492f48;
        case 0x492f4cu: goto label_492f4c;
        case 0x492f50u: goto label_492f50;
        case 0x492f54u: goto label_492f54;
        case 0x492f58u: goto label_492f58;
        case 0x492f5cu: goto label_492f5c;
        case 0x492f60u: goto label_492f60;
        case 0x492f64u: goto label_492f64;
        case 0x492f68u: goto label_492f68;
        case 0x492f6cu: goto label_492f6c;
        case 0x492f70u: goto label_492f70;
        case 0x492f74u: goto label_492f74;
        case 0x492f78u: goto label_492f78;
        case 0x492f7cu: goto label_492f7c;
        case 0x492f80u: goto label_492f80;
        case 0x492f84u: goto label_492f84;
        case 0x492f88u: goto label_492f88;
        case 0x492f8cu: goto label_492f8c;
        case 0x492f90u: goto label_492f90;
        case 0x492f94u: goto label_492f94;
        case 0x492f98u: goto label_492f98;
        case 0x492f9cu: goto label_492f9c;
        case 0x492fa0u: goto label_492fa0;
        case 0x492fa4u: goto label_492fa4;
        case 0x492fa8u: goto label_492fa8;
        case 0x492facu: goto label_492fac;
        case 0x492fb0u: goto label_492fb0;
        case 0x492fb4u: goto label_492fb4;
        case 0x492fb8u: goto label_492fb8;
        case 0x492fbcu: goto label_492fbc;
        case 0x492fc0u: goto label_492fc0;
        case 0x492fc4u: goto label_492fc4;
        case 0x492fc8u: goto label_492fc8;
        case 0x492fccu: goto label_492fcc;
        case 0x492fd0u: goto label_492fd0;
        case 0x492fd4u: goto label_492fd4;
        case 0x492fd8u: goto label_492fd8;
        case 0x492fdcu: goto label_492fdc;
        case 0x492fe0u: goto label_492fe0;
        case 0x492fe4u: goto label_492fe4;
        case 0x492fe8u: goto label_492fe8;
        case 0x492fecu: goto label_492fec;
        default: break;
    }

    ctx->pc = 0x492eb0u;

label_492eb0:
    // 0x492eb0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x492eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_492eb4:
    // 0x492eb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x492eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_492eb8:
    // 0x492eb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x492eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_492ebc:
    // 0x492ebc: 0x8f82c0f4  lw          $v0, -0x3F0C($gp)
    ctx->pc = 0x492ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951156)));
label_492ec0:
    // 0x492ec0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_492ec4:
    if (ctx->pc == 0x492EC4u) {
        ctx->pc = 0x492EC8u;
        goto label_492ec8;
    }
    ctx->pc = 0x492EC0u;
    {
        const bool branch_taken_0x492ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492ec0) {
            ctx->pc = 0x492F6Cu;
            goto label_492f6c;
        }
    }
    ctx->pc = 0x492EC8u;
label_492ec8:
    // 0x492ec8: 0x8f82b704  lw          $v0, -0x48FC($gp)
    ctx->pc = 0x492ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948612)));
label_492ecc:
    // 0x492ecc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_492ed0:
    if (ctx->pc == 0x492ED0u) {
        ctx->pc = 0x492ED4u;
        goto label_492ed4;
    }
    ctx->pc = 0x492ECCu;
    {
        const bool branch_taken_0x492ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492ecc) {
            ctx->pc = 0x492F6Cu;
            goto label_492f6c;
        }
    }
    ctx->pc = 0x492ED4u;
label_492ed4:
    // 0x492ed4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x492ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_492ed8:
    // 0x492ed8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x492ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_492edc:
    // 0x492edc: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x492edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_492ee0:
    // 0x492ee0: 0xc115ee8  jal         func_457BA0
label_492ee4:
    if (ctx->pc == 0x492EE4u) {
        ctx->pc = 0x492EE8u;
        goto label_492ee8;
    }
    ctx->pc = 0x492EE0u;
    SET_GPR_U32(ctx, 31, 0x492EE8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x492EE0u, 0x492EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492EE8u;
label_492ee8:
    // 0x492ee8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_492eec:
    if (ctx->pc == 0x492EECu) {
        ctx->pc = 0x492EF0u;
        goto label_492ef0;
    }
    ctx->pc = 0x492EE8u;
    {
        const bool branch_taken_0x492ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492ee8) {
            ctx->pc = 0x492F6Cu;
            goto label_492f6c;
        }
    }
    ctx->pc = 0x492EF0u;
label_492ef0:
    // 0x492ef0: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x492ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_492ef4:
    // 0x492ef4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_492ef8:
    if (ctx->pc == 0x492EF8u) {
        ctx->pc = 0x492EFCu;
        goto label_492efc;
    }
    ctx->pc = 0x492EF4u;
    {
        const bool branch_taken_0x492ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492ef4) {
            ctx->pc = 0x492F6Cu;
            goto label_492f6c;
        }
    }
    ctx->pc = 0x492EFCu;
label_492efc:
    // 0x492efc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x492efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_492f00:
    // 0x492f00: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x492f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_492f04:
    // 0x492f04: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x492f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_492f08:
    // 0x492f08: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x492f08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_492f0c:
    // 0x492f0c: 0x24e75050  addiu       $a3, $a3, 0x5050
    ctx->pc = 0x492f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20560));
label_492f10:
    // 0x492f10: 0x240802bf  addiu       $t0, $zero, 0x2BF
    ctx->pc = 0x492f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 703));
label_492f14:
    // 0x492f14: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x492f14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_492f18:
    // 0x492f18: 0x25295070  addiu       $t1, $t1, 0x5070
    ctx->pc = 0x492f18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20592));
label_492f1c:
    // 0x492f1c: 0xc113940  jal         func_44E500
label_492f20:
    if (ctx->pc == 0x492F20u) {
        ctx->pc = 0x492F24u;
        goto label_492f24;
    }
    ctx->pc = 0x492F1Cu;
    SET_GPR_U32(ctx, 31, 0x492F24u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x492F1Cu, 0x492F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492F24u;
label_492f24:
    // 0x492f24: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x492f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_492f28:
    // 0x492f28: 0x2785b6e0  addiu       $a1, $gp, -0x4920
    ctx->pc = 0x492f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948576));
label_492f2c:
    // 0x492f2c: 0xc115c24  jal         func_457090
label_492f30:
    if (ctx->pc == 0x492F30u) {
        ctx->pc = 0x492F34u;
        goto label_492f34;
    }
    ctx->pc = 0x492F2Cu;
    SET_GPR_U32(ctx, 31, 0x492F34u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x492F2Cu, 0x492F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492F34u;
label_492f34:
    // 0x492f34: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x492f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_492f38:
    // 0x492f38: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x492f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_492f3c:
    // 0x492f3c: 0x40f809  jalr        $v0
label_492f40:
    if (ctx->pc == 0x492F40u) {
        ctx->pc = 0x492F44u;
        goto label_492f44;
    }
    ctx->pc = 0x492F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x492F44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492F3Cu, 0x492F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x492F44u;
label_492f44:
    // 0x492f44: 0xaf82b704  sw          $v0, -0x48FC($gp)
    ctx->pc = 0x492f44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948612), GPR_U32(ctx, 2));
label_492f48:
    // 0x492f48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x492f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_492f4c:
    // 0x492f4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_492f50:
    if (ctx->pc == 0x492F50u) {
        ctx->pc = 0x492F54u;
        goto label_492f54;
    }
    ctx->pc = 0x492F4Cu;
    {
        const bool branch_taken_0x492f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492f4c) {
            ctx->pc = 0x492F5Cu;
            goto label_492f5c;
        }
    }
    ctx->pc = 0x492F54u;
label_492f54:
    // 0x492f54: 0xd  break       0
    ctx->pc = 0x492f54u;
    runtime->handleBreak(rdram, ctx);
label_492f58:
    // 0x492f58: 0x0  nop
    ctx->pc = 0x492f58u;
    // NOP
label_492f5c:
    // 0x492f5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x492f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_492f60:
    // 0x492f60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x492f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_492f64:
    // 0x492f64: 0xc11392c  jal         func_44E4B0
label_492f68:
    if (ctx->pc == 0x492F68u) {
        ctx->pc = 0x492F6Cu;
        goto label_492f6c;
    }
    ctx->pc = 0x492F64u;
    SET_GPR_U32(ctx, 31, 0x492F6Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x492F64u, 0x492F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492F6Cu;
label_492f6c:
    // 0x492f6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x492f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_492f70:
    // 0x492f70: 0x10000011  b           . + 4 + (0x11 << 2)
label_492f74:
    if (ctx->pc == 0x492F74u) {
        ctx->pc = 0x492F78u;
        goto label_492f78;
    }
    ctx->pc = 0x492F70u;
    {
        const bool branch_taken_0x492f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x492f70) {
            ctx->pc = 0x492FB8u;
            goto label_492fb8;
        }
    }
    ctx->pc = 0x492F78u;
label_492f78:
    // 0x492f78: 0x8f84c0f8  lw          $a0, -0x3F08($gp)
    ctx->pc = 0x492f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951160)));
label_492f7c:
    // 0x492f7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x492f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_492f80:
    // 0x492f80: 0xc124a80  jal         func_492A00
label_492f84:
    if (ctx->pc == 0x492F84u) {
        ctx->pc = 0x492F88u;
        goto label_492f88;
    }
    ctx->pc = 0x492F80u;
    SET_GPR_U32(ctx, 31, 0x492F88u);
    ctx->pc = 0x492A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492A00u, 0x492F80u, 0x492F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492F88u;
label_492f88:
    // 0x492f88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x492f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_492f8c:
    // 0x492f8c: 0x2c41001f  sltiu       $at, $v0, 0x1F
    ctx->pc = 0x492f8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_492f90:
    // 0x492f90: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_492f94:
    if (ctx->pc == 0x492F94u) {
        ctx->pc = 0x492F98u;
        goto label_492f98;
    }
    ctx->pc = 0x492F90u;
    {
        const bool branch_taken_0x492f90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x492f90) {
            ctx->pc = 0x492FB4u;
            goto label_492fb4;
        }
    }
    ctx->pc = 0x492F98u;
label_492f98:
    // 0x492f98: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x492f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_492f9c:
    // 0x492f9c: 0x24631d50  addiu       $v1, $v1, 0x1D50
    ctx->pc = 0x492f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7504));
label_492fa0:
    // 0x492fa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x492fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_492fa4:
    // 0x492fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x492fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_492fa8:
    // 0x492fa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x492fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_492fac:
    // 0x492fac: 0x400008  jr          $v0
label_492fb0:
    if (ctx->pc == 0x492FB0u) {
        ctx->pc = 0x492FB4u;
        goto label_492fb4;
    }
    ctx->pc = 0x492FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x492FB4u: goto label_492fb4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492FACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x492FB4u;
label_492fb4:
    // 0x492fb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x492fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_492fb8:
    // 0x492fb8: 0x8f84c0f8  lw          $a0, -0x3F08($gp)
    ctx->pc = 0x492fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951160)));
label_492fbc:
    // 0x492fbc: 0xc124528  jal         func_4914A0
label_492fc0:
    if (ctx->pc == 0x492FC0u) {
        ctx->pc = 0x492FC4u;
        goto label_492fc4;
    }
    ctx->pc = 0x492FBCu;
    SET_GPR_U32(ctx, 31, 0x492FC4u);
    ctx->pc = 0x4914A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4914A0u, 0x492FBCu, 0x492FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492FC4u;
label_492fc4:
    // 0x492fc4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x492fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_492fc8:
    // 0x492fc8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_492fcc:
    if (ctx->pc == 0x492FCCu) {
        ctx->pc = 0x492FD0u;
        goto label_492fd0;
    }
    ctx->pc = 0x492FC8u;
    {
        const bool branch_taken_0x492fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492fc8) {
            ctx->pc = 0x492F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_492f78;
        }
    }
    ctx->pc = 0x492FD0u;
label_492fd0:
    // 0x492fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x492fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_492fd4:
    // 0x492fd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x492fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_492fd8:
    // 0x492fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x492fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_492fdc:
    // 0x492fdc: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x492fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_492fe0:
    // 0x492fe0: 0x3e00008  jr          $ra
label_492fe4:
    if (ctx->pc == 0x492FE4u) {
        ctx->pc = 0x492FE8u;
        goto label_492fe8;
    }
    ctx->pc = 0x492FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x492FE8u;
label_492fe8:
    // 0x492fe8: 0x0  nop
    ctx->pc = 0x492fe8u;
    // NOP
label_492fec:
    // 0x492fec: 0x0  nop
    ctx->pc = 0x492fecu;
    // NOP
    ctx->pc = 0x492ff0u;
}
