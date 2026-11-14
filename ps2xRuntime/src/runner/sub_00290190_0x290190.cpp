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

// Function: sub_00290190
// Address: 0x290190 - 0x2901f0
void sub_00290190_0x290190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290190_0x290190");
#endif

    switch (ctx->pc) {
        case 0x2901b8u: goto label_2901b8;
        case 0x2901ccu: goto label_2901cc;
        default: break;
    }

    ctx->pc = 0x290190u;

    // 0x290190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x290194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x290198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29019c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29019cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2901a0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2901a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2901a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2901a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2901a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2901a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2901ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2901acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901b0: 0xc0a3774  jal         func_28DDD0
    ctx->pc = 0x2901B0u;
    SET_GPR_U32(ctx, 31, 0x2901B8u);
    ctx->pc = 0x28DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DDD0u, 0x2901B0u, 0x2901B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901B8u;
label_2901b8:
    // 0x2901b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2901b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901bc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2901bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2901c0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2901c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2901c4: 0xc074514  jal         func_1D1450
    ctx->pc = 0x2901C4u;
    SET_GPR_U32(ctx, 31, 0x2901CCu);
    ctx->pc = 0x1D1450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1450u, 0x2901C4u, 0x2901CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2901CCu;
label_2901cc:
    // 0x2901cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2901ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2901d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2901d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2901d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2901d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2901d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2901dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2901DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2901DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2901E4u;
    // 0x2901e4: 0x0  nop
    ctx->pc = 0x2901e4u;
    // NOP
    // 0x2901e8: 0x0  nop
    ctx->pc = 0x2901e8u;
    // NOP
    // 0x2901ec: 0x0  nop
    ctx->pc = 0x2901ecu;
    // NOP
    ctx->pc = 0x2901f0u;
}
