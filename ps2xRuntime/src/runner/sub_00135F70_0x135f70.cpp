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

// Function: sub_00135F70
// Address: 0x135f70 - 0x135fb0
void sub_00135F70_0x135f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135F70_0x135f70");
#endif

    switch (ctx->pc) {
        case 0x135fa0u: goto label_135fa0;
        default: break;
    }

    ctx->pc = 0x135f70u;

    // 0x135f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x135f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x135f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135f78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x135f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x135f7c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x135f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x135f80: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x135f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x135f84: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x135f84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x135f88: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x135f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135f8c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x135f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135f90: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x135f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135f94: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x135f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x135f98: 0xc04d7a4  jal         func_135E90
    ctx->pc = 0x135F98u;
    SET_GPR_U32(ctx, 31, 0x135FA0u);
    ctx->pc = 0x135E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135E90u, 0x135F98u, 0x135FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135FA0u;
label_135fa0:
    // 0x135fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135fa4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x135fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x135fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x135FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135FB0u;
}
