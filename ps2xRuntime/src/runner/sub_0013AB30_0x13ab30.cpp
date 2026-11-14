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

// Function: sub_0013AB30
// Address: 0x13ab30 - 0x13add0
void sub_0013AB30_0x13ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AB30_0x13ab30");
#endif

    switch (ctx->pc) {
        case 0x13aba8u: goto label_13aba8;
        case 0x13abb4u: goto label_13abb4;
        case 0x13abc0u: goto label_13abc0;
        case 0x13abccu: goto label_13abcc;
        case 0x13abe0u: goto label_13abe0;
        case 0x13abf0u: goto label_13abf0;
        case 0x13ac04u: goto label_13ac04;
        case 0x13ac28u: goto label_13ac28;
        case 0x13ac3cu: goto label_13ac3c;
        case 0x13ac58u: goto label_13ac58;
        case 0x13ac64u: goto label_13ac64;
        case 0x13ac78u: goto label_13ac78;
        case 0x13ac88u: goto label_13ac88;
        case 0x13ac9cu: goto label_13ac9c;
        case 0x13acb4u: goto label_13acb4;
        case 0x13acc4u: goto label_13acc4;
        case 0x13acd8u: goto label_13acd8;
        case 0x13acfcu: goto label_13acfc;
        case 0x13ad0cu: goto label_13ad0c;
        case 0x13ad1cu: goto label_13ad1c;
        case 0x13ad3cu: goto label_13ad3c;
        case 0x13ad54u: goto label_13ad54;
        case 0x13ad68u: goto label_13ad68;
        case 0x13ad84u: goto label_13ad84;
        default: break;
    }

    ctx->pc = 0x13ab30u;

    // 0x13ab30: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x13ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x13ab34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13ab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13ab38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13ab3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13ab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13ab40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13ab44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13ab44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13ab48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13ab4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13ab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13ab50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ab50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13ab54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ab54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ab58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ab58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ab5c: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x13ab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x13ab60: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13ab64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AB64u;
    {
        const bool branch_taken_0x13ab64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ab64) {
            ctx->pc = 0x13AB78u;
            goto label_13ab78;
        }
    }
    ctx->pc = 0x13AB6Cu;
    // 0x13ab6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ab6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab70: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x13AB70u;
    {
        const bool branch_taken_0x13ab70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab70) {
            ctx->pc = 0x13AD94u;
            goto label_13ad94;
        }
    }
    ctx->pc = 0x13AB78u;
label_13ab78:
    // 0x13ab78: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13ab7c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13ab80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AB80u;
    {
        const bool branch_taken_0x13ab80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ab80) {
            ctx->pc = 0x13AB94u;
            goto label_13ab94;
        }
    }
    ctx->pc = 0x13AB88u;
    // 0x13ab88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ab88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab8c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x13AB8Cu;
    {
        const bool branch_taken_0x13ab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ab8c) {
            ctx->pc = 0x13AD94u;
            goto label_13ad94;
        }
    }
    ctx->pc = 0x13AB94u;
