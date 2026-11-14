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

// Function: sub_00154280
// Address: 0x154280 - 0x1542d0
void sub_00154280_0x154280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154280_0x154280");
#endif

    switch (ctx->pc) {
        case 0x1542a4u: goto label_1542a4;
        default: break;
    }

    ctx->pc = 0x154280u;

    // 0x154280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x154280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x154284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x154288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15428c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15428cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x154290: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x154290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x154294: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x154294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154298: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x154298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15429c: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x15429Cu;
    SET_GPR_U32(ctx, 31, 0x1542A4u);
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x15429Cu, 0x1542A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1542A4u;
label_1542a4:
    // 0x1542a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1542a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1542a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1542a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1542ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1542acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1542b0: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x1542b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1542b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1542b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1542b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1542b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1542bc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1542bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1542c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1542C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1542C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1542C8u;
    // 0x1542c8: 0x0  nop
    ctx->pc = 0x1542c8u;
    // NOP
    // 0x1542cc: 0x0  nop
    ctx->pc = 0x1542ccu;
    // NOP
    ctx->pc = 0x1542d0u;
}
