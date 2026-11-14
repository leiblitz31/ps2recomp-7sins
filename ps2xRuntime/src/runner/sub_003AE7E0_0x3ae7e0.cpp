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

// Function: sub_003AE7E0
// Address: 0x3ae7e0 - 0x3ae8c0
void sub_003AE7E0_0x3ae7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE7E0_0x3ae7e0");
#endif

    switch (ctx->pc) {
        case 0x3ae810u: goto label_3ae810;
        case 0x3ae838u: goto label_3ae838;
        default: break;
    }

    ctx->pc = 0x3ae7e0u;

    // 0x3ae7e0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3ae7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3ae7e4: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x3ae7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
    // 0x3ae7e8: 0x8c620610  lw          $v0, 0x610($v1)
    ctx->pc = 0x3ae7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61D490u));
    // 0x3ae7ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ae7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ae7f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ae7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ae7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE7F4u;
        // 0x3ae7f8: 0x8c620590  lw          $v0, 0x590($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1424)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE7FCu;
    // 0x3ae7fc: 0x0  nop
    ctx->pc = 0x3ae7fcu;
    // NOP
    // 0x3ae800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ae800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ae804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae808: 0xc0eb85a  jal         func_3AE168
    ctx->pc = 0x3AE808u;
    SET_GPR_U32(ctx, 31, 0x3AE810u);
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3AE808u, 0x3AE810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE810u;
label_3ae810:
    // 0x3ae810: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ae810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3ae814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae818: 0x2442d4f0  addiu       $v0, $v0, -0x2B10
    ctx->pc = 0x3ae818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956272));
    // 0x3ae81c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE81Cu;
        // 0x3ae820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE824u;
    // 0x3ae824: 0x0  nop
    ctx->pc = 0x3ae824u;
    // NOP
    // 0x3ae828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ae828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ae82c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ae82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ae830: 0xc0eb85a  jal         func_3AE168
    ctx->pc = 0x3AE830u;
    SET_GPR_U32(ctx, 31, 0x3AE838u);
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3AE830u, 0x3AE838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE838u;
label_3ae838:
    // 0x3ae838: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3ae838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae83c: 0xc4430018  lwc1        $f3, 0x18($v0)
    ctx->pc = 0x3ae83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ae840: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x3ae840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae844: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3ae844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae848: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3ae848u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3ae84c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3ae84cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3ae850: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ae850u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ae854: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3ae854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ae858: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x3ae858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ae85c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3ae85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae860: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3ae860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae864: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3ae864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae868: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3ae868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3ae86c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3ae86cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3ae870: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3ae870u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3ae874: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3ae874u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ae878: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x3ae878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ae87c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3ae87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae880: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x3ae880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae884: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3ae884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae888: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ae888u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ae88c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3ae88cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3ae890: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ae890u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ae894: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3ae894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3ae898: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ae898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae89c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ae89cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ae8a0: 0x0  nop
    ctx->pc = 0x3ae8a0u;
    // NOP
    // 0x3ae8a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3AE8A4u;
    {
        const bool branch_taken_0x3ae8a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8A4u;
        // 0x3ae8a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae8a4) {
            ctx->pc = 0x3AE8B0u;
            goto label_3ae8b0;
        }
    }
    ctx->pc = 0x3AE8ACu;
    // 0x3ae8ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ae8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ae8b0:
    // 0x3ae8b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ae8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE8B4u;
        // 0x3ae8b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE8BCu;
    // 0x3ae8bc: 0x0  nop
    ctx->pc = 0x3ae8bcu;
    // NOP
    ctx->pc = 0x3ae8c0u;
}
