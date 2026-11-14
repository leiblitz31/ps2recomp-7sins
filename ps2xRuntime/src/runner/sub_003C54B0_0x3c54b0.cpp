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

// Function: sub_003C54B0
// Address: 0x3c54b0 - 0x3c5cb0
void sub_003C54B0_0x3c54b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C54B0_0x3c54b0");
#endif

    switch (ctx->pc) {
        case 0x3c5588u: goto label_3c5588;
        case 0x3c57c8u: goto label_3c57c8;
        default: break;
    }

    ctx->pc = 0x3c54b0u;

    // 0x3c54b0: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3c54b0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c54b4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x3c54b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c54b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c54b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3c54bc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3c54bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c54c0: 0xc5850000  lwc1        $f5, 0x0($t4)
    ctx->pc = 0x3c54c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c54c4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3c54c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c54c8: 0x460501c1  sub.s       $f7, $f0, $f5
    ctx->pc = 0x3c54c8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x3c54cc: 0xc5840004  lwc1        $f4, 0x4($t4)
    ctx->pc = 0x3c54ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c54d0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3c54d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c54d4: 0xc5830008  lwc1        $f3, 0x8($t4)
    ctx->pc = 0x3c54d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c54d8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3c54d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3c54dc: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x3c54dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c54e0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3c54e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3c54e4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3c54e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3c54e8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3c54e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3c54ec: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x3c54ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c54f0: 0xc5620004  lwc1        $f2, 0x4($t3)
    ctx->pc = 0x3c54f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c54f4: 0x46050981  sub.s       $f6, $f1, $f5
    ctx->pc = 0x3c54f4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x3c54f8: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x3c54f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c54fc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3c54fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x3c5500: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3c5500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3c5504: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x3c5504u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3c5508: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x3c5508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3c550c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3c550cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3c5510: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x3c5510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5514: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x3c5514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5518: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x3c5518u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x3c551c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3c551cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5520: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3c5520u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x3c5524: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3c5524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3c5528: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3c5528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3c552c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3c552cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3c5530: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3c5530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3c5534: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3c5534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5538: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3c5538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c553c: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x3c553cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x3c5540: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3c5540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5544: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x3c5544u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x3c5548: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3c5548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3c554c: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x3c554cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x3c5550: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3c5550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c5554: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C5554u;
    {
        const bool branch_taken_0x3c5554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5554u;
        // 0x3c5558: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5554) {
            ctx->pc = 0x3C5590u;
            goto label_3c5590;
        }
    }
    ctx->pc = 0x3C555Cu;
    // 0x3c555c: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x3c555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5560: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x3c5560u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x3c5564: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x3c5564u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x3c5568: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c5568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c556c: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x3c556cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3c5570: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x3c5570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c5574: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3c5574u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3c5578: 0x1041025  or          $v0, $t0, $a0
    ctx->pc = 0x3c5578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x3c557c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3c557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3c5580: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C5580u;
    {
        const bool branch_taken_0x3c5580 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5580u;
        // 0x3c5584: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5580) {
            ctx->pc = 0x3C55C8u;
            goto label_3c55c8;
        }
    }
    ctx->pc = 0x3C5588u;
label_3c5588:
    // 0x3c5588: 0x100001c6  b           . + 4 + (0x1C6 << 2)
    ctx->pc = 0x3C5588u;
    {
        const bool branch_taken_0x3c5588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5588u;
        // 0x3c558c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5588) {
            ctx->pc = 0x3C5CA4u;
            goto label_3c5ca4;
        }
    }
    ctx->pc = 0x3C5590u;
label_3c5590:
    // 0x3c5590: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3c5590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3c5594: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C5594u;
    {
        const bool branch_taken_0x3c5594 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5594u;
        // 0x3c5598: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5594) {
            ctx->pc = 0x3C55C8u;
            goto label_3c55c8;
        }
    }
    ctx->pc = 0x3C559Cu;
    // 0x3c559c: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x3c559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c55a0: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x3c55a0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x3c55a4: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x3c55a4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x3c55a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3c55a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3c55ac: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x3c55acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3c55b0: 0x44043000  mfc1        $a0, $f6
    ctx->pc = 0x3c55b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c55b4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3c55b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3c55b8: 0x1041024  and         $v0, $t0, $a0
    ctx->pc = 0x3c55b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x3c55bc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3c55bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3c55c0: 0x440fff1  bltz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3C55C0u;
    {
        const bool branch_taken_0x3c55c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C55C0u;
        // 0x3c55c4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c55c0) {
            ctx->pc = 0x3C5588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5588;
        }
    }
    ctx->pc = 0x3C55C8u;
