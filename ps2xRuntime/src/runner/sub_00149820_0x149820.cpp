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

// Function: sub_00149820
// Address: 0x149820 - 0x149880
void sub_00149820_0x149820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149820_0x149820");
#endif

    ctx->pc = 0x149820u;

    // 0x149820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149824: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x149824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x149828: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x149828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14982c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149830: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x149830u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149834: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x149834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149838: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x149838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x14983c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149840: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x149840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x149844: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x149844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149848: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x149848u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x14984c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149850: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x149850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x149854: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x149854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149858: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x149858u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14985c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14985cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149860: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x149860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x149864: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x149864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149868: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x149868u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x14986c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149870: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x149870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x149874: 0x3e00008  jr          $ra
    ctx->pc = 0x149874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14987Cu;
    // 0x14987c: 0x0  nop
    ctx->pc = 0x14987cu;
    // NOP
    ctx->pc = 0x149880u;
}
