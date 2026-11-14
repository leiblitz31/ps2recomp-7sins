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

// Function: sub_00458C30
// Address: 0x458c30 - 0x458c80
void sub_00458C30_0x458c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458C30_0x458c30");
#endif

    switch (ctx->pc) {
        case 0x458c58u: goto label_458c58;
        case 0x458c6cu: goto label_458c6c;
        default: break;
    }

    ctx->pc = 0x458c30u;

    // 0x458c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x458c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x458c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x458c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x458c38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x458c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x458c3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x458c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x458c40: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x458c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x458c44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x458c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458c48: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x458c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x458c4c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x458c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x458c50: 0xc115ea8  jal         func_457AA0
    ctx->pc = 0x458C50u;
    SET_GPR_U32(ctx, 31, 0x458C58u);
    ctx->pc = 0x457AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457AA0u, 0x458C50u, 0x458C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458C58u;
label_458c58:
    // 0x458c58: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x458c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458c5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x458c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458c60: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x458c60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x458c64: 0xc116200  jal         func_458800
    ctx->pc = 0x458C64u;
    SET_GPR_U32(ctx, 31, 0x458C6Cu);
    ctx->pc = 0x458800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458800u, 0x458C64u, 0x458C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458C6Cu;
label_458c6c:
    // 0x458c6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x458c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458c70: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x458c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x458c74: 0x3e00008  jr          $ra
    ctx->pc = 0x458C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458C7Cu;
    // 0x458c7c: 0x0  nop
    ctx->pc = 0x458c7cu;
    // NOP
    ctx->pc = 0x458c80u;
}
