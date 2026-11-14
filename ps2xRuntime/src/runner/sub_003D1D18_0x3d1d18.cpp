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

// Function: sub_003D1D18
// Address: 0x3d1d18 - 0x3d1de8
void sub_003D1D18_0x3d1d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1D18_0x3d1d18");
#endif

    switch (ctx->pc) {
        case 0x3d1d48u: goto label_3d1d48;
        case 0x3d1dacu: goto label_3d1dac;
        case 0x3d1dbcu: goto label_3d1dbc;
        default: break;
    }

    ctx->pc = 0x3d1d18u;

    // 0x3d1d18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d1d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3d1d1c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3d1d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3d1d20: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3d1d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3d1d24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d1d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1d28: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3d1d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3d1d2c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3d1d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1d30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d1d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d1d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1d38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d1d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1d3c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d1d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d1d40: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3D1D40u;
    SET_GPR_U32(ctx, 31, 0x3D1D48u);
    ctx->pc = 0x3D1D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1D40u;
    // 0x3d1d44: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3D1D40u, 0x3D1D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1D48u;
label_3d1d48:
    // 0x3d1d48: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3d1d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3d1d4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3d1d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d1d50: 0x8c62b1ec  lw          $v0, -0x4E14($v1)
    ctx->pc = 0x3d1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x3d1d54: 0x96060082  lhu         $a2, 0x82($s0)
    ctx->pc = 0x3d1d54u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 130)));
    // 0x3d1d58: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3d1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3d1d5c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3d1d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d1d60: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d1d64: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3d1d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3d1d68: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3d1d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3d1d6c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x3d1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x3d1d70: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x3d1d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x3d1d74: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x3d1d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x3d1d78: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3d1d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3d1d7c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D1D7Cu;
    {
        const bool branch_taken_0x3d1d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1D7Cu;
        // 0x3d1d80: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1d7c) {
            ctx->pc = 0x3D1DC8u;
            goto label_3d1dc8;
        }
    }
    ctx->pc = 0x3D1D84u;
    // 0x3d1d84: 0x96070084  lhu         $a3, 0x84($s0)
    ctx->pc = 0x3d1d84u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3d1d88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d1d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1d8c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3d1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3d1d90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d1d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1d94: 0x96020080  lhu         $v0, 0x80($s0)
    ctx->pc = 0x3d1d94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3d1d98: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3d1d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1d9c: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x3d1d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x3d1da0: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x3d1da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x3d1da4: 0xc0f4406  jal         func_3D1018
    ctx->pc = 0x3D1DA4u;
    SET_GPR_U32(ctx, 31, 0x3D1DACu);
    ctx->pc = 0x3D1DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1DA4u;
    // 0x3d1da8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1018u, 0x3D1DA4u, 0x3D1DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1DACu;
label_3d1dac:
    // 0x3d1dac: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D1DACu;
    {
        const bool branch_taken_0x3d1dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d1dac) {
            ctx->pc = 0x3D1DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D1DACu;
            // 0x3d1db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D1DCCu;
            goto label_3d1dcc;
        }
    }
    ctx->pc = 0x3D1DB4u;
    // 0x3d1db4: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x3D1DB4u;
    SET_GPR_U32(ctx, 31, 0x3D1DBCu);
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x3D1DB4u, 0x3D1DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1DBCu;
label_3d1dbc:
    // 0x3d1dbc: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x3d1dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x3d1dc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D1DC0u;
    {
        const bool branch_taken_0x3d1dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1DC0u;
        // 0x3d1dc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1dc0) {
            ctx->pc = 0x3D1DCCu;
            goto label_3d1dcc;
        }
    }
    ctx->pc = 0x3D1DC8u;
label_3d1dc8:
    // 0x3d1dc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d1dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d1dcc:
    // 0x3d1dcc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3d1dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d1dd0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3d1dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d1dd4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3d1dd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d1dd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d1dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d1ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1DDCu;
        // 0x3d1de0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1DE4u;
    // 0x3d1de4: 0x0  nop
    ctx->pc = 0x3d1de4u;
    // NOP
    ctx->pc = 0x3d1de8u;
}
