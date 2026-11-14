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

// Function: sub_001597E0
// Address: 0x1597e0 - 0x159840
void sub_001597E0_0x1597e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001597E0_0x1597e0");
#endif

    switch (ctx->pc) {
        case 0x159808u: goto label_159808;
        case 0x15981cu: goto label_15981c;
        default: break;
    }

    ctx->pc = 0x1597e0u;

    // 0x1597e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1597e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1597e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1597e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1597e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1597e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1597ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1597ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1597f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1597f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1597f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1597f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1597f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1597f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1597fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1597fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159800: 0xc0562f4  jal         func_158BD0
    ctx->pc = 0x159800u;
    SET_GPR_U32(ctx, 31, 0x159808u);
    ctx->pc = 0x158BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158BD0u, 0x159800u, 0x159808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159808u;
label_159808:
    // 0x159808: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x159808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15980c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x15980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x159810: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x159810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159814: 0xc056610  jal         func_159840
    ctx->pc = 0x159814u;
    SET_GPR_U32(ctx, 31, 0x15981Cu);
    ctx->pc = 0x159840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159840u, 0x159814u, 0x15981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15981Cu;
label_15981c:
    // 0x15981c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15981cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159828: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x159828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15982c: 0x3e00008  jr          $ra
    ctx->pc = 0x15982Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15982Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159834u;
    // 0x159834: 0x0  nop
    ctx->pc = 0x159834u;
    // NOP
    // 0x159838: 0x0  nop
    ctx->pc = 0x159838u;
    // NOP
    // 0x15983c: 0x0  nop
    ctx->pc = 0x15983cu;
    // NOP
    ctx->pc = 0x159840u;
}
