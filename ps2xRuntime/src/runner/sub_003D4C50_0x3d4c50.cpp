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

// Function: sub_003D4C50
// Address: 0x3d4c50 - 0x3d4d28
void sub_003D4C50_0x3d4c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4C50_0x3d4c50");
#endif

    switch (ctx->pc) {
        case 0x3d4cb8u: goto label_3d4cb8;
        case 0x3d4cd0u: goto label_3d4cd0;
        default: break;
    }

    ctx->pc = 0x3d4c50u;

    // 0x3d4c50: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d4c54: 0x8c43b1ec  lw          $v1, -0x4E14($v0)
    ctx->pc = 0x3d4c54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x3d4c58: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3d4c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d4c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C5Cu;
        // 0x3d4c60: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4C64u;
    // 0x3d4c64: 0x0  nop
    ctx->pc = 0x3d4c64u;
    // NOP
    // 0x3d4c68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d4c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d4c6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d4c70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3d4c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3d4c74: 0x8c43b1ec  lw          $v1, -0x4E14($v0)
    ctx->pc = 0x3d4c74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x3d4c78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d4c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4c7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d4c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3d4c80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3d4c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3d4c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d4c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d4c88: 0x2039021  addu        $s2, $s0, $v1
    ctx->pc = 0x3d4c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3d4c8c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3d4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x3d4c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4C90u;
    {
        const bool branch_taken_0x3d4c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C90u;
        // 0x3d4c94: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4c90) {
            ctx->pc = 0x3D4CA4u;
            goto label_3d4ca4;
        }
    }
    ctx->pc = 0x3D4C98u;
    // 0x3d4c98: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x3d4c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x3d4c9c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3D4C9Cu;
    {
        const bool branch_taken_0x3d4c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C9Cu;
        // 0x3d4ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4c9c) {
            ctx->pc = 0x3D4CECu;
            goto label_3d4cec;
        }
    }
    ctx->pc = 0x3D4CA4u;
label_3d4ca4:
    // 0x3d4ca4: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x3d4ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x3d4ca8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3D4CA8u;
    {
        const bool branch_taken_0x3d4ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4ca8) {
            ctx->pc = 0x3D4CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4CA8u;
            // 0x3d4cac: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4CE8u;
            goto label_3d4ce8;
        }
    }
    ctx->pc = 0x3D4CB0u;
    // 0x3d4cb0: 0xc0e69e4  jal         func_39A790
    ctx->pc = 0x3D4CB0u;
    SET_GPR_U32(ctx, 31, 0x3D4CB8u);
    ctx->pc = 0x3D4CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4CB0u;
    // 0x3d4cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A790u, 0x3D4CB0u, 0x3D4CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4CB8u;
label_3d4cb8:
    // 0x3d4cb8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3d4cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3d4cbc: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3d4cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3d4cc0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3D4CC0u;
    {
        const bool branch_taken_0x3d4cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4CC0u;
        // 0x3d4cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4cc0) {
            ctx->pc = 0x3D4CECu;
            goto label_3d4cec;
        }
    }
    ctx->pc = 0x3D4CC8u;
    // 0x3d4cc8: 0xc0e69e4  jal         func_39A790
    ctx->pc = 0x3D4CC8u;
    SET_GPR_U32(ctx, 31, 0x3D4CD0u);
    ctx->pc = 0x3D4CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4CC8u;
    // 0x3d4ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A790u, 0x3D4CC8u, 0x3D4CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4CD0u;
label_3d4cd0:
    // 0x3d4cd0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3d4cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3d4cd4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3d4cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3d4cd8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4CD8u;
    {
        const bool branch_taken_0x3d4cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4cd8) {
            ctx->pc = 0x3D4CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4CD8u;
            // 0x3d4cdc: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4CE8u;
            goto label_3d4ce8;
        }
    }
    ctx->pc = 0x3D4CE0u;
    // 0x3d4ce0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D4CE0u;
    {
        const bool branch_taken_0x3d4ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4CE0u;
        // 0x3d4ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4ce0) {
            ctx->pc = 0x3D4CECu;
            goto label_3d4cec;
        }
    }
    ctx->pc = 0x3D4CE8u;
label_3d4ce8:
    // 0x3d4ce8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d4ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4cec:
    // 0x3d4cec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3d4cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d4cf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d4cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d4cf4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3d4cf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d4cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d4cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d4cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4CFCu;
        // 0x3d4d00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4D04u;
    // 0x3d4d04: 0x0  nop
    ctx->pc = 0x3d4d04u;
    // NOP
    // 0x3d4d08: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d4d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4D0Cu;
        // 0x3d4d10: 0xc440b228  lwc1        $f0, -0x4DD8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4D14u;
    // 0x3d4d14: 0x0  nop
    ctx->pc = 0x3d4d14u;
    // NOP
    // 0x3d4d18: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d4d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3d4d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4d20: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4D20u;
        // 0x3d4d24: 0xe46cb228  swc1        $f12, -0x4DD8($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294947368), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4D28u;
}
