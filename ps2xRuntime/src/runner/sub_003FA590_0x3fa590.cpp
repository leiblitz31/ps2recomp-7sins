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

// Function: sub_003FA590
// Address: 0x3fa590 - 0x3fa800
void sub_003FA590_0x3fa590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FA590_0x3fa590");
#endif

    switch (ctx->pc) {
        case 0x3fa5e8u: goto label_3fa5e8;
        case 0x3fa5f4u: goto label_3fa5f4;
        case 0x3fa608u: goto label_3fa608;
        case 0x3fa618u: goto label_3fa618;
        case 0x3fa620u: goto label_3fa620;
        case 0x3fa644u: goto label_3fa644;
        case 0x3fa658u: goto label_3fa658;
        case 0x3fa668u: goto label_3fa668;
        case 0x3fa6c8u: goto label_3fa6c8;
        case 0x3fa6d8u: goto label_3fa6d8;
        case 0x3fa6e8u: goto label_3fa6e8;
        case 0x3fa6f8u: goto label_3fa6f8;
        case 0x3fa708u: goto label_3fa708;
        case 0x3fa718u: goto label_3fa718;
        case 0x3fa728u: goto label_3fa728;
        case 0x3fa738u: goto label_3fa738;
        case 0x3fa754u: goto label_3fa754;
        case 0x3fa760u: goto label_3fa760;
        case 0x3fa76cu: goto label_3fa76c;
        case 0x3fa778u: goto label_3fa778;
        case 0x3fa784u: goto label_3fa784;
        case 0x3fa790u: goto label_3fa790;
        case 0x3fa79cu: goto label_3fa79c;
        case 0x3fa7a8u: goto label_3fa7a8;
        case 0x3fa7d0u: goto label_3fa7d0;
        default: break;
    }

    ctx->pc = 0x3fa590u;

    // 0x3fa590: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3fa590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3fa594: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3fa594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3fa598: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3fa598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3fa59c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3fa59cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa5a0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3fa5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3fa5a4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3fa5a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa5a8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3fa5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3fa5ac: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3fa5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3fa5b0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3fa5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3fa5b4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3fa5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3fa5b8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3fa5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3fa5bc: 0x12e00084  beqz        $s7, . + 4 + (0x84 << 2)
    ctx->pc = 0x3FA5BCu;
    {
        const bool branch_taken_0x3fa5bc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA5BCu;
        // 0x3fa5c0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa5bc) {
            ctx->pc = 0x3FA7D0u;
            goto label_3fa7d0;
        }
    }
    ctx->pc = 0x3FA5C4u;
    // 0x3fa5c4: 0x12c00082  beqz        $s6, . + 4 + (0x82 << 2)
    ctx->pc = 0x3FA5C4u;
    {
        const bool branch_taken_0x3fa5c4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA5C4u;
        // 0x3fa5c8: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa5c4) {
            ctx->pc = 0x3FA7D0u;
            goto label_3fa7d0;
        }
    }
    ctx->pc = 0x3FA5CCu;
    // 0x3fa5cc: 0xdec20010  ld          $v0, 0x10($s6)
    ctx->pc = 0x3fa5ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x3fa5d0: 0xc78c8358  lwc1        $f12, -0x7CA8($gp)
    ctx->pc = 0x3fa5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fa5d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3fa5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fa5d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fa5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fa5dc: 0xa2c6003c  sb          $a2, 0x3C($s6)
    ctx->pc = 0x3fa5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 60), (uint8_t)GPR_U32(ctx, 6));
    // 0x3fa5e0: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FA5E0u;
    SET_GPR_U32(ctx, 31, 0x3FA5E8u);
    ctx->pc = 0x3FA5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA5E0u;
    // 0x3fa5e4: 0xfec20010  sd          $v0, 0x10($s6) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FA5E0u, 0x3FA5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA5E8u;
label_3fa5e8:
    // 0x3fa5e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fa5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa5ec: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA5ECu;
    SET_GPR_U32(ctx, 31, 0x3FA5F4u);
    ctx->pc = 0x3FA5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA5ECu;
    // 0x3fa5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA5ECu, 0x3FA5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA5F4u;
label_3fa5f4:
    // 0x3fa5f4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3fa5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3fa5f8: 0xdc25f8e8  ld          $a1, -0x718($at)
    ctx->pc = 0x3fa5f8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FF8E8u));
    // 0x3fa5fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa600: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FA600u;
    SET_GPR_U32(ctx, 31, 0x3FA608u);
    ctx->pc = 0x3FA604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA600u;
    // 0x3fa604: 0xe6c00038  swc1        $f0, 0x38($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FA600u, 0x3FA608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA608u;
