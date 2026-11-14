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

// Function: sub_004770E0
// Address: 0x4770e0 - 0x477130
void sub_004770E0_0x4770e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004770E0_0x4770e0");
#endif

    switch (ctx->pc) {
        case 0x477104u: goto label_477104;
        default: break;
    }

    ctx->pc = 0x4770e0u;

    // 0x4770e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4770e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4770e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4770e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4770e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4770e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4770ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4770ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4770f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x4770f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x4770f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4770f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4770f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4770f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4770fc: 0xc11dc4c  jal         func_477130
    ctx->pc = 0x4770FCu;
    SET_GPR_U32(ctx, 31, 0x477104u);
    ctx->pc = 0x477130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477130u, 0x4770FCu, 0x477104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477104u;
label_477104:
    // 0x477104: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x477104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x477108: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x477108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47710c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x47710cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x477110: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x477110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x477114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477118: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x477118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x47711c: 0x3e00008  jr          $ra
    ctx->pc = 0x47711Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47711Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477124u;
    // 0x477124: 0x0  nop
    ctx->pc = 0x477124u;
    // NOP
    // 0x477128: 0x0  nop
    ctx->pc = 0x477128u;
    // NOP
    // 0x47712c: 0x0  nop
    ctx->pc = 0x47712cu;
    // NOP
    ctx->pc = 0x477130u;
}
