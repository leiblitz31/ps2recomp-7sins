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

// Function: sub_00354BC0
// Address: 0x354bc0 - 0x354c48
void sub_00354BC0_0x354bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354BC0_0x354bc0");
#endif

    switch (ctx->pc) {
        case 0x354c00u: goto label_354c00;
        case 0x354c14u: goto label_354c14;
        default: break;
    }

    ctx->pc = 0x354bc0u;

    // 0x354bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x354bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x354bc4: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x354bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x354bc8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x354bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x354bcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x354bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x354bd0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x354bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x354bd4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x354bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x354bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354bdc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x354bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x354be0: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x354be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x354be4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x354be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x354be8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x354BE8u;
    {
        const bool branch_taken_0x354be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354BE8u;
        // 0x354bec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354be8) {
            ctx->pc = 0x354C30u;
            goto label_354c30;
        }
    }
    ctx->pc = 0x354BF0u;
    // 0x354bf0: 0x8c91009c  lw          $s1, 0x9C($a0)
    ctx->pc = 0x354bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x354bf4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x354bf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354bf8: 0x26300138  addiu       $s0, $s1, 0x138
    ctx->pc = 0x354bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
    // 0x354bfc: 0x0  nop
    ctx->pc = 0x354bfcu;
    // NOP
label_354c00:
    // 0x354c00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x354c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x354c04: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x354C04u;
    {
        const bool branch_taken_0x354c04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x354c04) {
            ctx->pc = 0x354C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354C04u;
            // 0x354c08: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354C1Cu;
            goto label_354c1c;
        }
    }
    ctx->pc = 0x354C0Cu;
    // 0x354c0c: 0xc104702  jal         func_411C08
    ctx->pc = 0x354C0Cu;
    SET_GPR_U32(ctx, 31, 0x354C14u);
    ctx->pc = 0x411C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411C08u, 0x354C0Cu, 0x354C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354C14u;
label_354c14:
    // 0x354c14: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x354c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x354c18: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x354c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_354c1c:
    // 0x354c1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x354c1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x354c20: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x354c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x354c24: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x354C24u;
    {
        const bool branch_taken_0x354c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354C24u;
        // 0x354c28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354c24) {
            ctx->pc = 0x354C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354c00;
        }
    }
    ctx->pc = 0x354C2Cu;
    // 0x354c2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x354c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_354c30:
    // 0x354c30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x354c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354c34: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x354c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x354c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x354C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354C3Cu;
        // 0x354c40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354C44u;
    // 0x354c44: 0x0  nop
    ctx->pc = 0x354c44u;
    // NOP
    ctx->pc = 0x354c48u;
}
