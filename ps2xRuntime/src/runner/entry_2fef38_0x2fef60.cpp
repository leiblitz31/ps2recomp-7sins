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

// Function: entry_2fef38
// Address: 0x2fef38 - 0x2fef60
void entry_2fef38_0x2fef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2fef38_0x2fef60");
#endif

    switch (ctx->pc) {
        case 0x2fef50u: goto label_2fef50;
        default: break;
    }

    ctx->pc = 0x2fef38u;

    // 0x2fef38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fef38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fef3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fef40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fef40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fef44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fef48: 0xc0bf7e4  jal         func_2FDF90
    ctx->pc = 0x2FEF48u;
    SET_GPR_U32(ctx, 31, 0x2FEF50u);
    ctx->pc = 0x2FEF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF48u;
    // 0x2fef4c: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDF90u, 0x2FEF48u, 0x2FEF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF50u;
label_2fef50:
    // 0x2fef50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fef50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fef54: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF54u;
        // 0x2fef58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEF5Cu;
    // 0x2fef5c: 0x0  nop
    ctx->pc = 0x2fef5cu;
    // NOP
    ctx->pc = 0x2fef60u;
}
