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

// Function: sub_001EC630
// Address: 0x1ec630 - 0x1ecb80
void sub_001EC630_0x1ec630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC630_0x1ec630");
#endif

    switch (ctx->pc) {
        case 0x1ec66cu: goto label_1ec66c;
        case 0x1ec688u: goto label_1ec688;
        case 0x1ec6a0u: goto label_1ec6a0;
        case 0x1ec6b4u: goto label_1ec6b4;
        case 0x1ec784u: goto label_1ec784;
        case 0x1ec790u: goto label_1ec790;
        case 0x1ec7b4u: goto label_1ec7b4;
        case 0x1ec848u: goto label_1ec848;
        case 0x1ec88cu: goto label_1ec88c;
        case 0x1ec8b4u: goto label_1ec8b4;
        case 0x1ec8c4u: goto label_1ec8c4;
        case 0x1ec96cu: goto label_1ec96c;
        case 0x1ec984u: goto label_1ec984;
        case 0x1ec9a4u: goto label_1ec9a4;
        case 0x1eca00u: goto label_1eca00;
        case 0x1eca40u: goto label_1eca40;
        case 0x1eca4cu: goto label_1eca4c;
        case 0x1eca64u: goto label_1eca64;
        case 0x1eca90u: goto label_1eca90;
        case 0x1ecaacu: goto label_1ecaac;
        case 0x1ecab8u: goto label_1ecab8;
        case 0x1ecad0u: goto label_1ecad0;
        case 0x1ecafcu: goto label_1ecafc;
        default: break;
    }

    ctx->pc = 0x1ec630u;

    // 0x1ec630: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1ec630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1ec634: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ec634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ec638: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ec638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1ec63c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ec63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ec640: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ec640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ec644: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ec644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ec648: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ec648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ec64c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ec64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ec650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ec654: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec65c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x1ec65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x1ec660: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x1ec660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x1ec664: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1EC664u;
    SET_GPR_U32(ctx, 31, 0x1EC66Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1EC664u, 0x1EC66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC66Cu;
label_1ec66c:
    // 0x1ec66c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ec66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec670: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ec674: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ec674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ec678: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x1ec678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ec67c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1ec67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ec680: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EC680u;
    SET_GPR_U32(ctx, 31, 0x1EC688u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EC680u, 0x1EC688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC688u;
label_1ec688:
    // 0x1ec688: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1ec688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1ec68c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ec68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ec690: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ec690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ec694: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ec694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec698: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EC698u;
    SET_GPR_U32(ctx, 31, 0x1EC6A0u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EC698u, 0x1EC6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6A0u;
label_1ec6a0:
    // 0x1ec6a0: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1ec6a0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ec6a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ec6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec6a8: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x1ec6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1ec6ac: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1EC6ACu;
    SET_GPR_U32(ctx, 31, 0x1EC6B4u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1EC6ACu, 0x1EC6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC6B4u;
label_1ec6b4:
    // 0x1ec6b4: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1ec6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1ec6b8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1ec6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1ec6bc: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1ec6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1ec6c0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1ec6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x1ec6c4: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1ec6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1ec6c8: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1ec6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1ec6cc: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1ec6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1ec6d0: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x1ec6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x1ec6d4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ec6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ec6d8: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x1ec6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec6dc: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1ec6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1ec6e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ec6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ec6e4: 0x1642001c  bne         $s2, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EC6E4u;
    {
        const bool branch_taken_0x1ec6e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ec6e4) {
            ctx->pc = 0x1EC758u;
            goto label_1ec758;
        }
    }
    ctx->pc = 0x1EC6ECu;
    // 0x1ec6ec: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ec6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ec6f0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ec6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ec6f4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC6F4u;
    {
        const bool branch_taken_0x1ec6f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ec6f4) {
            ctx->pc = 0x1EC710u;
            goto label_1ec710;
        }
    }
    ctx->pc = 0x1EC6FCu;
    // 0x1ec6fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec700: 0x0  nop
    ctx->pc = 0x1ec700u;
    // NOP
    // 0x1ec704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec708: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EC708u;
    {
        const bool branch_taken_0x1ec708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec708) {
            ctx->pc = 0x1EC72Cu;
            goto label_1ec72c;
        }
    }
    ctx->pc = 0x1EC710u;
label_1ec710:
    // 0x1ec710: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ec710u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ec714: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ec718: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ec718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ec71c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec71cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec720: 0x0  nop
    ctx->pc = 0x1ec720u;
    // NOP
    // 0x1ec724: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec728: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ec728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ec72c:
    // 0x1ec72c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1ec72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1ec730: 0xc7a200fc  lwc1        $f2, 0xFC($sp)
    ctx->pc = 0x1ec730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ec734: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ec734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ec738: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec73c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1ec73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec740: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1ec740u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1ec744: 0x0  nop
    ctx->pc = 0x1ec744u;
    // NOP
    // 0x1ec748: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1ec748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1ec74c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1ec74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1ec750: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC750u;
    {
        const bool branch_taken_0x1ec750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec750) {
            ctx->pc = 0x1EC770u;
            goto label_1ec770;
        }
    }
    ctx->pc = 0x1EC758u;
