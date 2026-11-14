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

// Function: sub_0025AA70
// Address: 0x25aa70 - 0x25ab40
void sub_0025AA70_0x25aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AA70_0x25aa70");
#endif

    switch (ctx->pc) {
        case 0x25aaa0u: goto label_25aaa0;
        case 0x25aaacu: goto label_25aaac;
        case 0x25aac8u: goto label_25aac8;
        case 0x25aae8u: goto label_25aae8;
        case 0x25aafcu: goto label_25aafc;
        case 0x25ab18u: goto label_25ab18;
        default: break;
    }

    ctx->pc = 0x25aa70u;

    // 0x25aa70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25aa74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25aa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25aa78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25aa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25aa7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25aa80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25aa84: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25aa88: 0x10030025  beq         $zero, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x25AA88u;
    {
        const bool branch_taken_0x25aa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x25aa88) {
            ctx->pc = 0x25AB20u;
            goto label_25ab20;
        }
    }
    ctx->pc = 0x25AA90u;
    // 0x25aa90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25aa94: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x25aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x25aa98: 0xc095a2c  jal         func_2568B0
    ctx->pc = 0x25AA98u;
    SET_GPR_U32(ctx, 31, 0x25AAA0u);
    ctx->pc = 0x2568B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2568B0u, 0x25AA98u, 0x25AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AAA0u;
label_25aaa0:
    // 0x25aaa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25aaa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aaa4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25AAA4u;
    {
        const bool branch_taken_0x25aaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aaa4) {
            ctx->pc = 0x25AB08u;
            goto label_25ab08;
        }
    }
    ctx->pc = 0x25AAACu;
label_25aaac:
    // 0x25aaac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25aab0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25aab4: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25AAB4u;
    {
        const bool branch_taken_0x25aab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25aab4) {
            ctx->pc = 0x25AB04u;
            goto label_25ab04;
        }
    }
    ctx->pc = 0x25AABCu;
    // 0x25aabc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25aac0: 0xc096ad0  jal         func_25AB40
    ctx->pc = 0x25AAC0u;
    SET_GPR_U32(ctx, 31, 0x25AAC8u);
    ctx->pc = 0x25AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AB40u, 0x25AAC0u, 0x25AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AAC8u;
label_25aac8:
    // 0x25aac8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x25aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25aacc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25AACCu;
    {
        const bool branch_taken_0x25aacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x25aacc) {
            ctx->pc = 0x25AADCu;
            goto label_25aadc;
        }
    }
    ctx->pc = 0x25AAD4u;
    // 0x25aad4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25aad8: 0xac40010c  sw          $zero, 0x10C($v0)
    ctx->pc = 0x25aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 0));
label_25aadc:
    // 0x25aadc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x25aae0: 0xc08cd4c  jal         func_233530
    ctx->pc = 0x25AAE0u;
    SET_GPR_U32(ctx, 31, 0x25AAE8u);
    ctx->pc = 0x233530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233530u, 0x25AAE0u, 0x25AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AAE8u;
label_25aae8:
    // 0x25aae8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25aaec: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x25aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x25aaf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25aaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aaf4: 0xc096a34  jal         func_25A8D0
    ctx->pc = 0x25AAF4u;
    SET_GPR_U32(ctx, 31, 0x25AAFCu);
    ctx->pc = 0x25A8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8D0u, 0x25AAF4u, 0x25AAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AAFCu;
label_25aafc:
    // 0x25aafc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25AAFCu;
    {
        const bool branch_taken_0x25aafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25aafc) {
            ctx->pc = 0x25AB20u;
            goto label_25ab20;
        }
    }
    ctx->pc = 0x25AB04u;
label_25ab04:
    // 0x25ab04: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x25ab04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_25ab08:
    // 0x25ab08: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ab0c: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x25ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x25ab10: 0xc095a24  jal         func_256890
    ctx->pc = 0x25AB10u;
    SET_GPR_U32(ctx, 31, 0x25AB18u);
    ctx->pc = 0x256890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256890u, 0x25AB10u, 0x25AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB18u;
label_25ab18:
    // 0x25ab18: 0x1602ffe4  bne         $s0, $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x25AB18u;
    {
        const bool branch_taken_0x25ab18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ab18) {
            ctx->pc = 0x25AAACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25aaac;
        }
    }
    ctx->pc = 0x25AB20u;
label_25ab20:
    // 0x25ab20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25ab20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ab24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ab24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ab28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25ab28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25ab2c: 0x3e00008  jr          $ra
    ctx->pc = 0x25AB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AB34u;
    // 0x25ab34: 0x0  nop
    ctx->pc = 0x25ab34u;
    // NOP
    // 0x25ab38: 0x0  nop
    ctx->pc = 0x25ab38u;
    // NOP
    // 0x25ab3c: 0x0  nop
    ctx->pc = 0x25ab3cu;
    // NOP
    ctx->pc = 0x25ab40u;
}