label_3c55c8:
    // 0x3c55c8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3c55c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3c55cc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x3c55ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3c55d0: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x3c55d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x3c55d4: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x3c55d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x3c55d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c55dc: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x3c55dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x3c55e0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x3c55e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c55e4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C55E4u;
    {
        const bool branch_taken_0x3c55e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C55E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C55E4u;
        // 0x3c55e8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c55e4) {
            ctx->pc = 0x3C562Cu;
            goto label_3c562c;
        }
    }
    ctx->pc = 0x3C55ECu;
    // 0x3c55ec: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x3c55ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c55f0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3c55f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c55f4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x3c55f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c55f8: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x3c55f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c55fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c55fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c5600: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3c5600u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3c5604: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3c5604u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3c5608: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x3c5608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3c560c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x3c560cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c5610: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x3c5610u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3c5614: 0x1041025  or          $v0, $t0, $a0
    ctx->pc = 0x3c5614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x3c5618: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3c5618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3c561c: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C561Cu;
    {
        const bool branch_taken_0x3c561c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C561Cu;
        // 0x3c5620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c561c) {
            ctx->pc = 0x3C566Cu;
            goto label_3c566c;
        }
    }
    ctx->pc = 0x3C5624u;
    // 0x3c5624: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x3C5624u;
    {
        const bool branch_taken_0x3c5624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5624) {
            ctx->pc = 0x3C5CA4u;
            goto label_3c5ca4;
        }
    }
    ctx->pc = 0x3C562Cu;
label_3c562c:
    // 0x3c562c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C562Cu;
    {
        const bool branch_taken_0x3c562c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C562Cu;
        // 0x3c5630: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c562c) {
            ctx->pc = 0x3C5670u;
            goto label_3c5670;
        }
    }
    ctx->pc = 0x3C5634u;
    // 0x3c5634: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x3c5634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5638: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3c5638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c563c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x3c563cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5640: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x3c5640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c5644: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3c5644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3c5648: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3c5648u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3c564c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3c564cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3c5650: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x3c5650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3c5654: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x3c5654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c5658: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x3c5658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3c565c: 0x1041024  and         $v0, $t0, $a0
    ctx->pc = 0x3c565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x3c5660: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3c5660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3c5664: 0x440018f  bltz        $v0, . + 4 + (0x18F << 2)
    ctx->pc = 0x3C5664u;
    {
        const bool branch_taken_0x3c5664 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5664u;
        // 0x3c5668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5664) {
            ctx->pc = 0x3C5CA4u;
            goto label_3c5ca4;
        }
    }
    ctx->pc = 0x3C566Cu;
label_3c566c:
    // 0x3c566c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3c566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3c5670:
    // 0x3c5670: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3c5670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3c5674: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3c5674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3c5678: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x3c5678u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x3c567c: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x3c567cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x3c5680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c5680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c5684: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x3c5684u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x3c5688: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x3c5688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c568c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C568Cu;
    {
        const bool branch_taken_0x3c568c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C568Cu;
        // 0x3c5690: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c568c) {
            ctx->pc = 0x3C56D4u;
            goto label_3c56d4;
        }
    }
    ctx->pc = 0x3C5694u;
    // 0x3c5694: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x3c5694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5698: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3c5698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c569c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x3c569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c56a0: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x3c56a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c56a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c56a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c56a8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3c56a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3c56ac: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3c56acu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3c56b0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x3c56b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3c56b4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x3c56b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c56b8: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x3c56b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3c56bc: 0x1041025  or          $v0, $t0, $a0
    ctx->pc = 0x3c56bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x3c56c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3c56c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3c56c4: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C56C4u;
    {
        const bool branch_taken_0x3c56c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C56C4u;
        // 0x3c56c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c56c4) {
            ctx->pc = 0x3C5714u;
            goto label_3c5714;
        }
    }
    ctx->pc = 0x3C56CCu;
    // 0x3c56cc: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x3C56CCu;
    {
        const bool branch_taken_0x3c56cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c56cc) {
            ctx->pc = 0x3C5CA4u;
            goto label_3c5ca4;
        }
    }
    ctx->pc = 0x3C56D4u;
label_3c56d4:
    // 0x3c56d4: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C56D4u;
    {
        const bool branch_taken_0x3c56d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c56d4) {
            ctx->pc = 0x3C56D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C56D4u;
            // 0x3c56d8: 0xc5670008  lwc1        $f7, 0x8($t3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5718u;
            goto label_3c5718;
        }
    }
    ctx->pc = 0x3C56DCu;
    // 0x3c56dc: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x3c56dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c56e0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3c56e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c56e4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x3c56e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c56e8: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x3c56e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c56ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3c56ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3c56f0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3c56f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3c56f4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3c56f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3c56f8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x3c56f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3c56fc: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x3c56fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c5700: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x3c5700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3c5704: 0x1041024  and         $v0, $t0, $a0
    ctx->pc = 0x3c5704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x3c5708: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3c5708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3c570c: 0x4400165  bltz        $v0, . + 4 + (0x165 << 2)
    ctx->pc = 0x3C570Cu;
    {
        const bool branch_taken_0x3c570c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3C5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C570Cu;
        // 0x3c5710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c570c) {
            ctx->pc = 0x3C5CA4u;
            goto label_3c5ca4;
        }
    }
    ctx->pc = 0x3C5714u;
