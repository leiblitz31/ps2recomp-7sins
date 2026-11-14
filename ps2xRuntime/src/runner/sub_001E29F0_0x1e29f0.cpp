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

// Function: sub_001E29F0
// Address: 0x1e29f0 - 0x1e2a90
void sub_001E29F0_0x1e29f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E29F0_0x1e29f0");
#endif

    switch (ctx->pc) {
        case 0x1e2a20u: goto label_1e2a20;
        case 0x1e2a34u: goto label_1e2a34;
        case 0x1e2a48u: goto label_1e2a48;
        case 0x1e2a68u: goto label_1e2a68;
        default: break;
    }

    ctx->pc = 0x1e29f0u;

    // 0x1e29f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1e29f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1e29f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e29f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e29f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e29f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e29fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e29fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2a00: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1e2a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1e2a04: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1e2a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1e2a08: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1e2a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1e2a0c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1e2a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1e2a10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e2a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e2a14: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e2a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e2a18: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E2A18u;
    SET_GPR_U32(ctx, 31, 0x1E2A20u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E2A18u, 0x1E2A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A20u;
label_1e2a20:
    // 0x1e2a20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e2a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a24: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1e2a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1e2a28: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1e2a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e2a2c: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E2A2Cu;
    SET_GPR_U32(ctx, 31, 0x1E2A34u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E2A2Cu, 0x1E2A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A34u;
label_1e2a34:
    // 0x1e2a34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e2a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a38: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e2a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e2a3c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1e2a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e2a40: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E2A40u;
    SET_GPR_U32(ctx, 31, 0x1E2A48u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E2A40u, 0x1E2A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A48u;
label_1e2a48:
    // 0x1e2a48: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e2a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2a4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e2a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e2a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a54: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e2a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a58: 0x27a8004c  addiu       $t0, $sp, 0x4C
    ctx->pc = 0x1e2a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1e2a5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e2a5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2a60: 0xc078aa4  jal         func_1E2A90
    ctx->pc = 0x1E2A60u;
    SET_GPR_U32(ctx, 31, 0x1E2A68u);
    ctx->pc = 0x1E2A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2A90u, 0x1E2A60u, 0x1E2A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2A68u;
label_1e2a68:
    // 0x1e2a68: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1e2a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e2a6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2a70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2a74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2a78: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1e2a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e2a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2A84u;
    // 0x1e2a84: 0x0  nop
    ctx->pc = 0x1e2a84u;
    // NOP
    // 0x1e2a88: 0x0  nop
    ctx->pc = 0x1e2a88u;
    // NOP
    // 0x1e2a8c: 0x0  nop
    ctx->pc = 0x1e2a8cu;
    // NOP
    ctx->pc = 0x1e2a90u;
}
