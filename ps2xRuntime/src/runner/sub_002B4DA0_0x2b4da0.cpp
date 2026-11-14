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

// Function: sub_002B4DA0
// Address: 0x2b4da0 - 0x2b5100
void sub_002B4DA0_0x2b4da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4DA0_0x2b4da0");
#endif

    switch (ctx->pc) {
        case 0x2b4e1cu: goto label_2b4e1c;
        case 0x2b4e38u: goto label_2b4e38;
        case 0x2b4e58u: goto label_2b4e58;
        case 0x2b4f40u: goto label_2b4f40;
        case 0x2b4fecu: goto label_2b4fec;
        default: break;
    }

    ctx->pc = 0x2b4da0u;

    // 0x2b4da0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b4da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b4da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4da8: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2b4da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2b4dac: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2b4dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2b4db0: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x2b4db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x2b4db4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2b4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b4db8: 0x27a20058  addiu       $v0, $sp, 0x58
    ctx->pc = 0x2b4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2b4dbc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b4dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4dc0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b4dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4dc4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b4dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4dc8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2b4dc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2b4dcc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b4dccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b4dd0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b4dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b4dd4: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2b4dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4dd8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2b4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b4ddc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b4ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4de0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b4de0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b4de4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2b4de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b4de8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2b4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b4dec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b4decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4df0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2b4df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4df4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b4df4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b4df8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2b4df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2b4dfc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2b4dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b4e00: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b4e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4e04: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2b4e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4e08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b4e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b4e0c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2b4e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b4e10: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2b4e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2b4e14: 0xc104d24  jal         func_413490
    ctx->pc = 0x2B4E14u;
    SET_GPR_U32(ctx, 31, 0x2B4E1Cu);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2B4E14u, 0x2B4E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E1Cu;
label_2b4e1c:
    // 0x2b4e1c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2b4e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2b4e20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b4e20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4e24: 0x0  nop
    ctx->pc = 0x2b4e24u;
    // NOP
    // 0x2b4e28: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2b4e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2b4e2c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2b4e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2b4e30: 0xc104d24  jal         func_413490
    ctx->pc = 0x2B4E30u;
    SET_GPR_U32(ctx, 31, 0x2B4E38u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2B4E30u, 0x2B4E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E38u;
label_2b4e38:
    // 0x2b4e38: 0xc7818208  lwc1        $f1, -0x7DF8($gp)
    ctx->pc = 0x2b4e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4e3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b4e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4e40: 0x450100a8  bc1t        . + 4 + (0xA8 << 2)
    ctx->pc = 0x2B4E40u;
    {
        const bool branch_taken_0x2b4e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4e40) {
            ctx->pc = 0x2B50E4u;
            goto label_2b50e4;
        }
    }
    ctx->pc = 0x2B4E48u;
    // 0x2b4e48: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2b4e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2b4e4c: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x2b4e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2b4e50: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x2B4E50u;
    SET_GPR_U32(ctx, 31, 0x2B4E58u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2B4E50u, 0x2B4E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E58u;
label_2b4e58:
    // 0x2b4e58: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2b4e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2b4e5c: 0x2484e008  addiu       $a0, $a0, -0x1FF8
    ctx->pc = 0x2b4e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959112));
    // 0x2b4e60: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x2b4e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2b4e64: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2b4e64u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4EE008u));
    // 0x2b4e68: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b4e68u;
    { uint32_t bits = FAST_READ32(0x4EE010u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4e6c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2b4e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2b4e70: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b4e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b4e74: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2b4e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2b4e78: 0x2484e018  addiu       $a0, $a0, -0x1FE8
    ctx->pc = 0x2b4e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959128));
    // 0x2b4e7c: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x2b4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2b4e80: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2b4e80u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4EE018u));
    // 0x2b4e84: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2b4e84u;
    { uint32_t bits = FAST_READ32(0x4EE020u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4e88: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2b4e88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2b4e8c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b4e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b4e90: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2b4e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4e94: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2b4e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4e98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b4e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4e9c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2b4e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b4ea0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2b4ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4ea4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2b4ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4ea8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b4ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4eac: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2b4eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2b4eb0: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2b4eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4eb4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2b4eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4eb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b4eb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4ebc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2b4ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b4ec0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2b4ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4ec4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2b4ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4ec8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b4ec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b4ecc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2b4eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2b4ed0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2b4ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4ed4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2b4ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4ed8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b4ed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b4edc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2b4edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2b4ee0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2b4ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4ee4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2b4ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4ee8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b4ee8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b4eec: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2b4eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b4ef0: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x2b4ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b4ef4: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x2b4ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b4ef8: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x2b4ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4efc: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2b4efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4f00: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2b4f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4f04: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b4f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4f08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b4f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b4f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4f10: 0x0  nop
    ctx->pc = 0x2b4f10u;
    // NOP
    // 0x2b4f14: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b4f14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b4f18: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2b4f18u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2b4f1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b4f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4f20: 0x0  nop
    ctx->pc = 0x2b4f20u;
    // NOP
    // 0x2b4f24: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b4f24u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b4f28: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x2b4f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2b4f2c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2b4f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b4f30: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2b4f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2b4f34: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x2b4f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2b4f38: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x2B4F38u;
    SET_GPR_U32(ctx, 31, 0x2B4F40u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2B4F38u, 0x2B4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F40u;
label_2b4f40:
    // 0x2b4f40: 0xc7a50030  lwc1        $f5, 0x30($sp)
    ctx->pc = 0x2b4f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b4f44: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x2b4f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b4f48: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x2b4f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4f4c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2b4f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4f50: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2b4f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4f54: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b4f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4f58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b4f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4f5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b4f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4f60: 0x0  nop
    ctx->pc = 0x2b4f60u;
    // NOP
    // 0x2b4f64: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b4f64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b4f68: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2b4f68u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2b4f6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b4f6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4f70: 0x0  nop
    ctx->pc = 0x2b4f70u;
    // NOP
    // 0x2b4f74: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b4f74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b4f78: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x2b4f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2b4f7c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2b4f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b4f80: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2b4f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4f84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b4f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4f8c: 0x0  nop
    ctx->pc = 0x2b4f8cu;
    // NOP
    // 0x2b4f90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b4f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4f94: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4F94u;
    {
        const bool branch_taken_0x2b4f94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4f94) {
            ctx->pc = 0x2B4FB4u;
            goto label_2b4fb4;
        }
    }
    ctx->pc = 0x2B4F9Cu;
    // 0x2b4f9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b4fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4fa4: 0x0  nop
    ctx->pc = 0x2b4fa4u;
    // NOP
    // 0x2b4fa8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2b4fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b4fac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B4FACu;
    {
        const bool branch_taken_0x2b4fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4fac) {
            ctx->pc = 0x2B4FE0u;
            goto label_2b4fe0;
        }
    }
    ctx->pc = 0x2B4FB4u;
label_2b4fb4:
    // 0x2b4fb4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2b4fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4fb8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2b4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2b4fbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4fc0: 0x0  nop
    ctx->pc = 0x2b4fc0u;
    // NOP
    // 0x2b4fc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b4fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4fc8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4FC8u;
    {
        const bool branch_taken_0x2b4fc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4fc8) {
            ctx->pc = 0x2B4FE0u;
            goto label_2b4fe0;
        }
    }
    ctx->pc = 0x2B4FD0u;
    // 0x2b4fd0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2b4fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2b4fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4fd8: 0x0  nop
    ctx->pc = 0x2b4fd8u;
    // NOP
    // 0x2b4fdc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2b4fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2b4fe0:
    // 0x2b4fe0: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x2b4fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b4fe4: 0xc0c39ca  jal         func_30E728
    ctx->pc = 0x2B4FE4u;
    SET_GPR_U32(ctx, 31, 0x2B4FECu);
    ctx->pc = 0x30E728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E728u, 0x2B4FE4u, 0x2B4FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4FECu;
