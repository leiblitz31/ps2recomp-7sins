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

// Function: sub_00140DA0
// Address: 0x140da0 - 0x140f90
void sub_00140DA0_0x140da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140DA0_0x140da0");
#endif

    switch (ctx->pc) {
        case 0x140e28u: goto label_140e28;
        case 0x140f18u: goto label_140f18;
        case 0x140f28u: goto label_140f28;
        case 0x140f40u: goto label_140f40;
        case 0x140f54u: goto label_140f54;
        case 0x140f68u: goto label_140f68;
        case 0x140f7cu: goto label_140f7c;
        default: break;
    }

    ctx->pc = 0x140da0u;

    // 0x140da0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x140da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x140da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140da8: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x140da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x140dac: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x140dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x140db0: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x140db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x140db4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x140db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x140db8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x140db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140dbc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x140dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x140dc0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x140dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x140dc4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x140dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140dc8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x140dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x140dcc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x140dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x140dd0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x140dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140dd4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x140dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x140dd8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x140dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x140ddc: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x140ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140de0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x140de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x140de4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x140de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x140de8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x140de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x140dec: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x140decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x140df0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x140df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140df4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x140df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140df8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x140df8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x140dfc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x140dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x140e00: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x140e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x140e04: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x140e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x140e08: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x140e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140e0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x140e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x140e10: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x140e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x140e14: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x140e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x140e18: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x140e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x140e1c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x140E1Cu;
    {
        const bool branch_taken_0x140e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x140e1c) {
            ctx->pc = 0x140E44u;
            goto label_140e44;
        }
    }
    ctx->pc = 0x140E24u;
    // 0x140e24: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x140e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_140e28:
    // 0x140e28: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x140e28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x140e2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x140e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x140e30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x140e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x140e34: 0x0  nop
    ctx->pc = 0x140e34u;
    // NOP
    // 0x140e38: 0x0  nop
    ctx->pc = 0x140e38u;
    // NOP
    // 0x140e3c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x140E3Cu;
    {
        const bool branch_taken_0x140e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140e3c) {
            ctx->pc = 0x140E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140e28;
        }
    }
    ctx->pc = 0x140E44u;
label_140e44:
    // 0x140e44: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x140e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140e48: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x140e48u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x140e4c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x140e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x140e50: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x140e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x140e54: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x140e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x140e58: 0x24842880  addiu       $a0, $a0, 0x2880
    ctx->pc = 0x140e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10368));
    // 0x140e5c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x140e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x140e60: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x140e60u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4E2880u));
    // 0x140e64: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x140e64u;
    { uint32_t bits = FAST_READ32(0x4E2888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140e68: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x140e68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x140e6c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x140e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x140e70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x140e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x140e74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x140e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140e78: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140e7c: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x140e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x140e80: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140e84: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x140e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x140e88: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140e8c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x140e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x140e90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140e90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140e94: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140e98: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x140e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x140e9c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140ea0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x140ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x140ea4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140ea8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x140ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x140eac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140eb0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140eb4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x140eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x140eb8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140ebc: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x140ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x140ec0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140ec4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x140ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x140ec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x140ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x140ecc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140ed0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x140ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x140ed4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140ed8: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x140ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x140edc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140ee0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x140ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x140ee4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140ee8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x140ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x140eec: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x140eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x140ef0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x140ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x140ef4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x140ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x140ef8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x140ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140efc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x140efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x140f00: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x140f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140f04: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x140f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x140f08: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x140f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x140f0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140f10: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x140F10u;
    SET_GPR_U32(ctx, 31, 0x140F18u);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x140F10u, 0x140F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F18u;
label_140f18:
    // 0x140f18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x140f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x140f1c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x140f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140f20: 0xc041d58  jal         func_107560
    ctx->pc = 0x140F20u;
    SET_GPR_U32(ctx, 31, 0x140F28u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x140F20u, 0x140F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F28u;
label_140f28:
    // 0x140f28: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x140f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140f2c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x140f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x140f30: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x140f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x140f34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x140f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140f38: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x140F38u;
    SET_GPR_U32(ctx, 31, 0x140F40u);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x140F38u, 0x140F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F40u;
label_140f40:
    // 0x140f40: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x140f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x140f44: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x140f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x140f48: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x140f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140f4c: 0xc104d64  jal         func_413590
    ctx->pc = 0x140F4Cu;
    SET_GPR_U32(ctx, 31, 0x140F54u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x140F4Cu, 0x140F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F54u;
label_140f54:
    // 0x140f54: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x140f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140f58: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x140f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x140f5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x140f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140f60: 0xc103d16  jal         func_40F458
    ctx->pc = 0x140F60u;
    SET_GPR_U32(ctx, 31, 0x140F68u);
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x140F60u, 0x140F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F68u;
label_140f68:
    // 0x140f68: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x140f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x140f6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x140f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x140f70: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x140f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140f74: 0xc103d16  jal         func_40F458
    ctx->pc = 0x140F74u;
    SET_GPR_U32(ctx, 31, 0x140F7Cu);
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x140F74u, 0x140F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140F7Cu;
label_140f7c:
    // 0x140f7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140f80: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x140f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x140f84: 0x3e00008  jr          $ra
    ctx->pc = 0x140F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140F8Cu;
    // 0x140f8c: 0x0  nop
    ctx->pc = 0x140f8cu;
    // NOP
    ctx->pc = 0x140f90u;
}
