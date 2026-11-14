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

// Function: sub_001C2AB0
// Address: 0x1c2ab0 - 0x1c2c00
void sub_001C2AB0_0x1c2ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2AB0_0x1c2ab0");
#endif

    switch (ctx->pc) {
        case 0x1c2b04u: goto label_1c2b04;
        case 0x1c2b20u: goto label_1c2b20;
        case 0x1c2b4cu: goto label_1c2b4c;
        case 0x1c2b58u: goto label_1c2b58;
        case 0x1c2b7cu: goto label_1c2b7c;
        case 0x1c2ba8u: goto label_1c2ba8;
        case 0x1c2be8u: goto label_1c2be8;
        default: break;
    }

    ctx->pc = 0x1c2ab0u;

    // 0x1c2ab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c2ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c2ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c2ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c2ab8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2abc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c2ac0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1c2ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1c2ac4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1c2ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1c2ac8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2acc: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x1c2accu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c2ad0: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x1c2ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c2ad4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1c2ad4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1c2ad8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2adc: 0x80420008  lb          $v0, 0x8($v0)
    ctx->pc = 0x1c2adcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c2ae0: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x1c2ae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c2ae4: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x1c2ae4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x1c2ae8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c2ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2aec: 0x80420009  lb          $v0, 0x9($v0)
    ctx->pc = 0x1c2aecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1c2af0: 0x23e3c  dsll32      $a3, $v0, 24
    ctx->pc = 0x1c2af0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c2af4: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x1c2af4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x1c2af8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c2af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2afc: 0xc070240  jal         func_1C0900
    ctx->pc = 0x1C2AFCu;
    SET_GPR_U32(ctx, 31, 0x1C2B04u);
    ctx->pc = 0x1C0900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0900u, 0x1C2AFCu, 0x1C2B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B04u;
label_1c2b04:
    // 0x1c2b04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c2b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c2b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2b0c: 0x0  nop
    ctx->pc = 0x1c2b0cu;
    // NOP
    // 0x1c2b10: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c2b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1c2b14: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c2b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2b18: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C2B18u;
    SET_GPR_U32(ctx, 31, 0x1C2B20u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C2B18u, 0x1C2B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B20u;
label_1c2b20:
    // 0x1c2b20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c2b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2b24: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1c2b28: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1c2b28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2b2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c2b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c2b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c2b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2b38: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x1c2b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c2b3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2b3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2b40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b44: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1C2B44u;
    SET_GPR_U32(ctx, 31, 0x1C2B4Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C2B44u, 0x1C2B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B4Cu;
label_1c2b4c:
    // 0x1c2b4c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c2b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2b50: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C2B50u;
    SET_GPR_U32(ctx, 31, 0x1C2B58u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C2B50u, 0x1C2B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B58u;
label_1c2b58:
    // 0x1c2b58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c2b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b5c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1c2b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2b60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2b64: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x1c2b64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c2b68: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x1c2b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1c2b6c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1c2b6cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x1c2b70: 0x246400c4  addiu       $a0, $v1, 0xC4
    ctx->pc = 0x1c2b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 196));
    // 0x1c2b74: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1C2B74u;
    SET_GPR_U32(ctx, 31, 0x1C2B7Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1C2B74u, 0x1C2B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B7Cu;
label_1c2b7c:
    // 0x1c2b7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c2b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2b80: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1c2b84: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1c2b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c2b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2b90: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c2b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2b94: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x1c2b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1c2b98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2b98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2b9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ba0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1C2BA0u;
    SET_GPR_U32(ctx, 31, 0x1C2BA8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1C2BA0u, 0x1C2BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BA8u;
label_1c2ba8:
    // 0x1c2ba8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c2ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2bac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2bb0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c2bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c2bb4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c2bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2bb8: 0x8c8309c0  lw          $v1, 0x9C0($a0)
    ctx->pc = 0x1c2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2496)));
    // 0x1c2bbc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c2bc0: 0x8c42be54  lw          $v0, -0x41AC($v0)
    ctx->pc = 0x1c2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE54u));
    // 0x1c2bc4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c2bc8: 0xac8209c0  sw          $v0, 0x9C0($a0)
    ctx->pc = 0x1c2bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2496), GPR_U32(ctx, 2));
    // 0x1c2bcc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2bd0: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1c2bd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1c2bd4: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1c2bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c2bd8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1c2bd8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1c2bdc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c2bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2be0: 0xc06fd70  jal         func_1BF5C0
    ctx->pc = 0x1C2BE0u;
    SET_GPR_U32(ctx, 31, 0x1C2BE8u);
    ctx->pc = 0x1BF5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF5C0u, 0x1C2BE0u, 0x1C2BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BE8u;
label_1c2be8:
    // 0x1c2be8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2bec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2bf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2bf4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1c2bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c2bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2C00u;
}
