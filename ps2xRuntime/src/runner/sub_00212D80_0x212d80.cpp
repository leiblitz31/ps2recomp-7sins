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

// Function: sub_00212D80
// Address: 0x212d80 - 0x212ee0
void sub_00212D80_0x212d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212D80_0x212d80");
#endif

    ctx->pc = 0x212d80u;

    // 0x212d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212d84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x212d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x212d88: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x212d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x212d8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212d90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212d94: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x212d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212d98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x212d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212d9c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x212d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212da0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x212da0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x212da4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x212da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x212da8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x212da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x212dac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212db0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212db4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x212db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x212db8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x212db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x212dbc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x212dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212dc0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x212dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212dc4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x212dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212dc8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x212dc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x212dcc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x212dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x212dd0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x212dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x212dd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212dd8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x212dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212ddc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212de0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x212de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x212de4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212de8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x212de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212dec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212df0: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x212df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x212df4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212df8: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x212df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212dfc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212e00: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x212e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x212e04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212e08: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x212e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212e0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212e10: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x212e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x212e14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212e18: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x212e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212e1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212e20: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x212e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x212e24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212e28: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x212e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212e2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212e30: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x212e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x212e34: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212e38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212e3c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x212e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x212e40: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x212e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x212e44: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x212e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212e48: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x212e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212e4c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x212e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212e50: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x212e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x212e54: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x212e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x212e58: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x212e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x212e5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212e60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212e64: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x212e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x212e68: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x212e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x212e6c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x212e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212e70: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x212e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212e74: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x212e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212e78: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x212e78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x212e7c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x212e7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x212e80: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x212e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x212e84: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x212e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212e88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212e8c: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x212e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x212e90: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x212e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x212e94: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x212e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212e98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x212e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212e9c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x212e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212ea0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x212ea0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x212ea4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x212ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x212ea8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x212ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x212eac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212eb0: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x212eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212eb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212eb8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x212eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x212ebc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x212ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212ec0: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x212ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212ec4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212ec8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x212ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x212ecc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x212eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212ed0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x212ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x212ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x212ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212EDCu;
    // 0x212edc: 0x0  nop
    ctx->pc = 0x212edcu;
    // NOP
    ctx->pc = 0x212ee0u;
}
