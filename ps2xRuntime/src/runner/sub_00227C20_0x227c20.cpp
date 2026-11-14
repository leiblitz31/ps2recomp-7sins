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

// Function: sub_00227C20
// Address: 0x227c20 - 0x227c90
void sub_00227C20_0x227c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227C20_0x227c20");
#endif

    switch (ctx->pc) {
        case 0x227c40u: goto label_227c40;
        case 0x227c54u: goto label_227c54;
        case 0x227c68u: goto label_227c68;
        default: break;
    }

    ctx->pc = 0x227c20u;

    // 0x227c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x227c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x227c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227c28: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x227c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x227c2c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x227c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x227c30: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x227c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x227c34: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x227c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227c38: 0xc089f40  jal         func_227D00
    ctx->pc = 0x227C38u;
    SET_GPR_U32(ctx, 31, 0x227C40u);
    ctx->pc = 0x227D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D00u, 0x227C38u, 0x227C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C40u;
label_227c40:
    // 0x227c40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x227c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227c44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x227c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x227c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c4c: 0xc089f24  jal         func_227C90
    ctx->pc = 0x227C4Cu;
    SET_GPR_U32(ctx, 31, 0x227C54u);
    ctx->pc = 0x227C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C90u, 0x227C4Cu, 0x227C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C54u;
label_227c54:
    // 0x227c54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x227c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227c58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x227c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227c5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x227c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c60: 0xc08ab10  jal         func_22AC40
    ctx->pc = 0x227C60u;
    SET_GPR_U32(ctx, 31, 0x227C68u);
    ctx->pc = 0x22AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AC40u, 0x227C60u, 0x227C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C68u;
label_227c68:
    // 0x227c68: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x227c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227c6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x227c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x227c70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x227c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227c78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x227c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x227c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x227C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227C84u;
    // 0x227c84: 0x0  nop
    ctx->pc = 0x227c84u;
    // NOP
    // 0x227c88: 0x0  nop
    ctx->pc = 0x227c88u;
    // NOP
    // 0x227c8c: 0x0  nop
    ctx->pc = 0x227c8cu;
    // NOP
    ctx->pc = 0x227c90u;
}
