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

// Function: sub_0013CBE0
// Address: 0x13cbe0 - 0x13cc40
void sub_0013CBE0_0x13cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CBE0_0x13cbe0");
#endif

    switch (ctx->pc) {
        case 0x13cc0cu: goto label_13cc0c;
        case 0x13cc24u: goto label_13cc24;
        default: break;
    }

    ctx->pc = 0x13cbe0u;

    // 0x13cbe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13cbe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13cbe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13cbec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13cbf0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x13cbf4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cbf8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x13cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13cbfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13cbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13cc00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13cc00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc04: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x13CC04u;
    SET_GPR_U32(ctx, 31, 0x13CC0Cu);
    ctx->pc = 0x13CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CFF0u, 0x13CC04u, 0x13CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC0Cu;
label_13cc0c:
    // 0x13cc0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc10: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x13cc14: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x13cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13cc18: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x13cc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13cc1c: 0xc04f310  jal         func_13CC40
    ctx->pc = 0x13CC1Cu;
    SET_GPR_U32(ctx, 31, 0x13CC24u);
    ctx->pc = 0x13CC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CC40u, 0x13CC1Cu, 0x13CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CC24u;
label_13cc24:
    // 0x13cc24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13cc24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cc2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cc2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cc30: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13cc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13cc34: 0x3e00008  jr          $ra
    ctx->pc = 0x13CC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CC3Cu;
    // 0x13cc3c: 0x0  nop
    ctx->pc = 0x13cc3cu;
    // NOP
    ctx->pc = 0x13cc40u;
}
