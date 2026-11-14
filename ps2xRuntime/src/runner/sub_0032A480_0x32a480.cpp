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

// Function: sub_0032A480
// Address: 0x32a480 - 0x32a550
void sub_0032A480_0x32a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A480_0x32a480");
#endif

    switch (ctx->pc) {
        case 0x32a4acu: goto label_32a4ac;
        case 0x32a4c0u: goto label_32a4c0;
        default: break;
    }

    ctx->pc = 0x32a480u;

    // 0x32a480: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x32a484: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x32a484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x32a488: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x32a488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x32a48c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x32a48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x32a490: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x32a490u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x32a494: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32a494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32a498: 0x2603e880  addiu       $v1, $s0, -0x1780
    ctx->pc = 0x32a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
    // 0x32a49c: 0x8c452318  lw          $a1, 0x2318($v0)
    ctx->pc = 0x32a49cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4F2318u));
    // 0x32a4a0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x32a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32a4a4: 0xc106784  jal         func_419E10
    ctx->pc = 0x32A4A4u;
    SET_GPR_U32(ctx, 31, 0x32A4ACu);
    ctx->pc = 0x32A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A4A4u;
    // 0x32a4a8: 0xa38821  addu        $s1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x32A4A4u, 0x32A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A4ACu;
label_32a4ac:
    // 0x32a4ac: 0x8e06e880  lw          $a2, -0x1780($s0)
    ctx->pc = 0x32a4acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961280)));
    // 0x32a4b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32a4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a4b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32a4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a4b8: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x32A4B8u;
    SET_GPR_U32(ctx, 31, 0x32A4C0u);
    ctx->pc = 0x32A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A4B8u;
    // 0x32a4bc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x32A4B8u, 0x32A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A4C0u;
label_32a4c0:
    // 0x32a4c0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x32a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32a4c4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x32a4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a4c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x32a4c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32a4cc: 0x0  nop
    ctx->pc = 0x32a4ccu;
    // NOP
    // 0x32a4d0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x32A4D0u;
    {
        const bool branch_taken_0x32a4d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32a4d0) {
            ctx->pc = 0x32A4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A4D0u;
            // 0x32a4d4: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A4E0u;
            goto label_32a4e0;
        }
    }
    ctx->pc = 0x32A4D8u;
    // 0x32a4d8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x32A4D8u;
    {
        const bool branch_taken_0x32a4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4D8u;
        // 0x32a4dc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4d8) {
            ctx->pc = 0x32A53Cu;
            goto label_32a53c;
        }
    }
    ctx->pc = 0x32A4E0u;
label_32a4e0:
    // 0x32a4e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32a4e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32a4e4: 0x0  nop
    ctx->pc = 0x32a4e4u;
    // NOP
    // 0x32a4e8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x32A4E8u;
    {
        const bool branch_taken_0x32a4e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32a4e8) {
            ctx->pc = 0x32A4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A4E8u;
            // 0x32a4ec: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A4F8u;
            goto label_32a4f8;
        }
    }
    ctx->pc = 0x32A4F0u;
    // 0x32a4f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32A4F0u;
    {
        const bool branch_taken_0x32a4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4F0u;
        // 0x32a4f4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4f0) {
            ctx->pc = 0x32A53Cu;
            goto label_32a53c;
        }
    }
    ctx->pc = 0x32A4F8u;
label_32a4f8:
    // 0x32a4f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32a4fc: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x32a4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a500: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32A500u;
    {
        const bool branch_taken_0x32a500 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x32A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A500u;
        // 0x32a504: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a500) {
            ctx->pc = 0x32A518u;
            goto label_32a518;
        }
    }
    ctx->pc = 0x32A508u;
    // 0x32a508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a50c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a50cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a510: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32A510u;
    {
        const bool branch_taken_0x32a510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A510u;
        // 0x32a514: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a510) {
            ctx->pc = 0x32A534u;
            goto label_32a534;
        }
    }
    ctx->pc = 0x32A518u;
label_32a518:
    // 0x32a518: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x32a518u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x32a51c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32a51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32a520: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32a520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32a524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a528: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a52c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x32a52cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x32a530: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32a530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_32a534:
    // 0x32a534: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32a534u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32a538: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x32a538u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_32a53c:
    // 0x32a53c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x32a53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32a540: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x32a540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32a544: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32a544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32a548: 0x3e00008  jr          $ra
    ctx->pc = 0x32A548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A548u;
        // 0x32a54c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A550u;
}
