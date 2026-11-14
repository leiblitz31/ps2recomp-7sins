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

// Function: sub_0033CA68
// Address: 0x33ca68 - 0x33e090
void sub_0033CA68_0x33ca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CA68_0x33ca68");
#endif

    switch (ctx->pc) {
        case 0x33cad0u: goto label_33cad0;
        case 0x33cc38u: goto label_33cc38;
        case 0x33cf10u: goto label_33cf10;
        case 0x33cfa8u: goto label_33cfa8;
        case 0x33cfb4u: goto label_33cfb4;
        case 0x33d244u: goto label_33d244;
        case 0x33d250u: goto label_33d250;
        case 0x33d668u: goto label_33d668;
        case 0x33d6fcu: goto label_33d6fc;
        case 0x33d708u: goto label_33d708;
        case 0x33d9f0u: goto label_33d9f0;
        case 0x33d9fcu: goto label_33d9fc;
        case 0x33dd18u: goto label_33dd18;
        case 0x33ddacu: goto label_33ddac;
        case 0x33ddb8u: goto label_33ddb8;
        case 0x33df58u: goto label_33df58;
        case 0x33df64u: goto label_33df64;
        default: break;
    }

    ctx->pc = 0x33ca68u;

    // 0x33ca68: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x33ca68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x33ca6c: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x33ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x33ca70: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x33ca70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x33ca74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33ca74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ca78: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x33ca78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x33ca7c: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x33ca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x33ca80: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x33ca80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x33ca84: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x33ca84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x33ca88: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x33ca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
    // 0x33ca8c: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x33ca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
    // 0x33ca90: 0x7fb701e0  sq          $s7, 0x1E0($sp)
    ctx->pc = 0x33ca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 23));
    // 0x33ca94: 0x7fbe01d0  sq          $fp, 0x1D0($sp)
    ctx->pc = 0x33ca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 30));
    // 0x33ca98: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x33ca98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x33ca9c: 0xe7bd02a8  swc1        $f29, 0x2A8($sp)
    ctx->pc = 0x33ca9cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x33caa0: 0xe7bc02a0  swc1        $f28, 0x2A0($sp)
    ctx->pc = 0x33caa0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x33caa4: 0xe7bb0298  swc1        $f27, 0x298($sp)
    ctx->pc = 0x33caa4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x33caa8: 0xe7ba0290  swc1        $f26, 0x290($sp)
    ctx->pc = 0x33caa8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x33caac: 0xe7b90288  swc1        $f25, 0x288($sp)
    ctx->pc = 0x33caacu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x33cab0: 0xe7b80280  swc1        $f24, 0x280($sp)
    ctx->pc = 0x33cab0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x33cab4: 0xe7b70278  swc1        $f23, 0x278($sp)
    ctx->pc = 0x33cab4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x33cab8: 0xe7b60270  swc1        $f22, 0x270($sp)
    ctx->pc = 0x33cab8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x33cabc: 0xe7b50268  swc1        $f21, 0x268($sp)
    ctx->pc = 0x33cabcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x33cac0: 0xe7b40260  swc1        $f20, 0x260($sp)
    ctx->pc = 0x33cac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x33cac4: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x33cac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x33cac8: 0xc0cead0  jal         func_33AB40
    ctx->pc = 0x33CAC8u;
    SET_GPR_U32(ctx, 31, 0x33CAD0u);
    ctx->pc = 0x33CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CAC8u;
    // 0x33cacc: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB40u, 0x33CAC8u, 0x33CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CAD0u;
label_33cad0:
    // 0x33cad0: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x33cad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x33cad4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x33cad8: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x33cad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x33cadc: 0x2444c210  addiu       $a0, $v0, -0x3DF0
    ctx->pc = 0x33cadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951440));
    // 0x33cae0: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x33cae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x33cae4: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x33cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C248u));
    // 0x33cae8: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x33cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x33caec: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x33caecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C224u));
    // 0x33caf0: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x33caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x33caf4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x33caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x33caf8: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x33caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x33cafc: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x33cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    // 0x33cb00: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x33cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x33cb04: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33CB04u;
    {
        const bool branch_taken_0x33cb04 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB04u;
        // 0x33cb08: 0xafa00170  sw          $zero, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb04) {
            ctx->pc = 0x33CB28u;
            goto label_33cb28;
        }
    }
    ctx->pc = 0x33CB0Cu;
    // 0x33cb0c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x33cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x33cb10: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x33cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
    // 0x33cb14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33cb18: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x33cb18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33cb1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33cb20: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x33cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x33cb24: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x33cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_33cb28:
    // 0x33cb28: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x33cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x33cb2c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33CB2Cu;
    {
        const bool branch_taken_0x33cb2c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB2Cu;
        // 0x33cb30: 0x8fa70140  lw          $a3, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb2c) {
            ctx->pc = 0x33CB50u;
            goto label_33cb50;
        }
    }
    ctx->pc = 0x33CB34u;
    // 0x33cb34: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x33cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x33cb38: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x33cb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x33cb3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33cb40: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x33cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33cb44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33cb48: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x33cb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x33cb4c: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x33cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_33cb50:
    // 0x33cb50: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x33cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x33cb54: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33CB54u;
    {
        const bool branch_taken_0x33cb54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB54u;
        // 0x33cb58: 0x8fa40140  lw          $a0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb54) {
            ctx->pc = 0x33CB78u;
            goto label_33cb78;
        }
    }
    ctx->pc = 0x33CB5Cu;
    // 0x33cb5c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33cb60: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x33cb60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x33cb64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33cb68: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x33cb68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33cb6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33cb70: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x33cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
    // 0x33cb74: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x33cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_33cb78:
    // 0x33cb78: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x33cb78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x33cb7c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x33cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cb80: 0xc4c00040  lwc1        $f0, 0x40($a2)
    ctx->pc = 0x33cb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cb84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33cb84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33cb88: 0x0  nop
    ctx->pc = 0x33cb88u;
    // NOP
    // 0x33cb8c: 0x4500052a  bc1f        . + 4 + (0x52A << 2)
    ctx->pc = 0x33CB8Cu;
    {
        const bool branch_taken_0x33cb8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB8Cu;
        // 0x33cb90: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb8c) {
            ctx->pc = 0x33E038u;
            goto label_33e038;
        }
    }
    ctx->pc = 0x33CB94u;
    // 0x33cb94: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x33cb94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x33cb98: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x33cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x33cb9c: 0x10a00525  beqz        $a1, . + 4 + (0x525 << 2)
    ctx->pc = 0x33CB9Cu;
    {
        const bool branch_taken_0x33cb9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CB9Cu;
        // 0x33cba0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cb9c) {
            ctx->pc = 0x33E034u;
            goto label_33e034;
        }
    }
    ctx->pc = 0x33CBA4u;
    // 0x33cba4: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x33cba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x33cba8: 0x10c20523  beq         $a2, $v0, . + 4 + (0x523 << 2)
    ctx->pc = 0x33CBA8u;
    {
        const bool branch_taken_0x33cba8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x33CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBA8u;
        // 0x33cbac: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cba8) {
            ctx->pc = 0x33E038u;
            goto label_33e038;
        }
    }
    ctx->pc = 0x33CBB0u;
    // 0x33cbb0: 0x4c00520  bltz        $a2, . + 4 + (0x520 << 2)
    ctx->pc = 0x33CBB0u;
    {
        const bool branch_taken_0x33cbb0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x33CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CBB0u;
        // 0x33cbb4: 0x8fa20164  lw          $v0, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cbb0) {
            ctx->pc = 0x33E034u;
            goto label_33e034;
        }
    }
    ctx->pc = 0x33CBB8u;
    // 0x33cbb8: 0x3c030bb3  lui         $v1, 0xBB3
    ctx->pc = 0x33cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2995 << 16));
    // 0x33cbbc: 0x34638435  ori         $v1, $v1, 0x8435
    ctx->pc = 0x33cbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33845);
    // 0x33cbc0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x33cbc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33cbc4: 0x3c023619  lui         $v0, 0x3619
    ctx->pc = 0x33cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13849 << 16));
    // 0x33cbc8: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x33cbc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33cbcc: 0x3442636b  ori         $v0, $v0, 0x636B
    ctx->pc = 0x33cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25451);
    // 0x33cbd0: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x33cbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33cbd4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x33cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x33cbd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33cbd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cbdc: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x33cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x33cbe0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x33cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x33cbe4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x33cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x33cbe8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x33cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x33cbec: 0xafa30148  sw          $v1, 0x148($sp)
    ctx->pc = 0x33cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 3));
    // 0x33cbf0: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x33cbf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33cbf4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x33cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x33cbf8: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x33cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33cbfc: 0xafa40144  sw          $a0, 0x144($sp)
    ctx->pc = 0x33cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 4));
    // 0x33cc00: 0x1880050a  blez        $a0, . + 4 + (0x50A << 2)
    ctx->pc = 0x33CC00u;
    {
        const bool branch_taken_0x33cc00 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x33CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC00u;
        // 0x33cc04: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc00) {
            ctx->pc = 0x33E02Cu;
            goto label_33e02c;
        }
    }
    ctx->pc = 0x33CC08u;
    // 0x33cc08: 0x3c050bb3  lui         $a1, 0xBB3
    ctx->pc = 0x33cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2995 << 16));
    // 0x33cc0c: 0x3c063619  lui         $a2, 0x3619
    ctx->pc = 0x33cc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)13849 << 16));
    // 0x33cc10: 0x34a58435  ori         $a1, $a1, 0x8435
    ctx->pc = 0x33cc10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33845);
    // 0x33cc14: 0x34c6636b  ori         $a2, $a2, 0x636B
    ctx->pc = 0x33cc14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25451);
    // 0x33cc18: 0x4480e800  mtc1        $zero, $f29
    ctx->pc = 0x33cc18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x33cc1c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x33cc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x33cc20: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x33cc20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x33cc24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33cc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33cc28: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x33cc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x33cc2c: 0xafa5019c  sw          $a1, 0x19C($sp)
    ctx->pc = 0x33cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 5));
    // 0x33cc30: 0xafa601a0  sw          $a2, 0x1A0($sp)
    ctx->pc = 0x33cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 6));
    // 0x33cc34: 0x0  nop
    ctx->pc = 0x33cc34u;
    // NOP
