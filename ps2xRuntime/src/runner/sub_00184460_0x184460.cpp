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

// Function: sub_00184460
// Address: 0x184460 - 0x1844b0
void sub_00184460_0x184460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184460_0x184460");
#endif

    switch (ctx->pc) {
        case 0x184484u: goto label_184484;
        default: break;
    }

    ctx->pc = 0x184460u;

    // 0x184460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x184460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x184464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184468: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x184468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18446c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18446cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x184470: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x184470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x184474: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x184474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184478: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x184478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18447c: 0xc06112c  jal         func_1844B0
    ctx->pc = 0x18447Cu;
    SET_GPR_U32(ctx, 31, 0x184484u);
    ctx->pc = 0x1844B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1844B0u, 0x18447Cu, 0x184484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184484u;
label_184484:
    // 0x184484: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x184484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184488: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18448c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18448cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x184490: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184498: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x184498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18449c: 0x3e00008  jr          $ra
    ctx->pc = 0x18449Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18449Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1844A4u;
    // 0x1844a4: 0x0  nop
    ctx->pc = 0x1844a4u;
    // NOP
    // 0x1844a8: 0x0  nop
    ctx->pc = 0x1844a8u;
    // NOP
    // 0x1844ac: 0x0  nop
    ctx->pc = 0x1844acu;
    // NOP
    ctx->pc = 0x1844b0u;
}
