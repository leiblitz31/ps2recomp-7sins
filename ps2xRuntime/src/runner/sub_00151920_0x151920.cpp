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

// Function: sub_00151920
// Address: 0x151920 - 0x151950
void sub_00151920_0x151920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151920_0x151920");
#endif

    switch (ctx->pc) {
        case 0x151938u: goto label_151938;
        default: break;
    }

    ctx->pc = 0x151920u;

    // 0x151920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151928: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x151928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15192c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15192cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151930: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x151930u;
    SET_GPR_U32(ctx, 31, 0x151938u);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x151930u, 0x151938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151938u;
label_151938:
    // 0x151938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15193c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15193cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x151940: 0x3e00008  jr          $ra
    ctx->pc = 0x151940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151948u;
    // 0x151948: 0x0  nop
    ctx->pc = 0x151948u;
    // NOP
    // 0x15194c: 0x0  nop
    ctx->pc = 0x15194cu;
    // NOP
    ctx->pc = 0x151950u;
}