label_33cc38:
    // 0x33cc38: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x33cc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cc3c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x33cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x33cc40: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x33cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x33cc44: 0x461d0032  c.eq.s      $f0, $f29
    ctx->pc = 0x33cc44u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[29])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33cc48: 0xafa301a4  sw          $v1, 0x1A4($sp)
    ctx->pc = 0x33cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 3));
    // 0x33cc4c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x33cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x33cc50: 0x450004f1  bc1f        . + 4 + (0x4F1 << 2)
    ctx->pc = 0x33CC50u;
    {
        const bool branch_taken_0x33cc50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC50u;
        // 0x33cc54: 0xafa201a8  sw          $v0, 0x1A8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc50) {
            ctx->pc = 0x33E018u;
            goto label_33e018;
        }
    }
    ctx->pc = 0x33CC58u;
    // 0x33cc58: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x33cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x33cc5c: 0x2482c210  addiu       $v0, $a0, -0x3DF0
    ctx->pc = 0x33cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951440));
    // 0x33cc60: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x33cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C27Cu));
    // 0x33cc64: 0x46001c8  bltz        $v1, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x33CC64u;
    {
        const bool branch_taken_0x33cc64 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC64u;
        // 0x33cc68: 0x3c31821  addu        $v1, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc64) {
            ctx->pc = 0x33D388u;
            goto label_33d388;
        }
    }
    ctx->pc = 0x33CC6Cu;
    // 0x33cc6c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x33cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x33cc70: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x33cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x33cc74: 0x3c2a821  addu        $s5, $fp, $v0
    ctx->pc = 0x33cc74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x33cc78: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x33cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x33cc7c: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x33cc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x33cc80: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x33cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x33cc84: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x33cc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x33cc88: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x33cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x33cc8c: 0xc5b821  addu        $s7, $a2, $a1
    ctx->pc = 0x33cc8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x33cc90: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x33cc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cc94: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x33cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x33cc98: 0x600013  mtlo        $v1
    ctx->pc = 0x33cc98u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x33cc9c: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x33cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x33cca0: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x33cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33cca4: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x33cca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cca8: 0x72038000  madd        $s0, $s0, $v1
    ctx->pc = 0x33cca8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33ccac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33ccacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33ccb0: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x33ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x33ccb4: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x33ccb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33ccb8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x33ccb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33ccbc: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x33ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ccc0: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x33ccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ccc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33ccc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33ccc8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x33ccc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33cccc: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x33ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33ccd0: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x33ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ccd4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33ccd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33ccd8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x33ccd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33ccdc: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x33ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cce0: 0xc6a1001c  lwc1        $f1, 0x1C($s5)
    ctx->pc = 0x33cce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cce4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33cce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33cce8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33CCE8u;
    {
        const bool branch_taken_0x33cce8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCE8u;
        // 0x33ccec: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cce8) {
            ctx->pc = 0x33CD00u;
            goto label_33cd00;
        }
    }
    ctx->pc = 0x33CCF0u;
    // 0x33ccf0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33ccf0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ccf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33ccf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33ccf8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33CCF8u;
    {
        const bool branch_taken_0x33ccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCF8u;
        // 0x33ccfc: 0x461c0002  mul.s       $f0, $f0, $f28 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ccf8) {
            ctx->pc = 0x33CD1Cu;
            goto label_33cd1c;
        }
    }
    ctx->pc = 0x33CD00u;
label_33cd00:
    // 0x33cd00: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33cd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33cd04: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33cd08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33cd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33cd0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cd0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cd10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33cd10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33cd14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33cd14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33cd18: 0x461c0002  mul.s       $f0, $f0, $f28
    ctx->pc = 0x33cd18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
label_33cd1c:
    // 0x33cd1c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x33cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x33cd20: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x33cd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cd24: 0x400013  mtlo        $v0
    ctx->pc = 0x33cd24u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x33cd28: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x33cd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33cd2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33cd2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33cd30: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x33cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33cd34: 0x72028000  madd        $s0, $s0, $v0
    ctx->pc = 0x33cd34u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33cd38: 0x461a0241  sub.s       $f9, $f0, $f26
    ctx->pc = 0x33cd38u;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x33cd3c: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33cd3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33cd40: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33CD40u;
    {
        const bool branch_taken_0x33cd40 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD40u;
        // 0x33cd44: 0x46011540  add.s       $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd40) {
            ctx->pc = 0x33CD58u;
            goto label_33cd58;
        }
    }
    ctx->pc = 0x33CD48u;
    // 0x33cd48: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33cd48u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cd4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33cd4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33cd50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33CD50u;
    {
        const bool branch_taken_0x33cd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD50u;
        // 0x33cd54: 0x461c0002  mul.s       $f0, $f0, $f28 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd50) {
            ctx->pc = 0x33CD74u;
            goto label_33cd74;
        }
    }
    ctx->pc = 0x33CD58u;
label_33cd58:
    // 0x33cd58: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33cd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33cd5c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33cd60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33cd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33cd64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cd64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cd68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33cd68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33cd6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33cd6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33cd70: 0x461c0002  mul.s       $f0, $f0, $f28
    ctx->pc = 0x33cd70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
label_33cd74:
    // 0x33cd74: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x33cd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cd78: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x33cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x33cd7c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x33cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33cd80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33cd80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33cd84: 0x400013  mtlo        $v0
    ctx->pc = 0x33cd84u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x33cd88: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x33cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33cd8c: 0x461a0241  sub.s       $f9, $f0, $f26
    ctx->pc = 0x33cd8cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x33cd90: 0x72028000  madd        $s0, $s0, $v0
    ctx->pc = 0x33cd90u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33cd94: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33cd94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33cd98: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33cd98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33cd9c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33CD9Cu;
    {
        const bool branch_taken_0x33cd9c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD9Cu;
        // 0x33cda0: 0xe7a20010  swc1        $f2, 0x10($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd9c) {
            ctx->pc = 0x33CDB4u;
            goto label_33cdb4;
        }
    }
    ctx->pc = 0x33CDA4u;
    // 0x33cda4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33cda4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cda8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33cda8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33cdac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33CDACu;
    {
        const bool branch_taken_0x33cdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDACu;
        // 0x33cdb0: 0x461c0002  mul.s       $f0, $f0, $f28 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cdac) {
            ctx->pc = 0x33CDD0u;
            goto label_33cdd0;
        }
    }
    ctx->pc = 0x33CDB4u;
label_33cdb4:
    // 0x33cdb4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33cdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33cdb8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33cdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33cdbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33cdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33cdc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cdc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cdc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33cdc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33cdc8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33cdc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33cdcc: 0x461c0002  mul.s       $f0, $f0, $f28
    ctx->pc = 0x33cdccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
label_33cdd0:
    // 0x33cdd0: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x33cdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33cdd4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x33cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x33cdd8: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x33cdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33cddc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33cddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33cde0: 0x400013  mtlo        $v0
    ctx->pc = 0x33cde0u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x33cde4: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x33cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33cde8: 0x461a0241  sub.s       $f9, $f0, $f26
    ctx->pc = 0x33cde8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x33cdec: 0x72028000  madd        $s0, $s0, $v0
    ctx->pc = 0x33cdecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33cdf0: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33cdf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33cdf4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33cdf4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33cdf8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33CDF8u;
    {
        const bool branch_taken_0x33cdf8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CDF8u;
        // 0x33cdfc: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cdf8) {
            ctx->pc = 0x33CE10u;
            goto label_33ce10;
        }
    }
    ctx->pc = 0x33CE00u;
    // 0x33ce00: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33ce00u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ce04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33ce04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33ce08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33CE08u;
    {
        const bool branch_taken_0x33ce08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE08u;
        // 0x33ce0c: 0x461c0002  mul.s       $f0, $f0, $f28 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce08) {
            ctx->pc = 0x33CE2Cu;
            goto label_33ce2c;
        }
    }
    ctx->pc = 0x33CE10u;
label_33ce10:
    // 0x33ce10: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33ce10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33ce14: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33ce18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ce1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33ce1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ce20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33ce20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33ce24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33ce24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33ce28: 0x461c0002  mul.s       $f0, $f0, $f28
    ctx->pc = 0x33ce28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
label_33ce2c:
    // 0x33ce2c: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x33ce2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ce30: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x33ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x33ce34: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x33ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ce38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33ce38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33ce3c: 0x400013  mtlo        $v0
    ctx->pc = 0x33ce3cu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x33ce40: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x33ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33ce44: 0x461a0241  sub.s       $f9, $f0, $f26
    ctx->pc = 0x33ce44u;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x33ce48: 0x72028000  madd        $s0, $s0, $v0
    ctx->pc = 0x33ce48u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33ce4c: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33ce4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33ce50: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33ce50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33ce54: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33CE54u;
    {
        const bool branch_taken_0x33ce54 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33CE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE54u;
        // 0x33ce58: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce54) {
            ctx->pc = 0x33CE6Cu;
            goto label_33ce6c;
        }
    }
    ctx->pc = 0x33CE5Cu;
    // 0x33ce5c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33ce5cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ce60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33ce60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33ce64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33CE64u;
    {
        const bool branch_taken_0x33ce64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CE64u;
        // 0x33ce68: 0x461c0002  mul.s       $f0, $f0, $f28 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ce64) {
            ctx->pc = 0x33CE88u;
            goto label_33ce88;
        }
    }
    ctx->pc = 0x33CE6Cu;
label_33ce6c:
    // 0x33ce6c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33ce6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33ce70: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33ce74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33ce74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ce78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33ce78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ce7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33ce7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33ce80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33ce80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33ce84: 0x461c0002  mul.s       $f0, $f0, $f28
    ctx->pc = 0x33ce84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
label_33ce88:
    // 0x33ce88: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x33ce88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33ce8c: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x33ce8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33ce90: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x33ce90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x33ce94: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x33ce94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x33ce98: 0x4600aec6  mov.s       $f27, $f21
    ctx->pc = 0x33ce98u;
    ctx->f[27] = FPU_MOV_S(ctx->f[21]);
    // 0x33ce9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33ce9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33cea0: 0xafa701a4  sw          $a3, 0x1A4($sp)
    ctx->pc = 0x33cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 7));
    // 0x33cea4: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x33cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x33cea8: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x33cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
    // 0x33ceac: 0x461a0241  sub.s       $f9, $f0, $f26
    ctx->pc = 0x33ceacu;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x33ceb0: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33ceb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33ceb4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33ceb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33ceb8: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x33ceb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x33cebc: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x33cebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x33cec0: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x33cec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x33cec4: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x33cec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x33cec8: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x33cec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x33cecc: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x33ceccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33ced0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x33ced0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33ced4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x33ced4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33ced8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x33ced8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33cedc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x33cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x33cee0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33cee4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33cee8: 0x184000cc  blez        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x33CEE8u;
    {
        const bool branch_taken_0x33cee8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CEE8u;
        // 0x33ceec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cee8) {
            ctx->pc = 0x33D21Cu;
            goto label_33d21c;
        }
    }
    ctx->pc = 0x33CEF0u;
    // 0x33cef0: 0x3c140bb3  lui         $s4, 0xBB3
    ctx->pc = 0x33cef0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)2995 << 16));
    // 0x33cef4: 0x3c133619  lui         $s3, 0x3619
    ctx->pc = 0x33cef4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13849 << 16));
    // 0x33cef8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x33cef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x33cefc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x33cefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x33cf00: 0x36948435  ori         $s4, $s4, 0x8435
    ctx->pc = 0x33cf00u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)33845);
    // 0x33cf04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33cf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33cf08: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x33cf08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x33cf0c: 0x3673636b  ori         $s3, $s3, 0x636B
    ctx->pc = 0x33cf0cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)25451);
