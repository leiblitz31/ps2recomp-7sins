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

// Function: sub_00259750
// Address: 0x259750 - 0x2597a0
void sub_00259750_0x259750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259750_0x259750");
#endif

    switch (ctx->pc) {
        case 0x259774u: goto label_259774;
        default: break;
    }

    ctx->pc = 0x259750u;

    // 0x259750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x259750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x259754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259758: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x259758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25975c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25975cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x259760: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x259760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x259764: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x259764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259768: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x259768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25976c: 0xc0965e8  jal         func_2597A0
    ctx->pc = 0x25976Cu;
    SET_GPR_U32(ctx, 31, 0x259774u);
    ctx->pc = 0x2597A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2597A0u, 0x25976Cu, 0x259774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259774u;
label_259774:
    // 0x259774: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x259774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259778: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25977c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25977cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x259780: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259788: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x259788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25978c: 0x3e00008  jr          $ra
    ctx->pc = 0x25978Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25978Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259794u;
    // 0x259794: 0x0  nop
    ctx->pc = 0x259794u;
    // NOP
    // 0x259798: 0x0  nop
    ctx->pc = 0x259798u;
    // NOP
    // 0x25979c: 0x0  nop
    ctx->pc = 0x25979cu;
    // NOP
    ctx->pc = 0x2597a0u;
}
