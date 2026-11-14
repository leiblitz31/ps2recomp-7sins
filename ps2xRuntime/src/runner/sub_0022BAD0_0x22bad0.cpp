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

// Function: sub_0022BAD0
// Address: 0x22bad0 - 0x22bb30
void sub_0022BAD0_0x22bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BAD0_0x22bad0");
#endif

    switch (ctx->pc) {
        case 0x22baf8u: goto label_22baf8;
        case 0x22bb0cu: goto label_22bb0c;
        default: break;
    }

    ctx->pc = 0x22bad0u;

    // 0x22bad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22bad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22bad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22badc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22badcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22bae0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22bae4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bae8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22baec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22baecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22baf0: 0xc08ab10  jal         func_22AC40
    ctx->pc = 0x22BAF0u;
    SET_GPR_U32(ctx, 31, 0x22BAF8u);
    ctx->pc = 0x22AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AC40u, 0x22BAF0u, 0x22BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BAF8u;
label_22baf8:
    // 0x22baf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22baf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bafc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x22bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22bb00: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22bb00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22bb04: 0xc08aecc  jal         func_22BB30
    ctx->pc = 0x22BB04u;
    SET_GPR_U32(ctx, 31, 0x22BB0Cu);
    ctx->pc = 0x22BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB30u, 0x22BB04u, 0x22BB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB0Cu;
label_22bb0c:
    // 0x22bb0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22bb0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22bb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22bb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bb18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22bb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22bb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x22BB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BB24u;
    // 0x22bb24: 0x0  nop
    ctx->pc = 0x22bb24u;
    // NOP
    // 0x22bb28: 0x0  nop
    ctx->pc = 0x22bb28u;
    // NOP
    // 0x22bb2c: 0x0  nop
    ctx->pc = 0x22bb2cu;
    // NOP
    ctx->pc = 0x22bb30u;
}
