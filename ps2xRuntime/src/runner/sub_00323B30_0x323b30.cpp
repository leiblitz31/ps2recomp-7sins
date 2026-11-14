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

// Function: sub_00323B30
// Address: 0x323b30 - 0x323bc0
void sub_00323B30_0x323b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323B30_0x323b30");
#endif

    switch (ctx->pc) {
        case 0x323bacu: goto label_323bac;
        default: break;
    }

    ctx->pc = 0x323b30u;

    // 0x323b30: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x323b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x323b34: 0x8c43b1e4  lw          $v1, -0x4E1C($v0)
    ctx->pc = 0x323b34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1E4u));
    // 0x323b38: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x323b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x323b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x323B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B3Cu;
        // 0x323b40: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323B44u;
    // 0x323b44: 0x0  nop
    ctx->pc = 0x323b44u;
    // NOP
    // 0x323b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323b4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x323b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x323b50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323b58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b5c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x323b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x323b60: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x323b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x323b64: 0x14820012  bne         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x323B64u;
    {
        const bool branch_taken_0x323b64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x323B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B64u;
        // 0x323b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b64) {
            ctx->pc = 0x323BB0u;
            goto label_323bb0;
        }
    }
    ctx->pc = 0x323B6Cu;
    // 0x323b6c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x323b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x323b70: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x323b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x323b74: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x323B74u;
    {
        const bool branch_taken_0x323b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B74u;
        // 0x323b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b74) {
            ctx->pc = 0x323BB0u;
            goto label_323bb0;
        }
    }
    ctx->pc = 0x323B7Cu;
    // 0x323b7c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x323b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x323b80: 0x2442b1e0  addiu       $v0, $v0, -0x4E20
    ctx->pc = 0x323b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x323b84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x323b84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1E4u));
    // 0x323b88: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x323b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x323b8c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x323b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x323b90: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x323b90u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61B1E4u));
    // 0x323b94: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x323b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x323b98: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x323b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x323b9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x323B9Cu;
    {
        const bool branch_taken_0x323b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B9Cu;
        // 0x323ba0: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323b9c) {
            ctx->pc = 0x323BACu;
            goto label_323bac;
        }
    }
    ctx->pc = 0x323BA4u;
    // 0x323ba4: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x323BA4u;
    SET_GPR_U32(ctx, 31, 0x323BACu);
    ctx->pc = 0x323BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323BA4u;
    // 0x323ba8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x323BA4u, 0x323BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323BACu;
label_323bac:
    // 0x323bac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x323bacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323bb0:
    // 0x323bb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x323BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323BB8u;
        // 0x323bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323BC0u;
}
