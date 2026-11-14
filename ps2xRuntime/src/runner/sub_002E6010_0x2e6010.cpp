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

// Function: sub_002E6010
// Address: 0x2e6010 - 0x2e6090
void sub_002E6010_0x2e6010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6010_0x2e6010");
#endif

    switch (ctx->pc) {
        case 0x2e6034u: goto label_2e6034;
        case 0x2e6048u: goto label_2e6048;
        case 0x2e605cu: goto label_2e605c;
        case 0x2e6070u: goto label_2e6070;
        default: break;
    }

    ctx->pc = 0x2e6010u;

    // 0x2e6010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e6010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e6014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e6014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e6018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e601c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e601cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e6020: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e6020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2e6024: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e6024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6028: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e6028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e602c: 0xc041010  jal         func_104040
    ctx->pc = 0x2E602Cu;
    SET_GPR_U32(ctx, 31, 0x2E6034u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x2E602Cu, 0x2E6034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6034u;
label_2e6034:
    // 0x2e6034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6038: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e6038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e603c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e603cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e6040: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x2E6040u;
    SET_GPR_U32(ctx, 31, 0x2E6048u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x2E6040u, 0x2E6048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6048u;
label_2e6048:
    // 0x2e6048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e604c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e604cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6050: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2e6050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6054: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x2E6054u;
    SET_GPR_U32(ctx, 31, 0x2E605Cu);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x2E6054u, 0x2E605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E605Cu;
label_2e605c:
    // 0x2e605c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e605cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6060: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e6060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6064: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e6064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e6068: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x2E6068u;
    SET_GPR_U32(ctx, 31, 0x2E6070u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x2E6068u, 0x2E6070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6070u;
label_2e6070:
    // 0x2e6070: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x2e6070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x2e6074: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e6074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e6078: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e6078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e607c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e607cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6080: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e6080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e6084: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E608Cu;
    // 0x2e608c: 0x0  nop
    ctx->pc = 0x2e608cu;
    // NOP
    ctx->pc = 0x2e6090u;
}
