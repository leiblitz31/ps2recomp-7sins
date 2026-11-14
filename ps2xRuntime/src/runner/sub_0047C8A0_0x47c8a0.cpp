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

// Function: sub_0047C8A0
// Address: 0x47c8a0 - 0x47cad0
void sub_0047C8A0_0x47c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C8A0_0x47c8a0");
#endif

    switch (ctx->pc) {
        case 0x47c978u: goto label_47c978;
        case 0x47ca18u: goto label_47ca18;
        case 0x47cab8u: goto label_47cab8;
        default: break;
    }

    ctx->pc = 0x47c8a0u;

    // 0x47c8a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x47c8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x47c8a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47c8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47c8a8: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x47c8a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x47c8ac: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x47c8acu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x47c8b0: 0xe7ae0050  swc1        $f14, 0x50($sp)
    ctx->pc = 0x47c8b0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x47c8b4: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x47c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x47c8b8: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x47c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x47c8bc: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x47c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x47c8c0: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x47c8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x47c8c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47c8c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c8c8: 0x0  nop
    ctx->pc = 0x47c8c8u;
    // NOP
    // 0x47c8cc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x47c8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x47c8d0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x47c8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x47c8d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x47c8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x47c8d8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x47c8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c8dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47c8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c8e0: 0x0  nop
    ctx->pc = 0x47c8e0u;
    // NOP
    // 0x47c8e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x47c8e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c8e8: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x47C8E8u;
    {
        const bool branch_taken_0x47c8e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47c8e8) {
            ctx->pc = 0x47C978u;
            goto label_47c978;
        }
    }
    ctx->pc = 0x47C8F0u;
    // 0x47c8f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x47c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47c8f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47C8F4u;
    {
        const bool branch_taken_0x47c8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47c8f4) {
            ctx->pc = 0x47C904u;
            goto label_47c904;
        }
    }
    ctx->pc = 0x47C8FCu;
    // 0x47c8fc: 0x2782b6b4  addiu       $v0, $gp, -0x494C
    ctx->pc = 0x47c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948532));
    // 0x47c900: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x47c900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_47c904:
    // 0x47c904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47c904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x47c908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47c908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c90c: 0x0  nop
    ctx->pc = 0x47c90cu;
    // NOP
    // 0x47c910: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x47c910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x47c914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47c914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c918: 0x0  nop
    ctx->pc = 0x47c918u;
    // NOP
    // 0x47c91c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x47c91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x47c920: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47c920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c924: 0x0  nop
    ctx->pc = 0x47c924u;
    // NOP
    // 0x47c928: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x47c928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x47c92c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x47c92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c930: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x47c930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c934: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47c934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47c938: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x47c938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x47c93c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x47c93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c940: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x47c940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c944: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47c944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47c948: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x47c948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x47c94c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x47c94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c950: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x47c950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c954: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47c954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47c958: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x47c958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x47c95c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47c960: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x47c960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x47c964: 0x2786c080  addiu       $a2, $gp, -0x3F80
    ctx->pc = 0x47c964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951040));
    // 0x47c968: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x47c968u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47c96c: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x47c96cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47c970: 0xc11f1cc  jal         func_47C730
    ctx->pc = 0x47C970u;
    SET_GPR_U32(ctx, 31, 0x47C978u);
    ctx->pc = 0x47C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C730u, 0x47C970u, 0x47C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C978u;