label_3fa608:
    // 0x3fa608: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3fa608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3fa60c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3fa60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3fa610: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x3FA610u;
    SET_GPR_U32(ctx, 31, 0x3FA618u);
    ctx->pc = 0x3FA614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA610u;
    // 0x3fa614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x3FA610u, 0x3FA618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA618u;
label_3fa618:
    // 0x3fa618: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA618u;
    SET_GPR_U32(ctx, 31, 0x3FA620u);
    ctx->pc = 0x3FA61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA618u;
    // 0x3fa61c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA618u, 0x3FA620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA620u;
label_3fa620:
    // 0x3fa620: 0xdec20010  ld          $v0, 0x10($s6)
    ctx->pc = 0x3fa620u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x3fa624: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3fa624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3fa628: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3fa628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3fa62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fa62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3fa630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa634: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x3fa634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x3fa638: 0xfec30148  sd          $v1, 0x148($s6)
    ctx->pc = 0x3fa638u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 328), GPR_U64(ctx, 3));
    // 0x3fa63c: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x3FA63Cu;
    SET_GPR_U32(ctx, 31, 0x3FA644u);
    ctx->pc = 0x3FA640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA63Cu;
    // 0x3fa640: 0xfec20010  sd          $v0, 0x10($s6) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x3FA63Cu, 0x3FA644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA644u;
label_3fa644:
    // 0x3fa644: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FA644u;
    {
        const bool branch_taken_0x3fa644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA644u;
        // 0x3fa648: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa644) {
            ctx->pc = 0x3FA658u;
            goto label_3fa658;
        }
    }
    ctx->pc = 0x3FA64Cu;
    // 0x3fa64c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fa64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa650: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FA650u;
    SET_GPR_U32(ctx, 31, 0x3FA658u);
    ctx->pc = 0x3FA654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA650u;
    // 0x3fa654: 0x24a5f738  addiu       $a1, $a1, -0x8C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FA650u, 0x3FA658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA658u;
label_3fa658:
    // 0x3fa658: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3fa658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3fa65c: 0xdc24f8f0  ld          $a0, -0x710($at)
    ctx->pc = 0x3fa65cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5FF8F0u));
    // 0x3fa660: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA660u;
    SET_GPR_U32(ctx, 31, 0x3FA668u);
    ctx->pc = 0x3FA664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA660u;
    // 0x3fa664: 0x3410b18f  ori         $s0, $zero, 0xB18F (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45455);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA660u, 0x3FA668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA668u;
label_3fa668:
    // 0x3fa668: 0xdec20010  ld          $v0, 0x10($s6)
    ctx->pc = 0x3fa668u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x3fa66c: 0x240b7a26  addiu       $t3, $zero, 0x7A26
    ctx->pc = 0x3fa66cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 31270));
    // 0x3fa670: 0x340a8084  ori         $t2, $zero, 0x8084
    ctx->pc = 0x3fa670u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32900);
    // 0x3fa674: 0x340580e8  ori         $a1, $zero, 0x80E8
    ctx->pc = 0x3fa674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33000);
    // 0x3fa678: 0x24067530  addiu       $a2, $zero, 0x7530
    ctx->pc = 0x3fa678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x3fa67c: 0x3407ea60  ori         $a3, $zero, 0xEA60
    ctx->pc = 0x3fa67cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x3fa680: 0x24083a98  addiu       $t0, $zero, 0x3A98
    ctx->pc = 0x3fa680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15000));
    // 0x3fa684: 0x24091770  addiu       $t1, $zero, 0x1770
    ctx->pc = 0x3fa684u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x3fa688: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x3fa688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x3fa68c: 0x3403fa00  ori         $v1, $zero, 0xFA00
    ctx->pc = 0x3fa68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64000);
    // 0x3fa690: 0xfed00148  sd          $s0, 0x148($s6)
    ctx->pc = 0x3fa690u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 328), GPR_U64(ctx, 16));
    // 0x3fa694: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3fa694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3fa698: 0xdc24f8f8  ld          $a0, -0x708($at)
    ctx->pc = 0x3fa698u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5FF8F8u));
    // 0x3fa69c: 0xfecb0150  sd          $t3, 0x150($s6)
    ctx->pc = 0x3fa69cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 336), GPR_U64(ctx, 11));
    // 0x3fa6a0: 0xfeca0158  sd          $t2, 0x158($s6)
    ctx->pc = 0x3fa6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 344), GPR_U64(ctx, 10));
    // 0x3fa6a4: 0xfec50168  sd          $a1, 0x168($s6)
    ctx->pc = 0x3fa6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 360), GPR_U64(ctx, 5));
    // 0x3fa6a8: 0xfec60170  sd          $a2, 0x170($s6)
    ctx->pc = 0x3fa6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 368), GPR_U64(ctx, 6));
    // 0x3fa6ac: 0xfec70178  sd          $a3, 0x178($s6)
    ctx->pc = 0x3fa6acu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 376), GPR_U64(ctx, 7));
    // 0x3fa6b0: 0xfec80180  sd          $t0, 0x180($s6)
    ctx->pc = 0x3fa6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 384), GPR_U64(ctx, 8));
    // 0x3fa6b4: 0xfec90188  sd          $t1, 0x188($s6)
    ctx->pc = 0x3fa6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 392), GPR_U64(ctx, 9));
    // 0x3fa6b8: 0xfec20010  sd          $v0, 0x10($s6)
    ctx->pc = 0x3fa6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 2));
    // 0x3fa6bc: 0xfec30160  sd          $v1, 0x160($s6)
    ctx->pc = 0x3fa6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 352), GPR_U64(ctx, 3));
    // 0x3fa6c0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA6C0u;
    SET_GPR_U32(ctx, 31, 0x3FA6C8u);
    ctx->pc = 0x3FA6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA6C0u;
    // 0x3fa6c4: 0xe6c00038  swc1        $f0, 0x38($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA6C0u, 0x3FA6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA6C8u;
