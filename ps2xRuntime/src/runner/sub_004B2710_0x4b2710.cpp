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

// Function: sub_004B2710
// Address: 0x4b2710 - 0x4b2eb0
void sub_004B2710_0x4b2710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2710_0x4b2710");
#endif

    switch (ctx->pc) {
        case 0x4b2774u: goto label_4b2774;
        case 0x4b2868u: goto label_4b2868;
        case 0x4b29bcu: goto label_4b29bc;
        case 0x4b29d8u: goto label_4b29d8;
        case 0x4b2b30u: goto label_4b2b30;
        case 0x4b2e80u: goto label_4b2e80;
        default: break;
    }

    ctx->pc = 0x4b2710u;

    // 0x4b2710: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4b2710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4b2714: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4b2714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4b2718: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4b2718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x4b271c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b271cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2720: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4b2720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x4b2724: 0x26910030  addiu       $s1, $s4, 0x30
    ctx->pc = 0x4b2724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x4b2728: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4b2728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x4b272c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4b272cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x4b2730: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4b2730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4b2734: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4b2734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x4b2738: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b2738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4b273c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4b273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4b2740: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x4b2740u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x4b2744: 0x8e920030  lw          $s2, 0x30($s4)
    ctx->pc = 0x4b2744u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x4b2748: 0x106000d3  beqz        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x4B2748u;
    {
        const bool branch_taken_0x4b2748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2748u;
        // 0x4b274c: 0x8c550020  lw          $s5, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2748) {
            ctx->pc = 0x4B2A98u;
            goto label_4b2a98;
        }
    }
    ctx->pc = 0x4B2750u;
    // 0x4b2750: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x4b2750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4b2754: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x4b2754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2758: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x4b2758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
    // 0x4b275c: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x4B275Cu;
    {
        const bool branch_taken_0x4b275c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B275Cu;
        // 0x4b2760: 0x2616002c  addiu       $s6, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b275c) {
            ctx->pc = 0x4B28DCu;
            goto label_4b28dc;
        }
    }
    ctx->pc = 0x4B2764u;
    // 0x4b2764: 0x1200005e  beqz        $s0, . + 4 + (0x5E << 2)
    ctx->pc = 0x4B2764u;
    {
        const bool branch_taken_0x4b2764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2764u;
        // 0x4b2768: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2764) {
            ctx->pc = 0x4B28E0u;
            goto label_4b28e0;
        }
    }
    ctx->pc = 0x4B276Cu;
    // 0x4b276c: 0xc12d092  jal         func_4B4248
    ctx->pc = 0x4B276Cu;
    SET_GPR_U32(ctx, 31, 0x4B2774u);
    ctx->pc = 0x4B2770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B276Cu;
    // 0x4b2770: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4248u, 0x4B276Cu, 0x4B2774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2774u;
label_4b2774:
    // 0x4b2774: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b2774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2778: 0x32630200  andi        $v1, $s3, 0x200
    ctx->pc = 0x4b2778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
    // 0x4b277c: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x4b277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x4b2780: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2780u;
    {
        const bool branch_taken_0x4b2780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2780u;
        // 0x4b2784: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2780) {
            ctx->pc = 0x4B2790u;
            goto label_4b2790;
        }
    }
    ctx->pc = 0x4B2788u;
    // 0x4b2788: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x4b2788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x4b278c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x4b278cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_4b2790:
    // 0x4b2790: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x4b2790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
    // 0x4b2794: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2794u;
    {
        const bool branch_taken_0x4b2794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2794u;
        // 0x4b2798: 0x8e820030  lw          $v0, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2794) {
            ctx->pc = 0x4B27A4u;
            goto label_4b27a4;
        }
    }
    ctx->pc = 0x4B279Cu;
    // 0x4b279c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x4b279cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x4b27a0: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x4b27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_4b27a4:
    // 0x4b27a4: 0x32640001  andi        $a0, $s3, 0x1
    ctx->pc = 0x4b27a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x4b27a8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x4b27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x4b27ac: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x4B27ACu;
    {
        const bool branch_taken_0x4b27ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B27ACu;
        // 0x4b27b0: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b27ac) {
            ctx->pc = 0x4B27ECu;
            goto label_4b27ec;
        }
    }
    ctx->pc = 0x4B27B4u;
    // 0x4b27b4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x4b27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x4b27b8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B27B8u;
    {
        const bool branch_taken_0x4b27b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B27B8u;
        // 0x4b27bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b27b8) {
            ctx->pc = 0x4B27D0u;
            goto label_4b27d0;
        }
    }
    ctx->pc = 0x4B27C0u;
    // 0x4b27c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b27c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b27c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4b27c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4b27c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4B27C8u;
    {
        const bool branch_taken_0x4b27c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B27CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B27C8u;
        // 0x4b27cc: 0xe620004c  swc1        $f0, 0x4C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b27c8) {
            ctx->pc = 0x4B27E8u;
            goto label_4b27e8;
        }
    }
    ctx->pc = 0x4B27D0u;
