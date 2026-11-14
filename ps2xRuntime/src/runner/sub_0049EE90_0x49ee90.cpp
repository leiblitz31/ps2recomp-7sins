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

// Function: sub_0049EE90
// Address: 0x49ee90 - 0x49eeb8
void sub_0049EE90_0x49ee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EE90_0x49ee90");
#endif

    switch (ctx->pc) {
        case 0x49eea8u: goto label_49eea8;
        default: break;
    }

    ctx->pc = 0x49ee90u;

    // 0x49ee90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49ee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49ee94: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x49ee94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x49ee98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ee98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ee9c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x49ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x49eea0: 0xc12791c  jal         func_49E470
    ctx->pc = 0x49EEA0u;
    SET_GPR_U32(ctx, 31, 0x49EEA8u);
    ctx->pc = 0x49EEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EEA0u;
    // 0x49eea4: 0x24845b10  addiu       $a0, $a0, 0x5B10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E470u, 0x49EEA0u, 0x49EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EEA8u;
label_49eea8:
    // 0x49eea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49eea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49eeac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x49eeacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x49eeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x49EEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EEB0u;
        // 0x49eeb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EEB8u;
}