label_3fa6c8:
    // 0x3fa6c8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3fa6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3fa6cc: 0xdc24f900  ld          $a0, -0x700($at)
    ctx->pc = 0x3fa6ccu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5FF900u));
    // 0x3fa6d0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA6D0u;
    SET_GPR_U32(ctx, 31, 0x3FA6D8u);
    ctx->pc = 0x3FA6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA6D0u;
    // 0x3fa6d4: 0xe6c000a8  swc1        $f0, 0xA8($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA6D0u, 0x3FA6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA6D8u;
label_3fa6d8:
    // 0x3fa6d8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3fa6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3fa6dc: 0xdc24f908  ld          $a0, -0x6F8($at)
    ctx->pc = 0x3fa6dcu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5FF908u));
    // 0x3fa6e0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA6E0u;
    SET_GPR_U32(ctx, 31, 0x3FA6E8u);
    ctx->pc = 0x3FA6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA6E0u;
    // 0x3fa6e4: 0xe6c000ac  swc1        $f0, 0xAC($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 172), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA6E0u, 0x3FA6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA6E8u;
label_3fa6e8:
    // 0x3fa6e8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3fa6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3fa6ec: 0xdc24f910  ld          $a0, -0x6F0($at)
    ctx->pc = 0x3fa6ecu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5FF910u));
    // 0x3fa6f0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA6F0u;
    SET_GPR_U32(ctx, 31, 0x3FA6F8u);
    ctx->pc = 0x3FA6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA6F0u;
    // 0x3fa6f4: 0xe6c000b0  swc1        $f0, 0xB0($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA6F0u, 0x3FA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA6F8u;
label_3fa6f8:
    // 0x3fa6f8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3fa6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3fa6fc: 0xdc24f918  ld          $a0, -0x6E8($at)
    ctx->pc = 0x3fa6fcu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5FF918u));
    // 0x3fa700: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA700u;
    SET_GPR_U32(ctx, 31, 0x3FA708u);
    ctx->pc = 0x3FA704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA700u;
    // 0x3fa704: 0xe6c000b4  swc1        $f0, 0xB4($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA700u, 0x3FA708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA708u;
label_3fa708:
    // 0x3fa708: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3fa708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3fa70c: 0xdc24f920  ld          $a0, -0x6E0($at)
    ctx->pc = 0x3fa70cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5FF920u));
    // 0x3fa710: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA710u;
    SET_GPR_U32(ctx, 31, 0x3FA718u);
    ctx->pc = 0x3FA714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA710u;
    // 0x3fa714: 0xe6c000b8  swc1        $f0, 0xB8($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA710u, 0x3FA718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA718u;
label_3fa718:
    // 0x3fa718: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3fa718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3fa71c: 0xdc24f928  ld          $a0, -0x6D8($at)
    ctx->pc = 0x3fa71cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5FF928u));
    // 0x3fa720: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA720u;
    SET_GPR_U32(ctx, 31, 0x3FA728u);
    ctx->pc = 0x3FA724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA720u;
    // 0x3fa724: 0xe6c000bc  swc1        $f0, 0xBC($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA720u, 0x3FA728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA728u;
label_3fa728:
    // 0x3fa728: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3fa728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3fa72c: 0xdc24f930  ld          $a0, -0x6D0($at)
    ctx->pc = 0x3fa72cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5FF930u));
    // 0x3fa730: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FA730u;
    SET_GPR_U32(ctx, 31, 0x3FA738u);
    ctx->pc = 0x3FA734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA730u;
    // 0x3fa734: 0xe6c000c0  swc1        $f0, 0xC0($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FA730u, 0x3FA738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA738u;
