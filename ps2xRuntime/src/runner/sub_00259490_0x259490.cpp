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

// Function: sub_00259490
// Address: 0x259490 - 0x2594e0
void sub_00259490_0x259490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259490_0x259490");
#endif

    switch (ctx->pc) {
        case 0x2594b4u: goto label_2594b4;
        default: break;
    }

    ctx->pc = 0x259490u;

    // 0x259490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x259490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x259494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x259498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25949c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25949cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2594a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2594a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2594a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2594a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2594a8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2594a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2594ac: 0xc096538  jal         func_2594E0
    ctx->pc = 0x2594ACu;
    SET_GPR_U32(ctx, 31, 0x2594B4u);
    ctx->pc = 0x2594E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2594E0u, 0x2594ACu, 0x2594B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2594B4u;
label_2594b4:
    // 0x2594b4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2594b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2594b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2594b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2594bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2594bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2594c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2594c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2594c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2594c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2594c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2594c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2594cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2594CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2594CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2594D4u;
    // 0x2594d4: 0x0  nop
    ctx->pc = 0x2594d4u;
    // NOP
    // 0x2594d8: 0x0  nop
    ctx->pc = 0x2594d8u;
    // NOP
    // 0x2594dc: 0x0  nop
    ctx->pc = 0x2594dcu;
    // NOP
    ctx->pc = 0x2594e0u;
}
