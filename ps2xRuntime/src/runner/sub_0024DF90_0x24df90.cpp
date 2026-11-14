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

// Function: sub_0024DF90
// Address: 0x24df90 - 0x24dfe0
void sub_0024DF90_0x24df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024DF90_0x24df90");
#endif

    switch (ctx->pc) {
        case 0x24dfb4u: goto label_24dfb4;
        default: break;
    }

    ctx->pc = 0x24df90u;

    // 0x24df90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24df94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24df94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24df98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x24df98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24df9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x24dfa0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x24dfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x24dfa4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24dfa8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x24dfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24dfac: 0xc0937f8  jal         func_24DFE0
    ctx->pc = 0x24DFACu;
    SET_GPR_U32(ctx, 31, 0x24DFB4u);
    ctx->pc = 0x24DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DFE0u, 0x24DFACu, 0x24DFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DFB4u;
label_24dfb4:
    // 0x24dfb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24dfb8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24dfb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dfbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24dfc0: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x24dfc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x24dfc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24dfc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24dfc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24dfcc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24dfccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24dfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x24DFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DFD8u;
    // 0x24dfd8: 0x0  nop
    ctx->pc = 0x24dfd8u;
    // NOP
    // 0x24dfdc: 0x0  nop
    ctx->pc = 0x24dfdcu;
    // NOP
    ctx->pc = 0x24dfe0u;
}
