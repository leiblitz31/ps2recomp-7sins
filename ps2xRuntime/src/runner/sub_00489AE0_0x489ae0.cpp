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

// Function: sub_00489AE0
// Address: 0x489ae0 - 0x489bd0
void sub_00489AE0_0x489ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489AE0_0x489ae0");
#endif

    switch (ctx->pc) {
        case 0x489af8u: goto label_489af8;
        default: break;
    }

    ctx->pc = 0x489ae0u;

    // 0x489ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x489ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x489ae4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x489ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x489ae8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x489ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x489aec: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x489aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489af0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x489af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489af4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x489af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_489af8:
    // 0x489af8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x489af8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x489afc: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x489afcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x489b00: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x489b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x489b04: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x489b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x489b08: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x489b08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x489b0c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x489b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x489b10: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x489b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x489b14: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x489B14u;
    {
        const bool branch_taken_0x489b14 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x489b14) {
            ctx->pc = 0x489AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_489af8;
        }
    }
    ctx->pc = 0x489B1Cu;
    // 0x489b1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x489b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489b20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x489b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489b24: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x489b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x489b28: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x489b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x489b2c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x489b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x489b30: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x489b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489b34: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x489b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489b38: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x489b38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x489b3c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x489b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x489b40: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x489b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x489b44: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x489b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489b48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x489b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489b4c: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x489b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x489b50: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x489b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x489b54: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x489b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x489b58: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x489b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x489b5c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x489b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x489b60: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x489b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489b64: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x489b64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x489b68: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x489b68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x489b6c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x489b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x489b70: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x489b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x489b74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489b78: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x489b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489b7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x489b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489b80: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x489b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x489b84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489b88: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x489b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489b8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x489b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489b90: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x489b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x489b94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489b98: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x489b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489b9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x489b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489ba0: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x489ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x489ba4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x489ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x489ba8: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x489ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x489bac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x489bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489bb0: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x489bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x489bb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x489bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x489bb8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x489bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x489bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x489BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x489BC4u;
    // 0x489bc4: 0x0  nop
    ctx->pc = 0x489bc4u;
    // NOP
    // 0x489bc8: 0x0  nop
    ctx->pc = 0x489bc8u;
    // NOP
    // 0x489bcc: 0x0  nop
    ctx->pc = 0x489bccu;
    // NOP
    ctx->pc = 0x489bd0u;
}
