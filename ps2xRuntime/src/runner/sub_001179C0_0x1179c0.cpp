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

// Function: sub_001179C0
// Address: 0x1179c0 - 0x117a10
void sub_001179C0_0x1179c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001179C0_0x1179c0");
#endif

    switch (ctx->pc) {
        case 0x1179e4u: goto label_1179e4;
        default: break;
    }

    ctx->pc = 0x1179c0u;

    // 0x1179c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1179c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1179c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1179c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1179c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1179c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1179cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1179ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1179d0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1179d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1179d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1179d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1179d8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1179d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1179dc: 0xc045e84  jal         func_117A10
    ctx->pc = 0x1179DCu;
    SET_GPR_U32(ctx, 31, 0x1179E4u);
    ctx->pc = 0x117A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A10u, 0x1179DCu, 0x1179E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179E4u;
label_1179e4:
    // 0x1179e4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1179e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1179e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1179e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1179ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1179ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1179f0: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x1179f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1179f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1179f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1179f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1179f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1179fc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1179fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x117a00: 0x3e00008  jr          $ra
    ctx->pc = 0x117A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117A08u;
    // 0x117a08: 0x0  nop
    ctx->pc = 0x117a08u;
    // NOP
    // 0x117a0c: 0x0  nop
    ctx->pc = 0x117a0cu;
    // NOP
    ctx->pc = 0x117a10u;
}
