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

// Function: sub_00253000
// Address: 0x253000 - 0x253040
void sub_00253000_0x253000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253000_0x253000");
#endif

    switch (ctx->pc) {
        case 0x253028u: goto label_253028;
        default: break;
    }

    ctx->pc = 0x253000u;

    // 0x253000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x253000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x253004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x253008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25300c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25300cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x253010: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x253010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x253014: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x253014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253018: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x253018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25301c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x25301cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253020: 0xc041934  jal         func_1064D0
    ctx->pc = 0x253020u;
    SET_GPR_U32(ctx, 31, 0x253028u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x253020u, 0x253028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253028u;
label_253028:
    // 0x253028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25302c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25302cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x253030: 0x3e00008  jr          $ra
    ctx->pc = 0x253030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253038u;
    // 0x253038: 0x0  nop
    ctx->pc = 0x253038u;
    // NOP
    // 0x25303c: 0x0  nop
    ctx->pc = 0x25303cu;
    // NOP
    ctx->pc = 0x253040u;
}