label_1ec758:
    // 0x1ec758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec75c: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC75Cu;
    {
        const bool branch_taken_0x1ec75c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ec75c) {
            ctx->pc = 0x1EC770u;
            goto label_1ec770;
        }
    }
    ctx->pc = 0x1EC764u;
    // 0x1ec764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec768: 0x0  nop
    ctx->pc = 0x1ec768u;
    // NOP
    // 0x1ec76c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1ec76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1ec770:
    // 0x1ec770: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ec770u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec774: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ec774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ec778: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ec778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ec77c: 0xc07ac08  jal         func_1EB020
    ctx->pc = 0x1EC77Cu;
    SET_GPR_U32(ctx, 31, 0x1EC784u);
    ctx->pc = 0x1EB020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB020u, 0x1EC77Cu, 0x1EC784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC784u;
label_1ec784:
    // 0x1ec784: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec788: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1EC788u;
    {
        const bool branch_taken_0x1ec788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec788) {
            ctx->pc = 0x1EC874u;
            goto label_1ec874;
        }
    }
    ctx->pc = 0x1EC790u;
label_1ec790:
    // 0x1ec790: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ec790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec794: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ec794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec798: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1EC798u;
    {
        const bool branch_taken_0x1ec798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ec798) {
            ctx->pc = 0x1EC870u;
            goto label_1ec870;
        }
    }
    ctx->pc = 0x1EC7A0u;
    // 0x1ec7a0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1ec7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ec7a4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1ec7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec7a8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1ec7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ec7ac: 0xc07bd0c  jal         func_1EF430
    ctx->pc = 0x1EC7ACu;
    SET_GPR_U32(ctx, 31, 0x1EC7B4u);
    ctx->pc = 0x1EF430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF430u, 0x1EC7ACu, 0x1EC7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC7B4u;
label_1ec7b4:
    // 0x1ec7b4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1ec7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1ec7b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec7bc: 0x0  nop
    ctx->pc = 0x1ec7bcu;
    // NOP
    // 0x1ec7c0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1ec7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1ec7c4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ec7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ec7c8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ec7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ec7cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC7CCu;
    {
        const bool branch_taken_0x1ec7cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ec7cc) {
            ctx->pc = 0x1EC7E8u;
            goto label_1ec7e8;
        }
    }
    ctx->pc = 0x1EC7D4u;
    // 0x1ec7d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec7d8: 0x0  nop
    ctx->pc = 0x1ec7d8u;
    // NOP
    // 0x1ec7dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ec7dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ec7e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EC7E0u;
    {
        const bool branch_taken_0x1ec7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec7e0) {
            ctx->pc = 0x1EC804u;
            goto label_1ec804;
        }
    }
    ctx->pc = 0x1EC7E8u;
