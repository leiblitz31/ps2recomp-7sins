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

// Function: sub_0039CDC8
// Address: 0x39cdc8 - 0x39cde8
void sub_0039CDC8_0x39cdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CDC8_0x39cdc8");
#endif

    switch (ctx->pc) {
        case 0x39cddcu: goto label_39cddc;
        default: break;
    }

    ctx->pc = 0x39cdc8u;

    // 0x39cdc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39cdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39cdcc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39cdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cdd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39cdd4: 0xc0e40e6  jal         func_390398
    ctx->pc = 0x39CDD4u;
    SET_GPR_U32(ctx, 31, 0x39CDDCu);
    ctx->pc = 0x39CDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CDD4u;
    // 0x39cdd8: 0x8ca40054  lw          $a0, 0x54($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390398u, 0x39CDD4u, 0x39CDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CDDCu;
label_39cddc:
    // 0x39cddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cde0: 0x3e00008  jr          $ra
    ctx->pc = 0x39CDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CDE0u;
        // 0x39cde4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CDE8u;
}
