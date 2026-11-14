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

// Function: sub_00288EF0
// Address: 0x288ef0 - 0x288f20
void sub_00288EF0_0x288ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288EF0_0x288ef0");
#endif

    switch (ctx->pc) {
        case 0x288f08u: goto label_288f08;
        default: break;
    }

    ctx->pc = 0x288ef0u;

    // 0x288ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x288ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x288ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x288ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x288ef8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x288ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x288efc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x288efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288f00: 0xc064170  jal         func_1905C0
    ctx->pc = 0x288F00u;
    SET_GPR_U32(ctx, 31, 0x288F08u);
    ctx->pc = 0x1905C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1905C0u, 0x288F00u, 0x288F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F08u;
label_288f08:
    // 0x288f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288f0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x288f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x288f10: 0x3e00008  jr          $ra
    ctx->pc = 0x288F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288F18u;
    // 0x288f18: 0x0  nop
    ctx->pc = 0x288f18u;
    // NOP
    // 0x288f1c: 0x0  nop
    ctx->pc = 0x288f1cu;
    // NOP
    ctx->pc = 0x288f20u;
}
