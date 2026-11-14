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

// Function: sub_001BBCD0
// Address: 0x1bbcd0 - 0x1bbf40
void sub_001BBCD0_0x1bbcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBCD0_0x1bbcd0");
#endif

    switch (ctx->pc) {
        case 0x1bbcf0u: goto label_1bbcf0;
        case 0x1bbcfcu: goto label_1bbcfc;
        case 0x1bbde8u: goto label_1bbde8;
        case 0x1bbe00u: goto label_1bbe00;
        case 0x1bbe10u: goto label_1bbe10;
        case 0x1bbe20u: goto label_1bbe20;
        case 0x1bbe30u: goto label_1bbe30;
        case 0x1bbe58u: goto label_1bbe58;
        case 0x1bbe64u: goto label_1bbe64;
        case 0x1bbe74u: goto label_1bbe74;
        case 0x1bbe84u: goto label_1bbe84;
        case 0x1bbe94u: goto label_1bbe94;
        case 0x1bbebcu: goto label_1bbebc;
        case 0x1bbec8u: goto label_1bbec8;
        case 0x1bbed8u: goto label_1bbed8;
        case 0x1bbee8u: goto label_1bbee8;
        case 0x1bbef8u: goto label_1bbef8;
        case 0x1bbf20u: goto label_1bbf20;
        default: break;
    }

    ctx->pc = 0x1bbcd0u;

    // 0x1bbcd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bbcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bbcd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bbcd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bbcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bbcdc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1bbcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1bbce0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1bbce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1bbce4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bbce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbce8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1BBCE8u;
    {
        const bool branch_taken_0x1bbce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbce8) {
            ctx->pc = 0x1BBD7Cu;
            goto label_1bbd7c;
        }
    }
    ctx->pc = 0x1BBCF0u;
label_1bbcf0:
    // 0x1bbcf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bbcf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcf4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1BBCF4u;
    {
        const bool branch_taken_0x1bbcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbcf4) {
            ctx->pc = 0x1BBD6Cu;
            goto label_1bbd6c;
        }
    }
    ctx->pc = 0x1BBCFCu;
label_1bbcfc:
    // 0x1bbcfc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1bbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bbd00: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bbd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bbd04: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1bbd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bbd08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1bbd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbd0c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1bbd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bbd10: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1bbd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bbd14: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bbd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bbd18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bbd18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bbd1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bbd20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bbd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbd24: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BBD24u;
    {
        const bool branch_taken_0x1bbd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd24) {
            ctx->pc = 0x1BBD68u;
            goto label_1bbd68;
        }
    }
    ctx->pc = 0x1BBD2Cu;
    // 0x1bbd2c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1bbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bbd30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bbd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bbd34: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1bbd34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bbd38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1bbd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbd3c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1bbd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bbd40: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1bbd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bbd44: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bbd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bbd48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bbd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bbd4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bbd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bbd50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bbd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbd54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBD54u;
    {
        const bool branch_taken_0x1bbd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd54) {
            ctx->pc = 0x1BBD68u;
            goto label_1bbd68;
        }
    }
    ctx->pc = 0x1BBD5Cu;
    // 0x1bbd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbd60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BBD60u;
    {
        const bool branch_taken_0x1bbd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd60) {
            ctx->pc = 0x1BBD8Cu;
            goto label_1bbd8c;
        }
    }
    ctx->pc = 0x1BBD68u;