label_3c5714:
    // 0x3c5714: 0xc5670008  lwc1        $f7, 0x8($t3)
    ctx->pc = 0x3c5714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3c5718:
    // 0x3c5718: 0xc4a80008  lwc1        $f8, 0x8($a1)
    ctx->pc = 0x3c5718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c571c: 0xc5650000  lwc1        $f5, 0x0($t3)
    ctx->pc = 0x3c571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c5720: 0xc5630004  lwc1        $f3, 0x4($t3)
    ctx->pc = 0x3c5720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c5724: 0x460839c1  sub.s       $f7, $f7, $f8
    ctx->pc = 0x3c5724u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[8]);
    // 0x3c5728: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x3c5728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c572c: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x3c572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c5730: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x3c5730u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x3c5734: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x3c5734u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3c5738: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x3c5738u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x3c573c: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x3c573cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3c5740: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x3c5740u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3c5744: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3c5744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5748: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x3c5748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c574c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3c574cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x3c5750: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x3c5750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5754: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x3c5754u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x3c5758: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x3c5758u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x3c575c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3c575cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3c5760: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x3c5760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3c5764: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x3c5764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x3c5768: 0x46021902  mul.s       $f4, $f3, $f2
    ctx->pc = 0x3c5768u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3c576c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3c576cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3c5770: 0x46012982  mul.s       $f6, $f5, $f1
    ctx->pc = 0x3c5770u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x3c5774: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x3c5774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x3c5778: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x3c5778u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x3c577c: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x3c577cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x3c5780: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x3c5780u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x3c5784: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x3c5784u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x3c5788: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x3c5788u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x3c578c: 0xe5460008  swc1        $f6, 0x8($t2)
    ctx->pc = 0x3c578cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x3c5790: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x3c5790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x3c5794: 0xe5440000  swc1        $f4, 0x0($t2)
    ctx->pc = 0x3c5794u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x3c5798: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x3c5798u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3c579c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3c579cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c57a0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3c57a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3c57a4: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x3c57a4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x3c57a8: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x3c57a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x3c57ac: 0x46062000  add.s       $f0, $f4, $f6
    ctx->pc = 0x3c57acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x3c57b0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3c57b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c57b4: 0x0  nop
    ctx->pc = 0x3c57b4u;
    // NOP
    // 0x3c57b8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3C57B8u;
    {
        const bool branch_taken_0x3c57b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C57B8u;
        // 0x3c57bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c57b8) {
            ctx->pc = 0x3C57DCu;
            goto label_3c57dc;
        }
    }
    ctx->pc = 0x3C57C0u;
    // 0x3c57c0: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x3C57C0u;
    {
        const bool branch_taken_0x3c57c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c57c0) {
            ctx->pc = 0x3C5CA4u;
            goto label_3c5ca4;
        }
    }
    ctx->pc = 0x3C57C8u;
label_3c57c8:
    // 0x3c57c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c57c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3c57cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c57ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c57d0: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x3c57d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3c57d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C57D4u;
    {
        const bool branch_taken_0x3c57d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C57D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C57D4u;
        // 0x3c57d8: 0xc5400000  lwc1        $f0, 0x0($t2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c57d4) {
            ctx->pc = 0x3C57F8u;
            goto label_3c57f8;
        }
    }
    ctx->pc = 0x3C57DCu;
label_3c57dc:
    // 0x3c57dc: 0x46000044  c1          0x44
    ctx->pc = 0x3c57dcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x3c57e0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3c57e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c57e4: 0x0  nop
    ctx->pc = 0x3c57e4u;
    // NOP
    // 0x3c57e8: 0x4501fff7  bc1t        . + 4 + (-0x9 << 2)
    ctx->pc = 0x3C57E8u;
    {
        const bool branch_taken_0x3c57e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C57ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C57E8u;
        // 0x3c57ec: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c57e8) {
            ctx->pc = 0x3C57C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c57c8;
        }
    }
    ctx->pc = 0x3C57F0u;
    // 0x3c57f0: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x3c57f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c57f4: 0x0  nop
    ctx->pc = 0x3c57f4u;
    // NOP
