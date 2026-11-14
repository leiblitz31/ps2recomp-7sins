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

// Function: sub_00274210
// Address: 0x274210 - 0x274260
void sub_00274210_0x274210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274210_0x274210");
#endif

    switch (ctx->pc) {
        case 0x274228u: goto label_274228;
        default: break;
    }

    ctx->pc = 0x274210u;

    // 0x274210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x274210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x274214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x274214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274218: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x274218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27421c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27421cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274220: 0xc088560  jal         func_221580
    ctx->pc = 0x274220u;
    SET_GPR_U32(ctx, 31, 0x274228u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x274220u, 0x274228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274228u;
label_274228:
    // 0x274228: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x274228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x27422c: 0x24635ac0  addiu       $v1, $v1, 0x5AC0
    ctx->pc = 0x27422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23232));
    // 0x274230: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274234: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x274234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x274238: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27423c: 0xa040000c  sb          $zero, 0xC($v0)
    ctx->pc = 0x27423cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x274240: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274244: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x274244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x274248: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x274248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27424c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27424cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274250: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x274250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x274254: 0x3e00008  jr          $ra
    ctx->pc = 0x274254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27425Cu;
    // 0x27425c: 0x0  nop
    ctx->pc = 0x27425cu;
    // NOP
    ctx->pc = 0x274260u;
}
