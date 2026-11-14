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

// Function: sub_002C59D0
// Address: 0x2c59d0 - 0x2c5aa0
void sub_002C59D0_0x2c59d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C59D0_0x2c59d0");
#endif

    switch (ctx->pc) {
        case 0x2c5a04u: goto label_2c5a04;
        case 0x2c5a38u: goto label_2c5a38;
        case 0x2c5a48u: goto label_2c5a48;
        default: break;
    }

    ctx->pc = 0x2c59d0u;

    // 0x2c59d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c59d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c59d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c59d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c59d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c59d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c59dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c59dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c59e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c59e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c59e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c59e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c59e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c59e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c59ec: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x2c59ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x2c59f0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c59f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c59f8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2c59f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c59fc: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2C59FCu;
    SET_GPR_U32(ctx, 31, 0x2C5A04u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2C59FCu, 0x2C5A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5A04u;
label_2c5a04:
    // 0x2c5a04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c5a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a08: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C5A08u;
    {
        const bool branch_taken_0x2c5a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5a08) {
            ctx->pc = 0x2C5A74u;
            goto label_2c5a74;
        }
    }
    ctx->pc = 0x2C5A10u;
    // 0x2c5a10: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c5a14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c5a18: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2c5a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a1c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2c5a1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2c5a20: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c5a24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c5a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c5a28: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x2c5a28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c5a2c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2c5a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C5A30u;
    {
        const bool branch_taken_0x2c5a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5a30) {
            ctx->pc = 0x2C5A68u;
            goto label_2c5a68;
        }
    }
    ctx->pc = 0x2C5A38u;
label_2c5a38:
    // 0x2c5a38: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c5a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c5a3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c5a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a40: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2C5A40u;
    SET_GPR_U32(ctx, 31, 0x2C5A48u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2C5A40u, 0x2C5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5A48u;
label_2c5a48:
    // 0x2c5a48: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x2c5a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x2c5a4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5A4Cu;
    {
        const bool branch_taken_0x2c5a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5a4c) {
            ctx->pc = 0x2C5A60u;
            goto label_2c5a60;
        }
    }
    ctx->pc = 0x2C5A54u;
    // 0x2c5a54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c5a54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5a58: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x2c5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2c5a5c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c5a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2c5a60:
    // 0x2c5a60: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x2c5a60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2c5a64: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2c5a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2c5a68:
    // 0x2c5a68: 0x1654fff3  bne         $s2, $s4, . + 4 + (-0xD << 2)
    ctx->pc = 0x2C5A68u;
    {
        const bool branch_taken_0x2c5a68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x2c5a68) {
            ctx->pc = 0x2C5A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5a38;
        }
    }
    ctx->pc = 0x2C5A70u;
    // 0x2c5a70: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2c5a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c5a74:
    // 0x2c5a74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c5a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5a78: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c5a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5a7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c5a7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c5a80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c5a80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5a84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c5a84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5a88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5a8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5a90: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2c5a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2c5a94: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5A9Cu;
    // 0x2c5a9c: 0x0  nop
    ctx->pc = 0x2c5a9cu;
    // NOP
    ctx->pc = 0x2c5aa0u;
}
