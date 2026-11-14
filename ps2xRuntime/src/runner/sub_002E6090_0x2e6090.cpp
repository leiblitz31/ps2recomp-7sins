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

// Function: sub_002E6090
// Address: 0x2e6090 - 0x2e6110
void sub_002E6090_0x2e6090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6090_0x2e6090");
#endif

    switch (ctx->pc) {
        case 0x2e60b4u: goto label_2e60b4;
        case 0x2e60c8u: goto label_2e60c8;
        case 0x2e60dcu: goto label_2e60dc;
        case 0x2e60f0u: goto label_2e60f0;
        default: break;
    }

    ctx->pc = 0x2e6090u;

    // 0x2e6090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e6090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e6094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e6094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e6098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e609c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e609cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e60a0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e60a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2e60a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e60a8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e60a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e60ac: 0xc041010  jal         func_104040
    ctx->pc = 0x2E60ACu;
    SET_GPR_U32(ctx, 31, 0x2E60B4u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x2E60ACu, 0x2E60B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60B4u;
label_2e60b4:
    // 0x2e60b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e60b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e60bc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e60bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e60c0: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x2E60C0u;
    SET_GPR_U32(ctx, 31, 0x2E60C8u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x2E60C0u, 0x2E60C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60C8u;
label_2e60c8:
    // 0x2e60c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e60c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e60ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60d0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2e60d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e60d4: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x2E60D4u;
    SET_GPR_U32(ctx, 31, 0x2E60DCu);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x2E60D4u, 0x2E60DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60DCu;
label_2e60dc:
    // 0x2e60dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e60dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e60e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e60e4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e60e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e60e8: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x2E60E8u;
    SET_GPR_U32(ctx, 31, 0x2E60F0u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x2E60E8u, 0x2E60F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60F0u;
label_2e60f0:
    // 0x2e60f0: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x2e60f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x2e60f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e60f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e60f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e60f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e60fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e60fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6100: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e6100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e6104: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E610Cu;
    // 0x2e610c: 0x0  nop
    ctx->pc = 0x2e610cu;
    // NOP
    ctx->pc = 0x2e6110u;
}
