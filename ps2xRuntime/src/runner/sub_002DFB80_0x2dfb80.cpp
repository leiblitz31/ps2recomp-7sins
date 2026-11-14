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

// Function: sub_002DFB80
// Address: 0x2dfb80 - 0x2dfbc0
void sub_002DFB80_0x2dfb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFB80_0x2dfb80");
#endif

    switch (ctx->pc) {
        case 0x2dfba8u: goto label_2dfba8;
        default: break;
    }

    ctx->pc = 0x2dfb80u;

    // 0x2dfb80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dfb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dfb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dfb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dfb88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dfb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dfb8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2dfb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2dfb90: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2dfb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2dfb94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dfb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfb98: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2dfb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfb9c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2dfb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dfba0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2DFBA0u;
    SET_GPR_U32(ctx, 31, 0x2DFBA8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2DFBA0u, 0x2DFBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFBA8u;
label_2dfba8:
    // 0x2dfba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfbac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2dfbacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dfbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFBB8u;
    // 0x2dfbb8: 0x0  nop
    ctx->pc = 0x2dfbb8u;
    // NOP
    // 0x2dfbbc: 0x0  nop
    ctx->pc = 0x2dfbbcu;
    // NOP
    ctx->pc = 0x2dfbc0u;
}