label_4b27d0:
    // 0x4b27d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b27d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b27d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b27d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b27d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b27d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b27dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4b27dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4b27e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4b27e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x4b27e4: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x4b27e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_4b27e8:
    // 0x4b27e8: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x4b27e8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_4b27ec:
    // 0x4b27ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4b27ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4b27f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4b27f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4b27f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4b27f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4b27f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4b27f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4b27fc: 0xe621005c  swc1        $f1, 0x5C($s1)
    ctx->pc = 0x4b27fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x4b2800: 0xe6210060  swc1        $f1, 0x60($s1)
    ctx->pc = 0x4b2800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x4b2804: 0xe62c0064  swc1        $f12, 0x64($s1)
    ctx->pc = 0x4b2804u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x4b2808: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x4b2808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x4b280c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4b280cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4b2810: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b2810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b2814: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4B2814u;
    {
        const bool branch_taken_0x4b2814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2814u;
        // 0x4b2818: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2814) {
            ctx->pc = 0x4B2874u;
            goto label_4b2874;
        }
    }
    ctx->pc = 0x4B281Cu;
    // 0x4b281c: 0xc780826c  lwc1        $f0, -0x7D94($gp)
    ctx->pc = 0x4b281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2820: 0xe6210068  swc1        $f1, 0x68($s1)
    ctx->pc = 0x4b2820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x4b2824: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x4b2824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x4b2828: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x4b2828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x4b282c: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x4b282cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x4b2830: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x4b2830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x4b2834: 0x96820058  lhu         $v0, 0x58($s4)
    ctx->pc = 0x4b2834u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x4b2838: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4b2838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4b283c: 0xa6820058  sh          $v0, 0x58($s4)
    ctx->pc = 0x4b283cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2840: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x4b2840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2844: 0xe680007c  swc1        $f0, 0x7C($s4)
    ctx->pc = 0x4b2844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 124), bits); }
    // 0x4b2848: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4b2848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4b284c: 0xa6820058  sh          $v0, 0x58($s4)
    ctx->pc = 0x4b284cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2850: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x4b2850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2854: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x4b2854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x4b2858: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2858u;
    {
        const bool branch_taken_0x4b2858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2858u;
        // 0x4b285c: 0xe6800084  swc1        $f0, 0x84($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2858) {
            ctx->pc = 0x4B2868u;
            goto label_4b2868;
        }
    }
    ctx->pc = 0x4B2860u;
    // 0x4b2860: 0xc12cd40  jal         func_4B3500
    ctx->pc = 0x4B2860u;
    SET_GPR_U32(ctx, 31, 0x4B2868u);
    ctx->pc = 0x4B2864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2860u;
    // 0x4b2864: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3500u, 0x4B2860u, 0x4B2868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2868u;
label_4b2868:
    // 0x4b2868: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x4b2868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x4b286c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x4B286Cu;
    {
        const bool branch_taken_0x4b286c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b286c) {
            ctx->pc = 0x4B2870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B286Cu;
            // 0x4b2870: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B28C8u;
            goto label_4b28c8;
        }
    }
    ctx->pc = 0x4B2874u;
label_4b2874:
    // 0x4b2874: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x4b2874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x4b2878: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x4b2878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x4b287c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B287Cu;
    {
        const bool branch_taken_0x4b287c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b287c) {
            ctx->pc = 0x4B2880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B287Cu;
            // 0x4b2880: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B28C8u;
            goto label_4b28c8;
        }
    }
    ctx->pc = 0x4B2884u;
    // 0x4b2884: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x4b2884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x4b2888: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4B2888u;
    {
        const bool branch_taken_0x4b2888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2888u;
        // 0x4b288c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2888) {
            ctx->pc = 0x4B28C4u;
            goto label_4b28c4;
        }
    }
    ctx->pc = 0x4B2890u;
    // 0x4b2890: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x4b2890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x4b2894: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4B2894u;
    {
        const bool branch_taken_0x4b2894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2894u;
        // 0x4b2898: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2894) {
            ctx->pc = 0x4B28C8u;
            goto label_4b28c8;
        }
    }
    ctx->pc = 0x4B289Cu;
    // 0x4b289c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x4b289cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4b28a0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B28A0u;
    {
        const bool branch_taken_0x4b28a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28A0u;
        // 0x4b28a4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b28a0) {
            ctx->pc = 0x4B28C8u;
            goto label_4b28c8;
        }
    }
    ctx->pc = 0x4B28A8u;
    // 0x4b28a8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b28a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b28ac: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x4b28acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x4b28b0: 0x3463fff9  ori         $v1, $v1, 0xFFF9
    ctx->pc = 0x4b28b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65529);
    // 0x4b28b4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4b28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4b28b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b28b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b28bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B28BCu;
    {
        const bool branch_taken_0x4b28bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B28C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28BCu;
        // 0x4b28c0: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b28bc) {
            ctx->pc = 0x4B28C8u;
            goto label_4b28c8;
        }
    }
    ctx->pc = 0x4B28C4u;
