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

// Function: sub_00153580
// Address: 0x153580 - 0x1535e0
void sub_00153580_0x153580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153580_0x153580");
#endif

    switch (ctx->pc) {
        case 0x1535a8u: goto label_1535a8;
        case 0x1535bcu: goto label_1535bc;
        default: break;
    }

    ctx->pc = 0x153580u;

    // 0x153580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x153580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x153584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15358c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15358cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x153590: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x153590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x153594: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x153594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15359c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15359cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535a0: 0xc05469c  jal         func_151A70
    ctx->pc = 0x1535A0u;
    SET_GPR_U32(ctx, 31, 0x1535A8u);
    ctx->pc = 0x151A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151A70u, 0x1535A0u, 0x1535A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535A8u;
label_1535a8:
    // 0x1535a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1535a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535ac: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1535acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1535b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1535b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1535b4: 0xc054d78  jal         func_1535E0
    ctx->pc = 0x1535B4u;
    SET_GPR_U32(ctx, 31, 0x1535BCu);
    ctx->pc = 0x1535E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1535E0u, 0x1535B4u, 0x1535BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535BCu;
label_1535bc:
    // 0x1535bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1535bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1535c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1535c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1535c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1535c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1535c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1535c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1535cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1535CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1535CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1535D4u;
    // 0x1535d4: 0x0  nop
    ctx->pc = 0x1535d4u;
    // NOP
    // 0x1535d8: 0x0  nop
    ctx->pc = 0x1535d8u;
    // NOP
    // 0x1535dc: 0x0  nop
    ctx->pc = 0x1535dcu;
    // NOP
    ctx->pc = 0x1535e0u;
}
