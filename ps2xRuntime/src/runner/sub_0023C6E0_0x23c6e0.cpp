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

// Function: sub_0023C6E0
// Address: 0x23c6e0 - 0x23c730
void sub_0023C6E0_0x23c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C6E0_0x23c6e0");
#endif

    switch (ctx->pc) {
        case 0x23c704u: goto label_23c704;
        default: break;
    }

    ctx->pc = 0x23c6e0u;

    // 0x23c6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23c6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23c6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c6e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23c6ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23c6f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x23c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x23c6f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c6f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23c6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c6fc: 0xc08f1cc  jal         func_23C730
    ctx->pc = 0x23C6FCu;
    SET_GPR_U32(ctx, 31, 0x23C704u);
    ctx->pc = 0x23C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C730u, 0x23C6FCu, 0x23C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C704u;
label_23c704:
    // 0x23c704: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x23c704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23c708: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c70c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23c710: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c718: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23c718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23c71c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C724u;
    // 0x23c724: 0x0  nop
    ctx->pc = 0x23c724u;
    // NOP
    // 0x23c728: 0x0  nop
    ctx->pc = 0x23c728u;
    // NOP
    // 0x23c72c: 0x0  nop
    ctx->pc = 0x23c72cu;
    // NOP
    ctx->pc = 0x23c730u;
}