label_47c978:
    // 0x47c978: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x47c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c97c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47c97cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c980: 0x0  nop
    ctx->pc = 0x47c980u;
    // NOP
    // 0x47c984: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x47c984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47c988: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x47C988u;
    {
        const bool branch_taken_0x47c988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47c988) {
            ctx->pc = 0x47CA18u;
            goto label_47ca18;
        }
    }
    ctx->pc = 0x47C990u;
    // 0x47c990: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x47c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47c994: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47C994u;
    {
        const bool branch_taken_0x47c994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47c994) {
            ctx->pc = 0x47C9A4u;
            goto label_47c9a4;
        }
    }
    ctx->pc = 0x47C99Cu;
    // 0x47c99c: 0x2782b6b0  addiu       $v0, $gp, -0x4950
    ctx->pc = 0x47c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948528));
    // 0x47c9a0: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x47c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_47c9a4:
    // 0x47c9a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47c9a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c9a8: 0x0  nop
    ctx->pc = 0x47c9a8u;
    // NOP
    // 0x47c9ac: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x47c9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x47c9b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x47c9b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47c9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c9b8: 0x0  nop
    ctx->pc = 0x47c9b8u;
    // NOP
    // 0x47c9bc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x47c9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x47c9c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47c9c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47c9c4: 0x0  nop
    ctx->pc = 0x47c9c4u;
    // NOP
    // 0x47c9c8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x47c9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x47c9cc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x47c9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c9d0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x47c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c9d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47c9d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47c9d8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x47c9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x47c9dc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x47c9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c9e0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x47c9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c9e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47c9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47c9e8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x47c9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x47c9ec: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x47c9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47c9f0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x47c9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47c9f4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47c9f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47c9f8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x47c9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x47c9fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47c9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47ca00: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x47ca00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x47ca04: 0x2786c080  addiu       $a2, $gp, -0x3F80
    ctx->pc = 0x47ca04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951040));
    // 0x47ca08: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x47ca08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47ca0c: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x47ca0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47ca10: 0xc11f1cc  jal         func_47C730
    ctx->pc = 0x47CA10u;
    SET_GPR_U32(ctx, 31, 0x47CA18u);
    ctx->pc = 0x47C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C730u, 0x47CA10u, 0x47CA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CA18u;
label_47ca18:
    // 0x47ca18: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x47ca18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47ca1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47ca1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47ca20: 0x0  nop
    ctx->pc = 0x47ca20u;
    // NOP
    // 0x47ca24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x47ca24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x47ca28: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x47CA28u;
    {
        const bool branch_taken_0x47ca28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x47ca28) {
            ctx->pc = 0x47CAB8u;
            goto label_47cab8;
        }
    }
    ctx->pc = 0x47CA30u;
    // 0x47ca30: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x47ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47ca34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47CA34u;
    {
        const bool branch_taken_0x47ca34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ca34) {
            ctx->pc = 0x47CA44u;
            goto label_47ca44;
        }
    }
    ctx->pc = 0x47CA3Cu;
    // 0x47ca3c: 0x2782b6ac  addiu       $v0, $gp, -0x4954
    ctx->pc = 0x47ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948524));
    // 0x47ca40: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x47ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_47ca44:
    // 0x47ca44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47ca44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47ca48: 0x0  nop
    ctx->pc = 0x47ca48u;
    // NOP
    // 0x47ca4c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x47ca4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x47ca50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47ca50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47ca54: 0x0  nop
    ctx->pc = 0x47ca54u;
    // NOP
    // 0x47ca58: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x47ca58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x47ca5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x47ca60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47ca60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47ca64: 0x0  nop
    ctx->pc = 0x47ca64u;
    // NOP
    // 0x47ca68: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x47ca68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x47ca6c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x47ca6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47ca70: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x47ca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ca74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47ca74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47ca78: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x47ca78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x47ca7c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x47ca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47ca80: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x47ca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ca84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47ca84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47ca88: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x47ca88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x47ca8c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x47ca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47ca90: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x47ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47ca94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47ca94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47ca98: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x47ca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x47ca9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47caa0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x47caa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x47caa4: 0x2786c080  addiu       $a2, $gp, -0x3F80
    ctx->pc = 0x47caa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951040));
    // 0x47caa8: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x47caa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47caac: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x47caacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47cab0: 0xc11f1cc  jal         func_47C730
    ctx->pc = 0x47CAB0u;
    SET_GPR_U32(ctx, 31, 0x47CAB8u);
    ctx->pc = 0x47C730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C730u, 0x47CAB0u, 0x47CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CAB8u;
label_47cab8:
    // 0x47cab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47cabc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47cabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47cac0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x47cac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x47cac4: 0x3e00008  jr          $ra
    ctx->pc = 0x47CAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47CAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47CACCu;
    // 0x47cacc: 0x0  nop
    ctx->pc = 0x47caccu;
    // NOP
    ctx->pc = 0x47cad0u;
}
