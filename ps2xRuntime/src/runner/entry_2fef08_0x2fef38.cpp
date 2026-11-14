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

// Function: entry_2fef08
// Address: 0x2fef08 - 0x2fef38
void entry_2fef08_0x2fef38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2fef08_0x2fef38");
#endif

    switch (ctx->pc) {
        case 0x2fef2cu: goto label_2fef2c;
        default: break;
    }

    ctx->pc = 0x2fef08u;

    // 0x2fef08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fef08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fef0c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2fef0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2fef10: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2fef10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2fef14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fef14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fef18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fef18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fef20: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2fef20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2fef24: 0xc0bf7e4  jal         func_2FDF90
    ctx->pc = 0x2FEF24u;
    SET_GPR_U32(ctx, 31, 0x2FEF2Cu);
    ctx->pc = 0x2FEF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF24u;
    // 0x2fef28: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDF90u, 0x2FEF24u, 0x2FEF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF2Cu;
label_2fef2c:
    // 0x2fef2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fef2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fef30: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF30u;
        // 0x2fef34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEF38u;
}