label_4b28c4:
    // 0x4b28c4: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x4b28c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_4b28c8:
    // 0x4b28c8: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x4b28c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4b28cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b28d0: 0x3442fff9  ori         $v0, $v0, 0xFFF9
    ctx->pc = 0x4b28d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65529);
    // 0x4b28d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b28d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b28d8: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x4b28d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_4b28dc:
    // 0x4b28dc: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x4b28dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
label_4b28e0:
    // 0x4b28e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B28E0u;
    {
        const bool branch_taken_0x4b28e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B28E0u;
        // 0x4b28e4: 0x32620100  andi        $v0, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b28e0) {
            ctx->pc = 0x4B2900u;
            goto label_4b2900;
        }
    }
    ctx->pc = 0x4B28E8u;
    // 0x4b28e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b28e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b28ec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4b28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4b28f0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4b28f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4b28f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b28f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b28f8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x4b28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x4b28fc: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x4b28fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_4b2900:
    // 0x4b2900: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x4B2900u;
    {
        const bool branch_taken_0x4b2900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2900) {
            ctx->pc = 0x4B2904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2900u;
            // 0x4b2904: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2988u;
            goto label_4b2988;
        }
    }
    ctx->pc = 0x4B2908u;
    // 0x4b2908: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x4b2908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b290c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4b290cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4b2910: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x4b2910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x4b2914: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b2914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b2918: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x4b2918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x4b291c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x4B291Cu;
    {
        const bool branch_taken_0x4b291c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B291Cu;
        // 0x4b2920: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b291c) {
            ctx->pc = 0x4B2954u;
            goto label_4b2954;
        }
    }
    ctx->pc = 0x4B2924u;
    // 0x4b2924: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b2924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b2928: 0x26a40640  addiu       $a0, $s5, 0x640
    ctx->pc = 0x4b2928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1600));
    // 0x4b292c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b292cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b2930: 0x26a50648  addiu       $a1, $s5, 0x648
    ctx->pc = 0x4b2930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1608));
    // 0x4b2934: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b2934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b2938: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b2938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b293c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4b293cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4b2940: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b2940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b2944: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b2944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b2948: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b2948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b294c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B294Cu;
    {
        const bool branch_taken_0x4b294c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B294Cu;
        // 0x4b2950: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b294c) {
            ctx->pc = 0x4B2984u;
            goto label_4b2984;
        }
    }
    ctx->pc = 0x4B2954u;
label_4b2954:
    // 0x4b2954: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b2954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b2958: 0x26a50640  addiu       $a1, $s5, 0x640
    ctx->pc = 0x4b2958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1600));
    // 0x4b295c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b295cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b2960: 0x63027  nor         $a2, $zero, $a2
    ctx->pc = 0x4b2960u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x4b2964: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b2964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b2968: 0x26a40648  addiu       $a0, $s5, 0x648
    ctx->pc = 0x4b2968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1608));
    // 0x4b296c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4b296cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4b2970: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4b2970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4b2974: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b2974u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b2978: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b2978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b297c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4b297cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4b2980: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b2980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4b2984:
    // 0x4b2984: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x4b2984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_4b2988:
    // 0x4b2988: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B2988u;
    {
        const bool branch_taken_0x4b2988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2988u;
        // 0x4b298c: 0x32620006  andi        $v0, $s3, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2988) {
            ctx->pc = 0x4B29ACu;
            goto label_4b29ac;
        }
    }
    ctx->pc = 0x4B2990u;
    // 0x4b2990: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x4b2990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2994: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x4b2994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2998: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4b2998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b299c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4b299cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4b29a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b29a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4b29a4: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x4b29a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x4b29a8: 0x32620006  andi        $v0, $s3, 0x6
    ctx->pc = 0x4b29a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)6);
label_4b29ac:
    // 0x4b29ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B29ACu;
    {
        const bool branch_taken_0x4b29ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b29ac) {
            ctx->pc = 0x4B29B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B29ACu;
            // 0x4b29b0: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B29C0u;
            goto label_4b29c0;
        }
    }
    ctx->pc = 0x4B29B4u;
    // 0x4b29b4: 0xc12cbac  jal         func_4B2EB0
    ctx->pc = 0x4B29B4u;
    SET_GPR_U32(ctx, 31, 0x4B29BCu);
    ctx->pc = 0x4B29B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B29B4u;
    // 0x4b29b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2EB0u, 0x4B29B4u, 0x4B29BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B29BCu;
