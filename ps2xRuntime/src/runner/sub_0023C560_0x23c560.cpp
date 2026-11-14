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

// Function: sub_0023C560
// Address: 0x23c560 - 0x23c5b0
void sub_0023C560_0x23c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C560_0x23c560");
#endif

    switch (ctx->pc) {
        case 0x23c584u: goto label_23c584;
        default: break;
    }

    ctx->pc = 0x23c560u;

    // 0x23c560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23c560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23c564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c568: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23c568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23c56c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23c570: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x23c570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x23c574: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c578: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23c578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c57c: 0xc08f16c  jal         func_23C5B0
    ctx->pc = 0x23C57Cu;
    SET_GPR_U32(ctx, 31, 0x23C584u);
    ctx->pc = 0x23C5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C5B0u, 0x23C57Cu, 0x23C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C584u;
label_23c584:
    // 0x23c584: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23c584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c588: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c58c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23c58cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23c590: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c598: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23c598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23c59c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C5A4u;
    // 0x23c5a4: 0x0  nop
    ctx->pc = 0x23c5a4u;
    // NOP
    // 0x23c5a8: 0x0  nop
    ctx->pc = 0x23c5a8u;
    // NOP
    // 0x23c5ac: 0x0  nop
    ctx->pc = 0x23c5acu;
    // NOP
    ctx->pc = 0x23c5b0u;
}