label_3c57f8:
    // 0x3c57f8: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x3c57f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c57fc: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x3c57fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5800: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3c5800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3c5804: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3c5804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3c5808: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3c5808u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3c580c: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x3c580cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x3c5810: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x3c5810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x3c5814: 0xe5420008  swc1        $f2, 0x8($t2)
    ctx->pc = 0x3c5814u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x3c5818: 0xc7aa0000  lwc1        $f10, 0x0($sp)
    ctx->pc = 0x3c5818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3c581c: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x3c581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c5820: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x3c5820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x3c5824: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x3c5824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3c5828: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x3c5828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x3c582c: 0xc584000c  lwc1        $f4, 0xC($t4)
    ctx->pc = 0x3c582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c5830: 0x46026882  mul.s       $f2, $f13, $f2
    ctx->pc = 0x3c5830u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x3c5834: 0x460020c7  neg.s       $f3, $f4
    ctx->pc = 0x3c5834u;
    ctx->f[3] = FPU_NEG_S(ctx->f[4]);
    // 0x3c5838: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c583c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c583cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c5840: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x3c5840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5844: 0x0  nop
    ctx->pc = 0x3c5844u;
    // NOP
    // 0x3c5848: 0x45010116  bc1t        . + 4 + (0x116 << 2)
    ctx->pc = 0x3C5848u;
    {
        const bool branch_taken_0x3c5848 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5848u;
        // 0x3c584c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5848) {
            ctx->pc = 0x3C5CA4u;
            goto label_3c5ca4;
        }
    }
    ctx->pc = 0x3C5850u;
    // 0x3c5850: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3c5850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5854: 0x45010113  bc1t        . + 4 + (0x113 << 2)
    ctx->pc = 0x3C5854u;
    {
        const bool branch_taken_0x3c5854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5854) {
            ctx->pc = 0x3C5CA4u;
            goto label_3c5ca4;
        }
    }
    ctx->pc = 0x3C585Cu;
    // 0x3c585c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3c585cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3c5860: 0x460a5042  mul.s       $f1, $f10, $f10
    ctx->pc = 0x3c5860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x3c5864: 0x460c6082  mul.s       $f2, $f12, $f12
    ctx->pc = 0x3c5864u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x3c5868: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x3c5868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x3c586c: 0x460d68c2  mul.s       $f3, $f13, $f13
    ctx->pc = 0x3c586cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x3c5870: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3c5870u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3c5874: 0xc580000c  lwc1        $f0, 0xC($t4)
    ctx->pc = 0x3c5874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5878: 0x460003c2  mul.s       $f15, $f0, $f0
    ctx->pc = 0x3c5878u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3c587c: 0x46030b80  add.s       $f14, $f1, $f3
    ctx->pc = 0x3c587cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3c5880: 0x460f7036  c.le.s      $f14, $f15
    ctx->pc = 0x3c5880u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5884: 0x0  nop
    ctx->pc = 0x3c5884u;
    // NOP
    // 0x3c5888: 0x45010105  bc1t        . + 4 + (0x105 << 2)
    ctx->pc = 0x3C5888u;
    {
        const bool branch_taken_0x3c5888 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5888u;
        // 0x3c588c: 0xe7ae0040  swc1        $f14, 0x40($sp) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5888) {
            ctx->pc = 0x3C5CA0u;
            goto label_3c5ca0;
        }
    }
    ctx->pc = 0x3C5890u;
    // 0x3c5890: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x3c5890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c5894: 0xc7a90014  lwc1        $f9, 0x14($sp)
    ctx->pc = 0x3c5894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c5898: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x3c5898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x3c589c: 0xc7ab0018  lwc1        $f11, 0x18($sp)
    ctx->pc = 0x3c589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x3c58a0: 0x46094842  mul.s       $f1, $f9, $f9
    ctx->pc = 0x3c58a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
    // 0x3c58a4: 0x460b5882  mul.s       $f2, $f11, $f11
    ctx->pc = 0x3c58a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x3c58a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c58a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c58ac: 0x46020200  add.s       $f8, $f0, $f2
    ctx->pc = 0x3c58acu;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c58b0: 0x460f4036  c.le.s      $f8, $f15
    ctx->pc = 0x3c58b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c58b4: 0x0  nop
    ctx->pc = 0x3c58b4u;
    // NOP
    // 0x3c58b8: 0x450100f9  bc1t        . + 4 + (0xF9 << 2)
    ctx->pc = 0x3C58B8u;
    {
        const bool branch_taken_0x3c58b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C58B8u;
        // 0x3c58bc: 0xe7a80044  swc1        $f8, 0x44($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c58b8) {
            ctx->pc = 0x3C5CA0u;
            goto label_3c5ca0;
        }
    }
    ctx->pc = 0x3C58C0u;
    // 0x3c58c0: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x3c58c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c58c4: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x3c58c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c58c8: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x3c58c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x3c58cc: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x3c58ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c58d0: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x3c58d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x3c58d4: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x3c58d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x3c58d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c58d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c58dc: 0x46020100  add.s       $f4, $f0, $f2
    ctx->pc = 0x3c58dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c58e0: 0x460f2036  c.le.s      $f4, $f15
    ctx->pc = 0x3c58e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c58e4: 0x0  nop
    ctx->pc = 0x3c58e4u;
    // NOP
    // 0x3c58e8: 0x450100ed  bc1t        . + 4 + (0xED << 2)
    ctx->pc = 0x3C58E8u;
    {
        const bool branch_taken_0x3c58e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C58E8u;
        // 0x3c58ec: 0xe7a40048  swc1        $f4, 0x48($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c58e8) {
            ctx->pc = 0x3C5CA0u;
            goto label_3c5ca0;
        }
    }
    ctx->pc = 0x3C58F0u;
    // 0x3c58f0: 0x46087034  c.lt.s      $f14, $f8
    ctx->pc = 0x3c58f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c58f4: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x3C58F4u;
    {
        const bool branch_taken_0x3c58f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c58f4) {
            ctx->pc = 0x3C5990u;
            goto label_3c5990;
        }
    }
    ctx->pc = 0x3C58FCu;
    // 0x3c58fc: 0x460e2034  c.lt.s      $f4, $f14
    ctx->pc = 0x3c58fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5900: 0x0  nop
    ctx->pc = 0x3c5900u;
    // NOP
    // 0x3c5904: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x3C5904u;
    {
        const bool branch_taken_0x3c5904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5904) {
            ctx->pc = 0x3C5908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5904u;
            // 0x3c5908: 0x46075002  mul.s       $f0, $f10, $f7 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5950u;
            goto label_3c5950;
        }
    }
    ctx->pc = 0x3C590Cu;
    // 0x3c590c: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x3c590cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x3c5910: 0x460c3042  mul.s       $f1, $f6, $f12
    ctx->pc = 0x3c5910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x3c5914: 0x460d1882  mul.s       $f2, $f3, $f13
    ctx->pc = 0x3c5914u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x3c5918: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c591c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c591cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c5920: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3c5920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5924: 0x0  nop
    ctx->pc = 0x3c5924u;
    // NOP
    // 0x3c5928: 0x45000041  bc1f        . + 4 + (0x41 << 2)
    ctx->pc = 0x3C5928u;
    {
        const bool branch_taken_0x3c5928 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5928u;
        // 0x3c592c: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5928) {
            ctx->pc = 0x3C5A30u;
            goto label_3c5a30;
        }
    }
    ctx->pc = 0x3C5930u;
    // 0x3c5930: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x3c5930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x3c5934: 0x46093042  mul.s       $f1, $f6, $f9
    ctx->pc = 0x3c5934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x3c5938: 0x460b1882  mul.s       $f2, $f3, $f11
    ctx->pc = 0x3c5938u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x3c593c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c593cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c5940: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c5940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c5944: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3c5944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5948: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3C5948u;
    {
        const bool branch_taken_0x3c5948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5948) {
            ctx->pc = 0x3C5A20u;
            goto label_3c5a20;
        }
    }
    ctx->pc = 0x3C5950u;
