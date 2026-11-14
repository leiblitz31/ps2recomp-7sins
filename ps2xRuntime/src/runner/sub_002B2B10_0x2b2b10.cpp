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

// Function: sub_002B2B10
// Address: 0x2b2b10 - 0x2b2bf0
void sub_002B2B10_0x2b2b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2B10_0x2b2b10");
#endif

    switch (ctx->pc) {
        case 0x2b2b2cu: goto label_2b2b2c;
        default: break;
    }

    ctx->pc = 0x2b2b10u;

    // 0x2b2b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2b18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b2b1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b2b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b2b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2b24: 0xc0ad6a8  jal         func_2B5AA0
    ctx->pc = 0x2B2B24u;
    SET_GPR_U32(ctx, 31, 0x2B2B2Cu);
    ctx->pc = 0x2B5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AA0u, 0x2B2B24u, 0x2B2B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2B2Cu;
label_2b2b2c:
    // 0x2b2b2c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b2b30: 0x246365d0  addiu       $v1, $v1, 0x65D0
    ctx->pc = 0x2b2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26064));
    // 0x2b2b34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b2b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b2b3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b40: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2b2b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2b2b44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2b48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b4c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2b2b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2b2b50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2b54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b58: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2b2b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2b2b5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2b60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b64: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x2b2b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x2b2b68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2b6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b70: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b2b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b2b74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2b74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2b78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b7c: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b2b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b2b80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2b84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b88: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b2b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b2b8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2b90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b94: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x2b2b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x2b2b98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2b9c: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2b2b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2ba0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2b2ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2b2ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2ba8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2bac: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x2b2bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2b2bb0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2b2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2b2bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b2bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2bb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2bbc: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x2b2bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x2b2bc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2bc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2bc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2bc8: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2b2bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2b2bcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2bd0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2b2bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2b2bd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2bd8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2b2bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2b2bdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2be4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b2be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b2be8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2BF0u;
}