label_33cf10:
    // 0x33cf10: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x33cf10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33cf14: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x33cf14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x33cf18: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x33cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33cf1c: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x33cf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x33cf20: 0x2241818  mult        $v1, $s1, $a0
    ctx->pc = 0x33cf20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33cf24: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x33cf24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cf28: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x33cf28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33cf2c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33cf30: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33CF30u;
    {
        const bool branch_taken_0x33cf30 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF30u;
        // 0x33cf34: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cf30) {
            ctx->pc = 0x33CF48u;
            goto label_33cf48;
        }
    }
    ctx->pc = 0x33CF38u;
    // 0x33cf38: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x33cf38u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33cf3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33cf3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33cf40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33CF40u;
    {
        const bool branch_taken_0x33cf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CF40u;
        // 0x33cf44: 0x46180842  mul.s       $f1, $f1, $f24 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cf40) {
            ctx->pc = 0x33CF64u;
            goto label_33cf64;
        }
    }
    ctx->pc = 0x33CF48u;
label_33cf48:
    // 0x33cf48: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33cf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33cf4c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33cf50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33cf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33cf54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33cf54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33cf58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33cf58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33cf5c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33cf5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33cf60: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x33cf60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_33cf64:
    // 0x33cf64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33cf64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33cf68: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x33cf68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x33cf6c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x33cf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33cf70: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x33cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x33cf74: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x33cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33cf78: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33cf7c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33cf7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33cf80: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x33cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33cf84: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x33cf84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x33cf88: 0x46160a41  sub.s       $f9, $f1, $f22
    ctx->pc = 0x33cf88u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
    // 0x33cf8c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33cf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33cf90: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x33cf90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x33cf94: 0x7fa601b0  sq          $a2, 0x1B0($sp)
    ctx->pc = 0x33cf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 6));
    // 0x33cf98: 0x46021dc0  add.s       $f23, $f3, $f2
    ctx->pc = 0x33cf98u;
    ctx->f[23] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x33cf9c: 0x4615bd01  sub.s       $f20, $f23, $f21
    ctx->pc = 0x33cf9cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
    // 0x33cfa0: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x33CFA0u;
    SET_GPR_U32(ctx, 31, 0x33CFA8u);
    ctx->pc = 0x33CFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CFA0u;
    // 0x33cfa4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x33CFA0u, 0x33CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFA8u;
label_33cfa8:
    // 0x33cfa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33cfa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cfac: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x33CFACu;
    SET_GPR_U32(ctx, 31, 0x33CFB4u);
    ctx->pc = 0x33CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CFACu;
    // 0x33cfb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x33CFACu, 0x33CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CFB4u;
label_33cfb4:
    // 0x33cfb4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33CFB4u;
    {
        const bool branch_taken_0x33cfb4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33CFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFB4u;
        // 0x33cfb8: 0x7ba601b0  lq          $a2, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cfb4) {
            ctx->pc = 0x33CFC8u;
            goto label_33cfc8;
        }
    }
    ctx->pc = 0x33CFBCu;
    // 0x33cfbc: 0x4614b503  div.s       $f20, $f22, $f20
    ctx->pc = 0x33cfbcu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
    // 0x33cfc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33CFC0u;
    {
        const bool branch_taken_0x33cfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFC0u;
        // 0x33cfc4: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cfc0) {
            ctx->pc = 0x33CFD0u;
            goto label_33cfd0;
        }
    }
    ctx->pc = 0x33CFC8u;
label_33cfc8:
    // 0x33cfc8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x33cfc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33cfcc: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x33cfccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33cfd0:
    // 0x33cfd0: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x33cfd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33cfd4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33CFD4u;
    {
        const bool branch_taken_0x33cfd4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFD4u;
        // 0x33cfd8: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cfd4) {
            ctx->pc = 0x33CFECu;
            goto label_33cfec;
        }
    }
    ctx->pc = 0x33CFDCu;
    // 0x33cfdc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33cfdcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cfe0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33cfe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33cfe4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33CFE4u;
    {
        const bool branch_taken_0x33cfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CFE4u;
        // 0x33cfe8: 0x46180002  mul.s       $f0, $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cfe4) {
            ctx->pc = 0x33D004u;
            goto label_33d004;
        }
    }
    ctx->pc = 0x33CFECu;
label_33cfec:
    // 0x33cfec: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33cff0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33cff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33cff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33cff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33cff8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33cff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33cffc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33cffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33d000: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x33d000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_33d004:
    // 0x33d004: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x33d004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d008: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x33d008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d00c: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x33d00cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d010: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33d010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33d014: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x33d014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33d018: 0x46190241  sub.s       $f9, $f0, $f25
    ctx->pc = 0x33d018u;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x33d01c: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33d01cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33d020: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33d020u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33d024: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D024u;
    {
        const bool branch_taken_0x33d024 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D024u;
        // 0x33d028: 0xe7a20020  swc1        $f2, 0x20($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d024) {
            ctx->pc = 0x33D03Cu;
            goto label_33d03c;
        }
    }
    ctx->pc = 0x33D02Cu;
    // 0x33d02c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33d02cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d030: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33d030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33d034: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D034u;
    {
        const bool branch_taken_0x33d034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D034u;
        // 0x33d038: 0x46180002  mul.s       $f0, $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d034) {
            ctx->pc = 0x33D058u;
            goto label_33d058;
        }
    }
    ctx->pc = 0x33D03Cu;
label_33d03c:
    // 0x33d03c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33d03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33d040: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33d040u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33d044: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33d044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33d048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d04c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33d04cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33d050: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33d050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33d054: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x33d054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_33d058:
    // 0x33d058: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x33d058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d05c: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x33d05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d060: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x33d060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d064: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33d064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33d068: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x33d068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33d06c: 0x46190241  sub.s       $f9, $f0, $f25
    ctx->pc = 0x33d06cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x33d070: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33d070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33d074: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33d074u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33d078: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D078u;
    {
        const bool branch_taken_0x33d078 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D078u;
        // 0x33d07c: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d078) {
            ctx->pc = 0x33D090u;
            goto label_33d090;
        }
    }
    ctx->pc = 0x33D080u;
    // 0x33d080: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33d080u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d084: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33d084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33d088: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D088u;
    {
        const bool branch_taken_0x33d088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D088u;
        // 0x33d08c: 0x46180002  mul.s       $f0, $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d088) {
            ctx->pc = 0x33D0ACu;
            goto label_33d0ac;
        }
    }
    ctx->pc = 0x33D090u;
label_33d090:
    // 0x33d090: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33d090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33d094: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33d094u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33d098: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33d098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33d09c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d0a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33d0a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33d0a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33d0a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33d0a8: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x33d0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_33d0ac:
    // 0x33d0ac: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x33d0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d0b0: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x33d0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d0b4: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x33d0b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d0b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33d0b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33d0bc: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x33d0bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33d0c0: 0x46190241  sub.s       $f9, $f0, $f25
    ctx->pc = 0x33d0c0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x33d0c4: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33d0c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33d0c8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x33d0c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x33d0cc: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D0CCu;
    {
        const bool branch_taken_0x33d0cc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D0CCu;
        // 0x33d0d0: 0xe7a20028  swc1        $f2, 0x28($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d0cc) {
            ctx->pc = 0x33D0E4u;
            goto label_33d0e4;
        }
    }
    ctx->pc = 0x33D0D4u;
    // 0x33d0d4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x33d0d4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d0d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33d0d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d0dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D0DCu;
    {
        const bool branch_taken_0x33d0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D0DCu;
        // 0x33d0e0: 0x46180842  mul.s       $f1, $f1, $f24 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d0dc) {
            ctx->pc = 0x33D100u;
            goto label_33d100;
        }
    }
    ctx->pc = 0x33D0E4u;
label_33d0e4:
    // 0x33d0e4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33d0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33d0e8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33d0ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33d0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33d0f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33d0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d0f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33d0f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d0f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33d0f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33d0fc: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x33d0fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_33d100:
    // 0x33d100: 0xc6270024  lwc1        $f7, 0x24($s1)
    ctx->pc = 0x33d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33d104: 0xc7a80010  lwc1        $f8, 0x10($sp)
    ctx->pc = 0x33d104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x33d108: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x33d108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x33d10c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x33d10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d110: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x33d110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x33d114: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33d114u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33d118: 0xc6250014  lwc1        $f5, 0x14($s1)
    ctx->pc = 0x33d118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33d11c: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x33d11cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x33d120: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x33d120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33d124: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x33d124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x33d128: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x33d128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d12c: 0x46190a41  sub.s       $f9, $f1, $f25
    ctx->pc = 0x33d12cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[25]);
    // 0x33d130: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x33d130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d134: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33d134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33d138: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x33d138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33d13c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x33d13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d140: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x33d140u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x33d144: 0x460749c2  mul.s       $f7, $f9, $f7
    ctx->pc = 0x33d144u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x33d148: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x33d148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x33d14c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x33d14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x33d150: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x33d150u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x33d154: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33d154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33d158: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33d158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33d15c: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x33d15cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
    // 0x33d160: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x33d160u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x33d164: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x33d164u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x33d168: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x33d168u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x33d16c: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x33d16cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x33d170: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x33d170u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x33d174: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x33d174u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x33d178: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x33d178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x33d17c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x33d17cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x33d180: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x33d180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x33d184: 0xe4680000  swc1        $f8, 0x0($v1)
    ctx->pc = 0x33d184u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33d188: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x33d188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d18c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x33d18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d190: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33d190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33d194: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d194u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d198: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x33d198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x33d19c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x33d19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d1a0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x33d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d1a4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33d1a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33d1a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d1a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d1ac: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x33d1acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x33d1b0: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x33d1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d1b4: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x33d1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d1b8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33d1b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33d1bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d1bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d1c0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x33d1c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x33d1c4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x33d1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d1c8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33d1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33d1cc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x33d1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d1d0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x33d1d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x33d1d4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x33d1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d1d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x33d1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x33d1dc: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x33d1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d1e0: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x33d1e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x33d1e4: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x33d1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x33d1e8: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x33d1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x33d1ec: 0x6ba7002f  ldl         $a3, 0x2F($sp)
    ctx->pc = 0x33d1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x33d1f0: 0x6fa70028  ldr         $a3, 0x28($sp)
    ctx->pc = 0x33d1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x33d1f4: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x33d1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d1f8: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x33d1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d1fc: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x33d1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d200: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x33d200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d204: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x33d204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x33d208: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33d20c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33d210: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x33d210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33d214: 0x1440ff3e  bnez        $v0, . + 4 + (-0xC2 << 2)
    ctx->pc = 0x33D214u;
    {
        const bool branch_taken_0x33d214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D214u;
        // 0x33d218: 0x4600bd46  mov.s       $f21, $f23 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d214) {
            ctx->pc = 0x33CF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33cf10;
        }
    }
    ctx->pc = 0x33D21Cu;
label_33d21c:
    // 0x33d21c: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x33d21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d220: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x33d220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x33d224: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33d224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33d228: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x33d228u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x33d22c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33d230: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x33d230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x33d234: 0x4615bd01  sub.s       $f20, $f23, $f21
    ctx->pc = 0x33d234u;
    ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
    // 0x33d238: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33d238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33d23c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x33D23Cu;
    SET_GPR_U32(ctx, 31, 0x33D244u);
    ctx->pc = 0x33D240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D23Cu;
    // 0x33d240: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x33D23Cu, 0x33D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D244u;