label_3c5950:
    // 0x3c5950: 0x46096042  mul.s       $f1, $f12, $f9
    ctx->pc = 0x3c5950u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[9]);
    // 0x3c5954: 0x460b6882  mul.s       $f2, $f13, $f11
    ctx->pc = 0x3c5954u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[11]);
    // 0x3c5958: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c595c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c595cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c5960: 0x46007034  c.lt.s      $f14, $f0
    ctx->pc = 0x3c5960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5964: 0x0  nop
    ctx->pc = 0x3c5964u;
    // NOP
    // 0x3c5968: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x3C5968u;
    {
        const bool branch_taken_0x3c5968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5968u;
        // 0x3c596c: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5968) {
            ctx->pc = 0x3C5A30u;
            goto label_3c5a30;
        }
    }
    ctx->pc = 0x3C5970u;
    // 0x3c5970: 0x46055002  mul.s       $f0, $f10, $f5
    ctx->pc = 0x3c5970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x3c5974: 0x46066042  mul.s       $f1, $f12, $f6
    ctx->pc = 0x3c5974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x3c5978: 0x46036882  mul.s       $f2, $f13, $f3
    ctx->pc = 0x3c5978u;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[3]);
    // 0x3c597c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c597cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c5980: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c5980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c5984: 0x46007034  c.lt.s      $f14, $f0
    ctx->pc = 0x3c5984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5988: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3C5988u;
    {
        const bool branch_taken_0x3c5988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5988) {
            ctx->pc = 0x3C5A20u;
            goto label_3c5a20;
        }
    }
    ctx->pc = 0x3C5990u;