label_3fa738:
    // 0x3fa738: 0xdec20010  ld          $v0, 0x10($s6)
    ctx->pc = 0x3fa738u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x3fa73c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3fa73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3fa740: 0xc78c835c  lwc1        $f12, -0x7CA4($gp)
    ctx->pc = 0x3fa740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fa744: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fa744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fa748: 0xe6c000c4  swc1        $f0, 0xC4($s6)
    ctx->pc = 0x3fa748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 196), bits); }
    // 0x3fa74c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FA74Cu;
    SET_GPR_U32(ctx, 31, 0x3FA754u);
    ctx->pc = 0x3FA750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA74Cu;
    // 0x3fa750: 0xfec20010  sd          $v0, 0x10($s6) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FA74Cu, 0x3FA754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA754u;
label_3fa754:
    // 0x3fa754: 0xc78c8360  lwc1        $f12, -0x7CA0($gp)
    ctx->pc = 0x3fa754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fa758: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FA758u;
    SET_GPR_U32(ctx, 31, 0x3FA760u);
    ctx->pc = 0x3FA75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA758u;
    // 0x3fa75c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FA758u, 0x3FA760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA760u;
label_3fa760:
    // 0x3fa760: 0xc78c8364  lwc1        $f12, -0x7C9C($gp)
    ctx->pc = 0x3fa760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fa764: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FA764u;
    SET_GPR_U32(ctx, 31, 0x3FA76Cu);
    ctx->pc = 0x3FA768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA764u;
    // 0x3fa768: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FA764u, 0x3FA76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA76Cu;
label_3fa76c:
    // 0x3fa76c: 0xc78c8268  lwc1        $f12, -0x7D98($gp)
    ctx->pc = 0x3fa76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fa770: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FA770u;
    SET_GPR_U32(ctx, 31, 0x3FA778u);
    ctx->pc = 0x3FA774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA770u;
    // 0x3fa774: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FA770u, 0x3FA778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA778u;
label_3fa778:
    // 0x3fa778: 0xc78c81a0  lwc1        $f12, -0x7E60($gp)
    ctx->pc = 0x3fa778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fa77c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FA77Cu;
    SET_GPR_U32(ctx, 31, 0x3FA784u);
    ctx->pc = 0x3FA780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA77Cu;
    // 0x3fa780: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FA77Cu, 0x3FA784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA784u;
label_3fa784:
    // 0x3fa784: 0xc78c8280  lwc1        $f12, -0x7D80($gp)
    ctx->pc = 0x3fa784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fa788: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FA788u;
    SET_GPR_U32(ctx, 31, 0x3FA790u);
    ctx->pc = 0x3FA78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA788u;
    // 0x3fa78c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FA788u, 0x3FA790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA790u;
label_3fa790:
    // 0x3fa790: 0xc78c82d4  lwc1        $f12, -0x7D2C($gp)
    ctx->pc = 0x3fa790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fa794: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FA794u;
    SET_GPR_U32(ctx, 31, 0x3FA79Cu);
    ctx->pc = 0x3FA798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA794u;
    // 0x3fa798: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FA794u, 0x3FA79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA79Cu;
label_3fa79c:
    // 0x3fa79c: 0xc78c8368  lwc1        $f12, -0x7C98($gp)
    ctx->pc = 0x3fa79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fa7a0: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FA7A0u;
    SET_GPR_U32(ctx, 31, 0x3FA7A8u);
    ctx->pc = 0x3FA7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA7A0u;
    // 0x3fa7a4: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FA7A0u, 0x3FA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA7A8u;
label_3fa7a8:
    // 0x3fa7a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fa7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa7ac: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3fa7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3fa7b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3fa7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa7b4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3fa7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa7b8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3fa7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa7bc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3fa7bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa7c0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3fa7c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa7c4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3fa7c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa7c8: 0xc0fe826  jal         func_3FA098
    ctx->pc = 0x3FA7C8u;
    SET_GPR_U32(ctx, 31, 0x3FA7D0u);
    ctx->pc = 0x3FA7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA7C8u;
    // 0x3fa7cc: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FA098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FA098u, 0x3FA7C8u, 0x3FA7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA7D0u;
label_3fa7d0:
    // 0x3fa7d0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3fa7d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3fa7d4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3fa7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3fa7d8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3fa7d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fa7dc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3fa7dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fa7e0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3fa7e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fa7e4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3fa7e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fa7e8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3fa7e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fa7ec: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3fa7ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fa7f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fa7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fa7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3FA7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA7F4u;
        // 0x3fa7f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FA7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FA7FCu;
    // 0x3fa7fc: 0x0  nop
    ctx->pc = 0x3fa7fcu;
    // NOP
    ctx->pc = 0x3fa800u;
}