label_33d244:
    // 0x33d244: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33d244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d248: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x33D248u;
    SET_GPR_U32(ctx, 31, 0x33D250u);
    ctx->pc = 0x33D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D248u;
    // 0x33d24c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x33D248u, 0x33D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D250u;
label_33d250:
    // 0x33d250: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D250u;
    {
        const bool branch_taken_0x33d250 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D250u;
        // 0x33d254: 0xc7a60010  lwc1        $f6, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d250) {
            ctx->pc = 0x33D264u;
            goto label_33d264;
        }
    }
    ctx->pc = 0x33D258u;
    // 0x33d258: 0x4614bd03  div.s       $f20, $f23, $f20
    ctx->pc = 0x33d258u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[23], ctx->f[20]); }
    // 0x33d25c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33D25Cu;
    {
        const bool branch_taken_0x33d25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D25Cu;
        // 0x33d260: 0x121100  sll         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d25c) {
            ctx->pc = 0x33D26Cu;
            goto label_33d26c;
        }
    }
    ctx->pc = 0x33D264u;
label_33d264:
    // 0x33d264: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x33d264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33d268: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x33d268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_33d26c:
    // 0x33d26c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x33d26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d270: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x33d270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x33d274: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x33d274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d278: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x33d278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x33d27c: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x33d27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33d280: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x33d280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x33d284: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x33d284u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x33d288: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x33d288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x33d28c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33d28cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33d290: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x33d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d294: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x33d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33d298: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33d298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33d29c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x33d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d2a0: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x33d2a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x33d2a4: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x33d2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33d2a8: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x33d2a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x33d2ac: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x33d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x33d2b0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x33d2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x33d2b4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x33d2b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x33d2b8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33d2b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33d2bc: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x33d2bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x33d2c0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x33d2c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x33d2c4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x33d2c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x33d2c8: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x33d2c8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x33d2cc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x33d2ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x33d2d0: 0x461bd503  div.s       $f20, $f26, $f27
    ctx->pc = 0x33d2d0u;
    { if (ctx->f[27] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[26], ctx->f[27]); }
    // 0x33d2d4: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x33d2d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x33d2d8: 0xe4660000  swc1        $f6, 0x0($v1)
    ctx->pc = 0x33d2d8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33d2dc: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x33d2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d2e0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x33d2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d2e4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33d2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33d2e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d2e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d2ec: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x33d2ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x33d2f0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x33d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d2f4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x33d2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d2f8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33d2f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33d2fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d2fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d300: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x33d300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x33d304: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x33d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d308: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x33d308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d30c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33d30cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33d310: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d310u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d314: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x33d314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x33d318: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x33d318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d31c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33d31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33d320: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x33d320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d324: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x33d324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x33d328: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x33d328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d32c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x33d32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x33d330: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x33d330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d334: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x33d334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x33d338: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x33d338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d33c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x33d33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d340: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x33d340u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x33d344: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33d344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33d348: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x33d348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x33d34c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x33d34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d350: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x33d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d354: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x33d354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d358: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d358u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d35c: 0xc6a3000c  lwc1        $f3, 0xC($s5)
    ctx->pc = 0x33d35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33d360: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x33d360u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x33d364: 0xe6a10014  swc1        $f1, 0x14($s5)
    ctx->pc = 0x33d364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x33d368: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x33d368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d36c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x33d36cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x33d370: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33d370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33d374: 0xe6a00018  swc1        $f0, 0x18($s5)
    ctx->pc = 0x33d374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x33d378: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x33d378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d37c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x33d37cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x33d380: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x33d380u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x33d384: 0xe6a1001c  swc1        $f1, 0x1C($s5)
    ctx->pc = 0x33d384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
label_33d388:
    // 0x33d388: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x33d388u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x33d38c: 0x24e2c210  addiu       $v0, $a3, -0x3DF0
    ctx->pc = 0x33d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951440));
    // 0x33d390: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x33d390u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C280u));
    // 0x33d394: 0x46001ee  bltz        $v1, . + 4 + (0x1EE << 2)
    ctx->pc = 0x33D394u;
    {
        const bool branch_taken_0x33d394 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D394u;
        // 0x33d398: 0x3c31821  addu        $v1, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d394) {
            ctx->pc = 0x33DB50u;
            goto label_33db50;
        }
    }
    ctx->pc = 0x33D39Cu;
    // 0x33d39c: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x33d39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x33d3a0: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x33d3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33d3a4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x33d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x33d3a8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x33d3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x33d3ac: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x33d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
    // 0x33d3b0: 0xafa40184  sw          $a0, 0x184($sp)
    ctx->pc = 0x33d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 4));
    // 0x33d3b4: 0x3c2a821  addu        $s5, $fp, $v0
    ctx->pc = 0x33d3b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x33d3b8: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x33d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x33d3bc: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x33d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d3c0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x33d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33d3c4: 0x8fa70158  lw          $a3, 0x158($sp)
    ctx->pc = 0x33d3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x33d3c8: 0xafa50188  sw          $a1, 0x188($sp)
    ctx->pc = 0x33d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 5));
    // 0x33d3cc: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x33d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x33d3d0: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x33d3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x33d3d4: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x33d3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d3d8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x33d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x33d3dc: 0xafa7018c  sw          $a3, 0x18C($sp)
    ctx->pc = 0x33d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 7));
    // 0x33d3e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33d3e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33d3e4: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x33d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x33d3e8: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x33d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x33d3ec: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x33d3ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x33d3f0: 0x600013  mtlo        $v1
    ctx->pc = 0x33d3f0u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x33d3f4: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x33d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33d3f8: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x33d3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d3fc: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x33d3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d400: 0x72038000  madd        $s0, $s0, $v1
    ctx->pc = 0x33d400u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33d404: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d408: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x33d408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x33d40c: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x33d40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d410: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x33d410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d414: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33d414u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33d418: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x33d418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x33d41c: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x33d41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d420: 0xc6a1001c  lwc1        $f1, 0x1C($s5)
    ctx->pc = 0x33d420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d424: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d428: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D428u;
    {
        const bool branch_taken_0x33d428 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D428u;
        // 0x33d42c: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d428) {
            ctx->pc = 0x33D440u;
            goto label_33d440;
        }
    }
    ctx->pc = 0x33D430u;
    // 0x33d430: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33d430u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d434: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33d434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33d438: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D438u;
    {
        const bool branch_taken_0x33d438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D438u;
        // 0x33d43c: 0x461c0002  mul.s       $f0, $f0, $f28 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d438) {
            ctx->pc = 0x33D45Cu;
            goto label_33d45c;
        }
    }
    ctx->pc = 0x33D440u;
label_33d440:
    // 0x33d440: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33d440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33d444: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33d444u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33d448: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33d448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33d44c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33d450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33d454: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33d454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33d458: 0x461c0002  mul.s       $f0, $f0, $f28
    ctx->pc = 0x33d458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
label_33d45c:
    // 0x33d45c: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x33d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x33d460: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33d460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33d464: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33d464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33d468: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x33d468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x33d46c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x33d46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d470: 0x600013  mtlo        $v1
    ctx->pc = 0x33d470u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x33d474: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x33d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d478: 0x461a0241  sub.s       $f9, $f0, $f26
    ctx->pc = 0x33d478u;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x33d47c: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x33d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33d480: 0x72038000  madd        $s0, $s0, $v1
    ctx->pc = 0x33d480u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33d484: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33d484u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33d488: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D488u;
    {
        const bool branch_taken_0x33d488 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D488u;
        // 0x33d48c: 0x46011540  add.s       $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d488) {
            ctx->pc = 0x33D4A0u;
            goto label_33d4a0;
        }
    }
    ctx->pc = 0x33D490u;
    // 0x33d490: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x33d490u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d494: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33d494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d498: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D498u;
    {
        const bool branch_taken_0x33d498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D498u;
        // 0x33d49c: 0x461c0842  mul.s       $f1, $f1, $f28 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d498) {
            ctx->pc = 0x33D4BCu;
            goto label_33d4bc;
        }
    }
    ctx->pc = 0x33D4A0u;
label_33d4a0:
    // 0x33d4a0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33d4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33d4a4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33d4a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33d4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33d4ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33d4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d4b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33d4b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d4b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33d4b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33d4b8: 0x461c0842  mul.s       $f1, $f1, $f28
    ctx->pc = 0x33d4b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[28]);
label_33d4bc:
    // 0x33d4bc: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x33d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x33d4c0: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x33d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x33d4c4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33d4c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33d4c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33d4cc: 0x600013  mtlo        $v1
    ctx->pc = 0x33d4ccu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x33d4d0: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x33d4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d4d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x33d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d4d8: 0x461a0a41  sub.s       $f9, $f1, $f26
    ctx->pc = 0x33d4d8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[26]);
    // 0x33d4dc: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x33d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33d4e0: 0x72038000  madd        $s0, $s0, $v1
    ctx->pc = 0x33d4e0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33d4e4: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x33d4e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x33d4e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x33d4e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x33d4ec: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D4ECu;
    {
        const bool branch_taken_0x33d4ec = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D4ECu;
        // 0x33d4f0: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d4ec) {
            ctx->pc = 0x33D504u;
            goto label_33d504;
        }
    }
    ctx->pc = 0x33D4F4u;
    // 0x33d4f4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x33d4f4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d4f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33d4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d4fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D4FCu;
    {
        const bool branch_taken_0x33d4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D4FCu;
        // 0x33d500: 0x461c0842  mul.s       $f1, $f1, $f28 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d4fc) {
            ctx->pc = 0x33D520u;
            goto label_33d520;
        }
    }
    ctx->pc = 0x33D504u;
label_33d504:
    // 0x33d504: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33d504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33d508: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33d508u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33d50c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33d50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33d510: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33d510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d514: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33d514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d518: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33d518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33d51c: 0x461c0842  mul.s       $f1, $f1, $f28
    ctx->pc = 0x33d51cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[28]);
label_33d520:
    // 0x33d520: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x33d520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x33d524: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x33d524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x33d528: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33d52c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33d52cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33d530: 0x600013  mtlo        $v1
    ctx->pc = 0x33d530u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x33d534: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x33d534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d538: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x33d538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d53c: 0x461a0a41  sub.s       $f9, $f1, $f26
    ctx->pc = 0x33d53cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[26]);
    // 0x33d540: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x33d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33d544: 0x72038000  madd        $s0, $s0, $v1
    ctx->pc = 0x33d544u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33d548: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x33d548u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x33d54c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x33d54cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x33d550: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D550u;
    {
        const bool branch_taken_0x33d550 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D550u;
        // 0x33d554: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d550) {
            ctx->pc = 0x33D568u;
            goto label_33d568;
        }
    }
    ctx->pc = 0x33D558u;
    // 0x33d558: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x33d558u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d55c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33d55cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d560: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D560u;
    {
        const bool branch_taken_0x33d560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D560u;
        // 0x33d564: 0x461c0842  mul.s       $f1, $f1, $f28 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d560) {
            ctx->pc = 0x33D584u;
            goto label_33d584;
        }
    }
    ctx->pc = 0x33D568u;