label_1ec7e8:
    // 0x1ec7e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ec7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ec7ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ec7f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ec7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ec7f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec7f8: 0x0  nop
    ctx->pc = 0x1ec7f8u;
    // NOP
    // 0x1ec7fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ec7fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ec800: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ec800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ec804:
    // 0x1ec804: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1ec804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1ec808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec80c: 0x0  nop
    ctx->pc = 0x1ec80cu;
    // NOP
    // 0x1ec810: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ec810u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ec814: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1ec814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec818: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ec818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ec81c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1ec81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1ec820: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1ec820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec824: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1ec824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec828: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ec828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec82c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1ec82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1ec830: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ec830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec834: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1ec834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec838: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1ec838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec83c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1ec83cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ec840: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x1EC840u;
    SET_GPR_U32(ctx, 31, 0x1EC848u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x1EC840u, 0x1EC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC848u;
label_1ec848:
    // 0x1ec848: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1ec848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec84c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ec84cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec850: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC850u;
    {
        const bool branch_taken_0x1ec850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec850) {
            ctx->pc = 0x1EC870u;
            goto label_1ec870;
        }
    }
    ctx->pc = 0x1EC858u;
    // 0x1ec858: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ec858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ec85c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1ec85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1ec860: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC860u;
    {
        const bool branch_taken_0x1ec860 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ec860) {
            ctx->pc = 0x1EC870u;
            goto label_1ec870;
        }
    }
    ctx->pc = 0x1EC868u;
    // 0x1ec868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec86c: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1ec86cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ec870:
    // 0x1ec870: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1ec870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1ec874:
    // 0x1ec874: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC874u;
    {
        const bool branch_taken_0x1ec874 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec874) {
            ctx->pc = 0x1EC894u;
            goto label_1ec894;
        }
    }
    ctx->pc = 0x1EC87Cu;
    // 0x1ec87c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ec87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ec880: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ec880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ec884: 0xc07abf8  jal         func_1EAFE0
    ctx->pc = 0x1EC884u;
    SET_GPR_U32(ctx, 31, 0x1EC88Cu);
    ctx->pc = 0x1EAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFE0u, 0x1EC884u, 0x1EC88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC88Cu;
label_1ec88c:
    // 0x1ec88c: 0x1622ffc0  bne         $s1, $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1EC88Cu;
    {
        const bool branch_taken_0x1ec88c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ec88c) {
            ctx->pc = 0x1EC790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec790;
        }
    }
    ctx->pc = 0x1EC894u;
label_1ec894:
    // 0x1ec894: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC894u;
    {
        const bool branch_taken_0x1ec894 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec894) {
            ctx->pc = 0x1EC8A8u;
            goto label_1ec8a8;
        }
    }
    ctx->pc = 0x1EC89Cu;
    // 0x1ec89c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8a0: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1EC8A0u;
    {
        const bool branch_taken_0x1ec8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec8a0) {
            ctx->pc = 0x1ECB40u;
            goto label_1ecb40;
        }
    }
    ctx->pc = 0x1EC8A8u;
label_1ec8a8:
    // 0x1ec8a8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1ec8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ec8ac: 0xc07bcb0  jal         func_1EF2C0
    ctx->pc = 0x1EC8ACu;
    SET_GPR_U32(ctx, 31, 0x1EC8B4u);
    ctx->pc = 0x1EF2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF2C0u, 0x1EC8ACu, 0x1EC8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC8B4u;
label_1ec8b4:
    // 0x1ec8b4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1ec8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec8b8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1ec8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1ec8bc: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1EC8BCu;
    SET_GPR_U32(ctx, 31, 0x1EC8C4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1EC8BCu, 0x1EC8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC8C4u;
label_1ec8c4:
    // 0x1ec8c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ec8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ec8c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ec8c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ec8cc: 0x1010  mfhi        $v0
    ctx->pc = 0x1ec8ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ec8d0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC8D0u;
    {
        const bool branch_taken_0x1ec8d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ec8d0) {
            ctx->pc = 0x1EC8ECu;
            goto label_1ec8ec;
        }
    }
    ctx->pc = 0x1EC8D8u;
    // 0x1ec8d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec8dc: 0x0  nop
    ctx->pc = 0x1ec8dcu;
    // NOP
    // 0x1ec8e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ec8e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ec8e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EC8E4u;
    {
        const bool branch_taken_0x1ec8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec8e4) {
            ctx->pc = 0x1EC908u;
            goto label_1ec908;
        }
    }
    ctx->pc = 0x1EC8ECu;
