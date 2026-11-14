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

// Function: sub_003D1C50
// Address: 0x3d1c50 - 0x3d1d18
void sub_003D1C50_0x3d1c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1C50_0x3d1c50");
#endif

    switch (ctx->pc) {
        case 0x3d1c80u: goto label_3d1c80;
        case 0x3d1ce0u: goto label_3d1ce0;
        case 0x3d1cf0u: goto label_3d1cf0;
        default: break;
    }

    ctx->pc = 0x3d1c50u;

    // 0x3d1c50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d1c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3d1c54: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d1c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3d1c58: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d1c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3d1c5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d1c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1c60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d1c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3d1c64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d1c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1c68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3d1c68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1c6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d1c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d1c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1c74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d1c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d1c78: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3D1C78u;
    SET_GPR_U32(ctx, 31, 0x3D1C80u);
    ctx->pc = 0x3D1C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1C78u;
    // 0x3d1c7c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3D1C78u, 0x3D1C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1C80u;
label_3d1c80:
    // 0x3d1c80: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x3d1c80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3d1c84: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d1c88: 0x8c43b1e4  lw          $v1, -0x4E1C($v0)
    ctx->pc = 0x3d1c88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1E4u));
    // 0x3d1c8c: 0x8d04005c  lw          $a0, 0x5C($t0)
    ctx->pc = 0x3d1c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x3d1c90: 0x25060020  addiu       $a2, $t0, 0x20
    ctx->pc = 0x3d1c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x3d1c94: 0x8d070014  lw          $a3, 0x14($t0)
    ctx->pc = 0x3d1c94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x3d1c98: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3d1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3d1c9c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3d1c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3d1ca0: 0x8d020038  lw          $v0, 0x38($t0)
    ctx->pc = 0x3d1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x3d1ca4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3d1ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3d1ca8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x3d1ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x3d1cac: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x3d1cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x3d1cb0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x3d1cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x3d1cb4: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x3d1cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x3d1cb8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D1CB8u;
    {
        const bool branch_taken_0x3d1cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1CB8u;
        // 0x3d1cbc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1cb8) {
            ctx->pc = 0x3D1CFCu;
            goto label_3d1cfc;
        }
    }
    ctx->pc = 0x3D1CC0u;
    // 0x3d1cc0: 0x8d02002c  lw          $v0, 0x2C($t0)
    ctx->pc = 0x3d1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x3d1cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d1cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1cc8: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x3d1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3d1ccc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d1cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1cd0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x3d1cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x3d1cd4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3d1cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1cd8: 0xc0f4406  jal         func_3D1018
    ctx->pc = 0x3D1CD8u;
    SET_GPR_U32(ctx, 31, 0x3D1CE0u);
    ctx->pc = 0x3D1CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1CD8u;
    // 0x3d1cdc: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1018u, 0x3D1CD8u, 0x3D1CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1CE0u;
label_3d1ce0:
    // 0x3d1ce0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D1CE0u;
    {
        const bool branch_taken_0x3d1ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1ce0) {
            ctx->pc = 0x3D1CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1CE0u;
            // 0x3d1ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1D00u;
            goto label_3d1d00;
        }
    }
    ctx->pc = 0x3D1CE8u;
    // 0x3d1ce8: 0xc0c8e30  jal         func_3238C0
    ctx->pc = 0x3D1CE8u;
    SET_GPR_U32(ctx, 31, 0x3D1CF0u);
    ctx->pc = 0x3238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238C0u, 0x3D1CE8u, 0x3D1CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1CF0u;
label_3d1cf0:
    // 0x3d1cf0: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x3d1cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x3d1cf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D1CF4u;
    {
        const bool branch_taken_0x3d1cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1CF4u;
        // 0x3d1cf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1cf4) {
            ctx->pc = 0x3D1D00u;
            goto label_3d1d00;
        }
    }
    ctx->pc = 0x3D1CFCu;
label_3d1cfc:
    // 0x3d1cfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d1cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1d00:
    // 0x3d1d00: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d1d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d1d04: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d1d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d1d08: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d1d08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d1d0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d1d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d1d10: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1D10u;
        // 0x3d1d14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1D18u;
}