label_33d568:
    // 0x33d568: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33d568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33d56c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33d570: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33d570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33d574: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33d574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d578: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33d578u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d57c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33d57cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33d580: 0x461c0842  mul.s       $f1, $f1, $f28
    ctx->pc = 0x33d580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[28]);
label_33d584:
    // 0x33d584: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x33d584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x33d588: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x33d588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x33d58c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33d590: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33d590u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33d594: 0x600013  mtlo        $v1
    ctx->pc = 0x33d594u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x33d598: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x33d598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d59c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x33d59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d5a0: 0x461a0a41  sub.s       $f9, $f1, $f26
    ctx->pc = 0x33d5a0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[26]);
    // 0x33d5a4: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x33d5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33d5a8: 0x72038000  madd        $s0, $s0, $v1
    ctx->pc = 0x33d5a8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33d5ac: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x33d5acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x33d5b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x33d5b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x33d5b4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D5B4u;
    {
        const bool branch_taken_0x33d5b4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5B4u;
        // 0x33d5b8: 0xe7a000b0  swc1        $f0, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d5b4) {
            ctx->pc = 0x33D5CCu;
            goto label_33d5cc;
        }
    }
    ctx->pc = 0x33D5BCu;
    // 0x33d5bc: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x33d5bcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33d5c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33d5c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33d5c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D5C4u;
    {
        const bool branch_taken_0x33d5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5C4u;
        // 0x33d5c8: 0x461c1082  mul.s       $f2, $f2, $f28 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d5c4) {
            ctx->pc = 0x33D5E8u;
            goto label_33d5e8;
        }
    }
    ctx->pc = 0x33D5CCu;
label_33d5cc:
    // 0x33d5cc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33d5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33d5d0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33d5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33d5d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33d5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33d5d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33d5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33d5dc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33d5dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33d5e0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33d5e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33d5e4: 0x461c1082  mul.s       $f2, $f2, $f28
    ctx->pc = 0x33d5e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[28]);
label_33d5e8:
    // 0x33d5e8: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x33d5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x33d5ec: 0x4600aec6  mov.s       $f27, $f21
    ctx->pc = 0x33d5ecu;
    ctx->f[27] = FPU_MOV_S(ctx->f[21]);
    // 0x33d5f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33d5f4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33d5f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33d5f8: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x33d5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d5fc: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x33d5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d600: 0x461a1241  sub.s       $f9, $f2, $f26
    ctx->pc = 0x33d600u;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[26]);
    // 0x33d604: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33d604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33d608: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d60c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x33d60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x33d610: 0x6ba50067  ldl         $a1, 0x67($sp)
    ctx->pc = 0x33d610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x33d614: 0x6fa50060  ldr         $a1, 0x60($sp)
    ctx->pc = 0x33d614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x33d618: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x33d618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d61c: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x33d61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d620: 0x6ba400b7  ldl         $a0, 0xB7($sp)
    ctx->pc = 0x33d620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x33d624: 0x6fa400b0  ldr         $a0, 0xB0($sp)
    ctx->pc = 0x33d624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x33d628: 0xb3a400a7  sdl         $a0, 0xA7($sp)
    ctx->pc = 0x33d628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d62c: 0xb7a400a0  sdr         $a0, 0xA0($sp)
    ctx->pc = 0x33d62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d630: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x33d630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x33d634: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33d634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33d638: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33d638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33d63c: 0x184000e2  blez        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x33D63Cu;
    {
        const bool branch_taken_0x33d63c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D63Cu;
        // 0x33d640: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d63c) {
            ctx->pc = 0x33D9C8u;
            goto label_33d9c8;
        }
    }
    ctx->pc = 0x33D644u;
    // 0x33d644: 0x3c140bb3  lui         $s4, 0xBB3
    ctx->pc = 0x33d644u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)2995 << 16));
    // 0x33d648: 0x3c133619  lui         $s3, 0x3619
    ctx->pc = 0x33d648u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13849 << 16));
    // 0x33d64c: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x33d64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x33d650: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x33d650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x33d654: 0x36948435  ori         $s4, $s4, 0x8435
    ctx->pc = 0x33d654u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)33845);
    // 0x33d658: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33d658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33d65c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x33d65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x33d660: 0x3673636b  ori         $s3, $s3, 0x636B
    ctx->pc = 0x33d660u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)25451);
    // 0x33d664: 0x24170028  addiu       $s7, $zero, 0x28
    ctx->pc = 0x33d664u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_33d668:
    // 0x33d668: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x33d668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d66c: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x33d66cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x33d670: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x33d670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33d674: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D674u;
    {
        const bool branch_taken_0x33d674 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D674u;
        // 0x33d678: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d674) {
            ctx->pc = 0x33D68Cu;
            goto label_33d68c;
        }
    }
    ctx->pc = 0x33D67Cu;
    // 0x33d67c: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x33d67cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33d680: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33d680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33d684: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D684u;
    {
        const bool branch_taken_0x33d684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D684u;
        // 0x33d688: 0x46181082  mul.s       $f2, $f2, $f24 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d684) {
            ctx->pc = 0x33D6A8u;
            goto label_33d6a8;
        }
    }
    ctx->pc = 0x33D68Cu;
label_33d68c:
    // 0x33d68c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33d68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33d690: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33d690u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33d694: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33d694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33d698: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33d698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33d69c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33d69cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33d6a0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33d6a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33d6a4: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x33d6a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
label_33d6a8:
    // 0x33d6a8: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x33d6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x33d6ac: 0x2371018  mult        $v0, $s1, $s7
    ctx->pc = 0x33d6acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d6b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33d6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33d6b4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x33d6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x33d6b8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x33d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33d6bc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x33d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x33d6c0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33d6c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33d6c4: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x33d6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d6c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33d6cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33d6d0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x33d6d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x33d6d4: 0x46161241  sub.s       $f9, $f2, $f22
    ctx->pc = 0x33d6d4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
    // 0x33d6d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x33d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d6dc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x33d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33d6e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x33d6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33d6e4: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33d6e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33d6e8: 0x7fa601b0  sq          $a2, 0x1B0($sp)
    ctx->pc = 0x33d6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 6));
    // 0x33d6ec: 0x46011dc0  add.s       $f23, $f3, $f1
    ctx->pc = 0x33d6ecu;
    ctx->f[23] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x33d6f0: 0x4615bd01  sub.s       $f20, $f23, $f21
    ctx->pc = 0x33d6f0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
    // 0x33d6f4: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x33D6F4u;
    SET_GPR_U32(ctx, 31, 0x33D6FCu);
    ctx->pc = 0x33D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D6F4u;
    // 0x33d6f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x33D6F4u, 0x33D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D6FCu;
label_33d6fc:
    // 0x33d6fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33d6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d700: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x33D700u;
    SET_GPR_U32(ctx, 31, 0x33D708u);
    ctx->pc = 0x33D704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D700u;
    // 0x33d704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x33D700u, 0x33D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D708u;
label_33d708:
    // 0x33d708: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D708u;
    {
        const bool branch_taken_0x33d708 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D708u;
        // 0x33d70c: 0x7ba601b0  lq          $a2, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d708) {
            ctx->pc = 0x33D71Cu;
            goto label_33d71c;
        }
    }
    ctx->pc = 0x33D710u;
    // 0x33d710: 0x4614b503  div.s       $f20, $f22, $f20
    ctx->pc = 0x33d710u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
    // 0x33d714: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33D714u;
    {
        const bool branch_taken_0x33d714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D714u;
        // 0x33d718: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d714) {
            ctx->pc = 0x33D724u;
            goto label_33d724;
        }
    }
    ctx->pc = 0x33D71Cu;
label_33d71c:
    // 0x33d71c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x33d71cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33d720: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x33d720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33d724:
    // 0x33d724: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x33d724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33d728: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D728u;
    {
        const bool branch_taken_0x33d728 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D728u;
        // 0x33d72c: 0x2141818  mult        $v1, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d728) {
            ctx->pc = 0x33D740u;
            goto label_33d740;
        }
    }
    ctx->pc = 0x33D730u;
    // 0x33d730: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x33d730u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33d734: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33d734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33d738: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33D738u;
    {
        const bool branch_taken_0x33d738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D738u;
        // 0x33d73c: 0x46181082  mul.s       $f2, $f2, $f24 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d738) {
            ctx->pc = 0x33D760u;
            goto label_33d760;
        }
    }
    ctx->pc = 0x33D740u;
label_33d740:
    // 0x33d740: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33d740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33d744: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33d744u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33d748: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33d748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33d74c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33d74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33d750: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33d750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33d754: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33d754u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33d758: 0x2141818  mult        $v1, $s0, $s4
    ctx->pc = 0x33d758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33d75c: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x33d75cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
label_33d760:
    // 0x33d760: 0x2371018  mult        $v0, $s1, $s7
    ctx->pc = 0x33d760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d764: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x33d764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x33d768: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33d768u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33d76c: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x33d76cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33d770: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33d774: 0x46191241  sub.s       $f9, $f2, $f25
    ctx->pc = 0x33d774u;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[25]);
    // 0x33d778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d77c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x33d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d780: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x33d780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d784: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x33d784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x33d788: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33d788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33d78c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D78Cu;
    {
        const bool branch_taken_0x33d78c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D78Cu;
        // 0x33d790: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d78c) {
            ctx->pc = 0x33D7A4u;
            goto label_33d7a4;
        }
    }
    ctx->pc = 0x33D794u;
    // 0x33d794: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x33d794u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33d798: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33d798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33d79c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D79Cu;
    {
        const bool branch_taken_0x33d79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D79Cu;
        // 0x33d7a0: 0x2141818  mult        $v1, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d79c) {
            ctx->pc = 0x33D7C0u;
            goto label_33d7c0;
        }
    }
    ctx->pc = 0x33D7A4u;
label_33d7a4:
    // 0x33d7a4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33d7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33d7a8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33d7ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33d7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33d7b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33d7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33d7b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33d7b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33d7b8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33d7b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33d7bc: 0x2141818  mult        $v1, $s0, $s4
    ctx->pc = 0x33d7bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33d7c0:
    // 0x33d7c0: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x33d7c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x33d7c4: 0x2371018  mult        $v0, $s1, $s7
    ctx->pc = 0x33d7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d7c8: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x33d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x33d7cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33d7ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33d7d0: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x33d7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33d7d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33d7d8: 0x46191241  sub.s       $f9, $f2, $f25
    ctx->pc = 0x33d7d8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[25]);
    // 0x33d7dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d7e0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x33d7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d7e4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x33d7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d7e8: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x33d7e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x33d7ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33d7ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33d7f0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D7F0u;
    {
        const bool branch_taken_0x33d7f0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7F0u;
        // 0x33d7f4: 0xe7a10074  swc1        $f1, 0x74($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d7f0) {
            ctx->pc = 0x33D808u;
            goto label_33d808;
        }
    }
    ctx->pc = 0x33D7F8u;
    // 0x33d7f8: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x33d7f8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33d7fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33d7fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33d800: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D800u;
    {
        const bool branch_taken_0x33d800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D800u;
        // 0x33d804: 0x2141818  mult        $v1, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d800) {
            ctx->pc = 0x33D824u;
            goto label_33d824;
        }
    }
    ctx->pc = 0x33D808u;
