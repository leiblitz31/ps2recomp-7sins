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

// Function: sub_00210B00
// Address: 0x210b00 - 0x210c00
void sub_00210B00_0x210b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210B00_0x210b00");
#endif

    switch (ctx->pc) {
        case 0x210b34u: goto label_210b34;
        case 0x210b48u: goto label_210b48;
        case 0x210b78u: goto label_210b78;
        case 0x210b90u: goto label_210b90;
        case 0x210ba4u: goto label_210ba4;
        case 0x210bc0u: goto label_210bc0;
        case 0x210bd0u: goto label_210bd0;
        default: break;
    }

    ctx->pc = 0x210b00u;

    // 0x210b00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x210b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x210b04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x210b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x210b08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x210b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x210b0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x210b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x210b10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x210b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x210b14: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x210b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x210b18: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x210b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x210b1c: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x210b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x210b20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210b24: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x210b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x210b28: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x210b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x210b2c: 0xc05fd30  jal         func_17F4C0
    ctx->pc = 0x210B2Cu;
    SET_GPR_U32(ctx, 31, 0x210B34u);
    ctx->pc = 0x17F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F4C0u, 0x210B2Cu, 0x210B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B34u;
label_210b34:
    // 0x210b34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210b38: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x210b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x210b3c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x210b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210b40: 0xc084318  jal         func_210C60
    ctx->pc = 0x210B40u;
    SET_GPR_U32(ctx, 31, 0x210B48u);
    ctx->pc = 0x210C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C60u, 0x210B40u, 0x210B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B48u;
label_210b48:
    // 0x210b48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210b4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210b50: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x210b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x210b54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210b58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210b5c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x210b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x210b60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210b64: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x210b64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x210b68: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210b6c: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x210b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x210b70: 0xc05611c  jal         func_158470
    ctx->pc = 0x210B70u;
    SET_GPR_U32(ctx, 31, 0x210B78u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x210B70u, 0x210B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B78u;
label_210b78:
    // 0x210b78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x210b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b7c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x210B7Cu;
    {
        const bool branch_taken_0x210b7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x210b7c) {
            ctx->pc = 0x210BE4u;
            goto label_210be4;
        }
    }
    ctx->pc = 0x210B84u;
    // 0x210b84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x210b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b88: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x210B88u;
    {
        const bool branch_taken_0x210b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210b88) {
            ctx->pc = 0x210BD4u;
            goto label_210bd4;
        }
    }
    ctx->pc = 0x210B90u;
label_210b90:
    // 0x210b90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210b94: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x210b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x210b98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b9c: 0xc084300  jal         func_210C00
    ctx->pc = 0x210B9Cu;
    SET_GPR_U32(ctx, 31, 0x210BA4u);
    ctx->pc = 0x210C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C00u, 0x210B9Cu, 0x210BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210BA4u;
label_210ba4:
    // 0x210ba4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x210ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ba8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210bac: 0x211001b  divu        $zero, $s0, $s1
    ctx->pc = 0x210bacu;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x210bb0: 0x2810  mfhi        $a1
    ctx->pc = 0x210bb0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x210bb4: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x210bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x210bb8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x210BB8u;
    SET_GPR_U32(ctx, 31, 0x210BC0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x210BB8u, 0x210BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210BC0u;
label_210bc0:
    // 0x210bc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210bc4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x210bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x210bc8: 0xc084840  jal         func_212100
    ctx->pc = 0x210BC8u;
    SET_GPR_U32(ctx, 31, 0x210BD0u);
    ctx->pc = 0x212100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212100u, 0x210BC8u, 0x210BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210BD0u;
label_210bd0:
    // 0x210bd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x210bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_210bd4:
    // 0x210bd4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x210bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210bd8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x210bd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x210bdc: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x210BDCu;
    {
        const bool branch_taken_0x210bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x210bdc) {
            ctx->pc = 0x210B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210b90;
        }
    }
    ctx->pc = 0x210BE4u;
label_210be4:
    // 0x210be4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x210be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210be8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x210be8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210bec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x210becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210bf4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x210bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x210bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x210BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210C00u;
}
