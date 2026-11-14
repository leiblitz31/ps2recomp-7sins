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

// Function: sub_0049EEB8
// Address: 0x49eeb8 - 0x49eef0
void sub_0049EEB8_0x49eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EEB8_0x49eeb8");
#endif

    switch (ctx->pc) {
        case 0x49eee0u: goto label_49eee0;
        default: break;
    }

    ctx->pc = 0x49eeb8u;

    // 0x49eeb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49eeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49eebc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x49eebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49eec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49eec4: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x49eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x49eec8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x49eec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x49eecc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49EECCu;
    {
        const bool branch_taken_0x49eecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EECCu;
        // 0x49eed0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eecc) {
            ctx->pc = 0x49EEE4u;
            goto label_49eee4;
        }
    }
    ctx->pc = 0x49EED4u;
    // 0x49eed4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49eed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x49eed8: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x49EED8u;
    SET_GPR_U32(ctx, 31, 0x49EEE0u);
    ctx->pc = 0x49EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EED8u;
    // 0x49eedc: 0x24848340  addiu       $a0, $a0, -0x7CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49EED8u, 0x49EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EEE0u;
label_49eee0:
    // 0x49eee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49eee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49eee4:
    // 0x49eee4: 0x3e00008  jr          $ra
    ctx->pc = 0x49EEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EEE4u;
        // 0x49eee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EEECu;
    // 0x49eeec: 0x0  nop
    ctx->pc = 0x49eeecu;
    // NOP
    ctx->pc = 0x49eef0u;
}
