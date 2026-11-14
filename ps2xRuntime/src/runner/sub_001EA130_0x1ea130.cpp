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

// Function: sub_001EA130
// Address: 0x1ea130 - 0x1ea180
void sub_001EA130_0x1ea130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA130_0x1ea130");
#endif

    switch (ctx->pc) {
        case 0x1ea154u: goto label_1ea154;
        default: break;
    }

    ctx->pc = 0x1ea130u;

    // 0x1ea130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ea130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ea134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ea138: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ea138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ea13c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ea13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1ea140: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1ea140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1ea144: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ea144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea148: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ea148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea14c: 0xc07a860  jal         func_1EA180
    ctx->pc = 0x1EA14Cu;
    SET_GPR_U32(ctx, 31, 0x1EA154u);
    ctx->pc = 0x1EA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA180u, 0x1EA14Cu, 0x1EA154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA154u;
label_1ea154:
    // 0x1ea154: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ea154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea158: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ea158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea15c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ea15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ea160: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ea160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea168: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ea168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ea16c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA174u;
    // 0x1ea174: 0x0  nop
    ctx->pc = 0x1ea174u;
    // NOP
    // 0x1ea178: 0x0  nop
    ctx->pc = 0x1ea178u;
    // NOP
    // 0x1ea17c: 0x0  nop
    ctx->pc = 0x1ea17cu;
    // NOP
    ctx->pc = 0x1ea180u;
}