label_3c5990:
    // 0x3c5990: 0x46082034  c.lt.s      $f4, $f8
    ctx->pc = 0x3c5990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5994: 0x0  nop
    ctx->pc = 0x3c5994u;
    // NOP
    // 0x3c5998: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x3C5998u;
    {
        const bool branch_taken_0x3c5998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c5998) {
            ctx->pc = 0x3C599Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5998u;
            // 0x3c599c: 0x460a3802  mul.s       $f0, $f7, $f10 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C59E4u;
            goto label_3c59e4;
        }
    }
    ctx->pc = 0x3C59A0u;
    // 0x3c59a0: 0x460a2802  mul.s       $f0, $f5, $f10
    ctx->pc = 0x3c59a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x3c59a4: 0x460c3042  mul.s       $f1, $f6, $f12
    ctx->pc = 0x3c59a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x3c59a8: 0x460d1882  mul.s       $f2, $f3, $f13
    ctx->pc = 0x3c59a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x3c59ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c59acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c59b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c59b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c59b4: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3c59b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c59b8: 0x0  nop
    ctx->pc = 0x3c59b8u;
    // NOP
    // 0x3c59bc: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x3C59BCu;
    {
        const bool branch_taken_0x3c59bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C59BCu;
        // 0x3c59c0: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c59bc) {
            ctx->pc = 0x3C5A30u;
            goto label_3c5a30;
        }
    }
    ctx->pc = 0x3C59C4u;
    // 0x3c59c4: 0x46072802  mul.s       $f0, $f5, $f7
    ctx->pc = 0x3c59c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x3c59c8: 0x46093042  mul.s       $f1, $f6, $f9
    ctx->pc = 0x3c59c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x3c59cc: 0x460b1882  mul.s       $f2, $f3, $f11
    ctx->pc = 0x3c59ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x3c59d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c59d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c59d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c59d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c59d8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3c59d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c59dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C59DCu;
    {
        const bool branch_taken_0x3c59dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c59dc) {
            ctx->pc = 0x3C5A20u;
            goto label_3c5a20;
        }
    }
    ctx->pc = 0x3C59E4u;
label_3c59e4:
    // 0x3c59e4: 0x460c4842  mul.s       $f1, $f9, $f12
    ctx->pc = 0x3c59e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x3c59e8: 0x460d5882  mul.s       $f2, $f11, $f13
    ctx->pc = 0x3c59e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[13]);
    // 0x3c59ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c59ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c59f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c59f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c59f4: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x3c59f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c59f8: 0x0  nop
    ctx->pc = 0x3c59f8u;
    // NOP
    // 0x3c59fc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3C59FCu;
    {
        const bool branch_taken_0x3c59fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C59FCu;
        // 0x3c5a00: 0xc7a20010  lwc1        $f2, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c59fc) {
            ctx->pc = 0x3C5A30u;
            goto label_3c5a30;
        }
    }
    ctx->pc = 0x3C5A04u;
    // 0x3c5a04: 0x46053802  mul.s       $f0, $f7, $f5
    ctx->pc = 0x3c5a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x3c5a08: 0x46064842  mul.s       $f1, $f9, $f6
    ctx->pc = 0x3c5a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x3c5a0c: 0x46035882  mul.s       $f2, $f11, $f3
    ctx->pc = 0x3c5a0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x3c5a10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c5a14: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c5a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c5a18: 0x46004034  c.lt.s      $f8, $f0
    ctx->pc = 0x3c5a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5a1c: 0x0  nop
    ctx->pc = 0x3c5a1cu;
    // NOP
label_3c5a20:
    // 0x3c5a20: 0x450100a0  bc1t        . + 4 + (0xA0 << 2)
    ctx->pc = 0x3C5A20u;
    {
        const bool branch_taken_0x3c5a20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5A20u;
        // 0x3c5a24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5a20) {
            ctx->pc = 0x3C5CA4u;
            goto label_3c5ca4;
        }
    }
    ctx->pc = 0x3C5A28u;
    // 0x3c5a28: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x3c5a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5a2c: 0x0  nop
    ctx->pc = 0x3c5a2cu;
    // NOP
