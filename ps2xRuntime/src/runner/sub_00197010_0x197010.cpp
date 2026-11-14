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

// Function: sub_00197010
// Address: 0x197010 - 0x197050
void sub_00197010_0x197010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197010_0x197010");
#endif

    switch (ctx->pc) {
        case 0x197040u: goto label_197040;
        default: break;
    }

    ctx->pc = 0x197010u;

    // 0x197010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x197010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x197014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197018: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x197018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19701c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19701cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x197020: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x197020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x197024: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x197024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x197028: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x197028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19702c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x19702cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197030: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x197030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197034: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x197034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197038: 0xc067354  jal         func_19CD50
    ctx->pc = 0x197038u;
    SET_GPR_U32(ctx, 31, 0x197040u);
    ctx->pc = 0x19CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CD50u, 0x197038u, 0x197040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197040u;
label_197040:
    // 0x197040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197044: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x197044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x197048: 0x3e00008  jr          $ra
    ctx->pc = 0x197048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197050u;
}