label_4b29bc:
    // 0x4b29bc: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x4b29bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4b29c0:
    // 0x4b29c0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4b29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4b29c4: 0x54620034  bnel        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x4B29C4u;
    {
        const bool branch_taken_0x4b29c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b29c4) {
            ctx->pc = 0x4B29C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B29C4u;
            // 0x4b29c8: 0xa6200028  sh          $zero, 0x28($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2A98u;
            goto label_4b2a98;
        }
    }
    ctx->pc = 0x4B29CCu;
    // 0x4b29cc: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x4b29ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4b29d0: 0xc12d0a4  jal         func_4B4290
    ctx->pc = 0x4B29D0u;
    SET_GPR_U32(ctx, 31, 0x4B29D8u);
    ctx->pc = 0x4B29D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B29D0u;
    // 0x4b29d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4290u, 0x4B29D0u, 0x4B29D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B29D8u;
label_4b29d8:
    // 0x4b29d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b29d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b29dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b29dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b29e0: 0x2ca4008d  sltiu       $a0, $a1, 0x8D
    ctx->pc = 0x4b29e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)141) ? 1 : 0);
    // 0x4b29e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b29e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b29e8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x4b29e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4b29ec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4b29ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x4b29f0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x4b29f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4b29f4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x4b29f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x4b29f8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x4b29f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4b29fc: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4B29FCu;
    {
        const bool branch_taken_0x4b29fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B29FCu;
        // 0x4b2a00: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b29fc) {
            ctx->pc = 0x4B2A74u;
            goto label_4b2a74;
        }
    }
    ctx->pc = 0x4B2A04u;
    // 0x4b2a04: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4b2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4b2a08: 0x24a4ff74  addiu       $a0, $a1, -0x8C
    ctx->pc = 0x4b2a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967156));
    // 0x4b2a0c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x4b2a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x4b2a10: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4b2a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4b2a14: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4b2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4b2a18: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x4b2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x4b2a1c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x4b2a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x4b2a20: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4b2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4b2a24: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x4b2a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4b2a28: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B2A28u;
    {
        const bool branch_taken_0x4b2a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b2a28) {
            ctx->pc = 0x4B2A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2A28u;
            // 0x4b2a2c: 0xae440018  sw          $a0, 0x18($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2A30u;
            goto label_4b2a30;
        }
    }
    ctx->pc = 0x4B2A30u;
label_4b2a30:
    // 0x4b2a30: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4b2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4b2a34: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x4b2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x4b2a38: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x4b2a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x4b2a3c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x4b2a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4b2a40: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x4b2a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x4b2a44: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x4b2a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4b2a48: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B2A48u;
    {
        const bool branch_taken_0x4b2a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2A48u;
        // 0x4b2a4c: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2a48) {
            ctx->pc = 0x4B2A94u;
            goto label_4b2a94;
        }
    }
    ctx->pc = 0x4B2A50u;
    // 0x4b2a50: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x4b2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4b2a54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b2a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b2a58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2A58u;
    {
        const bool branch_taken_0x4b2a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2A58u;
        // 0x4b2a5c: 0x651023  subu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2a58) {
            ctx->pc = 0x4B2A68u;
            goto label_4b2a68;
        }
    }
    ctx->pc = 0x4B2A60u;
    // 0x4b2a60: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4B2A60u;
    {
        const bool branch_taken_0x4b2a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2A60u;
        // 0x4b2a64: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2a60) {
            ctx->pc = 0x4B2A94u;
            goto label_4b2a94;
        }
    }
    ctx->pc = 0x4B2A68u;
label_4b2a68:
    // 0x4b2a68: 0x24a2ffe4  addiu       $v0, $a1, -0x1C
    ctx->pc = 0x4b2a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967268));
    // 0x4b2a6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4B2A6Cu;
    {
        const bool branch_taken_0x4b2a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2A6Cu;
        // 0x4b2a70: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2a6c) {
            ctx->pc = 0x4B2A94u;
            goto label_4b2a94;
        }
    }
    ctx->pc = 0x4B2A74u;
label_4b2a74:
    // 0x4b2a74: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4b2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x4b2a78: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4b2a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4b2a7c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4b2a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4b2a80: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x4b2a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x4b2a84: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4b2a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4b2a88: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x4b2a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x4b2a8c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x4b2a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4b2a90: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x4b2a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_4b2a94:
    // 0x4b2a94: 0xa6200028  sh          $zero, 0x28($s1)
    ctx->pc = 0x4b2a94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 0));