label_33d808:
    // 0x33d808: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33d80c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33d810: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33d810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33d814: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33d814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33d818: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33d818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33d81c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33d81cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33d820: 0x2141818  mult        $v1, $s0, $s4
    ctx->pc = 0x33d820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33d824:
    // 0x33d824: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x33d824u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x33d828: 0x2371018  mult        $v0, $s1, $s7
    ctx->pc = 0x33d828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d82c: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x33d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x33d830: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33d830u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33d834: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x33d834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33d838: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33d838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33d83c: 0x46191241  sub.s       $f9, $f2, $f25
    ctx->pc = 0x33d83cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[25]);
    // 0x33d840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d844: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x33d844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d848: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x33d848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d84c: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x33d84cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x33d850: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33d850u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33d854: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D854u;
    {
        const bool branch_taken_0x33d854 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D854u;
        // 0x33d858: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d854) {
            ctx->pc = 0x33D86Cu;
            goto label_33d86c;
        }
    }
    ctx->pc = 0x33D85Cu;
    // 0x33d85c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33d85cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33d860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33d864: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D864u;
    {
        const bool branch_taken_0x33d864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D864u;
        // 0x33d868: 0x46180002  mul.s       $f0, $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d864) {
            ctx->pc = 0x33D888u;
            goto label_33d888;
        }
    }
    ctx->pc = 0x33D86Cu;
label_33d86c:
    // 0x33d86c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33d86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33d870: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33d870u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33d874: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33d874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33d878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d87c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33d87cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33d880: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33d880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33d884: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x33d884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_33d888:
    // 0x33d888: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x33d888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x33d88c: 0x2371018  mult        $v0, $s1, $s7
    ctx->pc = 0x33d88cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d890: 0xc7a80060  lwc1        $f8, 0x60($sp)
    ctx->pc = 0x33d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x33d894: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x33d894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33d898: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x33d898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x33d89c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33d89cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33d8a0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x33d8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d8a4: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x33d8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33d8a8: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x33d8a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d8ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d8b0: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x33d8b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x33d8b4: 0x46190241  sub.s       $f9, $f0, $f25
    ctx->pc = 0x33d8b4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[25]);
    // 0x33d8b8: 0xc4450024  lwc1        $f5, 0x24($v0)
    ctx->pc = 0x33d8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33d8bc: 0xc446001c  lwc1        $f6, 0x1C($v0)
    ctx->pc = 0x33d8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x33d8c0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x33d8c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x33d8c4: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x33d8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33d8c8: 0x46054942  mul.s       $f5, $f9, $f5
    ctx->pc = 0x33d8c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x33d8cc: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x33d8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33d8d0: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x33d8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d8d4: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x33d8d4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x33d8d8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x33d8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d8dc: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x33d8dcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x33d8e0: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x33d8e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x33d8e4: 0x8fa70184  lw          $a3, 0x184($sp)
    ctx->pc = 0x33d8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x33d8e8: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x33d8e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x33d8ec: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x33d8ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x33d8f0: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x33d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x33d8f4: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x33d8f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x33d8f8: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x33d8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x33d8fc: 0x8fa70188  lw          $a3, 0x188($sp)
    ctx->pc = 0x33d8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x33d900: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x33d900u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x33d904: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x33d904u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x33d908: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x33d908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33d90c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33d90cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33d910: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x33d910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x33d914: 0x46014201  sub.s       $f8, $f8, $f1
    ctx->pc = 0x33d914u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x33d918: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x33d918u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x33d91c: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x33d91cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x33d920: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x33d920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x33d924: 0xe7a600c4  swc1        $f6, 0xC4($sp)
    ctx->pc = 0x33d924u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x33d928: 0x8fa70190  lw          $a3, 0x190($sp)
    ctx->pc = 0x33d928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x33d92c: 0xe4a80000  swc1        $f8, 0x0($a1)
    ctx->pc = 0x33d92cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x33d930: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x33d930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x33d934: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x33d934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d938: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x33d938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d93c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33d93cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33d940: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d940u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d944: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x33d944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x33d948: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x33d948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d94c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x33d94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d950: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33d950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33d954: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d954u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d958: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x33d958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33d95c: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x33d95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d960: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x33d960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d964: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33d964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33d968: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d968u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d96c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x33d96cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x33d970: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x33d970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d974: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33d974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33d978: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x33d978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d97c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x33d97cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x33d980: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x33d980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d984: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x33d984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33d988: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x33d988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d98c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x33d98cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x33d990: 0x6ba20077  ldl         $v0, 0x77($sp)
    ctx->pc = 0x33d990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33d994: 0x6fa20070  ldr         $v0, 0x70($sp)
    ctx->pc = 0x33d994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33d998: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x33d998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d99c: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x33d99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d9a0: 0x6ba700c7  ldl         $a3, 0xC7($sp)
    ctx->pc = 0x33d9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x33d9a4: 0x6fa700c0  ldr         $a3, 0xC0($sp)
    ctx->pc = 0x33d9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x33d9a8: 0xb3a700b7  sdl         $a3, 0xB7($sp)
    ctx->pc = 0x33d9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d9ac: 0xb7a700b0  sdr         $a3, 0xB0($sp)
    ctx->pc = 0x33d9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d9b0: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x33d9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x33d9b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33d9b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33d9bc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x33d9bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33d9c0: 0x1440ff29  bnez        $v0, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x33D9C0u;
    {
        const bool branch_taken_0x33d9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D9C0u;
        // 0x33d9c4: 0x4600bd46  mov.s       $f21, $f23 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d9c0) {
            ctx->pc = 0x33D668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d668;
        }
    }
    ctx->pc = 0x33D9C8u;
label_33d9c8:
    // 0x33d9c8: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x33d9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d9cc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x33d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x33d9d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33d9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33d9d4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x33d9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x33d9d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33d9dc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x33d9dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x33d9e0: 0x4615bd01  sub.s       $f20, $f23, $f21
    ctx->pc = 0x33d9e0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
    // 0x33d9e4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33d9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33d9e8: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x33D9E8u;
    SET_GPR_U32(ctx, 31, 0x33D9F0u);
    ctx->pc = 0x33D9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D9E8u;
    // 0x33d9ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x33D9E8u, 0x33D9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D9F0u;
label_33d9f0:
    // 0x33d9f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33d9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d9f4: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x33D9F4u;
    SET_GPR_U32(ctx, 31, 0x33D9FCu);
    ctx->pc = 0x33D9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D9F4u;
    // 0x33d9f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x33D9F4u, 0x33D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D9FCu;
label_33d9fc:
    // 0x33d9fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D9FCu;
    {
        const bool branch_taken_0x33d9fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D9FCu;
        // 0x33da00: 0xc7a60060  lwc1        $f6, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d9fc) {
            ctx->pc = 0x33DA10u;
            goto label_33da10;
        }
    }
    ctx->pc = 0x33DA04u;
    // 0x33da04: 0x4614bd03  div.s       $f20, $f23, $f20
    ctx->pc = 0x33da04u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[23], ctx->f[20]); }
    // 0x33da08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33DA08u;
    {
        const bool branch_taken_0x33da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DA08u;
        // 0x33da0c: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33da08) {
            ctx->pc = 0x33DA18u;
            goto label_33da18;
        }
    }
    ctx->pc = 0x33DA10u;
label_33da10:
    // 0x33da10: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x33da10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33da14: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x33da14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_33da18:
    // 0x33da18: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x33da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33da1c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x33da1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33da20: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x33da20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x33da24: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x33da24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33da28: 0x8fa60184  lw          $a2, 0x184($sp)
    ctx->pc = 0x33da28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x33da2c: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x33da2cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x33da30: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x33da30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33da34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33da34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33da38: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x33da38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33da3c: 0xc7a500b0  lwc1        $f5, 0xB0($sp)
    ctx->pc = 0x33da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33da40: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x33da40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33da44: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x33da44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33da48: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x33da48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x33da4c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x33da4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x33da50: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x33da50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x33da54: 0x8fa60188  lw          $a2, 0x188($sp)
    ctx->pc = 0x33da54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x33da58: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x33da58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x33da5c: 0x8fa7018c  lw          $a3, 0x18C($sp)
    ctx->pc = 0x33da5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x33da60: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33da60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33da64: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x33da64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33da68: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x33da68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x33da6c: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x33da6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x33da70: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x33da70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x33da74: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x33da74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x33da78: 0x8fa70190  lw          $a3, 0x190($sp)
    ctx->pc = 0x33da78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x33da7c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x33da7cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x33da80: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x33da80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x33da84: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x33da84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x33da88: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x33da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x33da8c: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x33da8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x33da90: 0x461bd503  div.s       $f20, $f26, $f27
    ctx->pc = 0x33da90u;
    { if (ctx->f[27] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[26], ctx->f[27]); }
    // 0x33da94: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x33da94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x33da98: 0xe4660000  swc1        $f6, 0x0($v1)
    ctx->pc = 0x33da98u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33da9c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x33da9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33daa0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x33daa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33daa4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33daa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33daa8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33daa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33daac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x33daacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x33dab0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x33dab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dab4: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x33dab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dab8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33dab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33dabc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33dabcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33dac0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x33dac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x33dac4: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x33dac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dac8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x33dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dacc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33daccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33dad0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33dad0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33dad4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x33dad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x33dad8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x33dad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dadc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x33dadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x33dae0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x33dae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dae4: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x33dae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x33dae8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x33dae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33daec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33daecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33daf0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x33daf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33daf4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x33daf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x33daf8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x33daf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dafc: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x33dafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33db00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x33db00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x33db04: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33db04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33db08: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x33db08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x33db0c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x33db0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33db10: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x33db10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33db14: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x33db14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33db18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33db18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33db1c: 0xc6a3000c  lwc1        $f3, 0xC($s5)
    ctx->pc = 0x33db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33db20: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x33db20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x33db24: 0xe6a10014  swc1        $f1, 0x14($s5)
    ctx->pc = 0x33db24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x33db28: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x33db28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33db2c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x33db2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x33db30: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33db30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33db34: 0xe6a00018  swc1        $f0, 0x18($s5)
    ctx->pc = 0x33db34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x33db38: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x33db38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33db3c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x33db3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x33db40: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x33db40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x33db44: 0xe6a1001c  swc1        $f1, 0x1C($s5)
    ctx->pc = 0x33db44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x33db48: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x33db48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x33db4c: 0x24e2c210  addiu       $v0, $a3, -0x3DF0
    ctx->pc = 0x33db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951440));
