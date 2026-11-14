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

// Function: sub_00283910
// Address: 0x283910 - 0x283970
void sub_00283910_0x283910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283910_0x283910");
#endif

    switch (ctx->pc) {
        case 0x283938u: goto label_283938;
        case 0x28394cu: goto label_28394c;
        default: break;
    }

    ctx->pc = 0x283910u;

    // 0x283910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x283910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x283914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x283918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28391c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28391cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x283920: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x283920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x283924: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x283924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283928: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x283928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28392c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28392cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283930: 0xc0a07e4  jal         func_281F90
    ctx->pc = 0x283930u;
    SET_GPR_U32(ctx, 31, 0x283938u);
    ctx->pc = 0x281F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281F90u, 0x283930u, 0x283938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283938u;
label_283938:
    // 0x283938: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x283938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28393c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x28393cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x283940: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x283940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283944: 0xc0a0e5c  jal         func_283970
    ctx->pc = 0x283944u;
    SET_GPR_U32(ctx, 31, 0x28394Cu);
    ctx->pc = 0x283970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283970u, 0x283944u, 0x28394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28394Cu;
label_28394c:
    // 0x28394c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28394cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283958: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x283958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28395c: 0x3e00008  jr          $ra
    ctx->pc = 0x28395Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28395Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283964u;
    // 0x283964: 0x0  nop
    ctx->pc = 0x283964u;
    // NOP
    // 0x283968: 0x0  nop
    ctx->pc = 0x283968u;
    // NOP
    // 0x28396c: 0x0  nop
    ctx->pc = 0x28396cu;
    // NOP
    ctx->pc = 0x283970u;
}