label_4b2a98:
    // 0x4b2a98: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x4b2a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x4b2a9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4b2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b2aa0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4b2aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b2aa4: 0x106200f8  beq         $v1, $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x4B2AA4u;
    {
        const bool branch_taken_0x4b2aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B2AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2AA4u;
        // 0x4b2aa8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2aa4) {
            ctx->pc = 0x4B2E88u;
            goto label_4b2e88;
        }
    }
    ctx->pc = 0x4B2AACu;
    // 0x4b2aac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b2aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b2ab0: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B2AB0u;
    {
        const bool branch_taken_0x4b2ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4b2ab0) {
            ctx->pc = 0x4B2AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2AB0u;
            // 0x4b2ab4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2AC4u;
            goto label_4b2ac4;
        }
    }
    ctx->pc = 0x4B2AB8u;
    // 0x4b2ab8: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x4b2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x4b2abc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B2ABCu;
    {
        const bool branch_taken_0x4b2abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2abc) {
            ctx->pc = 0x4B2AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2ABCu;
            // 0x4b2ac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2AC4u;
            goto label_4b2ac4;
        }
    }
    ctx->pc = 0x4B2AC4u;
label_4b2ac4:
    // 0x4b2ac4: 0x108000f0  beqz        $a0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x4B2AC4u;
    {
        const bool branch_taken_0x4b2ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2AC4u;
        // 0x4b2ac8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2ac4) {
            ctx->pc = 0x4B2E88u;
            goto label_4b2e88;
        }
    }
    ctx->pc = 0x4B2ACCu;
    // 0x4b2acc: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x4b2accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2ad0: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x4b2ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2ad4: 0x6a22003b  ldl         $v0, 0x3B($s1)
    ctx->pc = 0x4b2ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4b2ad8: 0x6e220034  ldr         $v0, 0x34($s1)
    ctx->pc = 0x4b2ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4b2adc: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x4b2adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x4b2ae0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4b2ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b2ae4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4b2ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b2ae8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4b2ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4b2aec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4b2aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4b2af0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4b2af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4b2af4: 0x6a260047  ldl         $a2, 0x47($s1)
    ctx->pc = 0x4b2af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x4b2af8: 0x6e260040  ldr         $a2, 0x40($s1)
    ctx->pc = 0x4b2af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4b2afc: 0x8e270048  lw          $a3, 0x48($s1)
    ctx->pc = 0x4b2afcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x4b2b00: 0xb3a60013  sdl         $a2, 0x13($sp)
    ctx->pc = 0x4b2b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b2b04: 0xb7a6000c  sdr         $a2, 0xC($sp)
    ctx->pc = 0x4b2b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4b2b08: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x4b2b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x4b2b0c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x4b2b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4b2b10: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x4b2b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x4b2b14: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x4b2b14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4b2b18: 0x26a413d8  addiu       $a0, $s5, 0x13D8
    ctx->pc = 0x4b2b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 5080));
    // 0x4b2b1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b2b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b2b20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4b2b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2b24: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x4b2b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4b2b28: 0xc12b4ac  jal         func_4AD2B0
    ctx->pc = 0x4B2B28u;
    SET_GPR_U32(ctx, 31, 0x4B2B30u);
    ctx->pc = 0x4B2B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2B28u;
    // 0x4b2b2c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD2B0u, 0x4B2B28u, 0x4B2B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2B30u;
label_4b2b30:
    // 0x4b2b30: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x4b2b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2b34: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x4b2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x4b2b38: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4b2b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x4b2b3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B2B3Cu;
    {
        const bool branch_taken_0x4b2b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2B3Cu;
        // 0x4b2b40: 0xe6200060  swc1        $f0, 0x60($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2b3c) {
            ctx->pc = 0x4B2B50u;
            goto label_4b2b50;
        }
    }
    ctx->pc = 0x4B2B44u;
    // 0x4b2b44: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x4b2b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2b48: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x4b2b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x4b2b4c: 0x0  nop
    ctx->pc = 0x4b2b4cu;
    // NOP
