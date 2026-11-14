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

// Function: sub_00265B90
// Address: 0x265b90 - 0x265bd0
void sub_00265B90_0x265b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265B90_0x265b90");
#endif

    switch (ctx->pc) {
        case 0x265bb4u: goto label_265bb4;
        default: break;
    }

    ctx->pc = 0x265b90u;

    // 0x265b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265b98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x265b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x265b9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x265b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x265ba0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x265ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265ba4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x265ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265ba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x265ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265bac: 0xc0996f4  jal         func_265BD0
    ctx->pc = 0x265BACu;
    SET_GPR_U32(ctx, 31, 0x265BB4u);
    ctx->pc = 0x265BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265BD0u, 0x265BACu, 0x265BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265BB4u;
label_265bb4:
    // 0x265bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265bb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x265bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x265BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265BC4u;
    // 0x265bc4: 0x0  nop
    ctx->pc = 0x265bc4u;
    // NOP
    // 0x265bc8: 0x0  nop
    ctx->pc = 0x265bc8u;
    // NOP
    // 0x265bcc: 0x0  nop
    ctx->pc = 0x265bccu;
    // NOP
    ctx->pc = 0x265bd0u;
}