label_1ec8ec:
    // 0x1ec8ec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ec8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ec8f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ec8f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ec8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ec8f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec8f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec8fc: 0x0  nop
    ctx->pc = 0x1ec8fcu;
    // NOP
    // 0x1ec900: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ec900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ec904: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ec904u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ec908:
    // 0x1ec908: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1ec908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1ec90c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec910: 0x0  nop
    ctx->pc = 0x1ec910u;
    // NOP
    // 0x1ec914: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ec914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ec918: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ec918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec91c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1ec91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1ec920: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ec920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec924: 0xac520018  sw          $s2, 0x18($v0)
    ctx->pc = 0x1ec924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 18));
    // 0x1ec928: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec92c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ec92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec930: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x1ec930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec934: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ec934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec938: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1ec938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1ec93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec940: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC940u;
    {
        const bool branch_taken_0x1ec940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ec940) {
            ctx->pc = 0x1EC954u;
            goto label_1ec954;
        }
    }
    ctx->pc = 0x1EC948u;
    // 0x1ec948: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x1ec948u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec94c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EC94Cu;
    {
        const bool branch_taken_0x1ec94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec94c) {
            ctx->pc = 0x1EC958u;
            goto label_1ec958;
        }
    }
    ctx->pc = 0x1EC954u;
label_1ec954:
    // 0x1ec954: 0x2415000b  addiu       $s5, $zero, 0xB
    ctx->pc = 0x1ec954u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ec958:
    // 0x1ec958: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ec958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ec95c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ec95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ec960: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ec960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec964: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EC964u;
    SET_GPR_U32(ctx, 31, 0x1EC96Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EC964u, 0x1EC96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC96Cu;
label_1ec96c:
    // 0x1ec96c: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x1ec96cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec970: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ec970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec974: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x1ec974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x1ec978: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1ec978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1ec97c: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1EC97Cu;
    SET_GPR_U32(ctx, 31, 0x1EC984u);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1EC97Cu, 0x1EC984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC984u;
label_1ec984:
    // 0x1ec984: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ec984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec988: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1ec988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1ec98c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1ec98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ec990: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ec990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec994: 0x246400a4  addiu       $a0, $v1, 0xA4
    ctx->pc = 0x1ec994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x1ec998: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1ec998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ec99c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EC99Cu;
    SET_GPR_U32(ctx, 31, 0x1EC9A4u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EC99Cu, 0x1EC9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC9A4u;
label_1ec9a4:
    // 0x1ec9a4: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x1ec9a4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec9a8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ec9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec9ac: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1ec9acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1ec9b0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ec9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ec9b4: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1ec9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec9b8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ec9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec9bc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1ec9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1ec9c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ec9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ec9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec9c8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ec9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec9cc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ec9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ec9d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ec9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ec9d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec9d8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ec9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec9dc: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1ec9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1ec9e0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ec9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ec9e4: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1ec9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec9e8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ec9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ec9ec: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x1ec9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x1ec9f0: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x1ec9f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ec9f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ec9f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec9f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EC9F8u;
    {
        const bool branch_taken_0x1ec9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec9f8) {
            ctx->pc = 0x1ECA24u;
            goto label_1eca24;
        }
    }
    ctx->pc = 0x1ECA00u;
label_1eca00:
    // 0x1eca00: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1eca00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1eca04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eca04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eca08: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x1eca08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1eca0c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1eca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1eca10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1eca10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eca14: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1eca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1eca18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eca1c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x1eca1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x1eca20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1eca20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1eca24:
    // 0x1eca24: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x1eca24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1eca28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1ECA28u;
    {
        const bool branch_taken_0x1eca28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eca28) {
            ctx->pc = 0x1ECA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eca00;
        }
    }
    ctx->pc = 0x1ECA30u;
    // 0x1eca30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eca30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca34: 0x2410001e  addiu       $s0, $zero, 0x1E
    ctx->pc = 0x1eca34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1eca38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1ECA38u;
    {
        const bool branch_taken_0x1eca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eca38) {
            ctx->pc = 0x1ECA94u;
            goto label_1eca94;
        }
    }
    ctx->pc = 0x1ECA40u;