label_4b2b50:
    // 0x4b2b50: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x4b2b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4b2b54: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4b2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4b2b58: 0xe6230064  swc1        $f3, 0x64($s1)
    ctx->pc = 0x4b2b58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x4b2b5c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x4b2b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2b60: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x4B2B60u;
    {
        const bool branch_taken_0x4b2b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2B60u;
        // 0x4b2b64: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2b60) {
            ctx->pc = 0x4B2E54u;
            goto label_4b2e54;
        }
    }
    ctx->pc = 0x4B2B68u;
    // 0x4b2b68: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x4b2b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x4b2b6c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x4b2b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x4b2b70: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x4b2b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x4b2b74: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x4b2b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x4b2b78: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x4b2b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x4b2b7c: 0x46051882  mul.s       $f2, $f3, $f5
    ctx->pc = 0x4b2b7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x4b2b80: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b2b80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x4b2b84: 0x44052000  mfc1        $a1, $f4
    ctx->pc = 0x4b2b84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4b2b88: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b2b88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4b2b8c: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x4b2b8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x4b2b90: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b2b90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4b2b94: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x4b2b94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x4b2b98: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x4B2B98u;
    {
        const bool branch_taken_0x4b2b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2B98u;
        // 0x4b2b9c: 0x3c04005f  lui         $a0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2b98) {
            ctx->pc = 0x4B2CCCu;
            goto label_4b2ccc;
        }
    }
    ctx->pc = 0x4B2BA0u;
    // 0x4b2ba0: 0xc7808270  lwc1        $f0, -0x7D90($gp)
    ctx->pc = 0x4b2ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2ba4: 0xc7828274  lwc1        $f2, -0x7D8C($gp)
    ctx->pc = 0x4b2ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b2ba8: 0x24846300  addiu       $a0, $a0, 0x6300
    ctx->pc = 0x4b2ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25344));
    // 0x4b2bac: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4b2bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x4b2bb0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x4b2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4b2bb4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4b2bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b2bb8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x4b2bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4b2bbc: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x4b2bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4b2bc0: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x4b2bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4b2bc4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4b2bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4b2bc8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x4b2bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4b2bcc: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x4b2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4b2bd0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x4b2bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2bd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b2bd8: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x4b2bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4b2bdc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x4b2bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x4b2be0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4b2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b2be4: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x4b2be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x4b2be8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x4b2be8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x4b2bec: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x4b2becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b2bf0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4b2bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4b2bf4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b2bf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4b2bf8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4b2bf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4b2bfc: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x4b2bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4b2c00: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x4b2c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2c04: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x4b2c04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4b2c08: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4b2c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b2c0c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x4b2c0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4b2c10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b2c14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b2c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b2c18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b2c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b2c1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4b2c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b2c20: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x4b2c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4b2c24: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x4b2c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4b2c28: 0xe6240018  swc1        $f4, 0x18($s1)
    ctx->pc = 0x4b2c28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x4b2c2c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b2c2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4b2c30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4b2c30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4b2c34: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x4b2c34u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x4b2c38: 0xc7868198  lwc1        $f6, -0x7E68($gp)
    ctx->pc = 0x4b2c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x4b2c3c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4b2c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2c40: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x4b2c40u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x4b2c44: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x4b2c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2c48: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x4b2c48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x4b2c4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4b2c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4b2c50: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x4b2c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x4b2c54: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x4b2c54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x4b2c58: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x4b2c58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
    // 0x4b2c5c: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x4b2c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2c60: 0xc6240060  lwc1        $f4, 0x60($s1)
    ctx->pc = 0x4b2c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4b2c64: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4b2c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4b2c68: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x4b2c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x4b2c6c: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x4b2c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2c70: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x4b2c70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4b2c74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4b2c74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4b2c78: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x4b2c78u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x4b2c7c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x4b2c7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x4b2c80: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x4b2c80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x4b2c84: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x4b2c84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x4b2c88: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x4b2c88u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x4b2c8c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b2c8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4b2c90: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4b2c90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4b2c94: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x4b2c94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x4b2c98: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b2c98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4b2c9c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4b2c9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4b2ca0: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b2ca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4b2ca4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4b2ca4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4b2ca8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b2ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b2cac: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b2cacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4b2cb0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4b2cb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4b2cb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b2cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b2cb8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4b2cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4b2cbc: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x4b2cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x4b2cc0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4b2cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4b2cc4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x4B2CC4u;
    {
        const bool branch_taken_0x4b2cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2CC4u;
        // 0x4b2cc8: 0xace50010  sw          $a1, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2cc4) {
            ctx->pc = 0x4B2E54u;
            goto label_4b2e54;
        }
    }
    ctx->pc = 0x4B2CCCu;
label_4b2ccc:
    // 0x4b2ccc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b2cccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2cd0: 0x28a60080  slti        $a2, $a1, 0x80
    ctx->pc = 0x4b2cd0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x4b2cd4: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B2CD4u;
    {
        const bool branch_taken_0x4b2cd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2CD4u;
        // 0x4b2cd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2cd4) {
            ctx->pc = 0x4B2D1Cu;
            goto label_4b2d1c;
        }
    }
    ctx->pc = 0x4B2CDCu;
    // 0x4b2cdc: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x4b2cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x4b2ce0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4b2ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4b2ce4: 0x24846300  addiu       $a0, $a0, 0x6300
    ctx->pc = 0x4b2ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25344));
    // 0x4b2ce8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x4b2ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4b2cec: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x4b2cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4b2cf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b2cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b2cf4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4b2cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2cf8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4b2cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4b2cfc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4b2cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2d00: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x4b2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x4b2d04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b2d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b2d08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4b2d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4b2d0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4b2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b2d10: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x4b2d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x4b2d14: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4B2D14u;
    {
        const bool branch_taken_0x4b2d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D14u;
        // 0x4b2d18: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2d14) {
            ctx->pc = 0x4B2D5Cu;
            goto label_4b2d5c;
        }
    }
    ctx->pc = 0x4B2D1Cu;
