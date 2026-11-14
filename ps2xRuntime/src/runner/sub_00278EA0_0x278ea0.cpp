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

// Function: sub_00278EA0
// Address: 0x278ea0 - 0x278ee0
void sub_00278EA0_0x278ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278EA0_0x278ea0");
#endif

    switch (ctx->pc) {
        case 0x278ec4u: goto label_278ec4;
        default: break;
    }

    ctx->pc = 0x278ea0u;

    // 0x278ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278ea8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x278eac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x278eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x278eb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278eb4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x278eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x278eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ebc: 0xc09e3b8  jal         func_278EE0
    ctx->pc = 0x278EBCu;
    SET_GPR_U32(ctx, 31, 0x278EC4u);
    ctx->pc = 0x278EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278EE0u, 0x278EBCu, 0x278EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EC4u;
label_278ec4:
    // 0x278ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278ec8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x278ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x278ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278ED4u;
    // 0x278ed4: 0x0  nop
    ctx->pc = 0x278ed4u;
    // NOP
    // 0x278ed8: 0x0  nop
    ctx->pc = 0x278ed8u;
    // NOP
    // 0x278edc: 0x0  nop
    ctx->pc = 0x278edcu;
    // NOP
    ctx->pc = 0x278ee0u;
}