label_33db50:
    // 0x33db50: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x33db50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x33db54: 0x4600130  bltz        $v1, . + 4 + (0x130 << 2)
    ctx->pc = 0x33DB54u;
    {
        const bool branch_taken_0x33db54 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DB54u;
        // 0x33db58: 0x3c31821  addu        $v1, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33db54) {
            ctx->pc = 0x33E018u;
            goto label_33e018;
        }
    }
    ctx->pc = 0x33DB5Cu;
    // 0x33db5c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33db60: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x33db60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
    // 0x33db64: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x33db64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x33db68: 0x3c2a821  addu        $s5, $fp, $v0
    ctx->pc = 0x33db68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x33db6c: 0x8fa4017c  lw          $a0, 0x17C($sp)
    ctx->pc = 0x33db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x33db70: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x33db70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x33db74: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x33db74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x33db78: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x33db78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x33db7c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x33db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x33db80: 0xafa50194  sw          $a1, 0x194($sp)
    ctx->pc = 0x33db80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 5));
    // 0x33db84: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x33db84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x33db88: 0x600013  mtlo        $v1
    ctx->pc = 0x33db88u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x33db8c: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x33db8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33db90: 0xafa70198  sw          $a3, 0x198($sp)
    ctx->pc = 0x33db90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 7));
    // 0x33db94: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x33db94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33db98: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x33db98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33db9c: 0x72038000  madd        $s0, $s0, $v1
    ctx->pc = 0x33db9cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33dba0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33dba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33dba4: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x33dba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x33dba8: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x33dba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dbac: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x33dbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dbb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33dbb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33dbb4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33DBB4u;
    {
        const bool branch_taken_0x33dbb4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DBB4u;
        // 0x33dbb8: 0xe7a00124  swc1        $f0, 0x124($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dbb4) {
            ctx->pc = 0x33DBCCu;
            goto label_33dbcc;
        }
    }
    ctx->pc = 0x33DBBCu;
    // 0x33dbbc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x33dbbcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33dbc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33dbc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33dbc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33DBC4u;
    {
        const bool branch_taken_0x33dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DBC4u;
        // 0x33dbc8: 0x461c0002  mul.s       $f0, $f0, $f28 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dbc4) {
            ctx->pc = 0x33DBE8u;
            goto label_33dbe8;
        }
    }
    ctx->pc = 0x33DBCCu;
label_33dbcc:
    // 0x33dbcc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33dbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33dbd0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33dbd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33dbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33dbd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33dbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33dbdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33dbdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33dbe0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33dbe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33dbe4: 0x461c0002  mul.s       $f0, $f0, $f28
    ctx->pc = 0x33dbe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
label_33dbe8:
    // 0x33dbe8: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x33dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x33dbec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33dbf0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33dbf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33dbf4: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x33dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x33dbf8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x33dbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dbfc: 0x600013  mtlo        $v1
    ctx->pc = 0x33dbfcu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x33dc00: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x33dc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33dc04: 0x461a0241  sub.s       $f9, $f0, $f26
    ctx->pc = 0x33dc04u;
    ctx->f[9] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x33dc08: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x33dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33dc0c: 0x72038000  madd        $s0, $s0, $v1
    ctx->pc = 0x33dc0cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33dc10: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33dc10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33dc14: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33DC14u;
    {
        const bool branch_taken_0x33dc14 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC14u;
        // 0x33dc18: 0x46011540  add.s       $f21, $f2, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc14) {
            ctx->pc = 0x33DC2Cu;
            goto label_33dc2c;
        }
    }
    ctx->pc = 0x33DC1Cu;
    // 0x33dc1c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x33dc1cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33dc20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33dc20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33dc24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33DC24u;
    {
        const bool branch_taken_0x33dc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC24u;
        // 0x33dc28: 0x461c0842  mul.s       $f1, $f1, $f28 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc24) {
            ctx->pc = 0x33DC48u;
            goto label_33dc48;
        }
    }
    ctx->pc = 0x33DC2Cu;
label_33dc2c:
    // 0x33dc2c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33dc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33dc30: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33dc34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33dc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33dc38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33dc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33dc3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33dc3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33dc40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33dc40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33dc44: 0x461c0842  mul.s       $f1, $f1, $f28
    ctx->pc = 0x33dc44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[28]);
label_33dc48:
    // 0x33dc48: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x33dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x33dc4c: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x33dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x33dc50: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33dc54: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33dc54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33dc58: 0x600013  mtlo        $v1
    ctx->pc = 0x33dc58u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x33dc5c: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x33dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33dc60: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x33dc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dc64: 0x461a0a41  sub.s       $f9, $f1, $f26
    ctx->pc = 0x33dc64u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[26]);
    // 0x33dc68: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x33dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x33dc6c: 0x72038000  madd        $s0, $s0, $v1
    ctx->pc = 0x33dc6cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33dc70: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x33dc70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x33dc74: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x33dc74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x33dc78: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33DC78u;
    {
        const bool branch_taken_0x33dc78 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC78u;
        // 0x33dc7c: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc78) {
            ctx->pc = 0x33DC90u;
            goto label_33dc90;
        }
    }
    ctx->pc = 0x33DC80u;
    // 0x33dc80: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x33dc80u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33dc84: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33dc84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33dc88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33DC88u;
    {
        const bool branch_taken_0x33dc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DC88u;
        // 0x33dc8c: 0x461c1082  mul.s       $f2, $f2, $f28 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dc88) {
            ctx->pc = 0x33DCACu;
            goto label_33dcac;
        }
    }
    ctx->pc = 0x33DC90u;
label_33dc90:
    // 0x33dc90: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33dc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33dc94: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33dc98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33dc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33dc9c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33dc9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33dca0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33dca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33dca4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33dca4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33dca8: 0x461c1082  mul.s       $f2, $f2, $f28
    ctx->pc = 0x33dca8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[28]);
label_33dcac:
    // 0x33dcac: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x33dcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x33dcb0: 0x4600aec6  mov.s       $f27, $f21
    ctx->pc = 0x33dcb0u;
    ctx->f[27] = FPU_MOV_S(ctx->f[21]);
    // 0x33dcb4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x33dcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33dcb8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33dcb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33dcbc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x33dcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dcc0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x33dcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dcc4: 0x461a1241  sub.s       $f9, $f2, $f26
    ctx->pc = 0x33dcc4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[26]);
    // 0x33dcc8: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33dcc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33dccc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33dcccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33dcd0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x33dcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x33dcd4: 0x6ba50107  ldl         $a1, 0x107($sp)
    ctx->pc = 0x33dcd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x33dcd8: 0x6fa50100  ldr         $a1, 0x100($sp)
    ctx->pc = 0x33dcd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x33dcdc: 0xb3a500f7  sdl         $a1, 0xF7($sp)
    ctx->pc = 0x33dcdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33dce0: 0xb7a500f0  sdr         $a1, 0xF0($sp)
    ctx->pc = 0x33dce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33dce4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33dce8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33dcec: 0x18400090  blez        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x33DCECu;
    {
        const bool branch_taken_0x33dcec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DCECu;
        // 0x33dcf0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dcec) {
            ctx->pc = 0x33DF30u;
            goto label_33df30;
        }
    }
    ctx->pc = 0x33DCF4u;
    // 0x33dcf4: 0x3c140bb3  lui         $s4, 0xBB3
    ctx->pc = 0x33dcf4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)2995 << 16));
    // 0x33dcf8: 0x3c133619  lui         $s3, 0x3619
    ctx->pc = 0x33dcf8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13849 << 16));
    // 0x33dcfc: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x33dcfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x33dd00: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x33dd00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x33dd04: 0x36948435  ori         $s4, $s4, 0x8435
    ctx->pc = 0x33dd04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)33845);
    // 0x33dd08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33dd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33dd0c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x33dd0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x33dd10: 0x3673636b  ori         $s3, $s3, 0x636B
    ctx->pc = 0x33dd10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)25451);
    // 0x33dd14: 0x24170018  addiu       $s7, $zero, 0x18
    ctx->pc = 0x33dd14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_33dd18:
    // 0x33dd18: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x33dd18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33dd1c: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x33dd1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x33dd20: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x33dd20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33dd24: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33DD24u;
    {
        const bool branch_taken_0x33dd24 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD24u;
        // 0x33dd28: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dd24) {
            ctx->pc = 0x33DD3Cu;
            goto label_33dd3c;
        }
    }
    ctx->pc = 0x33DD2Cu;
    // 0x33dd2c: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x33dd2cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33dd30: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33dd30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33dd34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33DD34u;
    {
        const bool branch_taken_0x33dd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DD34u;
        // 0x33dd38: 0x46181082  mul.s       $f2, $f2, $f24 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dd34) {
            ctx->pc = 0x33DD58u;
            goto label_33dd58;
        }
    }
    ctx->pc = 0x33DD3Cu;
label_33dd3c:
    // 0x33dd3c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33dd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33dd40: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33dd44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33dd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33dd48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33dd48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33dd4c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33dd4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33dd50: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33dd50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33dd54: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x33dd54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
label_33dd58:
    // 0x33dd58: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x33dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x33dd5c: 0x2371018  mult        $v0, $s1, $s7
    ctx->pc = 0x33dd5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33dd60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33dd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33dd64: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x33dd64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x33dd68: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x33dd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33dd6c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x33dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x33dd70: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33dd70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33dd74: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x33dd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dd78: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x33dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33dd7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33dd80: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x33dd80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x33dd84: 0x46161241  sub.s       $f9, $f2, $f22
    ctx->pc = 0x33dd84u;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
    // 0x33dd88: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x33dd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dd8c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x33dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33dd90: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x33dd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33dd94: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x33dd94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x33dd98: 0x7fa601b0  sq          $a2, 0x1B0($sp)
    ctx->pc = 0x33dd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 6));
    // 0x33dd9c: 0x46011dc0  add.s       $f23, $f3, $f1
    ctx->pc = 0x33dd9cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x33dda0: 0x4615bd01  sub.s       $f20, $f23, $f21
    ctx->pc = 0x33dda0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
    // 0x33dda4: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x33DDA4u;
    SET_GPR_U32(ctx, 31, 0x33DDACu);
    ctx->pc = 0x33DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DDA4u;
    // 0x33dda8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x33DDA4u, 0x33DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DDACu;
label_33ddac:
    // 0x33ddac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33ddacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ddb0: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x33DDB0u;
    SET_GPR_U32(ctx, 31, 0x33DDB8u);
    ctx->pc = 0x33DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DDB0u;
    // 0x33ddb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x33DDB0u, 0x33DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DDB8u;
label_33ddb8:
    // 0x33ddb8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33DDB8u;
    {
        const bool branch_taken_0x33ddb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDB8u;
        // 0x33ddbc: 0x7ba601b0  lq          $a2, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ddb8) {
            ctx->pc = 0x33DDCCu;
            goto label_33ddcc;
        }
    }
    ctx->pc = 0x33DDC0u;
    // 0x33ddc0: 0x4614b503  div.s       $f20, $f22, $f20
    ctx->pc = 0x33ddc0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
    // 0x33ddc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33DDC4u;
    {
        const bool branch_taken_0x33ddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDC4u;
        // 0x33ddc8: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ddc4) {
            ctx->pc = 0x33DDD4u;
            goto label_33ddd4;
        }
    }
    ctx->pc = 0x33DDCCu;
