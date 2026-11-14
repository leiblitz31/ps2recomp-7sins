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

// Function: sub_00485BE0
// Address: 0x485be0 - 0x485cd0
void sub_00485BE0_0x485be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485BE0_0x485be0");
#endif

    switch (ctx->pc) {
        case 0x485c70u: goto label_485c70;
        default: break;
    }

    ctx->pc = 0x485be0u;

    // 0x485be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x485be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x485be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x485be8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x485be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x485bec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485bf0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x485bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x485bf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485bf8: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x485bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x485bfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x485bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x485c00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c04: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x485c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x485c08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x485c08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x485c0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c10: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x485c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x485c14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c18: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x485c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
    // 0x485c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c20: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x485c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x485c24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c28: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x485c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x485c2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c30: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x485c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x485c34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c38: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x485c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x485c3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c40: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x485c40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x485c44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c48: 0xa0400071  sb          $zero, 0x71($v0)
    ctx->pc = 0x485c48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x485c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x485c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x485c50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c54: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x485c54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x485c58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x485c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x485c5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c60: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x485c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x485c64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x485c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c68: 0xc121cf4  jal         func_4873D0
    ctx->pc = 0x485C68u;
    SET_GPR_U32(ctx, 31, 0x485C70u);
    ctx->pc = 0x4873D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4873D0u, 0x485C68u, 0x485C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485C70u;
label_485c70:
    // 0x485c70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x485c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x485c74: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c78: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x485c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x485c7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c80: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x485c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x485c84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c88: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x485c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x485c8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c90: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x485c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x485c94: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485c98: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x485c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x485c9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485ca0: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x485ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    // 0x485ca4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x485ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x485ca8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485cac: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x485cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x485cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x485cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x485cb4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x485cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485cb8: 0xac64006c  sw          $a0, 0x6C($v1)
    ctx->pc = 0x485cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 4));
    // 0x485cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485cc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x485cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x485cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x485CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485CCCu;
    // 0x485ccc: 0x0  nop
    ctx->pc = 0x485cccu;
    // NOP
    ctx->pc = 0x485cd0u;
}
