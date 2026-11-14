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

// Function: sub_0015AA80
// Address: 0x15aa80 - 0x15abb0
void sub_0015AA80_0x15aa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AA80_0x15aa80");
#endif

    switch (ctx->pc) {
        case 0x15aaccu: goto label_15aacc;
        case 0x15aae0u: goto label_15aae0;
        case 0x15ab10u: goto label_15ab10;
        case 0x15ab2cu: goto label_15ab2c;
        case 0x15ab40u: goto label_15ab40;
        case 0x15ab70u: goto label_15ab70;
        default: break;
    }

    ctx->pc = 0x15aa80u;

    // 0x15aa80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15aa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15aa84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15aa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15aa88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15aa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15aa8c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x15aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x15aa90: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x15aa90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x15aa94: 0x93a40040  lbu         $a0, 0x40($sp)
    ctx->pc = 0x15aa94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15aa98: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x15aa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15aa9c: 0xa06400a4  sb          $a0, 0xA4($v1)
    ctx->pc = 0x15aa9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 164), (uint8_t)GPR_U32(ctx, 4));
    // 0x15aaa0: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x15aaa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15aaa4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15aaa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15aaa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15aaac: 0x14830036  bne         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x15AAACu;
    {
        const bool branch_taken_0x15aaac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15aaac) {
            ctx->pc = 0x15AB88u;
            goto label_15ab88;
        }
    }
    ctx->pc = 0x15AAB4u;
    // 0x15aab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15aab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15aab8: 0x0  nop
    ctx->pc = 0x15aab8u;
    // NOP
    // 0x15aabc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15aabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15aac0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15aac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aac4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15AAC4u;
    {
        const bool branch_taken_0x15aac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aac4) {
            ctx->pc = 0x15AB14u;
            goto label_15ab14;
        }
    }
    ctx->pc = 0x15AACCu;
label_15aacc:
    // 0x15aacc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15aad0: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x15aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x15aad4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15aad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aad8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AAD8u;
    SET_GPR_U32(ctx, 31, 0x15AAE0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AAD8u, 0x15AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AAE0u;
label_15aae0:
    // 0x15aae0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15aae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15aae4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x15aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15aae8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15aae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15aaec: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15aaf0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15aaf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15aaf4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15aaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15aaf8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15aaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15aafc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x15aafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x15ab00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ab00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15ab04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab08: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15AB08u;
    SET_GPR_U32(ctx, 31, 0x15AB10u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15AB08u, 0x15AB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB10u;
label_15ab10:
    // 0x15ab10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15ab10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15ab14:
    // 0x15ab14: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x15ab14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x15ab18: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15AB18u;
    {
        const bool branch_taken_0x15ab18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ab18) {
            ctx->pc = 0x15AACCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15aacc;
        }
    }
    ctx->pc = 0x15AB20u;
    // 0x15ab20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15ab20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab24: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15AB24u;
    {
        const bool branch_taken_0x15ab24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ab24) {
            ctx->pc = 0x15AB74u;
            goto label_15ab74;
        }
    }
    ctx->pc = 0x15AB2Cu;
label_15ab2c:
    // 0x15ab2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x15ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ab30: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15ab34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ab34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab38: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AB38u;
    SET_GPR_U32(ctx, 31, 0x15AB40u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AB38u, 0x15AB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB40u;
label_15ab40:
    // 0x15ab40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ab40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ab44: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x15ab44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ab48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15ab48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15ab4c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x15ab50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15ab50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15ab54: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15ab58: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15ab58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ab5c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x15ab5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x15ab60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ab60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15ab64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab68: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15AB68u;
    SET_GPR_U32(ctx, 31, 0x15AB70u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15AB68u, 0x15AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB70u;
label_15ab70:
    // 0x15ab70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15ab70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15ab74:
    // 0x15ab74: 0x2e03000c  sltiu       $v1, $s0, 0xC
    ctx->pc = 0x15ab74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x15ab78: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15AB78u;
    {
        const bool branch_taken_0x15ab78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ab78) {
            ctx->pc = 0x15AB2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ab2c;
        }
    }
    ctx->pc = 0x15AB80u;
    // 0x15ab80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15AB80u;
    {
        const bool branch_taken_0x15ab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ab80) {
            ctx->pc = 0x15AB98u;
            goto label_15ab98;
        }
    }
    ctx->pc = 0x15AB88u;
label_15ab88:
    // 0x15ab88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15ab8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15ab8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ab90: 0x0  nop
    ctx->pc = 0x15ab90u;
    // NOP
    // 0x15ab94: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15ab94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_15ab98:
    // 0x15ab98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15ab98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ab9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ab9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15aba0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15aba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15aba4: 0x3e00008  jr          $ra
    ctx->pc = 0x15ABA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ABA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ABACu;
    // 0x15abac: 0x0  nop
    ctx->pc = 0x15abacu;
    // NOP
    ctx->pc = 0x15abb0u;
}