label_33ddcc:
    // 0x33ddcc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x33ddccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33ddd0: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x33ddd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_33ddd4:
    // 0x33ddd4: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x33ddd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x33ddd8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33DDD8u;
    {
        const bool branch_taken_0x33ddd8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDD8u;
        // 0x33dddc: 0x2141818  mult        $v1, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ddd8) {
            ctx->pc = 0x33DDF0u;
            goto label_33ddf0;
        }
    }
    ctx->pc = 0x33DDE0u;
    // 0x33dde0: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x33dde0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33dde4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33dde4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33dde8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33DDE8u;
    {
        const bool branch_taken_0x33dde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDE8u;
        // 0x33ddec: 0x46181082  mul.s       $f2, $f2, $f24 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dde8) {
            ctx->pc = 0x33DE10u;
            goto label_33de10;
        }
    }
    ctx->pc = 0x33DDF0u;
label_33ddf0:
    // 0x33ddf0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33ddf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33ddf4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33ddf8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33ddf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ddfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33ddfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33de00: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33de00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33de04: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33de04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33de08: 0x2141818  mult        $v1, $s0, $s4
    ctx->pc = 0x33de08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33de0c: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x33de0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
label_33de10:
    // 0x33de10: 0x2371018  mult        $v0, $s1, $s7
    ctx->pc = 0x33de10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33de14: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x33de14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x33de18: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33de18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x33de1c: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x33de1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x33de20: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33de20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33de24: 0x46191241  sub.s       $f9, $f2, $f25
    ctx->pc = 0x33de24u;
    ctx->f[9] = FPU_SUB_S(ctx->f[2], ctx->f[25]);
    // 0x33de28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33de2c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x33de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33de30: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x33de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33de34: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x33de34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x33de38: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33de38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33de3c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33DE3Cu;
    {
        const bool branch_taken_0x33de3c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE3Cu;
        // 0x33de40: 0xe7a10110  swc1        $f1, 0x110($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33de3c) {
            ctx->pc = 0x33DE54u;
            goto label_33de54;
        }
    }
    ctx->pc = 0x33DE44u;
    // 0x33de44: 0x44901800  mtc1        $s0, $f3
    ctx->pc = 0x33de44u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33de48: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x33de48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x33de4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33DE4Cu;
    {
        const bool branch_taken_0x33de4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE4Cu;
        // 0x33de50: 0x461818c2  mul.s       $f3, $f3, $f24 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33de4c) {
            ctx->pc = 0x33DE70u;
            goto label_33de70;
        }
    }
    ctx->pc = 0x33DE54u;
label_33de54:
    // 0x33de54: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x33de54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x33de58: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x33de58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x33de5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33de5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33de60: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x33de60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33de64: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x33de64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x33de68: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x33de68u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x33de6c: 0x461818c2  mul.s       $f3, $f3, $f24
    ctx->pc = 0x33de6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
label_33de70:
    // 0x33de70: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x33de70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x33de74: 0x2371018  mult        $v0, $s1, $s7
    ctx->pc = 0x33de74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33de78: 0xc7a50100  lwc1        $f5, 0x100($sp)
    ctx->pc = 0x33de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33de7c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x33de7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33de80: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x33de80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x33de84: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x33de84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x33de88: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x33de88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33de8c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x33de8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33de90: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x33de90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33de94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33de98: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x33de98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x33de9c: 0x46191a41  sub.s       $f9, $f3, $f25
    ctx->pc = 0x33de9cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[3], ctx->f[25]);
    // 0x33dea0: 0xc4440014  lwc1        $f4, 0x14($v0)
    ctx->pc = 0x33dea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33dea4: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x33dea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33dea8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33dea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33deac: 0x8fa70194  lw          $a3, 0x194($sp)
    ctx->pc = 0x33deacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x33deb0: 0x46044902  mul.s       $f4, $f9, $f4
    ctx->pc = 0x33deb0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x33deb4: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x33deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x33deb8: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x33deb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x33debc: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x33debcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33dec0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x33dec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x33dec4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x33dec4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x33dec8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33decc: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x33deccu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x33ded0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x33ded0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x33ded4: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x33ded4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x33ded8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x33ded8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x33dedc: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x33dedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x33dee0: 0xe4a50000  swc1        $f5, 0x0($a1)
    ctx->pc = 0x33dee0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x33dee4: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x33dee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dee8: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x33dee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33deec: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33deecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33def0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33def0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33def4: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x33def4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x33def8: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x33def8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33defc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x33defcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33df00: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x33df00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33df04: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x33df04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x33df08: 0x6ba30117  ldl         $v1, 0x117($sp)
    ctx->pc = 0x33df08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x33df0c: 0x6fa30110  ldr         $v1, 0x110($sp)
    ctx->pc = 0x33df0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x33df10: 0xb3a30107  sdl         $v1, 0x107($sp)
    ctx->pc = 0x33df10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33df14: 0xb7a30100  sdr         $v1, 0x100($sp)
    ctx->pc = 0x33df14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33df18: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x33df18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x33df1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33df20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33df20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33df24: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x33df24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33df28: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x33DF28u;
    {
        const bool branch_taken_0x33df28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF28u;
        // 0x33df2c: 0x4600bd46  mov.s       $f21, $f23 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df28) {
            ctx->pc = 0x33DD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33dd18;
        }
    }
    ctx->pc = 0x33DF30u;
label_33df30:
    // 0x33df30: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x33df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33df34: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x33df34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x33df38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33df38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33df3c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x33df3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x33df40: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x33df40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33df44: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x33df44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x33df48: 0x4615bd01  sub.s       $f20, $f23, $f21
    ctx->pc = 0x33df48u;
    ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
    // 0x33df4c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33df4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33df50: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x33DF50u;
    SET_GPR_U32(ctx, 31, 0x33DF58u);
    ctx->pc = 0x33DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DF50u;
    // 0x33df54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x33DF50u, 0x33DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DF58u;
label_33df58:
    // 0x33df58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33df58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33df5c: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x33DF5Cu;
    SET_GPR_U32(ctx, 31, 0x33DF64u);
    ctx->pc = 0x33DF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DF5Cu;
    // 0x33df60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x33DF5Cu, 0x33DF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DF64u;
label_33df64:
    // 0x33df64: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33DF64u;
    {
        const bool branch_taken_0x33df64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF64u;
        // 0x33df68: 0xc7a30100  lwc1        $f3, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df64) {
            ctx->pc = 0x33DF78u;
            goto label_33df78;
        }
    }
    ctx->pc = 0x33DF6Cu;
    // 0x33df6c: 0x4614bd03  div.s       $f20, $f23, $f20
    ctx->pc = 0x33df6cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[23], ctx->f[20]); }
    // 0x33df70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33DF70u;
    {
        const bool branch_taken_0x33df70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF70u;
        // 0x33df74: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df70) {
            ctx->pc = 0x33DF80u;
            goto label_33df80;
        }
    }
    ctx->pc = 0x33DF78u;
label_33df78:
    // 0x33df78: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x33df78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33df7c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x33df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_33df80:
    // 0x33df80: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x33df80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33df84: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x33df84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33df88: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x33df88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x33df8c: 0xc7a20124  lwc1        $f2, 0x124($sp)
    ctx->pc = 0x33df8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33df90: 0x8fa6017c  lw          $a2, 0x17C($sp)
    ctx->pc = 0x33df90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x33df94: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x33df94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x33df98: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x33df98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x33df9c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x33df9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x33dfa0: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x33dfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x33dfa4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x33dfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x33dfa8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x33dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33dfac: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x33dfacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x33dfb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33dfb4: 0x46150802  mul.s       $f0, $f1, $f21
    ctx->pc = 0x33dfb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x33dfb8: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x33dfb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x33dfbc: 0x461bd503  div.s       $f20, $f26, $f27
    ctx->pc = 0x33dfbcu;
    { if (ctx->f[27] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[26], ctx->f[27]); }
    // 0x33dfc0: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x33dfc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x33dfc4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x33dfc4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x33dfc8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x33dfc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33dfcc: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x33dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dfd0: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x33dfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dfd4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33dfd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33dfd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33dfd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33dfdc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x33dfdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x33dfe0: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x33dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dfe4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33dfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x33dfe8: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x33dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dfec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x33dfecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x33dff0: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x33dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33dff4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x33dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33dff8: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x33dff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33dffc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x33dffcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x33e000: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x33e000u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x33e004: 0xe6a20008  swc1        $f2, 0x8($s5)
    ctx->pc = 0x33e004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x33e008: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x33e008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33e00c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x33e00cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x33e010: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x33e010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33e014: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x33e014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_33e018:
    // 0x33e018: 0x8fa701a4  lw          $a3, 0x1A4($sp)
    ctx->pc = 0x33e018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x33e01c: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x33e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x33e020: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x33e020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33e024: 0x1440fb04  bnez        $v0, . + 4 + (-0x4FC << 2)
    ctx->pc = 0x33E024u;
    {
        const bool branch_taken_0x33e024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E024u;
        // 0x33e028: 0x8fbe01a8  lw          $fp, 0x1A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e024) {
            ctx->pc = 0x33CC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33cc38;
        }
    }
    ctx->pc = 0x33E02Cu;
label_33e02c:
    // 0x33e02c: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x33e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x33e030: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x33e030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_33e034:
    // 0x33e034: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x33e034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_33e038:
    // 0x33e038: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x33e038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x33e03c: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x33e03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x33e040: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x33e040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x33e044: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x33e044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x33e048: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x33e048u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x33e04c: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x33e04cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x33e050: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x33e050u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x33e054: 0x7bb701e0  lq          $s7, 0x1E0($sp)
    ctx->pc = 0x33e054u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x33e058: 0x7bbe01d0  lq          $fp, 0x1D0($sp)
    ctx->pc = 0x33e058u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x33e05c: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x33e05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x33e060: 0xc7bd02a8  lwc1        $f29, 0x2A8($sp)
    ctx->pc = 0x33e060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x33e064: 0xc7bc02a0  lwc1        $f28, 0x2A0($sp)
    ctx->pc = 0x33e064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x33e068: 0xc7bb0298  lwc1        $f27, 0x298($sp)
    ctx->pc = 0x33e068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x33e06c: 0xc7ba0290  lwc1        $f26, 0x290($sp)
    ctx->pc = 0x33e06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x33e070: 0xc7b90288  lwc1        $f25, 0x288($sp)
    ctx->pc = 0x33e070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x33e074: 0xc7b80280  lwc1        $f24, 0x280($sp)
    ctx->pc = 0x33e074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x33e078: 0xc7b70278  lwc1        $f23, 0x278($sp)
    ctx->pc = 0x33e078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x33e07c: 0xc7b60270  lwc1        $f22, 0x270($sp)
    ctx->pc = 0x33e07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x33e080: 0xc7b50268  lwc1        $f21, 0x268($sp)
    ctx->pc = 0x33e080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33e084: 0xc7b40260  lwc1        $f20, 0x260($sp)
    ctx->pc = 0x33e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33e088: 0x3e00008  jr          $ra
    ctx->pc = 0x33E088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E088u;
        // 0x33e08c: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E090u;
}
