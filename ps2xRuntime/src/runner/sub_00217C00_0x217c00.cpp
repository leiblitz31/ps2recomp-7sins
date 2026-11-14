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

// Function: sub_00217C00
// Address: 0x217c00 - 0x217c60
void sub_00217C00_0x217c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217C00_0x217c00");
#endif

    switch (ctx->pc) {
        case 0x217c1cu: goto label_217c1c;
        case 0x217c2cu: goto label_217c2c;
        case 0x217c40u: goto label_217c40;
        default: break;
    }

    ctx->pc = 0x217c00u;

    // 0x217c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x217c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x217c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x217c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x217c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x217c0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x217c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x217c10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x217c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217c14: 0xc085f54  jal         func_217D50
    ctx->pc = 0x217C14u;
    SET_GPR_U32(ctx, 31, 0x217C1Cu);
    ctx->pc = 0x217D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D50u, 0x217C14u, 0x217C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C1Cu;
label_217c1c:
    // 0x217c1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x217c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x217c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217c24: 0xc085f44  jal         func_217D10
    ctx->pc = 0x217C24u;
    SET_GPR_U32(ctx, 31, 0x217C2Cu);
    ctx->pc = 0x217D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217D10u, 0x217C24u, 0x217C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C2Cu;
label_217c2c:
    // 0x217c2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x217c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217c30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x217c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c38: 0xc085f18  jal         func_217C60
    ctx->pc = 0x217C38u;
    SET_GPR_U32(ctx, 31, 0x217C40u);
    ctx->pc = 0x217C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217C60u, 0x217C38u, 0x217C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C40u;
label_217c40:
    // 0x217c40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x217c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217c48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x217c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x217c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x217C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217C54u;
    // 0x217c54: 0x0  nop
    ctx->pc = 0x217c54u;
    // NOP
    // 0x217c58: 0x0  nop
    ctx->pc = 0x217c58u;
    // NOP
    // 0x217c5c: 0x0  nop
    ctx->pc = 0x217c5cu;
    // NOP
    ctx->pc = 0x217c60u;
}
