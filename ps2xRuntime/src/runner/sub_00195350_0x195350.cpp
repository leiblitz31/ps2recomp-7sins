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

// Function: sub_00195350
// Address: 0x195350 - 0x1953a0
void sub_00195350_0x195350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195350_0x195350");
#endif

    switch (ctx->pc) {
        case 0x195374u: goto label_195374;
        default: break;
    }

    ctx->pc = 0x195350u;

    // 0x195350: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195358: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x195358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19535c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19535cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x195360: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x195360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x195364: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195368: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x195368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19536c: 0xc0654e8  jal         func_1953A0
    ctx->pc = 0x19536Cu;
    SET_GPR_U32(ctx, 31, 0x195374u);
    ctx->pc = 0x1953A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953A0u, 0x19536Cu, 0x195374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195374u;
label_195374:
    // 0x195374: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x195374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195378: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19537c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19537cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x195380: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195388: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x195388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19538c: 0x3e00008  jr          $ra
    ctx->pc = 0x19538Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19538Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195394u;
    // 0x195394: 0x0  nop
    ctx->pc = 0x195394u;
    // NOP
    // 0x195398: 0x0  nop
    ctx->pc = 0x195398u;
    // NOP
    // 0x19539c: 0x0  nop
    ctx->pc = 0x19539cu;
    // NOP
    ctx->pc = 0x1953a0u;
}
