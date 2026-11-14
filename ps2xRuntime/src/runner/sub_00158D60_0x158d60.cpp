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

// Function: sub_00158D60
// Address: 0x158d60 - 0x158da0
void sub_00158D60_0x158d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158D60_0x158d60");
#endif

    switch (ctx->pc) {
        case 0x158d8cu: goto label_158d8c;
        default: break;
    }

    ctx->pc = 0x158d60u;

    // 0x158d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x158d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x158d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158d68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x158d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x158d6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x158d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x158d70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x158d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x158d74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x158d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158d78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x158d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158d7c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x158d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158d80: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x158d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158d84: 0xc05650c  jal         func_159430
    ctx->pc = 0x158D84u;
    SET_GPR_U32(ctx, 31, 0x158D8Cu);
    ctx->pc = 0x159430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159430u, 0x158D84u, 0x158D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D8Cu;
label_158d8c:
    // 0x158d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158d90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x158d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x158d94: 0x3e00008  jr          $ra
    ctx->pc = 0x158D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158D9Cu;
    // 0x158d9c: 0x0  nop
    ctx->pc = 0x158d9cu;
    // NOP
    ctx->pc = 0x158da0u;
}
