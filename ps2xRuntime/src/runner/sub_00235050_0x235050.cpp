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

// Function: sub_00235050
// Address: 0x235050 - 0x2350a0
void sub_00235050_0x235050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235050_0x235050");
#endif

    switch (ctx->pc) {
        case 0x235074u: goto label_235074;
        default: break;
    }

    ctx->pc = 0x235050u;

    // 0x235050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x235054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x235058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23505c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23505cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x235060: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x235060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x235064: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235068: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x235068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23506c: 0xc08d428  jal         func_2350A0
    ctx->pc = 0x23506Cu;
    SET_GPR_U32(ctx, 31, 0x235074u);
    ctx->pc = 0x2350A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2350A0u, 0x23506Cu, 0x235074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235074u;
label_235074:
    // 0x235074: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x235074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235078: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23507c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23507cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x235080: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235088: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x235088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23508c: 0x3e00008  jr          $ra
    ctx->pc = 0x23508Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23508Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235094u;
    // 0x235094: 0x0  nop
    ctx->pc = 0x235094u;
    // NOP
    // 0x235098: 0x0  nop
    ctx->pc = 0x235098u;
    // NOP
    // 0x23509c: 0x0  nop
    ctx->pc = 0x23509cu;
    // NOP
    ctx->pc = 0x2350a0u;
}
