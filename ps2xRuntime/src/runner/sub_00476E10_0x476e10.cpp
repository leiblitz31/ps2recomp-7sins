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

// Function: sub_00476E10
// Address: 0x476e10 - 0x476ee0
void sub_00476E10_0x476e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00476E10_0x476e10");
#endif

    switch (ctx->pc) {
        case 0x476e58u: goto label_476e58;
        case 0x476e6cu: goto label_476e6c;
        default: break;
    }

    ctx->pc = 0x476e10u;

    // 0x476e10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x476e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x476e14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x476e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x476e18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x476e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x476e1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x476e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x476e20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x476e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x476e24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x476e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x476e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x476e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x476e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x476e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x476e30: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x476e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x476e34: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x476e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x476e38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x476e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x476e3c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x476e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x476e40: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x476e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x476e44: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x476e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x476e48: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x476e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x476e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x476e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476e50: 0xc0e0d24  jal         func_383490
    ctx->pc = 0x476E50u;
    SET_GPR_U32(ctx, 31, 0x476E58u);
    ctx->pc = 0x383490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383490u, 0x476E50u, 0x476E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476E58u;
label_476e58:
    // 0x476e58: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x476e58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476e5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x476e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x476e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476e64: 0xc0e0dba  jal         func_3836E8
    ctx->pc = 0x476E64u;
    SET_GPR_U32(ctx, 31, 0x476E6Cu);
    ctx->pc = 0x3836E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3836E8u, 0x476E64u, 0x476E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x476E6Cu;
label_476e6c:
    // 0x476e6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x476e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476e70: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x476e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x476e74: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x476E74u;
    {
        const bool branch_taken_0x476e74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x476e74) {
            ctx->pc = 0x476EACu;
            goto label_476eac;
        }
    }
    ctx->pc = 0x476E7Cu;
    // 0x476e7c: 0x230082b  sltu        $at, $s1, $s0
    ctx->pc = 0x476e7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x476e80: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x476E80u;
    {
        const bool branch_taken_0x476e80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x476e80) {
            ctx->pc = 0x476E94u;
            goto label_476e94;
        }
    }
    ctx->pc = 0x476E88u;
    // 0x476e88: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x476e88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x476e8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x476E8Cu;
    {
        const bool branch_taken_0x476e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x476e8c) {
            ctx->pc = 0x476E98u;
            goto label_476e98;
        }
    }
    ctx->pc = 0x476E94u;
label_476e94:
    // 0x476e94: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x476e94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_476e98:
    // 0x476e98: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x476e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x476e9c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x476e9cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x476ea0: 0xa2540003  sb          $s4, 0x3($s2)
    ctx->pc = 0x476ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 20));
    // 0x476ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x476EA4u;
    {
        const bool branch_taken_0x476ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x476ea4) {
            ctx->pc = 0x476EB4u;
            goto label_476eb4;
        }
    }
    ctx->pc = 0x476EACu;
label_476eac:
    // 0x476eac: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x476eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x476eb0: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x476eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
label_476eb4:
    // 0x476eb4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x476eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x476eb8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x476eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x476ebc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x476ebcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x476ec0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x476ec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x476ec4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x476ec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x476ec8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x476ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x476ecc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x476eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x476ed0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x476ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x476ed4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x476ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x476ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x476ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x476ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x476EE0u;
}
