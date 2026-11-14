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

// Function: sub_00279160
// Address: 0x279160 - 0x2791b0
void sub_00279160_0x279160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279160_0x279160");
#endif

    switch (ctx->pc) {
        case 0x279184u: goto label_279184;
        default: break;
    }

    ctx->pc = 0x279160u;

    // 0x279160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x279164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27916c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27916cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x279170: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x279170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x279174: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279178: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x279178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27917c: 0xc09e46c  jal         func_2791B0
    ctx->pc = 0x27917Cu;
    SET_GPR_U32(ctx, 31, 0x279184u);
    ctx->pc = 0x2791B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2791B0u, 0x27917Cu, 0x279184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279184u;
label_279184:
    // 0x279184: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x279184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279188: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27918c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27918cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x279190: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279198: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x279198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27919c: 0x3e00008  jr          $ra
    ctx->pc = 0x27919Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27919Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2791A4u;
    // 0x2791a4: 0x0  nop
    ctx->pc = 0x2791a4u;
    // NOP
    // 0x2791a8: 0x0  nop
    ctx->pc = 0x2791a8u;
    // NOP
    // 0x2791ac: 0x0  nop
    ctx->pc = 0x2791acu;
    // NOP
    ctx->pc = 0x2791b0u;
}
