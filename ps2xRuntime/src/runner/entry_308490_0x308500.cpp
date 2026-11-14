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

// Function: entry_308490
// Address: 0x308490 - 0x308500
void entry_308490_0x308500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_308490_0x308500");
#endif

    switch (ctx->pc) {
        case 0x3084a8u: goto label_3084a8;
        default: break;
    }

    ctx->pc = 0x308490u;

    // 0x308490: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x308490u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x308494: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x308494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x308498: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x308498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30849c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x30849Cu;
    {
        const bool branch_taken_0x30849c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3084A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30849Cu;
        // 0x3084a0: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30849c) {
            ctx->pc = 0x3084CCu;
            goto label_3084cc;
        }
    }
    ctx->pc = 0x3084A4u;
    // 0x3084a4: 0x0  nop
    ctx->pc = 0x3084a4u;
    // NOP
label_3084a8:
    // 0x3084a8: 0x42000039  di
    ctx->pc = 0x3084a8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3084ac: 0x40f  sync.p
    ctx->pc = 0x3084acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3084b0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3084b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3084b4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3084b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3084b8: 0x0  nop
    ctx->pc = 0x3084b8u;
    // NOP
    // 0x3084bc: 0x0  nop
    ctx->pc = 0x3084bcu;
    // NOP
    // 0x3084c0: 0x0  nop
    ctx->pc = 0x3084c0u;
    // NOP
    // 0x3084c4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3084C4u;
    {
        const bool branch_taken_0x3084c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3084c4) {
            ctx->pc = 0x3084A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3084a8;
        }
    }
    ctx->pc = 0x3084CCu;
label_3084cc:
    // 0x3084cc: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3084ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3084d0: 0x40f  sync.p
    ctx->pc = 0x3084d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3084d4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x3084d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x3084d8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x3084d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x3084dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3084dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3084e0: 0x40826000  mtc0        $v0, Status
    ctx->pc = 0x3084e0u;
    ctx->cop0_status = GPR_U32(ctx, 2) & 0xFF57FFFF;
    // 0x3084e4: 0x40f  sync.p
    ctx->pc = 0x3084e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3084e8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3084e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3084ec: 0x409ff000  mtc0        $ra, ErrorEPC
    ctx->pc = 0x3084ecu;
    ctx->cop0_errorepc = GPR_U32(ctx, 31);
    // 0x3084f0: 0x40f  sync.p
    ctx->pc = 0x3084f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3084f4: 0x42000018  eret
    ctx->pc = 0x3084f4u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    // 0x3084f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3084F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3084F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308500u;
}