label_4b2d1c:
    // 0x4b2d1c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x4b2d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4b2d20: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x4b2d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x4b2d24: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x4b2d24u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4b2d28: 0x24846300  addiu       $a0, $a0, 0x6300
    ctx->pc = 0x4b2d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25344));
    // 0x4b2d2c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4b2d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4b2d30: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x4b2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4b2d34: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x4b2d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4b2d38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4b2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b2d3c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4b2d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2d40: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4b2d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4b2d44: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4b2d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2d48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4b2d4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b2d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b2d50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4b2d50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4b2d54: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x4b2d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x4b2d58: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4b2d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b2d5c:
    // 0x4b2d5c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x4b2d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2d60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4b2d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4b2d64: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x4b2d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x4b2d68: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x4b2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x4b2d6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b2d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b2d70: 0x30440006  andi        $a0, $v0, 0x6
    ctx->pc = 0x4b2d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x4b2d74: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B2D74u;
    {
        const bool branch_taken_0x4b2d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B2D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D74u;
        // 0x4b2d78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2d74) {
            ctx->pc = 0x4B2D88u;
            goto label_4b2d88;
        }
    }
    ctx->pc = 0x4B2D7Cu;
    // 0x4b2d7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b2d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b2d80: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2D80u;
    {
        const bool branch_taken_0x4b2d80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2D80u;
        // 0x4b2d84: 0x29420080  slti        $v0, $t2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2d80) {
            ctx->pc = 0x4B2D90u;
            goto label_4b2d90;
        }
    }
    ctx->pc = 0x4B2D88u;
label_4b2d88:
    // 0x4b2d88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b2d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b2d8c: 0x29420080  slti        $v0, $t2, 0x80
    ctx->pc = 0x4b2d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)128) ? 1 : 0);
label_4b2d90:
    // 0x4b2d90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B2D90u;
    {
        const bool branch_taken_0x4b2d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2d90) {
            ctx->pc = 0x4B2DA8u;
            goto label_4b2da8;
        }
    }
    ctx->pc = 0x4B2D98u;
    // 0x4b2d98: 0x54c00006  bnel        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B2D98u;
    {
        const bool branch_taken_0x4b2d98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b2d98) {
            ctx->pc = 0x4B2D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2D98u;
            // 0x4b2d9c: 0x4482b  sltu        $t1, $zero, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2DB4u;
            goto label_4b2db4;
        }
    }
    ctx->pc = 0x4B2DA0u;
    // 0x4b2da0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B2DA0u;
    {
        const bool branch_taken_0x4b2da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DA0u;
        // 0x4b2da4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2da0) {
            ctx->pc = 0x4B2DB4u;
            goto label_4b2db4;
        }
    }
    ctx->pc = 0x4B2DA8u;
label_4b2da8:
    // 0x4b2da8: 0x54c00002  bnel        $a2, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B2DA8u;
    {
        const bool branch_taken_0x4b2da8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b2da8) {
            ctx->pc = 0x4B2DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2DA8u;
            // 0x4b2dac: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2DB4u;
            goto label_4b2db4;
        }
    }
    ctx->pc = 0x4B2DB0u;
    // 0x4b2db0: 0x2c880001  sltiu       $t0, $a0, 0x1
    ctx->pc = 0x4b2db0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4b2db4:
    // 0x4b2db4: 0x11000011  beqz        $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B2DB4u;
    {
        const bool branch_taken_0x4b2db4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2db4) {
            ctx->pc = 0x4B2DFCu;
            goto label_4b2dfc;
        }
    }
    ctx->pc = 0x4B2DBCu;
    // 0x4b2dbc: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x4b2dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2dc0: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4b2dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2dc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b2dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b2dc8: 0x0  nop
    ctx->pc = 0x4b2dc8u;
    // NOP
    // 0x4b2dcc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x4B2DCCu;
    {
        const bool branch_taken_0x4b2dcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DCCu;
        // 0x4b2dd0: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2dcc) {
            ctx->pc = 0x4B2DE8u;
            goto label_4b2de8;
        }
    }
    ctx->pc = 0x4B2DD4u;
    // 0x4b2dd4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x4B2DD4u;
    {
        const bool branch_taken_0x4b2dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2dd4) {
            ctx->pc = 0x4B2DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2DD4u;
            // 0x4b2dd8: 0x34a20004  ori         $v0, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2E50u;
            goto label_4b2e50;
        }
    }
    ctx->pc = 0x4B2DDCu;
    // 0x4b2ddc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b2de0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4B2DE0u;
    {
        const bool branch_taken_0x4b2de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DE0u;
        // 0x4b2de4: 0x3442fffb  ori         $v0, $v0, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2de0) {
            ctx->pc = 0x4B2E4Cu;
            goto label_4b2e4c;
        }
    }
    ctx->pc = 0x4B2DE8u;