label_3c5a30:
    // 0x3c5a30: 0xc7aa0000  lwc1        $f10, 0x0($sp)
    ctx->pc = 0x3c5a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3c5a34: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3c5a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5a38: 0xc7a90004  lwc1        $f9, 0x4($sp)
    ctx->pc = 0x3c5a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c5a3c: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x3c5a3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x3c5a40: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3c5a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5a44: 0xc7a80008  lwc1        $f8, 0x8($sp)
    ctx->pc = 0x3c5a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c5a48: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x3c5a48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x3c5a4c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x3c5a4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3c5a50: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x3c5a50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x3c5a54: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3c5a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3c5a58: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3c5a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3c5a5c: 0x460a1102  mul.s       $f4, $f2, $f10
    ctx->pc = 0x3c5a5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x3c5a60: 0x46090942  mul.s       $f5, $f1, $f9
    ctx->pc = 0x3c5a60u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x3c5a64: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x3c5a64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3c5a68: 0x46010982  mul.s       $f6, $f1, $f1
    ctx->pc = 0x3c5a68u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3c5a6c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x3c5a6cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x3c5a70: 0x460801c2  mul.s       $f7, $f0, $f8
    ctx->pc = 0x3c5a70u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x3c5a74: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x3c5a74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x3c5a78: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x3c5a78u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3c5a7c: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x3c5a7cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x3c5a80: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x3c5a80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x3c5a84: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x3c5a84u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x3c5a88: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3c5a88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3c5a8c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3c5a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3c5a90: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3c5a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3c5a94: 0x46025281  sub.s       $f10, $f10, $f2
    ctx->pc = 0x3c5a94u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x3c5a98: 0x46014901  sub.s       $f4, $f9, $f1
    ctx->pc = 0x3c5a98u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x3c5a9c: 0xe7aa0040  swc1        $f10, 0x40($sp)
    ctx->pc = 0x3c5a9cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3c5aa0: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x3c5aa0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x3c5aa4: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x3c5aa4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3c5aa8: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x3c5aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x3c5aac: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x3c5aacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3c5ab0: 0x46084082  mul.s       $f2, $f8, $f8
    ctx->pc = 0x3c5ab0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x3c5ab4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5ab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c5ab8: 0x460200c0  add.s       $f3, $f0, $f2
    ctx->pc = 0x3c5ab8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c5abc: 0x46037834  c.lt.s      $f15, $f3
    ctx->pc = 0x3c5abcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5ac0: 0x0  nop
    ctx->pc = 0x3c5ac0u;
    // NOP
    // 0x3c5ac4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x3C5AC4u;
    {
        const bool branch_taken_0x3c5ac4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5AC4u;
        // 0x3c5ac8: 0xe7a80048  swc1        $f8, 0x48($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5ac4) {
            ctx->pc = 0x3C5B00u;
            goto label_3c5b00;
        }
    }
    ctx->pc = 0x3C5ACCu;
    // 0x3c5acc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3c5accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5ad0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x3c5ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5ad4: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x3c5ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x3c5ad8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3c5ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5adc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3c5adcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3c5ae0: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x3c5ae0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x3c5ae4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c5ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c5ae8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5ae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c5aec: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3c5aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5af0: 0x0  nop
    ctx->pc = 0x3c5af0u;
    // NOP
    // 0x3c5af4: 0x4501006b  bc1t        . + 4 + (0x6B << 2)
    ctx->pc = 0x3C5AF4u;
    {
        const bool branch_taken_0x3c5af4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5AF4u;
        // 0x3c5af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5af4) {
            ctx->pc = 0x3C5CA4u;
            goto label_3c5ca4;
        }
    }
    ctx->pc = 0x3C5AFCu;
    // 0x3c5afc: 0x0  nop
    ctx->pc = 0x3c5afcu;
    // NOP
label_3c5b00:
    // 0x3c5b00: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x3c5b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5b04: 0xc7aa0010  lwc1        $f10, 0x10($sp)
    ctx->pc = 0x3c5b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3c5b08: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x3c5b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5b0c: 0xc7a90014  lwc1        $f9, 0x14($sp)
    ctx->pc = 0x3c5b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c5b10: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x3c5b10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x3c5b14: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3c5b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5b18: 0xc7a80018  lwc1        $f8, 0x18($sp)
    ctx->pc = 0x3c5b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c5b1c: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x3c5b1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x3c5b20: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x3c5b20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3c5b24: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x3c5b24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x3c5b28: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3c5b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3c5b2c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3c5b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3c5b30: 0x460a1102  mul.s       $f4, $f2, $f10
    ctx->pc = 0x3c5b30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x3c5b34: 0x46090942  mul.s       $f5, $f1, $f9
    ctx->pc = 0x3c5b34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x3c5b38: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x3c5b38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3c5b3c: 0x46010982  mul.s       $f6, $f1, $f1
    ctx->pc = 0x3c5b3cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3c5b40: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x3c5b40u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x3c5b44: 0x460801c2  mul.s       $f7, $f0, $f8
    ctx->pc = 0x3c5b44u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x3c5b48: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x3c5b48u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x3c5b4c: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x3c5b4cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3c5b50: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x3c5b50u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x3c5b54: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x3c5b54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x3c5b58: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x3c5b58u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x3c5b5c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3c5b5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3c5b60: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3c5b60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3c5b64: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3c5b64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3c5b68: 0x46025281  sub.s       $f10, $f10, $f2
    ctx->pc = 0x3c5b68u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x3c5b6c: 0x46014901  sub.s       $f4, $f9, $f1
    ctx->pc = 0x3c5b6cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x3c5b70: 0xe7aa0040  swc1        $f10, 0x40($sp)
    ctx->pc = 0x3c5b70u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3c5b74: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x3c5b74u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x3c5b78: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x3c5b78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3c5b7c: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x3c5b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x3c5b80: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x3c5b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3c5b84: 0x46084082  mul.s       $f2, $f8, $f8
    ctx->pc = 0x3c5b84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x3c5b88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5b88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c5b8c: 0x460200c0  add.s       $f3, $f0, $f2
    ctx->pc = 0x3c5b8cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c5b90: 0x46037834  c.lt.s      $f15, $f3
    ctx->pc = 0x3c5b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5b94: 0x0  nop
    ctx->pc = 0x3c5b94u;
    // NOP
    // 0x3c5b98: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C5B98u;
    {
        const bool branch_taken_0x3c5b98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5B98u;
        // 0x3c5b9c: 0xe7a80048  swc1        $f8, 0x48($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5b98) {
            ctx->pc = 0x3C5BD0u;
            goto label_3c5bd0;
        }
    }
    ctx->pc = 0x3C5BA0u;
    // 0x3c5ba0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3c5ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5ba4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x3c5ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5ba8: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x3c5ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x3c5bac: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3c5bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5bb0: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3c5bb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3c5bb4: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x3c5bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x3c5bb8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c5bb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c5bbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5bbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c5bc0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3c5bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5bc4: 0x0  nop
    ctx->pc = 0x3c5bc4u;
    // NOP
    // 0x3c5bc8: 0x45010036  bc1t        . + 4 + (0x36 << 2)
    ctx->pc = 0x3C5BC8u;
    {
        const bool branch_taken_0x3c5bc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5BC8u;
        // 0x3c5bcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5bc8) {
            ctx->pc = 0x3C5CA4u;
            goto label_3c5ca4;
        }
    }
    ctx->pc = 0x3C5BD0u;
