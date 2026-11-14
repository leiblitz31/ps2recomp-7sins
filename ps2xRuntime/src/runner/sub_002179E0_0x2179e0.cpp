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

// Function: sub_002179E0
// Address: 0x2179e0 - 0x217a30
void sub_002179E0_0x2179e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002179E0_0x2179e0");
#endif

    switch (ctx->pc) {
        case 0x217a04u: goto label_217a04;
        default: break;
    }

    ctx->pc = 0x2179e0u;

    // 0x2179e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2179e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2179e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2179e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2179e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2179e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2179ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2179ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2179f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2179f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2179f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2179f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2179f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2179f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2179fc: 0xc085e8c  jal         func_217A30
    ctx->pc = 0x2179FCu;
    SET_GPR_U32(ctx, 31, 0x217A04u);
    ctx->pc = 0x217A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217A30u, 0x2179FCu, 0x217A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A04u;
label_217a04:
    // 0x217a04: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x217a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217a08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x217a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217a0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x217a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x217a10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x217a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x217a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x217a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x217A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217A24u;
    // 0x217a24: 0x0  nop
    ctx->pc = 0x217a24u;
    // NOP
    // 0x217a28: 0x0  nop
    ctx->pc = 0x217a28u;
    // NOP
    // 0x217a2c: 0x0  nop
    ctx->pc = 0x217a2cu;
    // NOP
    ctx->pc = 0x217a30u;
}
