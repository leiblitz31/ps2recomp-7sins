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

// Function: sub_00247C30
// Address: 0x247c30 - 0x247c90
void sub_00247C30_0x247c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247C30_0x247c30");
#endif

    switch (ctx->pc) {
        case 0x247c54u: goto label_247c54;
        case 0x247c7cu: goto label_247c7c;
        default: break;
    }

    ctx->pc = 0x247c30u;

    // 0x247c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x247c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x247c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247c38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x247c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x247c3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x247c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x247c40: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x247c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x247c44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247c48: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x247c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247c4c: 0xc091f4c  jal         func_247D30
    ctx->pc = 0x247C4Cu;
    SET_GPR_U32(ctx, 31, 0x247C54u);
    ctx->pc = 0x247D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D30u, 0x247C4Cu, 0x247C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C54u;
label_247c54:
    // 0x247c54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247c58: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x247c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x247c5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x247c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247c60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x247c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247c64: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x247c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x247c68: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x247c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247c6c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x247c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x247c70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247c74: 0xc091f24  jal         func_247C90
    ctx->pc = 0x247C74u;
    SET_GPR_U32(ctx, 31, 0x247C7Cu);
    ctx->pc = 0x247C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247C90u, 0x247C74u, 0x247C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C7Cu;
label_247c7c:
    // 0x247c7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247c84: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x247c84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x247c88: 0x3e00008  jr          $ra
    ctx->pc = 0x247C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247C90u;
}