label_1bbd68:
    // 0x1bbd68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bbd68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bbd6c:
    // 0x1bbd6c: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1bbd6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bbd70: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1BBD70u;
    {
        const bool branch_taken_0x1bbd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd70) {
            ctx->pc = 0x1BBCFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbcfc;
        }
    }
    ctx->pc = 0x1BBD78u;
    // 0x1bbd78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bbd78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bbd7c:
    // 0x1bbd7c: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1bbd7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bbd80: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1BBD80u;
    {
        const bool branch_taken_0x1bbd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbd80) {
            ctx->pc = 0x1BBCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbcf0;
        }
    }
    ctx->pc = 0x1BBD88u;
    // 0x1bbd88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bbd88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbd8c:
    // 0x1bbd8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbd8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbd90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbd94: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1bbd94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bbd98: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBDA0u;
    // 0x1bbda0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bbda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bbda4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bbda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bbda8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bbdac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bbdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bbdb0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1bbdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1bbdb4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1bbdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbdb8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bbdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbdbc: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1BBDBCu;
    {
        const bool branch_taken_0x1bbdbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbdbc) {
            ctx->pc = 0x1BBF20u;
            goto label_1bbf20;
        }
    }
    ctx->pc = 0x1BBDC4u;
    // 0x1bbdc4: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1bbdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1bbdc8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bbdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbdcc: 0x10030054  beq         $zero, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1BBDCCu;
    {
        const bool branch_taken_0x1bbdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bbdcc) {
            ctx->pc = 0x1BBF20u;
            goto label_1bbf20;
        }
    }
    ctx->pc = 0x1BBDD4u;
    // 0x1bbdd4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1bbdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1bbdd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bbdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbddc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1bbddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1bbde0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1BBDE0u;
    SET_GPR_U32(ctx, 31, 0x1BBDE8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1BBDE0u, 0x1BBDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBDE8u;
label_1bbde8:
    // 0x1bbde8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bbde8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdec: 0x1010004c  beq         $zero, $s0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1BBDECu;
    {
        const bool branch_taken_0x1bbdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x1bbdec) {
            ctx->pc = 0x1BBF20u;
            goto label_1bbf20;
        }
    }
    ctx->pc = 0x1BBDF4u;
    // 0x1bbdf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdf8: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1BBDF8u;
    SET_GPR_U32(ctx, 31, 0x1BBE00u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1BBDF8u, 0x1BBE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE00u;
label_1bbe00:
    // 0x1bbe00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bbe00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbe04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe08: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1BBE08u;
    SET_GPR_U32(ctx, 31, 0x1BBE10u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1BBE08u, 0x1BBE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE10u;
label_1bbe10:
    // 0x1bbe10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bbe10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe18: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1BBE18u;
    SET_GPR_U32(ctx, 31, 0x1BBE20u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1BBE18u, 0x1BBE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE20u;
label_1bbe20:
    // 0x1bbe20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bbe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbe24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe28: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1BBE28u;
    SET_GPR_U32(ctx, 31, 0x1BBE30u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1BBE28u, 0x1BBE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE30u;
label_1bbe30:
    // 0x1bbe30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bbe30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbe34: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1bbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1bbe38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bbe38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbe3c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1bbe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bbe40: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1bbe40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bbe44: 0x0  nop
    ctx->pc = 0x1bbe44u;
    // NOP
    // 0x1bbe48: 0x0  nop
    ctx->pc = 0x1bbe48u;
    // NOP
    // 0x1bbe4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bbe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bbe50: 0xc094de0  jal         func_253780
    ctx->pc = 0x1BBE50u;
    SET_GPR_U32(ctx, 31, 0x1BBE58u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1BBE50u, 0x1BBE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE58u;
label_1bbe58:
    // 0x1bbe58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe5c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1BBE5Cu;
    SET_GPR_U32(ctx, 31, 0x1BBE64u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1BBE5Cu, 0x1BBE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE64u;
label_1bbe64:
    // 0x1bbe64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bbe64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbe68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbe6c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1BBE6Cu;
    SET_GPR_U32(ctx, 31, 0x1BBE74u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1BBE6Cu, 0x1BBE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE74u;
label_1bbe74:
    // 0x1bbe74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bbe74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbe78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe7c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1BBE7Cu;
    SET_GPR_U32(ctx, 31, 0x1BBE84u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1BBE7Cu, 0x1BBE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE84u;
label_1bbe84:
    // 0x1bbe84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bbe84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbe88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbe8c: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1BBE8Cu;
    SET_GPR_U32(ctx, 31, 0x1BBE94u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1BBE8Cu, 0x1BBE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBE94u;
label_1bbe94:
    // 0x1bbe94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bbe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbe98: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1bbe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1bbe9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bbe9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbea0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1bbea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bbea4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1bbea4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bbea8: 0x0  nop
    ctx->pc = 0x1bbea8u;
    // NOP
    // 0x1bbeac: 0x0  nop
    ctx->pc = 0x1bbeacu;
    // NOP
    // 0x1bbeb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bbeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bbeb4: 0xc094de0  jal         func_253780
    ctx->pc = 0x1BBEB4u;
    SET_GPR_U32(ctx, 31, 0x1BBEBCu);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1BBEB4u, 0x1BBEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEBCu;
label_1bbebc:
    // 0x1bbebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbec0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1BBEC0u;
    SET_GPR_U32(ctx, 31, 0x1BBEC8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1BBEC0u, 0x1BBEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEC8u;
label_1bbec8:
    // 0x1bbec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bbec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbecc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bbeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bbed0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1BBED0u;
    SET_GPR_U32(ctx, 31, 0x1BBED8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1BBED0u, 0x1BBED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBED8u;
label_1bbed8:
    // 0x1bbed8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bbed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbee0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1BBEE0u;
    SET_GPR_U32(ctx, 31, 0x1BBEE8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1BBEE0u, 0x1BBEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEE8u;
label_1bbee8:
    // 0x1bbee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bbee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbeec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bbeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bbef0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1BBEF0u;
    SET_GPR_U32(ctx, 31, 0x1BBEF8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1BBEF0u, 0x1BBEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBEF8u;
label_1bbef8:
    // 0x1bbef8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bbef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbefc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1bbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1bbf00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bbf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbf04: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1bbf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bbf08: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1bbf08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1bbf0c: 0x0  nop
    ctx->pc = 0x1bbf0cu;
    // NOP
    // 0x1bbf10: 0x0  nop
    ctx->pc = 0x1bbf10u;
    // NOP
    // 0x1bbf14: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1bbf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bbf18: 0xc094de0  jal         func_253780
    ctx->pc = 0x1BBF18u;
    SET_GPR_U32(ctx, 31, 0x1BBF20u);
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x1BBF18u, 0x1BBF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF20u;
label_1bbf20:
    // 0x1bbf20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bbf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbf24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbf24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbf28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbf28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbf2c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1bbf2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bbf30: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBF38u;
    // 0x1bbf38: 0x0  nop
    ctx->pc = 0x1bbf38u;
    // NOP
    // 0x1bbf3c: 0x0  nop
    ctx->pc = 0x1bbf3cu;
    // NOP
    ctx->pc = 0x1bbf40u;
}