label_2b4fec:
    // 0x2b4fec: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2b4fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2b4ff0: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x2b4ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b4ff4: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x2b4ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4ff8: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2b4ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4ffc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2b4ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5000: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b5000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b5004: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b5004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5008: 0x0  nop
    ctx->pc = 0x2b5008u;
    // NOP
    // 0x2b500c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b500cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b5010: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2b5010u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2b5014: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2b5014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b5018: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x2b5018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b501c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x2b501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5020: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2b5020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5024: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2b5024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5028: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b5028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b502c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b502cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5030: 0x0  nop
    ctx->pc = 0x2b5030u;
    // NOP
    // 0x2b5034: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b5034u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b5038: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2b5038u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2b503c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2b503cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2b5040: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x2b5040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5044: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2b5044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5048: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2b5048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b504c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b504cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5050: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b5050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b5054: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b5054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5058: 0x0  nop
    ctx->pc = 0x2b5058u;
    // NOP
    // 0x2b505c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b505cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b5060: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2b5060u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2b5064: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2b5064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b5068: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x2b5068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b506c: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x2b506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b5070: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2b5070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b5074: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2b5074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5078: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2b5078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b507c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5080: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b5080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b5084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b5084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5088: 0x0  nop
    ctx->pc = 0x2b5088u;
    // NOP
    // 0x2b508c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b508cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b5090: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2b5090u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2b5094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b5094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5098: 0x0  nop
    ctx->pc = 0x2b5098u;
    // NOP
    // 0x2b509c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b509cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b50a0: 0x4604285c  madd.s      $f1, $f5, $f4
    ctx->pc = 0x2b50a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x2b50a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b50a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b50a8: 0x0  nop
    ctx->pc = 0x2b50a8u;
    // NOP
    // 0x2b50ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b50acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b50b0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B50B0u;
    {
        const bool branch_taken_0x2b50b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b50b0) {
            ctx->pc = 0x2B50C4u;
            goto label_2b50c4;
        }
    }
    ctx->pc = 0x2B50B8u;
    // 0x2b50b8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2b50b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b50bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2b50bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2b50c0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2b50c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2b50c4:
    // 0x2b50c4: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x2b50c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x2b50c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b50c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b50cc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2b50ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b50d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b50d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b50d4: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x2b50d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b50d8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2b50d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2b50dc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2b50dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b50e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b50e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2b50e4:
    // 0x2b50e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b50e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b50e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2b50e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b50ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B50ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B50ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B50F4u;
    // 0x2b50f4: 0x0  nop
    ctx->pc = 0x2b50f4u;
    // NOP
    // 0x2b50f8: 0x0  nop
    ctx->pc = 0x2b50f8u;
    // NOP
    // 0x2b50fc: 0x0  nop
    ctx->pc = 0x2b50fcu;
    // NOP
    ctx->pc = 0x2b5100u;
}
