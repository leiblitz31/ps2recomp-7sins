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

// Function: sub_00149EB0
// Address: 0x149eb0 - 0x149ee0
void sub_00149EB0_0x149eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149EB0_0x149eb0");
#endif

    switch (ctx->pc) {
        case 0x149ec8u: goto label_149ec8;
        default: break;
    }

    ctx->pc = 0x149eb0u;

    // 0x149eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149eb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x149eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x149ebc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x149ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149ec0: 0xc0527b8  jal         func_149EE0
    ctx->pc = 0x149EC0u;
    SET_GPR_U32(ctx, 31, 0x149EC8u);
    ctx->pc = 0x149EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EE0u, 0x149EC0u, 0x149EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149EC8u;
label_149ec8:
    // 0x149ec8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149ecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149ed0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x149ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x149ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x149ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149EDCu;
    // 0x149edc: 0x0  nop
    ctx->pc = 0x149edcu;
    // NOP
    ctx->pc = 0x149ee0u;
}
