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

// Function: sub_002AD800
// Address: 0x2ad800 - 0x2ad840
void sub_002AD800_0x2ad800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD800_0x2ad800");
#endif

    switch (ctx->pc) {
        case 0x2ad828u: goto label_2ad828;
        default: break;
    }

    ctx->pc = 0x2ad800u;

    // 0x2ad800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ad800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ad804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad808: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2ad808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2ad80c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2ad80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2ad810: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2ad810u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ad814: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2ad814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad818: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2ad818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad81c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2ad81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2ad820: 0xc0ab610  jal         func_2AD840
    ctx->pc = 0x2AD820u;
    SET_GPR_U32(ctx, 31, 0x2AD828u);
    ctx->pc = 0x2AD840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD840u, 0x2AD820u, 0x2AD828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD828u;
label_2ad828:
    // 0x2ad828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad82c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2ad82cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ad830: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD838u;
    // 0x2ad838: 0x0  nop
    ctx->pc = 0x2ad838u;
    // NOP
    // 0x2ad83c: 0x0  nop
    ctx->pc = 0x2ad83cu;
    // NOP
    ctx->pc = 0x2ad840u;
}
