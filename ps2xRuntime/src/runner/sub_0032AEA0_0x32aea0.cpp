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

// Function: sub_0032AEA0
// Address: 0x32aea0 - 0x32af38
void sub_0032AEA0_0x32aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AEA0_0x32aea0");
#endif

    switch (ctx->pc) {
        case 0x32aea0u: goto label_32aea0;
        case 0x32aea4u: goto label_32aea4;
        case 0x32aea8u: goto label_32aea8;
        case 0x32aeacu: goto label_32aeac;
        case 0x32aeb0u: goto label_32aeb0;
        case 0x32aeb4u: goto label_32aeb4;
        case 0x32aeb8u: goto label_32aeb8;
        case 0x32aebcu: goto label_32aebc;
        case 0x32aec0u: goto label_32aec0;
        case 0x32aec4u: goto label_32aec4;
        case 0x32aec8u: goto label_32aec8;
        case 0x32aeccu: goto label_32aecc;
        case 0x32aed0u: goto label_32aed0;
        case 0x32aed4u: goto label_32aed4;
        case 0x32aed8u: goto label_32aed8;
        case 0x32aedcu: goto label_32aedc;
        case 0x32aee0u: goto label_32aee0;
        case 0x32aee4u: goto label_32aee4;
        case 0x32aee8u: goto label_32aee8;
        case 0x32aeecu: goto label_32aeec;
        case 0x32aef0u: goto label_32aef0;
        case 0x32aef4u: goto label_32aef4;
        case 0x32aef8u: goto label_32aef8;
        case 0x32aefcu: goto label_32aefc;
        case 0x32af00u: goto label_32af00;
        case 0x32af04u: goto label_32af04;
        case 0x32af08u: goto label_32af08;
        case 0x32af0cu: goto label_32af0c;
        case 0x32af10u: goto label_32af10;
        case 0x32af14u: goto label_32af14;
        case 0x32af18u: goto label_32af18;
        case 0x32af1cu: goto label_32af1c;
        case 0x32af20u: goto label_32af20;
        case 0x32af24u: goto label_32af24;
        case 0x32af28u: goto label_32af28;
        case 0x32af2cu: goto label_32af2c;
        case 0x32af30u: goto label_32af30;
        case 0x32af34u: goto label_32af34;
        default: break;
    }

    ctx->pc = 0x32aea0u;

label_32aea0:
    // 0x32aea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32aea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_32aea4:
    // 0x32aea4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32aea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_32aea8:
    // 0x32aea8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_32aeac:
    // 0x32aeac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32aeacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32aeb0:
    // 0x32aeb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32aeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_32aeb4:
    // 0x32aeb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32aeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32aeb8:
    // 0x32aeb8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32aebc:
    // 0x32aebc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_32aec0:
    if (ctx->pc == 0x32AEC0u) {
        ctx->pc = 0x32AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEBCu;
        // 0x32aec0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEC4u;
        goto label_32aec4;
    }
    ctx->pc = 0x32AEBCu;
    {
        const bool branch_taken_0x32aebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEBCu;
        // 0x32aec0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aebc) {
            ctx->pc = 0x32AEF8u;
            goto label_32aef8;
        }
    }
    ctx->pc = 0x32AEC4u;
label_32aec4:
    // 0x32aec4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x32aec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32aec8:
    // 0x32aec8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32aecc:
    // 0x32aecc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x32aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_32aed0:
    // 0x32aed0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x32aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_32aed4:
    // 0x32aed4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_32aed8:
    if (ctx->pc == 0x32AED8u) {
        ctx->pc = 0x32AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AED4u;
        // 0x32aed8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEDCu;
        goto label_32aedc;
    }
    ctx->pc = 0x32AED4u;
    {
        const bool branch_taken_0x32aed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32aed4) {
            ctx->pc = 0x32AED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AED4u;
            // 0x32aed8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AEE8u;
            goto label_32aee8;
        }
    }
    ctx->pc = 0x32AEDCu;
label_32aedc:
    // 0x32aedc: 0xc1116c6  jal         func_445B18
label_32aee0:
    if (ctx->pc == 0x32AEE0u) {
        ctx->pc = 0x32AEE4u;
        goto label_32aee4;
    }
    ctx->pc = 0x32AEDCu;
    SET_GPR_U32(ctx, 31, 0x32AEE4u);
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x32AEDCu, 0x32AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AEE4u;
label_32aee4:
    // 0x32aee4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_32aee8:
    // 0x32aee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32aee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32aeec:
    // 0x32aeec: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x32aeecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32aef0:
    // 0x32aef0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_32aef4:
    if (ctx->pc == 0x32AEF4u) {
        ctx->pc = 0x32AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEF0u;
        // 0x32aef4: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AEF8u;
        goto label_32aef8;
    }
    ctx->pc = 0x32AEF0u;
    {
        const bool branch_taken_0x32aef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AEF0u;
        // 0x32aef4: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aef0) {
            ctx->pc = 0x32AEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32aec8;
        }
    }
    ctx->pc = 0x32AEF8u;
label_32aef8:
    // 0x32aef8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x32aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_32aefc:
    // 0x32aefc: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x32aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_32af00:
    // 0x32af00: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x32af00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_32af04:
    // 0x32af04: 0x60f809  jalr        $v1
label_32af08:
    if (ctx->pc == 0x32AF08u) {
        ctx->pc = 0x32AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF04u;
        // 0x32af08: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF0Cu;
        goto label_32af0c;
    }
    ctx->pc = 0x32AF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32AF0Cu);
        ctx->pc = 0x32AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF04u;
        // 0x32af08: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AF04u, 0x32AF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32AF0Cu;
label_32af0c:
    // 0x32af0c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_32af10:
    // 0x32af10: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x32af10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_32af14:
    // 0x32af14: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x32af14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_32af18:
    // 0x32af18: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32af18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_32af1c:
    // 0x32af1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32af1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_32af20:
    // 0x32af20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32af20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_32af24:
    // 0x32af24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32af24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32af28:
    // 0x32af28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32af28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32af2c:
    // 0x32af2c: 0x3e00008  jr          $ra
label_32af30:
    if (ctx->pc == 0x32AF30u) {
        ctx->pc = 0x32AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF2Cu;
        // 0x32af30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32AF34u;
        goto label_32af34;
    }
    ctx->pc = 0x32AF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF2Cu;
        // 0x32af30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AF34u;
label_32af34:
    // 0x32af34: 0x0  nop
    ctx->pc = 0x32af34u;
    // NOP
    ctx->pc = 0x32af38u;
}
