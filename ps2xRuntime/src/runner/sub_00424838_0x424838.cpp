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

// Function: sub_00424838
// Address: 0x424838 - 0x424980
void sub_00424838_0x424838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424838_0x424838");
#endif

    ctx->pc = 0x424838u;

    // 0x424838: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x424838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x42483c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x42483cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x424840: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x424840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x424844: 0x46000a80  add.s       $f10, $f1, $f0
    ctx->pc = 0x424844u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x424848: 0xe48a0014  swc1        $f10, 0x14($a0)
    ctx->pc = 0x424848u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x42484c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x42484cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x424850: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x424850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x424854: 0x0  nop
    ctx->pc = 0x424854u;
    // NOP
    // 0x424858: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x424858u;
    {
        const bool branch_taken_0x424858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x42485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424858u;
        // 0x42485c: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424858) {
            ctx->pc = 0x424920u;
            goto label_424920;
        }
    }
    ctx->pc = 0x424860u;
    // 0x424860: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x424860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x424864: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x424864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x424868: 0x0  nop
    ctx->pc = 0x424868u;
    // NOP
    // 0x42486c: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
    ctx->pc = 0x42486Cu;
    {
        const bool branch_taken_0x42486c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x42486c) {
            ctx->pc = 0x424870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42486Cu;
            // 0x424870: 0xc4c10004  lwc1        $f1, 0x4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x424928u;
            goto label_424928;
        }
    }
    ctx->pc = 0x424874u;
    // 0x424874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x424874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x424878: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x424878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x42487c: 0x46004243  div.s       $f9, $f8, $f0
    ctx->pc = 0x42487cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[8], ctx->f[0]); }
    // 0x424880: 0x46014203  div.s       $f8, $f8, $f1
    ctx->pc = 0x424880u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[8], ctx->f[1]); }
    // 0x424884: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x424884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x424888: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x424888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x42488c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x42488cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x424890: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x424890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x424894: 0xc4a70010  lwc1        $f7, 0x10($a1)
    ctx->pc = 0x424894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x424898: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x424898u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x42489c: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x42489cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x4248a0: 0x460839c2  mul.s       $f7, $f7, $f8
    ctx->pc = 0x4248a0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[8]);
    // 0x4248a4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x4248a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4248a8: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x4248a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4248ac: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x4248acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x4248b0: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x4248b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4248b4: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x4248b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4248b8: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x4248b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x4248bc: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x4248bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x4248c0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x4248c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4248c4: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x4248c4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x4248c8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x4248c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4248cc: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x4248ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4248d0: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x4248d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x4248d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4248d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4248d8: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x4248d8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x4248dc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x4248dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4248e0: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x4248e0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x4248e4: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x4248e4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x4248e8: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x4248e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4248ec: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x4248ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4248f0: 0xe7a7000c  swc1        $f7, 0xC($sp)
    ctx->pc = 0x4248f0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x4248f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4248f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4248f8: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x4248f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x4248fc: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x4248fcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x424900: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x424900u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x424904: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x424904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x424908: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x424908u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x42490c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x42490cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x424910: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x424910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x424914: 0x46080003  div.s       $f0, $f0, $f8
    ctx->pc = 0x424914u;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[8]); }
    // 0x424918: 0x46005000  add.s       $f0, $f10, $f0
    ctx->pc = 0x424918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x42491c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x42491cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_424920:
    // 0x424920: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x424920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x424924: 0x0  nop
    ctx->pc = 0x424924u;
    // NOP
label_424928:
    // 0x424928: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x424928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42492c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x42492cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x424930: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x424930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x424934: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x424934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x424938: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x424938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x42493c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x42493cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x424940: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x424940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x424944: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x424944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x424948: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x424948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42494c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x42494cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x424950: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x424950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x424954: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x424954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x424958: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x424958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x42495c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x42495cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x424960: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x424960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x424964: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x424964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x424968: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x424968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x42496c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x42496cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x424970: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x424970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x424974: 0x3e00008  jr          $ra
    ctx->pc = 0x424974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424974u;
        // 0x424978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42497Cu;
    // 0x42497c: 0x0  nop
    ctx->pc = 0x42497cu;
    // NOP
    ctx->pc = 0x424980u;
}