label_4b2de8:
    // 0x4b2de8: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x4b2de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x4b2dec: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B2DECu;
    {
        const bool branch_taken_0x4b2dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DECu;
        // 0x4b2df0: 0x34a20002  ori         $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2dec) {
            ctx->pc = 0x4B2E44u;
            goto label_4b2e44;
        }
    }
    ctx->pc = 0x4B2DF4u;
    // 0x4b2df4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4B2DF4u;
    {
        const bool branch_taken_0x4b2df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2DF4u;
        // 0x4b2df8: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2df4) {
            ctx->pc = 0x4B2E54u;
            goto label_4b2e54;
        }
    }
    ctx->pc = 0x4B2DFCu;
label_4b2dfc:
    // 0x4b2dfc: 0x51200016  beql        $t1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x4B2DFCu;
    {
        const bool branch_taken_0x4b2dfc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2dfc) {
            ctx->pc = 0x4B2E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2DFCu;
            // 0x4b2e00: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2E58u;
            goto label_4b2e58;
        }
    }
    ctx->pc = 0x4B2E04u;
    // 0x4b2e04: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x4b2e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4b2e08: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x4b2e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2e0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b2e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b2e10: 0x0  nop
    ctx->pc = 0x4b2e10u;
    // NOP
    // 0x4b2e14: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x4B2E14u;
    {
        const bool branch_taken_0x4b2e14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B2E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E14u;
        // 0x4b2e18: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e14) {
            ctx->pc = 0x4B2E38u;
            goto label_4b2e38;
        }
    }
    ctx->pc = 0x4B2E1Cu;
    // 0x4b2e1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2E1Cu;
    {
        const bool branch_taken_0x4b2e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2e1c) {
            ctx->pc = 0x4B2E2Cu;
            goto label_4b2e2c;
        }
    }
    ctx->pc = 0x4B2E24u;
    // 0x4b2e24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4B2E24u;
    {
        const bool branch_taken_0x4b2e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E24u;
        // 0x4b2e28: 0x34a20004  ori         $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e24) {
            ctx->pc = 0x4B2E50u;
            goto label_4b2e50;
        }
    }
    ctx->pc = 0x4B2E2Cu;
label_4b2e2c:
    // 0x4b2e2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b2e30: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B2E30u;
    {
        const bool branch_taken_0x4b2e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E30u;
        // 0x4b2e34: 0x3442fffb  ori         $v0, $v0, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e30) {
            ctx->pc = 0x4B2E4Cu;
            goto label_4b2e4c;
        }
    }
    ctx->pc = 0x4B2E38u;
label_4b2e38:
    // 0x4b2e38: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x4b2e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x4b2e3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B2E3Cu;
    {
        const bool branch_taken_0x4b2e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E3Cu;
        // 0x4b2e40: 0x34a20002  ori         $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e3c) {
            ctx->pc = 0x4B2E50u;
            goto label_4b2e50;
        }
    }
    ctx->pc = 0x4B2E44u;
label_4b2e44:
    // 0x4b2e44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b2e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b2e48: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x4b2e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_4b2e4c:
    // 0x4b2e4c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4b2e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4b2e50:
    // 0x4b2e50: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x4b2e50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_4b2e54:
    // 0x4b2e54: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4b2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_4b2e58:
    // 0x4b2e58: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x4b2e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x4b2e5c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B2E5Cu;
    {
        const bool branch_taken_0x4b2e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2E5Cu;
        // 0x4b2e60: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2e5c) {
            ctx->pc = 0x4B2E88u;
            goto label_4b2e88;
        }
    }
    ctx->pc = 0x4B2E64u;
    // 0x4b2e64: 0x96820058  lhu         $v0, 0x58($s4)
    ctx->pc = 0x4b2e64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x4b2e68: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4b2e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4b2e6c: 0xa6820058  sh          $v0, 0x58($s4)
    ctx->pc = 0x4b2e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b2e70: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x4b2e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4b2e74: 0xe680007c  swc1        $f0, 0x7C($s4)
    ctx->pc = 0x4b2e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 124), bits); }
    // 0x4b2e78: 0xc12cbac  jal         func_4B2EB0
    ctx->pc = 0x4B2E78u;
    SET_GPR_U32(ctx, 31, 0x4B2E80u);
    ctx->pc = 0x4B2E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2E78u;
    // 0x4b2e7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2EB0u, 0x4B2E78u, 0x4B2E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2E80u;
label_4b2e80:
    // 0x4b2e80: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4b2e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2e84: 0x0  nop
    ctx->pc = 0x4b2e84u;
    // NOP
label_4b2e88:
    // 0x4b2e88: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4b2e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4b2e8c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4b2e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4b2e90: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4b2e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4b2e94: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4b2e94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4b2e98: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4b2e98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b2e9c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4b2e9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b2ea0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4b2ea0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b2ea4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b2ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b2ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2EA8u;
        // 0x4b2eac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B2EB0u;
}
