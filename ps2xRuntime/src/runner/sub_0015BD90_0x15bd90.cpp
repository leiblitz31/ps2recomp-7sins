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

// Function: sub_0015BD90
// Address: 0x15bd90 - 0x15bdd0
void sub_0015BD90_0x15bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BD90_0x15bd90");
#endif

    switch (ctx->pc) {
        case 0x15bdb8u: goto label_15bdb8;
        default: break;
    }

    ctx->pc = 0x15bd90u;

    // 0x15bd90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15bd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15bd94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bd98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15bd9c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x15bda0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x15bda0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x15bda4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x15bda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bda8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x15bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15bdac: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x15bdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x15bdb0: 0xc056f74  jal         func_15BDD0
    ctx->pc = 0x15BDB0u;
    SET_GPR_U32(ctx, 31, 0x15BDB8u);
    ctx->pc = 0x15BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BDD0u, 0x15BDB0u, 0x15BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BDB8u;
label_15bdb8:
    // 0x15bdb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bdbc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15bdbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15bdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x15BDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BDC8u;
    // 0x15bdc8: 0x0  nop
    ctx->pc = 0x15bdc8u;
    // NOP
    // 0x15bdcc: 0x0  nop
    ctx->pc = 0x15bdccu;
    // NOP
    ctx->pc = 0x15bdd0u;
}