label_3c5bd0:
    // 0x3c5bd0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3c5bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5bd4: 0xc7aa0020  lwc1        $f10, 0x20($sp)
    ctx->pc = 0x3c5bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3c5bd8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3c5bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5bdc: 0xc7a90024  lwc1        $f9, 0x24($sp)
    ctx->pc = 0x3c5bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c5be0: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x3c5be0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x3c5be4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3c5be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5be8: 0xc7a80028  lwc1        $f8, 0x28($sp)
    ctx->pc = 0x3c5be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3c5bec: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x3c5becu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x3c5bf0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x3c5bf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3c5bf4: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x3c5bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x3c5bf8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3c5bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3c5bfc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3c5bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3c5c00: 0x460a1102  mul.s       $f4, $f2, $f10
    ctx->pc = 0x3c5c00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x3c5c04: 0x46090942  mul.s       $f5, $f1, $f9
    ctx->pc = 0x3c5c04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x3c5c08: 0x460210c2  mul.s       $f3, $f2, $f2
    ctx->pc = 0x3c5c08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3c5c0c: 0x46010982  mul.s       $f6, $f1, $f1
    ctx->pc = 0x3c5c0cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3c5c10: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x3c5c10u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x3c5c14: 0x460801c2  mul.s       $f7, $f0, $f8
    ctx->pc = 0x3c5c14u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x3c5c18: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x3c5c18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x3c5c1c: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x3c5c1cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3c5c20: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x3c5c20u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x3c5c24: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x3c5c24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x3c5c28: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x3c5c28u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x3c5c2c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3c5c2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3c5c30: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3c5c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3c5c34: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3c5c34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3c5c38: 0x46025281  sub.s       $f10, $f10, $f2
    ctx->pc = 0x3c5c38u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x3c5c3c: 0x46014901  sub.s       $f4, $f9, $f1
    ctx->pc = 0x3c5c3cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x3c5c40: 0xe7aa0040  swc1        $f10, 0x40($sp)
    ctx->pc = 0x3c5c40u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3c5c44: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x3c5c44u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x3c5c48: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x3c5c48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3c5c4c: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x3c5c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x3c5c50: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x3c5c50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3c5c54: 0x46084082  mul.s       $f2, $f8, $f8
    ctx->pc = 0x3c5c54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x3c5c58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c5c5c: 0x460200c0  add.s       $f3, $f0, $f2
    ctx->pc = 0x3c5c5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c5c60: 0x46037834  c.lt.s      $f15, $f3
    ctx->pc = 0x3c5c60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5c64: 0x0  nop
    ctx->pc = 0x3c5c64u;
    // NOP
    // 0x3c5c68: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3C5C68u;
    {
        const bool branch_taken_0x3c5c68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5C68u;
        // 0x3c5c6c: 0xe7a80048  swc1        $f8, 0x48($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5c68) {
            ctx->pc = 0x3C5CA0u;
            goto label_3c5ca0;
        }
    }
    ctx->pc = 0x3C5C70u;
    // 0x3c5c70: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3c5c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c5c74: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x3c5c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c5c78: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x3c5c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x3c5c7c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3c5c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c5c80: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3c5c80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3c5c84: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x3c5c84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x3c5c88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c5c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c5c8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c5c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c5c90: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3c5c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c5c94: 0x0  nop
    ctx->pc = 0x3c5c94u;
    // NOP
    // 0x3c5c98: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C5C98u;
    {
        const bool branch_taken_0x3c5c98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5C98u;
        // 0x3c5c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5c98) {
            ctx->pc = 0x3C5CA4u;
            goto label_3c5ca4;
        }
    }
    ctx->pc = 0x3C5CA0u;
label_3c5ca0:
    // 0x3c5ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c5ca4:
    // 0x3c5ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5CA4u;
        // 0x3c5ca8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5CACu;
    // 0x3c5cac: 0x0  nop
    ctx->pc = 0x3c5cacu;
    // NOP
    ctx->pc = 0x3c5cb0u;
}
