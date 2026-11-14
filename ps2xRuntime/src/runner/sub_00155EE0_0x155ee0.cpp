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

// Function: sub_00155EE0
// Address: 0x155ee0 - 0x155f40
void sub_00155EE0_0x155ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155EE0_0x155ee0");
#endif

    switch (ctx->pc) {
        case 0x155f08u: goto label_155f08;
        case 0x155f1cu: goto label_155f1c;
        default: break;
    }

    ctx->pc = 0x155ee0u;

    // 0x155ee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x155ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x155ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155eec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x155eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x155ef0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x155ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x155ef4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x155ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155ef8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x155ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155efc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f00: 0xc05559c  jal         func_155670
    ctx->pc = 0x155F00u;
    SET_GPR_U32(ctx, 31, 0x155F08u);
    ctx->pc = 0x155670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155670u, 0x155F00u, 0x155F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F08u;
label_155f08:
    // 0x155f08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x155f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f0c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x155f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x155f10: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x155f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155f14: 0xc0557d0  jal         func_155F40
    ctx->pc = 0x155F14u;
    SET_GPR_U32(ctx, 31, 0x155F1Cu);
    ctx->pc = 0x155F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155F40u, 0x155F14u, 0x155F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155F1Cu;
label_155f1c:
    // 0x155f1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x155f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155f20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155f24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155f28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x155f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x155f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x155F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155F34u;
    // 0x155f34: 0x0  nop
    ctx->pc = 0x155f34u;
    // NOP
    // 0x155f38: 0x0  nop
    ctx->pc = 0x155f38u;
    // NOP
    // 0x155f3c: 0x0  nop
    ctx->pc = 0x155f3cu;
    // NOP
    ctx->pc = 0x155f40u;
}
