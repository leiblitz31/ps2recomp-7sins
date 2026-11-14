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

// Function: sub_0022EBF0
// Address: 0x22ebf0 - 0x22ed50
void sub_0022EBF0_0x22ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EBF0_0x22ebf0");
#endif

    switch (ctx->pc) {
        case 0x22ec24u: goto label_22ec24;
        case 0x22ec38u: goto label_22ec38;
        case 0x22ec5cu: goto label_22ec5c;
        case 0x22ec84u: goto label_22ec84;
        case 0x22eca8u: goto label_22eca8;
        case 0x22ecd0u: goto label_22ecd0;
        case 0x22ed00u: goto label_22ed00;
        case 0x22ed10u: goto label_22ed10;
        case 0x22ed34u: goto label_22ed34;
        default: break;
    }

    ctx->pc = 0x22ebf0u;

    // 0x22ebf0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22ebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22ebf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22ebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22ebf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22ebfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ebfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22ec00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ec00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22ec04: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x22ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x22ec08: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x22ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x22ec0c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x22ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x22ec10: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x22ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x22ec14: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x22ec14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x22ec18: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x22ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ec1c: 0xc08bbc4  jal         func_22EF10
    ctx->pc = 0x22EC1Cu;
    SET_GPR_U32(ctx, 31, 0x22EC24u);
    ctx->pc = 0x22EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EF10u, 0x22EC1Cu, 0x22EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC24u;
label_22ec24:
    // 0x22ec24: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x22ec28: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x22ec28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x22ec2c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x22ec30: 0xc041954  jal         func_106550
    ctx->pc = 0x22EC30u;
    SET_GPR_U32(ctx, 31, 0x22EC38u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x22EC30u, 0x22EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC38u;
label_22ec38:
    // 0x22ec38: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x22ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x22ec3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ec40: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22ec40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ec44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x22ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ec48: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x22ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22ec4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22ec4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ec50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec54: 0xc08ca0c  jal         func_232830
    ctx->pc = 0x22EC54u;
    SET_GPR_U32(ctx, 31, 0x22EC5Cu);
    ctx->pc = 0x232830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232830u, 0x22EC54u, 0x22EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC5Cu;
label_22ec5c:
    // 0x22ec5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22ec5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec60: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x22ec60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec64: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x22ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ec68: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x22ec68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ec6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22ec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22ec70: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x22ec70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ec74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22ec74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec78: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x22ec78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x22ec7c: 0xc08bba4  jal         func_22EE90
    ctx->pc = 0x22EC7Cu;
    SET_GPR_U32(ctx, 31, 0x22EC84u);
    ctx->pc = 0x22EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EE90u, 0x22EC7Cu, 0x22EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EC84u;
label_22ec84:
    // 0x22ec84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ec84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec88: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x22ec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22ec8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ec90: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22EC90u;
    {
        const bool branch_taken_0x22ec90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22ec90) {
            ctx->pc = 0x22ECB4u;
            goto label_22ecb4;
        }
    }
    ctx->pc = 0x22EC98u;
    // 0x22ec98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ec98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ec9c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x22ec9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22eca0: 0xc08bbd4  jal         func_22EF50
    ctx->pc = 0x22ECA0u;
    SET_GPR_U32(ctx, 31, 0x22ECA8u);
    ctx->pc = 0x22EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EF50u, 0x22ECA0u, 0x22ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECA8u;
label_22eca8:
    // 0x22eca8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x22eca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x22ecac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22ECACu;
    {
        const bool branch_taken_0x22ecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ecac) {
            ctx->pc = 0x22ECD4u;
            goto label_22ecd4;
        }
    }
    ctx->pc = 0x22ECB4u;
label_22ecb4:
    // 0x22ecb4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x22ecb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ecb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ecb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ecbc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x22ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22ecc0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x22ecc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22ecc4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x22ecc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x22ecc8: 0xc08bb84  jal         func_22EE10
    ctx->pc = 0x22ECC8u;
    SET_GPR_U32(ctx, 31, 0x22ECD0u);
    ctx->pc = 0x22EE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EE10u, 0x22ECC8u, 0x22ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ECD0u;
label_22ecd0:
    // 0x22ecd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ecd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ecd4:
    // 0x22ecd4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x22ecd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22ecd8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22ECD8u;
    {
        const bool branch_taken_0x22ecd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ecd8) {
            ctx->pc = 0x22ED04u;
            goto label_22ed04;
        }
    }
    ctx->pc = 0x22ECE0u;
    // 0x22ece0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x22ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ece4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x22ece4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ece8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x22ece8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ecec: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22ececu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22ecf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22ecf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ecf4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x22ecf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22ecf8: 0xc08bba4  jal         func_22EE90
    ctx->pc = 0x22ECF8u;
    SET_GPR_U32(ctx, 31, 0x22ED00u);
    ctx->pc = 0x22EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EE90u, 0x22ECF8u, 0x22ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED00u;
label_22ed00:
    // 0x22ed00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ed00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22ed04:
    // 0x22ed04: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x22ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ed08: 0xc08bb68  jal         func_22EDA0
    ctx->pc = 0x22ED08u;
    SET_GPR_U32(ctx, 31, 0x22ED10u);
    ctx->pc = 0x22EDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EDA0u, 0x22ED08u, 0x22ED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED10u;
label_22ed10:
    // 0x22ed10: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x22ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x22ed14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x22ed18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22ed1c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x22ed1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x22ed20: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x22ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ed24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22ed24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22ed28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed2c: 0xc08bb54  jal         func_22ED50
    ctx->pc = 0x22ED2Cu;
    SET_GPR_U32(ctx, 31, 0x22ED34u);
    ctx->pc = 0x22ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED50u, 0x22ED2Cu, 0x22ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED34u;
label_22ed34:
    // 0x22ed34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22ed34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ed38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ed38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ed3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ed3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ed40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ed40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ed44: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x22ed44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x22ed48: 0x3e00008  jr          $ra
    ctx->pc = 0x22ED48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ED48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ED50u;
}