label_13ab94:
    // 0x13ab94: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13ab98: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13ab9c: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x13ab9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13aba0: 0xc090864  jal         func_242190
    ctx->pc = 0x13ABA0u;
    SET_GPR_U32(ctx, 31, 0x13ABA8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x13ABA0u, 0x13ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ABA8u;
label_13aba8:
    // 0x13aba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13aba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abac: 0xc090590  jal         func_241640
    ctx->pc = 0x13ABACu;
    SET_GPR_U32(ctx, 31, 0x13ABB4u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x13ABACu, 0x13ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ABB4u;
label_13abb4:
    // 0x13abb4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x13abb4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abb8: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x13ABB8u;
    SET_GPR_U32(ctx, 31, 0x13ABC0u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x13ABB8u, 0x13ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ABC0u;
label_13abc0:
    // 0x13abc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13abc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abc4: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x13ABC4u;
    SET_GPR_U32(ctx, 31, 0x13ABCCu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x13ABC4u, 0x13ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ABCCu;
label_13abcc:
    // 0x13abcc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13abccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abd0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x13abd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13abd4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x13abd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13abd8: 0xc040304  jal         func_100C10
    ctx->pc = 0x13ABD8u;
    SET_GPR_U32(ctx, 31, 0x13ABE0u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13ABD8u, 0x13ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ABE0u;
label_13abe0:
    // 0x13abe0: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x13abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13abe4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x13abe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13abe8: 0xc04ec90  jal         func_13B240
    ctx->pc = 0x13ABE8u;
    SET_GPR_U32(ctx, 31, 0x13ABF0u);
    ctx->pc = 0x13B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B240u, 0x13ABE8u, 0x13ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ABF0u;
label_13abf0:
    // 0x13abf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13abf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13abf4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x13abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x13abf8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13abf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13abfc: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13ABFCu;
    SET_GPR_U32(ctx, 31, 0x13AC04u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13ABFCu, 0x13AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC04u;
label_13ac04:
    // 0x13ac04: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AC04u;
    {
        const bool branch_taken_0x13ac04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ac04) {
            ctx->pc = 0x13AC18u;
            goto label_13ac18;
        }
    }
    ctx->pc = 0x13AC0Cu;
    // 0x13ac0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ac0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac10: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x13AC10u;
    {
        const bool branch_taken_0x13ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ac10) {
            ctx->pc = 0x13AD94u;
            goto label_13ad94;
        }
    }
    ctx->pc = 0x13AC18u;
label_13ac18:
    // 0x13ac18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac1c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x13ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13ac20: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13AC20u;
    SET_GPR_U32(ctx, 31, 0x13AC28u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13AC20u, 0x13AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC28u;
label_13ac28:
    // 0x13ac28: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13ac28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13ac2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac30: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x13ac30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x13ac34: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13AC34u;
    SET_GPR_U32(ctx, 31, 0x13AC3Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13AC34u, 0x13AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC3Cu;
label_13ac3c:
    // 0x13ac3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13ac3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac40: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13ac44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ac48: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x13AC48u;
    {
        const bool branch_taken_0x13ac48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ac48) {
            ctx->pc = 0x13AD48u;
            goto label_13ad48;
        }
    }
    ctx->pc = 0x13AC50u;
    // 0x13ac50: 0xc090864  jal         func_242190
    ctx->pc = 0x13AC50u;
    SET_GPR_U32(ctx, 31, 0x13AC58u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x13AC50u, 0x13AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC58u;
label_13ac58:
    // 0x13ac58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13ac58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac5c: 0xc0905a0  jal         func_241680
    ctx->pc = 0x13AC5Cu;
    SET_GPR_U32(ctx, 31, 0x13AC64u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x13AC5Cu, 0x13AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC64u;
label_13ac64:
    // 0x13ac64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13ac64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac68: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13ac6c: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x13ac6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x13ac70: 0xc040304  jal         func_100C10
    ctx->pc = 0x13AC70u;
    SET_GPR_U32(ctx, 31, 0x13AC78u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13AC70u, 0x13AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC78u;
label_13ac78:
    // 0x13ac78: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x13ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13ac7c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x13ac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13ac80: 0xc04edc8  jal         func_13B720
    ctx->pc = 0x13AC80u;
    SET_GPR_U32(ctx, 31, 0x13AC88u);
    ctx->pc = 0x13B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B720u, 0x13AC80u, 0x13AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC88u;
label_13ac88:
    // 0x13ac88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13ac88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ac8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x13ac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13ac90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13ac90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13ac94: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13AC94u;
    SET_GPR_U32(ctx, 31, 0x13AC9Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13AC94u, 0x13AC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AC9Cu;
label_13ac9c:
    // 0x13ac9c: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x13AC9Cu;
    {
        const bool branch_taken_0x13ac9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ac9c) {
            ctx->pc = 0x13ACD8u;
            goto label_13acd8;
        }
    }
    ctx->pc = 0x13ACA4u;
    // 0x13aca4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13aca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13aca8: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x13aca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x13acac: 0xc040304  jal         func_100C10
    ctx->pc = 0x13ACACu;
    SET_GPR_U32(ctx, 31, 0x13ACB4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13ACACu, 0x13ACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACB4u;
label_13acb4:
    // 0x13acb4: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x13acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13acb8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x13acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13acbc: 0xc04ee44  jal         func_13B910
    ctx->pc = 0x13ACBCu;
    SET_GPR_U32(ctx, 31, 0x13ACC4u);
    ctx->pc = 0x13B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B910u, 0x13ACBCu, 0x13ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACC4u;
label_13acc4:
    // 0x13acc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13acc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13acc8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13acc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13accc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13acccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13acd0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13ACD0u;
    SET_GPR_U32(ctx, 31, 0x13ACD8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13ACD0u, 0x13ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACD8u;
label_13acd8:
    // 0x13acd8: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13ACD8u;
    {
        const bool branch_taken_0x13acd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13acd8) {
            ctx->pc = 0x13ACECu;
            goto label_13acec;
        }
    }
    ctx->pc = 0x13ACE0u;
    // 0x13ace0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ace0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ace4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x13ACE4u;
    {
        const bool branch_taken_0x13ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ace4) {
            ctx->pc = 0x13AD94u;
            goto label_13ad94;
        }
    }
    ctx->pc = 0x13ACECu;
label_13acec:
    // 0x13acec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13acecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13acf0: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x13acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x13acf4: 0xc09a364  jal         func_268D90
    ctx->pc = 0x13ACF4u;
    SET_GPR_U32(ctx, 31, 0x13ACFCu);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x13ACF4u, 0x13ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ACFCu;
label_13acfc:
    // 0x13acfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13acfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad00: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x13ad00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x13ad04: 0xc09a714  jal         func_269C50
    ctx->pc = 0x13AD04u;
    SET_GPR_U32(ctx, 31, 0x13AD0Cu);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x13AD04u, 0x13AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD0Cu;
label_13ad0c:
    // 0x13ad0c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13ad0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad10: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x13ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x13ad14: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x13AD14u;
    SET_GPR_U32(ctx, 31, 0x13AD1Cu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x13AD14u, 0x13AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD1Cu;
label_13ad1c:
    // 0x13ad1c: 0x2449ffff  addiu       $t1, $v0, -0x1
    ctx->pc = 0x13ad1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13ad20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13ad20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13ad24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13ad28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad2c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x13ad2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad30: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x13ad30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad34: 0xc0b43d8  jal         func_2D0F60
    ctx->pc = 0x13AD34u;
    SET_GPR_U32(ctx, 31, 0x13AD3Cu);
    ctx->pc = 0x2D0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F60u, 0x13AD34u, 0x13AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD3Cu;
label_13ad3c:
    // 0x13ad3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ad40: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13AD40u;
    {
        const bool branch_taken_0x13ad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ad40) {
            ctx->pc = 0x13AD94u;
            goto label_13ad94;
        }
    }
    ctx->pc = 0x13AD48u;
label_13ad48:
    // 0x13ad48: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x13ad48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad4c: 0xc0969a0  jal         func_25A680
    ctx->pc = 0x13AD4Cu;
    SET_GPR_U32(ctx, 31, 0x13AD54u);
    ctx->pc = 0x25A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A680u, 0x13AD4Cu, 0x13AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD54u;
label_13ad54:
    // 0x13ad54: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13AD54u;
    {
        const bool branch_taken_0x13ad54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ad54) {
            ctx->pc = 0x13AD90u;
            goto label_13ad90;
        }
    }
    ctx->pc = 0x13AD5Cu;
    // 0x13ad5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13ad5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad60: 0xc0ae17c  jal         func_2B85F0
    ctx->pc = 0x13AD60u;
    SET_GPR_U32(ctx, 31, 0x13AD68u);
    ctx->pc = 0x2B85F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B85F0u, 0x13AD60u, 0x13AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD68u;
label_13ad68:
    // 0x13ad68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13AD68u;
    {
        const bool branch_taken_0x13ad68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ad68) {
            ctx->pc = 0x13AD90u;
            goto label_13ad90;
        }
    }
    ctx->pc = 0x13AD70u;
    // 0x13ad70: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x13ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x13ad74: 0x248427c0  addiu       $a0, $a0, 0x27C0
    ctx->pc = 0x13ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10176));
    // 0x13ad78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ad78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ad7c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x13AD7Cu;
    SET_GPR_U32(ctx, 31, 0x13AD84u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x13AD7Cu, 0x13AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AD84u;
label_13ad84:
    // 0x13ad84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ad88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13AD88u;
    {
        const bool branch_taken_0x13ad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ad88) {
            ctx->pc = 0x13AD94u;
            goto label_13ad94;
        }
    }
    ctx->pc = 0x13AD90u;
label_13ad90:
    // 0x13ad90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ad90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ad94:
    // 0x13ad94: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13ad94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13ad98: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13ad98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13ad9c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13ad9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13ada0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13ada0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13ada4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13ada4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ada8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13ada8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13adac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13adacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13adb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13adb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13adb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13adb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13adb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13adb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13adbc: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x13adbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13adc0: 0x3e00008  jr          $ra
    ctx->pc = 0x13ADC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ADC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ADC8u;
    // 0x13adc8: 0x0  nop
    ctx->pc = 0x13adc8u;
    // NOP
    // 0x13adcc: 0x0  nop
    ctx->pc = 0x13adccu;
    // NOP
    ctx->pc = 0x13add0u;
}