label_1eca40:
    // 0x1eca40: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eca40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eca44: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ECA44u;
    SET_GPR_U32(ctx, 31, 0x1ECA4Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ECA44u, 0x1ECA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA4Cu;
label_1eca4c:
    // 0x1eca4c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1eca4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1eca50: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1eca50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eca54: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1eca54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1eca58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eca58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca5c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1ECA5Cu;
    SET_GPR_U32(ctx, 31, 0x1ECA64u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1ECA5Cu, 0x1ECA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA64u;
label_1eca64:
    // 0x1eca64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1eca64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eca68: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1eca68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1eca6c: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1eca6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1eca70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1eca70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eca74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1eca74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eca78: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x1eca78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x1eca7c: 0x24e78858  addiu       $a3, $a3, -0x77A8
    ctx->pc = 0x1eca7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936664));
    // 0x1eca80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eca80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1eca84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eca88: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1ECA88u;
    SET_GPR_U32(ctx, 31, 0x1ECA90u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1ECA88u, 0x1ECA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECA90u;
label_1eca90:
    // 0x1eca90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1eca90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1eca94:
    // 0x1eca94: 0x2e02001f  sltiu       $v0, $s0, 0x1F
    ctx->pc = 0x1eca94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1eca98: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1ECA98u;
    {
        const bool branch_taken_0x1eca98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eca98) {
            ctx->pc = 0x1ECA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eca40;
        }
    }
    ctx->pc = 0x1ECAA0u;
    // 0x1ecaa0: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1ecaa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ecaa4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1ECAA4u;
    {
        const bool branch_taken_0x1ecaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecaa4) {
            ctx->pc = 0x1ECB00u;
            goto label_1ecb00;
        }
    }
    ctx->pc = 0x1ECAACu;
label_1ecaac:
    // 0x1ecaac: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1ecaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ecab0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1ECAB0u;
    SET_GPR_U32(ctx, 31, 0x1ECAB8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1ECAB0u, 0x1ECAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECAB8u;
label_1ecab8:
    // 0x1ecab8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1ecab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1ecabc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ecabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ecac0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ecac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ecac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ecac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecac8: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1ECAC8u;
    SET_GPR_U32(ctx, 31, 0x1ECAD0u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1ECAC8u, 0x1ECAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECAD0u;
label_1ecad0:
    // 0x1ecad0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ecad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ecad4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1ecad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ecad8: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1ecad8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ecadc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ecadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ecae0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ecae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ecae4: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x1ecae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x1ecae8: 0x24e78858  addiu       $a3, $a3, -0x77A8
    ctx->pc = 0x1ecae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936664));
    // 0x1ecaec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ecaecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecaf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ecaf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecaf4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1ECAF4u;
    SET_GPR_U32(ctx, 31, 0x1ECAFCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1ECAF4u, 0x1ECAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECAFCu;
label_1ecafc:
    // 0x1ecafc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ecafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ecb00:
    // 0x1ecb00: 0x2e020021  sltiu       $v0, $s0, 0x21
    ctx->pc = 0x1ecb00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x1ecb04: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1ECB04u;
    {
        const bool branch_taken_0x1ecb04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecb04) {
            ctx->pc = 0x1ECAACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecaac;
        }
    }
    ctx->pc = 0x1ECB0Cu;
    // 0x1ecb0c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ecb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ecb10: 0xa0400126  sb          $zero, 0x126($v0)
    ctx->pc = 0x1ecb10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 294), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecb14: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x1ecb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x1ecb18: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ecb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ecb1c: 0xa0430125  sb          $v1, 0x125($v0)
    ctx->pc = 0x1ecb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 293), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ecb20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ecb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ecb24: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1ecb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ecb28: 0xa0430124  sb          $v1, 0x124($v0)
    ctx->pc = 0x1ecb28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 292), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ecb2c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ecb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ecb30: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1ecb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecb34: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1ecb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ecb38: 0xe44000c8  swc1        $f0, 0xC8($v0)
    ctx->pc = 0x1ecb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 200), bits); }
    // 0x1ecb3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ecb40:
    // 0x1ecb40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ecb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ecb44: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ecb44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ecb48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ecb48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ecb4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ecb4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ecb50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ecb50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ecb54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ecb54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ecb58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ecb58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecb5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ecb5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecb60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ecb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecb64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecb64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecb68: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x1ecb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1ecb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECB74u;
    // 0x1ecb74: 0x0  nop
    ctx->pc = 0x1ecb74u;
    // NOP
    // 0x1ecb78: 0x0  nop
    ctx->pc = 0x1ecb78u;
    // NOP
    // 0x1ecb7c: 0x0  nop
    ctx->pc = 0x1ecb7cu;
    // NOP
    ctx->pc = 0x1ecb80u;
}
