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

// Function: sub_00113550
// Address: 0x113550 - 0x1135a0
void sub_00113550_0x113550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113550_0x113550");
#endif

    switch (ctx->pc) {
        case 0x113574u: goto label_113574;
        default: break;
    }

    ctx->pc = 0x113550u;

    // 0x113550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x113550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x113554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113558: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x113558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11355c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11355cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x113560: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x113560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x113564: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x113564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113568: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x113568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11356c: 0xc044d68  jal         func_1135A0
    ctx->pc = 0x11356Cu;
    SET_GPR_U32(ctx, 31, 0x113574u);
    ctx->pc = 0x1135A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1135A0u, 0x11356Cu, 0x113574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113574u;
label_113574:
    // 0x113574: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x113574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113578: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11357c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11357cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x113580: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x113580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113588: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x113588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11358c: 0x3e00008  jr          $ra
    ctx->pc = 0x11358Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11358Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113594u;
    // 0x113594: 0x0  nop
    ctx->pc = 0x113594u;
    // NOP
    // 0x113598: 0x0  nop
    ctx->pc = 0x113598u;
    // NOP
    // 0x11359c: 0x0  nop
    ctx->pc = 0x11359cu;
    // NOP
    ctx->pc = 0x1135a0u;
}
