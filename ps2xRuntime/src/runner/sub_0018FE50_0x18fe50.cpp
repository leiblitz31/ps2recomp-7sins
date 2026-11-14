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

// Function: sub_0018FE50
// Address: 0x18fe50 - 0x18ff50
void sub_0018FE50_0x18fe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FE50_0x18fe50");
#endif

    ctx->pc = 0x18fe50u;

    // 0x18fe50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18fe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18fe54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x18fe58: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x18fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x18fe5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fe60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fe64: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x18fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18fe68: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fe6c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18fe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fe70: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x18fe70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x18fe74: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x18fe74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18fe78: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x18fe78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x18fe7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fe80: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x18fe84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fe88: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x18fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x18fe8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fe90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fe94: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x18fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x18fe98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18fe9c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x18fe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18fea0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18fea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fea4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fea8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x18fea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x18feac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x18feacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18feb0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x18feb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x18feb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18feb8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x18feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x18febc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18febcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fec0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x18fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x18fec4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fec8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fecc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x18feccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x18fed0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x18fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x18fed4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x18fed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18fed8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18fed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fedc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18fedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fee0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x18fee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x18fee4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x18fee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18fee8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x18fee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x18feec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18feecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fef0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x18fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x18fef4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fef8: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x18fef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x18fefc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ff00: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ff04: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x18ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x18ff08: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x18ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x18ff0c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x18ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18ff10: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x18ff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ff14: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x18ff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ff18: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x18ff18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x18ff1c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x18ff1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18ff20: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x18ff20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x18ff24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ff28: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x18ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x18ff2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ff30: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x18ff30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x18ff34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ff38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18ff38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ff3c: 0x3e00008  jr          $ra
    ctx->pc = 0x18FF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FF44u;
    // 0x18ff44: 0x0  nop
    ctx->pc = 0x18ff44u;
    // NOP
    // 0x18ff48: 0x0  nop
    ctx->pc = 0x18ff48u;
    // NOP
    // 0x18ff4c: 0x0  nop
    ctx->pc = 0x18ff4cu;
    // NOP
    ctx->pc = 0x18ff50u;
}
