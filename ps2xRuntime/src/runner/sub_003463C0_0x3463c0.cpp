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

// Function: sub_003463C0
// Address: 0x3463c0 - 0x347bc8
void sub_003463C0_0x3463c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003463C0_0x3463c0");
#endif

    switch (ctx->pc) {
        case 0x3465c8u: goto label_3465c8;
        case 0x346808u: goto label_346808;
        case 0x346998u: goto label_346998;
        case 0x3469b8u: goto label_3469b8;
        case 0x346b70u: goto label_346b70;
        case 0x347668u: goto label_347668;
        case 0x347778u: goto label_347778;
        default: break;
    }

    ctx->pc = 0x3463c0u;

    // 0x3463c0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x3463c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x3463c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3463c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3463c8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x3463c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x3463cc: 0x2442c2c8  addiu       $v0, $v0, -0x3D38
    ctx->pc = 0x3463ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
    // 0x3463d0: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x3463d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x3463d4: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x3463d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x3463d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3463d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3463dc: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x3463dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x3463e0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3463e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3463e4: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x3463e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x3463e8: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x3463e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x3463ec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3463ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3463f0: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x3463f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x3463f4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3463f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3463f8: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x3463f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x3463fc: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x3463fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x346400: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x346400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x346404: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x346404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x346408: 0xe7b901b8  swc1        $f25, 0x1B8($sp)
    ctx->pc = 0x346408u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x34640c: 0xe7b801b0  swc1        $f24, 0x1B0($sp)
    ctx->pc = 0x34640cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x346410: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x346410u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x346414: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x346414u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x346418: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x346418u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x34641c: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x34641cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x346420: 0x8fac0060  lw          $t4, 0x60($sp)
    ctx->pc = 0x346420u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x346424: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x346424u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C360u));
    // 0x346428: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x346428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x34642c: 0xa4b021  addu        $s6, $a1, $a0
    ctx->pc = 0x34642cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x346430: 0x8c4800b0  lw          $t0, 0xB0($v0)
    ctx->pc = 0x346430u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x61C378u));
    // 0x346434: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x346434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x346438: 0x290b0000  slti        $t3, $t0, 0x0
    ctx->pc = 0x346438u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x34643c: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x34643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x346440: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x346440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x346444: 0x8c4700a4  lw          $a3, 0xA4($v0)
    ctx->pc = 0x346444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x346448: 0xb400b  movn        $t0, $zero, $t3
    ctx->pc = 0x346448u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
    // 0x34644c: 0x28690000  slti        $t1, $v1, 0x0
    ctx->pc = 0x34644cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x346450: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x346450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x346454: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x346454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x346458: 0x28ea0000  slti        $t2, $a3, 0x0
    ctx->pc = 0x346458u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x34645c: 0x8c4400a0  lw          $a0, 0xA0($v0)
    ctx->pc = 0x34645cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x346460: 0x69f00a  movz        $fp, $v1, $t1
    ctx->pc = 0x346460u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    // 0x346464: 0x8c4500a8  lw          $a1, 0xA8($v0)
    ctx->pc = 0x346464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x346468: 0x1873821  addu        $a3, $t4, $a3
    ctx->pc = 0x346468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x34646c: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x34646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346470: 0x28c90000  slti        $t1, $a2, 0x0
    ctx->pc = 0x346470u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x346474: 0xc6c00040  lwc1        $f0, 0x40($s6)
    ctx->pc = 0x346474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346478: 0xa380b  movn        $a3, $zero, $t2
    ctx->pc = 0x346478u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x34647c: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x34647cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x346480: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x346480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x346484: 0x1863021  addu        $a2, $t4, $a2
    ctx->pc = 0x346484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x346488: 0xafa7009c  sw          $a3, 0x9C($sp)
    ctx->pc = 0x346488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 7));
    // 0x34648c: 0xafa800a0  sw          $t0, 0xA0($sp)
    ctx->pc = 0x34648cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 8));
    // 0x346490: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x346490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x346494: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x346494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x346498: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x346498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x34649c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x34649cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x3464a0: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x3464a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3464a4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3464a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x3464a8: 0x9300b  movn        $a2, $zero, $t1
    ctx->pc = 0x3464a8u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x3464ac: 0x83b80a  movz        $s7, $a0, $v1
    ctx->pc = 0x3464acu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 4));
    // 0x3464b0: 0xa2a80a  movz        $s5, $a1, $v0
    ctx->pc = 0x3464b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
    // 0x3464b4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3464b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3464b8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3464b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x3464bc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x3464bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x3464c0: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x3464c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x3464c4: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3464c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x3464c8: 0x450005aa  bc1f        . + 4 + (0x5AA << 2)
    ctx->pc = 0x3464C8u;
    {
        const bool branch_taken_0x3464c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3464CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3464C8u;
        // 0x3464cc: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3464c8) {
            ctx->pc = 0x347B74u;
            goto label_347b74;
        }
    }
    ctx->pc = 0x3464D0u;
    // 0x3464d0: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x3464d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3464d4: 0x3c030bb3  lui         $v1, 0xBB3
    ctx->pc = 0x3464d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2995 << 16));
    // 0x3464d8: 0x34638435  ori         $v1, $v1, 0x8435
    ctx->pc = 0x3464d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33845);
    // 0x3464dc: 0x3c023619  lui         $v0, 0x3619
    ctx->pc = 0x3464dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13849 << 16));
    // 0x3464e0: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x3464e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3464e4: 0x3442636b  ori         $v0, $v0, 0x636B
    ctx->pc = 0x3464e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25451);
    // 0x3464e8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x3464e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3464ec: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3464ECu;
    {
        const bool branch_taken_0x3464ec = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3464F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3464ECu;
        // 0x3464f0: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3464ec) {
            ctx->pc = 0x346504u;
            goto label_346504;
        }
    }
    ctx->pc = 0x3464F4u;
    // 0x3464f4: 0x44901800  mtc1        $s0, $f3
    ctx->pc = 0x3464f4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3464f8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3464f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3464fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3464FCu;
    {
        const bool branch_taken_0x3464fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3464fc) {
            ctx->pc = 0x346518u;
            goto label_346518;
        }
    }
    ctx->pc = 0x346504u;
label_346504:
    // 0x346504: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346504u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346508: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34650c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x34650cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x346510: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x346510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x346514: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x346514u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_346518:
    // 0x346518: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x346518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x34651c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34651cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346520: 0xc6c10048  lwc1        $f1, 0x48($s6)
    ctx->pc = 0x346520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346524: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x346524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x346528: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x346528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34652c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x34652cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x346530: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x346530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x346534: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x346534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x346538: 0x8ec30044  lw          $v1, 0x44($s6)
    ctx->pc = 0x346538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x34653c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34653cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346540: 0x46020101  sub.s       $f4, $f0, $f2
    ctx->pc = 0x346540u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x346544: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x346544u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x346548: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x346548u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34654c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x34654cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x346550: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x346550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x346554: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x346554u;
    {
        const bool branch_taken_0x346554 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x346558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346554u;
        // 0x346558: 0xafa30068  sw          $v1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346554) {
            ctx->pc = 0x346580u;
            goto label_346580;
        }
    }
    ctx->pc = 0x34655Cu;
    // 0x34655c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x34655cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x346560: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x346560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x346564: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x346564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x346568: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x346568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x34656c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x34656cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x346570: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x346570u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x346574: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x346574u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x346578: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x346578u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x34657c: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x34657cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
label_346580:
    // 0x346580: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x346580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x346584: 0x18c0001e  blez        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x346584u;
    {
        const bool branch_taken_0x346584 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x346588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346584u;
        // 0x346588: 0x8fac0060  lw          $t4, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346584) {
            ctx->pc = 0x346600u;
            goto label_346600;
        }
    }
    ctx->pc = 0x34658Cu;
    // 0x34658c: 0x8d840020  lw          $a0, 0x20($t4)
    ctx->pc = 0x34658cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x346590: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x346590u;
    {
        const bool branch_taken_0x346590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x346594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346590u;
        // 0x346594: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346590) {
            ctx->pc = 0x3465B4u;
            goto label_3465b4;
        }
    }
    ctx->pc = 0x346598u;
    // 0x346598: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x346598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34659c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x34659cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3465a0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3465a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3465a4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3465a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3465a8: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x3465a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x3465ac: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x3465acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x3465b0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x3465b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_3465b4:
    // 0x3465b4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3465B4u;
    {
        const bool branch_taken_0x3465b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3465B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3465B4u;
        // 0x3465b8: 0x8fa60068  lw          $a2, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3465b4) {
            ctx->pc = 0x3465F8u;
            goto label_3465f8;
        }
    }
    ctx->pc = 0x3465BCu;
    // 0x3465bc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x3465bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3465c0: 0xc0d062a  jal         func_3418A8
    ctx->pc = 0x3465C0u;
    SET_GPR_U32(ctx, 31, 0x3465C8u);
    ctx->pc = 0x3465C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3465C0u;
    // 0x3465c4: 0x7fa900e0  sq          $t1, 0xE0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3418A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3418A8u, 0x3465C0u, 0x3465C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3465C8u;
label_3465c8:
    // 0x3465c8: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x3465c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x3465cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3465CCu;
    {
        const bool branch_taken_0x3465cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3465D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3465CCu;
        // 0x3465d0: 0x7ba900e0  lq          $t1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3465cc) {
            ctx->pc = 0x3465F4u;
            goto label_3465f4;
        }
    }
    ctx->pc = 0x3465D4u;
    // 0x3465d4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3465d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x3465d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3465d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3465dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3465dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3465e0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x3465e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3465e4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x3465e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3465e8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x3465e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x3465ec: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x3465ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3465f0: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x3465f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_3465f4:
    // 0x3465f4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x3465f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3465f8:
    // 0x3465f8: 0x1cc00003  bgtz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3465F8u;
    {
        const bool branch_taken_0x3465f8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x3465FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3465F8u;
        // 0x3465fc: 0x8fac0070  lw          $t4, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3465f8) {
            ctx->pc = 0x346608u;
            goto label_346608;
        }
    }
    ctx->pc = 0x346600u;
label_346600:
    // 0x346600: 0x1000055e  b           . + 4 + (0x55E << 2)
    ctx->pc = 0x346600u;
    {
        const bool branch_taken_0x346600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346600u;
        // 0x346604: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346600) {
            ctx->pc = 0x347B7Cu;
            goto label_347b7c;
        }
    }
    ctx->pc = 0x346608u;
label_346608:
    // 0x346608: 0x1180055c  beqz        $t4, . + 4 + (0x55C << 2)
    ctx->pc = 0x346608u;
    {
        const bool branch_taken_0x346608 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x34660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346608u;
        // 0x34660c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346608) {
            ctx->pc = 0x347B7Cu;
            goto label_347b7c;
        }
    }
    ctx->pc = 0x346610u;
    // 0x346610: 0x12a00050  beqz        $s5, . + 4 + (0x50 << 2)
    ctx->pc = 0x346610u;
    {
        const bool branch_taken_0x346610 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x346614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346610u;
        // 0x346614: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346610) {
            ctx->pc = 0x346754u;
            goto label_346754;
        }
    }
    ctx->pc = 0x346618u;
    // 0x346618: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x346618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x34661c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x34661cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x346620: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x346620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x346624: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x346624u;
    {
        const bool branch_taken_0x346624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346624u;
        // 0x346628: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346624) {
            ctx->pc = 0x346648u;
            goto label_346648;
        }
    }
    ctx->pc = 0x34662Cu;
    // 0x34662c: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x34662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x346630: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x346630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346634: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x346634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x346638: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x346638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34663c: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x34663cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x346640: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x346640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x346644: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x346644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_346648:
    // 0x346648: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x346648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x34664c: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x34664cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x346650: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x346650u;
    {
        const bool branch_taken_0x346650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346650u;
        // 0x346654: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346650) {
            ctx->pc = 0x346680u;
            goto label_346680;
        }
    }
    ctx->pc = 0x346658u;
    // 0x346658: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x346658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x34665c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x34665cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x346660: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x346660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x346664: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x346664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x346668: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x346668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34666c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x346670: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x346670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x346674: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x346674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x346678: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x346678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34667c: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x34667cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
label_346680:
    // 0x346680: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x346680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x346684: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x346684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x346688: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x346688u;
    {
        const bool branch_taken_0x346688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346688u;
        // 0x34668c: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346688) {
            ctx->pc = 0x3466B8u;
            goto label_3466b8;
        }
    }
    ctx->pc = 0x346690u;
    // 0x346690: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x346690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x346694: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x346694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x346698: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x346698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x34669c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x34669cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3466a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3466a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3466a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3466a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3466a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3466a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3466ac: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x3466acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x3466b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3466b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3466b4: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x3466b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_3466b8:
    // 0x3466b8: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x3466b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x3466bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3466BCu;
    {
        const bool branch_taken_0x3466bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3466C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3466BCu;
        // 0x3466c0: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3466bc) {
            ctx->pc = 0x3466E8u;
            goto label_3466e8;
        }
    }
    ctx->pc = 0x3466C4u;
    // 0x3466c4: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x3466c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x3466c8: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x3466c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x3466cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3466ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3466d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3466d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3466d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3466d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3466d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3466d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3466dc: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x3466dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x3466e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3466e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3466e4: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x3466e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
label_3466e8:
    // 0x3466e8: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3466e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x3466ec: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x3466ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x3466f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3466F0u;
    {
        const bool branch_taken_0x3466f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3466F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3466F0u;
        // 0x3466f4: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3466f0) {
            ctx->pc = 0x346720u;
            goto label_346720;
        }
    }
    ctx->pc = 0x3466F8u;
    // 0x3466f8: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x3466f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x3466fc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3466fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x346700: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x346700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x346704: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x346704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x346708: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x346708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34670c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x346710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x346710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x346714: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x346714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x346718: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x346718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34671c: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x34671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_346720:
    // 0x346720: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x346720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x346724: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x346724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x346728: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x346728u;
    {
        const bool branch_taken_0x346728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346728u;
        // 0x34672c: 0xafa00090  sw          $zero, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346728) {
            ctx->pc = 0x346754u;
            goto label_346754;
        }
    }
    ctx->pc = 0x346730u;
    // 0x346730: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x346730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x346734: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x346734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x346738: 0x8ea40024  lw          $a0, 0x24($s5)
    ctx->pc = 0x346738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x34673c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34673cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x346740: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x346740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x346744: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x346744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x346748: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x346748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x34674c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x34674cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346750: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x346750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_346754:
    // 0x346754: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x346754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x346758: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x346758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34675c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x34675cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x346760: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x346760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x346764: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x346764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x346768: 0x8fac0068  lw          $t4, 0x68($sp)
    ctx->pc = 0x346768u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34676c: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x34676cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x346770: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x346770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x346774: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x346774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x346778: 0x8ec600a8  lw          $a2, 0xA8($s6)
    ctx->pc = 0x346778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
    // 0x34677c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x34677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x346780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x346780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x346784: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x346784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
    // 0x346788: 0x198004b4  blez        $t4, . + 4 + (0x4B4 << 2)
    ctx->pc = 0x346788u;
    {
        const bool branch_taken_0x346788 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x34678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346788u;
        // 0x34678c: 0xafa200a4  sw          $v0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346788) {
            ctx->pc = 0x347A5Cu;
            goto label_347a5c;
        }
    }
    ctx->pc = 0x346790u;
    // 0x346790: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x346790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x346794: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x346794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346798: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x346798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x34679c: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x34679cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x3467a0: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x3467a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x3467a4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3467a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3467a8: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x3467a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x3467ac: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x3467acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3467b0: 0x8fac007c  lw          $t4, 0x7C($sp)
    ctx->pc = 0x3467b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x3467b4: 0x3c120bb3  lui         $s2, 0xBB3
    ctx->pc = 0x3467b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2995 << 16));
    // 0x3467b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3467b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3467bc: 0x3c113619  lui         $s1, 0x3619
    ctx->pc = 0x3467bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)13849 << 16));
    // 0x3467c0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x3467c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3467c4: 0x36528435  ori         $s2, $s2, 0x8435
    ctx->pc = 0x3467c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)33845);
    // 0x3467c8: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x3467c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x3467cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3467ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3467d0: 0x3631636b  ori         $s1, $s1, 0x636B
    ctx->pc = 0x3467d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)25451);
    // 0x3467d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3467d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3467d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3467d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3467dc: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x3467dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3467e0: 0xc7988248  lwc1        $f24, -0x7DB8($gp)
    ctx->pc = 0x3467e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3467e4: 0xc799824c  lwc1        $f25, -0x7DB4($gp)
    ctx->pc = 0x3467e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3467e8: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x3467e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x3467ec: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x3467ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x3467f0: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x3467f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
    // 0x3467f4: 0xafac00b8  sw          $t4, 0xB8($sp)
    ctx->pc = 0x3467f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 12));
    // 0x3467f8: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x3467f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x3467fc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3467fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x346800: 0x8fb30074  lw          $s3, 0x74($sp)
    ctx->pc = 0x346800u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x346804: 0x0  nop
    ctx->pc = 0x346804u;
    // NOP
label_346808:
    // 0x346808: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x346808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34680c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x34680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x346810: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346814: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346814u;
    {
        const bool branch_taken_0x346814 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346814u;
        // 0x346818: 0xac60fff8  sw          $zero, -0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346814) {
            ctx->pc = 0x34682Cu;
            goto label_34682c;
        }
    }
    ctx->pc = 0x34681Cu;
    // 0x34681c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x34681cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346820: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346824: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346824u;
    {
        const bool branch_taken_0x346824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346824u;
        // 0x346828: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346824) {
            ctx->pc = 0x346848u;
            goto label_346848;
        }
    }
    ctx->pc = 0x34682Cu;
label_34682c:
    // 0x34682c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x34682cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x346830: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346830u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346834: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34683c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34683cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346840: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346844: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346848:
    // 0x346848: 0xc6c20058  lwc1        $f2, 0x58($s6)
    ctx->pc = 0x346848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34684c: 0xc6c10054  lwc1        $f1, 0x54($s6)
    ctx->pc = 0x34684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346850: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x346850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x346854: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x346854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x346858: 0x2484c2c8  addiu       $a0, $a0, -0x3D38
    ctx->pc = 0x346858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951624));
    // 0x34685c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34685cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346860: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x346860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C390u));
    // 0x346864: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346864u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346868: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x346868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x34686c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x34686cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x346870: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x346870u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x346874: 0xe4a1fffc  swc1        $f1, -0x4($a1)
    ctx->pc = 0x346874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), bits); }
    // 0x346878: 0x44000bf  bltz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x346878u;
    {
        const bool branch_taken_0x346878 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x34687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346878u;
        // 0x34687c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346878) {
            ctx->pc = 0x346B78u;
            goto label_346b78;
        }
    }
    ctx->pc = 0x346880u;
    // 0x346880: 0x2121818  mult        $v1, $s0, $s2
    ctx->pc = 0x346880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x346884: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x346884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x346888: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x346888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34688c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34688Cu;
    {
        const bool branch_taken_0x34688c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34688Cu;
        // 0x346890: 0x82a021  addu        $s4, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34688c) {
            ctx->pc = 0x3468A4u;
            goto label_3468a4;
        }
    }
    ctx->pc = 0x346894u;
    // 0x346894: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346894u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346898: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34689c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34689Cu;
    {
        const bool branch_taken_0x34689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3468A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34689Cu;
        // 0x3468a0: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34689c) {
            ctx->pc = 0x3468C0u;
            goto label_3468c0;
        }
    }
    ctx->pc = 0x3468A4u;
label_3468a4:
    // 0x3468a4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3468a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3468a8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3468a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3468ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3468acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3468b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3468b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3468b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3468b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3468b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3468b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3468bc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3468bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3468c0:
    // 0x3468c0: 0xc6c10068  lwc1        $f1, 0x68($s6)
    ctx->pc = 0x3468c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3468c4: 0xc6c2005c  lwc1        $f2, 0x5C($s6)
    ctx->pc = 0x3468c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3468c8: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x3468c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3468cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3468ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3468d0: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x3468d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3468d4: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x3468d4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3468d8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x3468d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3468dc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3468dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3468e0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3468E0u;
    {
        const bool branch_taken_0x3468e0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3468E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468E0u;
        // 0x3468e4: 0xe7a20000  swc1        $f2, 0x0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3468e0) {
            ctx->pc = 0x3468F8u;
            goto label_3468f8;
        }
    }
    ctx->pc = 0x3468E8u;
    // 0x3468e8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3468e8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3468ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3468ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3468f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3468F0u;
    {
        const bool branch_taken_0x3468f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3468F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468F0u;
        // 0x3468f4: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3468f0) {
            ctx->pc = 0x346914u;
            goto label_346914;
        }
    }
    ctx->pc = 0x3468F8u;
label_3468f8:
    // 0x3468f8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3468f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3468fc: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3468fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346900: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346908: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34690c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34690cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346910: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346914:
    // 0x346914: 0xc6c1006c  lwc1        $f1, 0x6C($s6)
    ctx->pc = 0x346914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346918: 0xc6c20060  lwc1        $f2, 0x60($s6)
    ctx->pc = 0x346918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34691c: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x34691cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x346920: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346920u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346924: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346928: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346928u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34692c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x34692cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x346930: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x346930u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x346934: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346934u;
    {
        const bool branch_taken_0x346934 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346934u;
        // 0x346938: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346934) {
            ctx->pc = 0x34694Cu;
            goto label_34694c;
        }
    }
    ctx->pc = 0x34693Cu;
    // 0x34693c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x34693cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346940: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346944: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346944u;
    {
        const bool branch_taken_0x346944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346944u;
        // 0x346948: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346944) {
            ctx->pc = 0x346968u;
            goto label_346968;
        }
    }
    ctx->pc = 0x34694Cu;
label_34694c:
    // 0x34694c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x34694cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x346950: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346950u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346954: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34695c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34695cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346960: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346964: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346968:
    // 0x346968: 0xc6c10070  lwc1        $f1, 0x70($s6)
    ctx->pc = 0x346968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34696c: 0xc6c20064  lwc1        $f2, 0x64($s6)
    ctx->pc = 0x34696cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346970: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x346970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346974: 0x7fa700d0  sq          $a3, 0xD0($sp)
    ctx->pc = 0x346974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 7));
    // 0x346978: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x346978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34697c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34697cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346980: 0x7fa900e0  sq          $t1, 0xE0($sp)
    ctx->pc = 0x346980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    // 0x346984: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346984u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346988: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x346988u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x34698c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34698cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x346990: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x346990u;
    SET_GPR_U32(ctx, 31, 0x346998u);
    ctx->pc = 0x346994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346990u;
    // 0x346994: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x346990u, 0x346998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346998u;
label_346998:
    // 0x346998: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x346998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x34699c: 0x7ba700d0  lq          $a3, 0xD0($sp)
    ctx->pc = 0x34699cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3469a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3469A0u;
    {
        const bool branch_taken_0x3469a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3469A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469A0u;
        // 0x3469a4: 0x7ba900e0  lq          $t1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3469a0) {
            ctx->pc = 0x3469C0u;
            goto label_3469c0;
        }
    }
    ctx->pc = 0x3469A8u;
    // 0x3469a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3469a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3469ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3469acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3469b0: 0xc104d84  jal         func_413610
    ctx->pc = 0x3469B0u;
    SET_GPR_U32(ctx, 31, 0x3469B8u);
    ctx->pc = 0x3469B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3469B0u;
    // 0x3469b4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x3469B0u, 0x3469B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3469B8u;
label_3469b8:
    // 0x3469b8: 0x7ba900e0  lq          $t1, 0xE0($sp)
    ctx->pc = 0x3469b8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3469bc: 0x7ba700d0  lq          $a3, 0xD0($sp)
    ctx->pc = 0x3469bcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3469c0:
    // 0x3469c0: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x3469c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3469c4: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x3469c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3469c8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3469C8u;
    {
        const bool branch_taken_0x3469c8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3469CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469C8u;
        // 0x3469cc: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3469c8) {
            ctx->pc = 0x3469E0u;
            goto label_3469e0;
        }
    }
    ctx->pc = 0x3469D0u;
    // 0x3469d0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3469d0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3469d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3469d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3469d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3469D8u;
    {
        const bool branch_taken_0x3469d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3469DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3469D8u;
        // 0x3469dc: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3469d8) {
            ctx->pc = 0x3469F8u;
            goto label_3469f8;
        }
    }
    ctx->pc = 0x3469E0u;
label_3469e0:
    // 0x3469e0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3469e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3469e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3469e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3469e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3469e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3469ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3469ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3469f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3469f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3469f4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3469f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3469f8:
    // 0x3469f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3469f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3469fc: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x3469fcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346a00: 0xc6c20050  lwc1        $f2, 0x50($s6)
    ctx->pc = 0x346a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346a04: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x346a04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x346a08: 0xc6c0004c  lwc1        $f0, 0x4C($s6)
    ctx->pc = 0x346a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346a0c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x346a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346a10: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x346a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x346a14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x346a14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x346a18: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x346a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x346a1c: 0xc6c20050  lwc1        $f2, 0x50($s6)
    ctx->pc = 0x346a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346a20: 0xc6c1004c  lwc1        $f1, 0x4C($s6)
    ctx->pc = 0x346a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346a24: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x346a24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x346a28: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x346a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346a2c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x346a2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x346a30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x346a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x346a34: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x346a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x346a38: 0xc6c10050  lwc1        $f1, 0x50($s6)
    ctx->pc = 0x346a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346a3c: 0xc6c2004c  lwc1        $f2, 0x4C($s6)
    ctx->pc = 0x346a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346a40: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x346a40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x346a44: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x346a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346a48: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x346a48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x346a4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x346a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x346a50: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x346a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x346a54: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346a58: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346A58u;
    {
        const bool branch_taken_0x346a58 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A58u;
        // 0x346a5c: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346a58) {
            ctx->pc = 0x346A70u;
            goto label_346a70;
        }
    }
    ctx->pc = 0x346A60u;
    // 0x346a60: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346a60u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346a64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346a64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346a68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346A68u;
    {
        const bool branch_taken_0x346a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A68u;
        // 0x346a6c: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346a68) {
            ctx->pc = 0x346A8Cu;
            goto label_346a8c;
        }
    }
    ctx->pc = 0x346A70u;
label_346a70:
    // 0x346a70: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x346a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x346a74: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346a78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346a80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346a84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346a88: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346a8c:
    // 0x346a8c: 0xc6c10028  lwc1        $f1, 0x28($s6)
    ctx->pc = 0x346a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346a90: 0xc6c2001c  lwc1        $f2, 0x1C($s6)
    ctx->pc = 0x346a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346a94: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x346a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x346a98: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346a98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346a9c: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346aa0: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346aa0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346aa4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x346aa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x346aa8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x346aa8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x346aac: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346AACu;
    {
        const bool branch_taken_0x346aac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346AACu;
        // 0x346ab0: 0xe7a20000  swc1        $f2, 0x0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346aac) {
            ctx->pc = 0x346AC4u;
            goto label_346ac4;
        }
    }
    ctx->pc = 0x346AB4u;
    // 0x346ab4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346ab4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346ab8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346ab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346abc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346ABCu;
    {
        const bool branch_taken_0x346abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346ABCu;
        // 0x346ac0: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346abc) {
            ctx->pc = 0x346AE0u;
            goto label_346ae0;
        }
    }
    ctx->pc = 0x346AC4u;
label_346ac4:
    // 0x346ac4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x346ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x346ac8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346acc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346ad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346ad4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346ad8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346ad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346adc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346adcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346ae0:
    // 0x346ae0: 0xc6c1002c  lwc1        $f1, 0x2C($s6)
    ctx->pc = 0x346ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346ae4: 0xc6c20020  lwc1        $f2, 0x20($s6)
    ctx->pc = 0x346ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346ae8: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x346ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x346aec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346af0: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346af4: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346af4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346af8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x346af8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x346afc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x346afcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x346b00: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346B00u;
    {
        const bool branch_taken_0x346b00 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B00u;
        // 0x346b04: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b00) {
            ctx->pc = 0x346B18u;
            goto label_346b18;
        }
    }
    ctx->pc = 0x346B08u;
    // 0x346b08: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346b08u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346b0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346b10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346B10u;
    {
        const bool branch_taken_0x346b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B10u;
        // 0x346b14: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b10) {
            ctx->pc = 0x346B34u;
            goto label_346b34;
        }
    }
    ctx->pc = 0x346B18u;
label_346b18:
    // 0x346b18: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x346b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x346b1c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346b20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346b28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346b2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346b30: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346b34:
    // 0x346b34: 0xc6c10030  lwc1        $f1, 0x30($s6)
    ctx->pc = 0x346b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346b38: 0xc6c20024  lwc1        $f2, 0x24($s6)
    ctx->pc = 0x346b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346b3c: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x346b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x346b40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346b40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346b44: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346b44u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346b48: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x346b48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x346b4c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x346b4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x346b50: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x346B50u;
    {
        const bool branch_taken_0x346b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x346B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B50u;
        // 0x346b54: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b50) {
            ctx->pc = 0x346B78u;
            goto label_346b78;
        }
    }
    ctx->pc = 0x346B58u;
    // 0x346b58: 0x7fa700d0  sq          $a3, 0xD0($sp)
    ctx->pc = 0x346b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 7));
    // 0x346b5c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x346b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x346b60: 0x7fa900e0  sq          $t1, 0xE0($sp)
    ctx->pc = 0x346b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    // 0x346b64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x346b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346b68: 0xc104d64  jal         func_413590
    ctx->pc = 0x346B68u;
    SET_GPR_U32(ctx, 31, 0x346B70u);
    ctx->pc = 0x346B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346B68u;
    // 0x346b6c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x346B68u, 0x346B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346B70u;
label_346b70:
    // 0x346b70: 0x7ba900e0  lq          $t1, 0xE0($sp)
    ctx->pc = 0x346b70u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x346b74: 0x7ba700d0  lq          $a3, 0xD0($sp)
    ctx->pc = 0x346b74u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_346b78:
    // 0x346b78: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x346b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x346b7c: 0x24a4c2c8  addiu       $a0, $a1, -0x3D38
    ctx->pc = 0x346b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951624));
    // 0x346b80: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x346b80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C37Cu));
    // 0x346b84: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x346B84u;
    {
        const bool branch_taken_0x346b84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x346B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B84u;
        // 0x346b88: 0x8fa600a4  lw          $a2, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346b84) {
            ctx->pc = 0x346BA8u;
            goto label_346ba8;
        }
    }
    ctx->pc = 0x346B8Cu;
    // 0x346b8c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x346b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346b90: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x346b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x346b94: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x346b94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x346b98: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x346b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346b9c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x346b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x346ba0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x346ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346ba4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x346ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_346ba8:
    // 0x346ba8: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x346ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x346bac: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x346BACu;
    {
        const bool branch_taken_0x346bac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x346BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BACu;
        // 0x346bb0: 0x8fac00a4  lw          $t4, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346bac) {
            ctx->pc = 0x346BF8u;
            goto label_346bf8;
        }
    }
    ctx->pc = 0x346BB4u;
    // 0x346bb4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x346bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x346bb8: 0xe4540028  swc1        $f20, 0x28($v0)
    ctx->pc = 0x346bb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x346bbc: 0xe4540014  swc1        $f20, 0x14($v0)
    ctx->pc = 0x346bbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x346bc0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x346bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x346bc4: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x346bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x346bc8: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x346bc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x346bcc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x346bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x346bd0: 0xe4570010  swc1        $f23, 0x10($v0)
    ctx->pc = 0x346bd0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x346bd4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x346bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x346bd8: 0xe4570008  swc1        $f23, 0x8($v0)
    ctx->pc = 0x346bd8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x346bdc: 0xe4570004  swc1        $f23, 0x4($v0)
    ctx->pc = 0x346bdcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x346be0: 0xe4570024  swc1        $f23, 0x24($v0)
    ctx->pc = 0x346be0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x346be4: 0xe4570020  swc1        $f23, 0x20($v0)
    ctx->pc = 0x346be4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x346be8: 0xe4570018  swc1        $f23, 0x18($v0)
    ctx->pc = 0x346be8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x346bec: 0xe4570038  swc1        $f23, 0x38($v0)
    ctx->pc = 0x346becu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x346bf0: 0xe4570034  swc1        $f23, 0x34($v0)
    ctx->pc = 0x346bf0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x346bf4: 0xe4570030  swc1        $f23, 0x30($v0)
    ctx->pc = 0x346bf4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_346bf8:
    // 0x346bf8: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x346bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x346bfc: 0x440006b  bltz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x346BFCu;
    {
        const bool branch_taken_0x346bfc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x346C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346BFCu;
        // 0x346c00: 0x2121018  mult        $v0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346bfc) {
            ctx->pc = 0x346DACu;
            goto label_346dac;
        }
    }
    ctx->pc = 0x346C04u;
    // 0x346c04: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346c04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346c08: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346C08u;
    {
        const bool branch_taken_0x346c08 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C08u;
        // 0x346c0c: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c08) {
            ctx->pc = 0x346C20u;
            goto label_346c20;
        }
    }
    ctx->pc = 0x346C10u;
    // 0x346c10: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346c10u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346c14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346c18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x346C18u;
    {
        const bool branch_taken_0x346c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C18u;
        // 0x346c1c: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c18) {
            ctx->pc = 0x346C38u;
            goto label_346c38;
        }
    }
    ctx->pc = 0x346C20u;
label_346c20:
    // 0x346c20: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346c24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346c28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346c2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346c30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346c34: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346c38:
    // 0x346c38: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x346c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x346c3c: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x346c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x346c40: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x346c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346c44: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346c48: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x346c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346c4c: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346c50: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346c50u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346c54: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x346c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x346c58: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x346c58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x346c5c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346C5Cu;
    {
        const bool branch_taken_0x346c5c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C5Cu;
        // 0x346c60: 0xe7a20030  swc1        $f2, 0x30($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c5c) {
            ctx->pc = 0x346C74u;
            goto label_346c74;
        }
    }
    ctx->pc = 0x346C64u;
    // 0x346c64: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346c64u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346c68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346c6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346C6Cu;
    {
        const bool branch_taken_0x346c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346C6Cu;
        // 0x346c70: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346c6c) {
            ctx->pc = 0x346C90u;
            goto label_346c90;
        }
    }
    ctx->pc = 0x346C74u;
label_346c74:
    // 0x346c74: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x346c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x346c78: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346c7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346c84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346c84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346c88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346c88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346c8c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346c8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346c90:
    // 0x346c90: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x346c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x346c94: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x346c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x346c98: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x346c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346c9c: 0x2484c2c8  addiu       $a0, $a0, -0x3D38
    ctx->pc = 0x346c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951624));
    // 0x346ca0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346ca4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x346ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346ca8: 0x8c8200c4  lw          $v0, 0xC4($a0)
    ctx->pc = 0x346ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C38Cu));
    // 0x346cac: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346cacu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346cb0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x346cb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x346cb4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x346cb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x346cb8: 0x4400040  bltz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x346CB8u;
    {
        const bool branch_taken_0x346cb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x346CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CB8u;
        // 0x346cbc: 0xe7a20034  swc1        $f2, 0x34($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346cb8) {
            ctx->pc = 0x346DBCu;
            goto label_346dbc;
        }
    }
    ctx->pc = 0x346CC0u;
    // 0x346cc0: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x346cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x346cc4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x346cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346cc8: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x346cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x346ccc: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x346cccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x346cd0: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x346cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x346cd4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x346cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346cd8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x346cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x346cdc: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346ce0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x346ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346ce4: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x346ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x346ce8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x346ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346cec: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346CECu;
    {
        const bool branch_taken_0x346cec = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CECu;
        // 0x346cf0: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346cec) {
            ctx->pc = 0x346D04u;
            goto label_346d04;
        }
    }
    ctx->pc = 0x346CF4u;
    // 0x346cf4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346cf4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346cf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346cfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346CFCu;
    {
        const bool branch_taken_0x346cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346CFCu;
        // 0x346d00: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346cfc) {
            ctx->pc = 0x346D20u;
            goto label_346d20;
        }
    }
    ctx->pc = 0x346D04u;
label_346d04:
    // 0x346d04: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x346d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x346d08: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346d0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346d14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346d14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346d18: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346d18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346d1c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346d20:
    // 0x346d20: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x346d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x346d24: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x346d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x346d28: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x346d28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x346d2c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x346d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346d30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346d34: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x346d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346d38: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346d3c: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346d3cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346d40: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x346d40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x346d44: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x346d44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x346d48: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x346d48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x346d4c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346D4Cu;
    {
        const bool branch_taken_0x346d4c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D4Cu;
        // 0x346d50: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d4c) {
            ctx->pc = 0x346D64u;
            goto label_346d64;
        }
    }
    ctx->pc = 0x346D54u;
    // 0x346d54: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346d54u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346d58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346d5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346D5Cu;
    {
        const bool branch_taken_0x346d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D5Cu;
        // 0x346d60: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d5c) {
            ctx->pc = 0x346D80u;
            goto label_346d80;
        }
    }
    ctx->pc = 0x346D64u;
label_346d64:
    // 0x346d64: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x346d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x346d68: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346d6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346d74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346d78: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346d7c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346d7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346d80:
    // 0x346d80: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x346d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x346d84: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x346d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x346d88: 0xc462001c  lwc1        $f2, 0x1C($v1)
    ctx->pc = 0x346d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346d8c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346d8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346d90: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x346d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346d94: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346d94u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346d98: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x346d98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x346d9c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x346d9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x346da0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x346da0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x346da4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x346DA4u;
    {
        const bool branch_taken_0x346da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DA4u;
        // 0x346da8: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346da4) {
            ctx->pc = 0x346DBCu;
            goto label_346dbc;
        }
    }
    ctx->pc = 0x346DACu;
label_346dac:
    // 0x346dac: 0xc6c00074  lwc1        $f0, 0x74($s6)
    ctx->pc = 0x346dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346db0: 0xc6c10078  lwc1        $f1, 0x78($s6)
    ctx->pc = 0x346db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346db4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x346db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x346db8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x346db8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_346dbc:
    // 0x346dbc: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x346dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x346dc0: 0x2484c2c8  addiu       $a0, $a0, -0x3D38
    ctx->pc = 0x346dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951624));
    // 0x346dc4: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x346dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C364u));
    // 0x346dc8: 0x44000be  bltz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x346DC8u;
    {
        const bool branch_taken_0x346dc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x346DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DC8u;
        // 0x346dcc: 0x2121018  mult        $v0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346dc8) {
            ctx->pc = 0x3470C4u;
            goto label_3470c4;
        }
    }
    ctx->pc = 0x346DD0u;
    // 0x346dd0: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346dd4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346DD4u;
    {
        const bool branch_taken_0x346dd4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DD4u;
        // 0x346dd8: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346dd4) {
            ctx->pc = 0x346DECu;
            goto label_346dec;
        }
    }
    ctx->pc = 0x346DDCu;
    // 0x346ddc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346ddcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346de0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346de4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x346DE4u;
    {
        const bool branch_taken_0x346de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DE4u;
        // 0x346de8: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346de4) {
            ctx->pc = 0x346E04u;
            goto label_346e04;
        }
    }
    ctx->pc = 0x346DECu;
label_346dec:
    // 0x346dec: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346decu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346df0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346df4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346df8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346df8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346dfc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346dfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346e00: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346e04:
    // 0x346e04: 0xc7c10010  lwc1        $f1, 0x10($fp)
    ctx->pc = 0x346e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346e08: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x346e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346e0c: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x346e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x346e10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346e14: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346e18: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346e18u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346e1c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x346e1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x346e20: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x346e20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x346e24: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346E24u;
    {
        const bool branch_taken_0x346e24 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E24u;
        // 0x346e28: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e24) {
            ctx->pc = 0x346E3Cu;
            goto label_346e3c;
        }
    }
    ctx->pc = 0x346E2Cu;
    // 0x346e2c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346e2cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346e30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346e34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346E34u;
    {
        const bool branch_taken_0x346e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E34u;
        // 0x346e38: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e34) {
            ctx->pc = 0x346E58u;
            goto label_346e58;
        }
    }
    ctx->pc = 0x346E3Cu;
label_346e3c:
    // 0x346e3c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x346e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x346e40: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346e44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346e50: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346e50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346e54: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346e54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346e58:
    // 0x346e58: 0xc7c10014  lwc1        $f1, 0x14($fp)
    ctx->pc = 0x346e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346e5c: 0xc7c20004  lwc1        $f2, 0x4($fp)
    ctx->pc = 0x346e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346e60: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x346e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x346e64: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346e64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346e68: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346e6c: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346e6cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346e70: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x346e70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x346e74: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x346e74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x346e78: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346E78u;
    {
        const bool branch_taken_0x346e78 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E78u;
        // 0x346e7c: 0xe7a20054  swc1        $f2, 0x54($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e78) {
            ctx->pc = 0x346E90u;
            goto label_346e90;
        }
    }
    ctx->pc = 0x346E80u;
    // 0x346e80: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346e80u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346e84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346e84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346e88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346E88u;
    {
        const bool branch_taken_0x346e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E88u;
        // 0x346e8c: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e88) {
            ctx->pc = 0x346EACu;
            goto label_346eac;
        }
    }
    ctx->pc = 0x346E90u;
label_346e90:
    // 0x346e90: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x346e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x346e94: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346e98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346ea0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346ea4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346ea8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346eac:
    // 0x346eac: 0xc7c10018  lwc1        $f1, 0x18($fp)
    ctx->pc = 0x346eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346eb0: 0xc7c20008  lwc1        $f2, 0x8($fp)
    ctx->pc = 0x346eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346eb4: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x346eb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x346eb8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346eb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346ebc: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346ec0: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346ec0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346ec4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x346ec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x346ec8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x346ec8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x346ecc: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346ECCu;
    {
        const bool branch_taken_0x346ecc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346ECCu;
        // 0x346ed0: 0xe7a20058  swc1        $f2, 0x58($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346ecc) {
            ctx->pc = 0x346EE4u;
            goto label_346ee4;
        }
    }
    ctx->pc = 0x346ED4u;
    // 0x346ed4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346ed4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346ed8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346edc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346EDCu;
    {
        const bool branch_taken_0x346edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346EDCu;
        // 0x346ee0: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346edc) {
            ctx->pc = 0x346F00u;
            goto label_346f00;
        }
    }
    ctx->pc = 0x346EE4u;
label_346ee4:
    // 0x346ee4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x346ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x346ee8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346eec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346ef4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346ef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346ef8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346ef8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346efc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346f00:
    // 0x346f00: 0xc7c1001c  lwc1        $f1, 0x1C($fp)
    ctx->pc = 0x346f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346f04: 0xc7c2000c  lwc1        $f2, 0xC($fp)
    ctx->pc = 0x346f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346f08: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x346f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x346f0c: 0x2463c2c8  addiu       $v1, $v1, -0x3D38
    ctx->pc = 0x346f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951624));
    // 0x346f10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346f10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346f14: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x346f14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C384u));
    // 0x346f18: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346f18u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346f1c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x346f1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x346f20: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x346f20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x346f24: 0x4400067  bltz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x346F24u;
    {
        const bool branch_taken_0x346f24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x346F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F24u;
        // 0x346f28: 0xe7a2005c  swc1        $f2, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346f24) {
            ctx->pc = 0x3470C4u;
            goto label_3470c4;
        }
    }
    ctx->pc = 0x346F2Cu;
    // 0x346f2c: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x346f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x346f30: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x346f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346f34: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x346f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x346f38: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x346f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x346f3c: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x346f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x346f40: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x346f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346f44: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x346f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x346f48: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346f4c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x346f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346f50: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x346f50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x346f54: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x346f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346f58: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346F58u;
    {
        const bool branch_taken_0x346f58 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F58u;
        // 0x346f5c: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346f58) {
            ctx->pc = 0x346F70u;
            goto label_346f70;
        }
    }
    ctx->pc = 0x346F60u;
    // 0x346f60: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346f60u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346f64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346f68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346F68u;
    {
        const bool branch_taken_0x346f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F68u;
        // 0x346f6c: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346f68) {
            ctx->pc = 0x346F8Cu;
            goto label_346f8c;
        }
    }
    ctx->pc = 0x346F70u;
label_346f70:
    // 0x346f70: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x346f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x346f74: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346f78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346f80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346f84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346f88: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346f8c:
    // 0x346f8c: 0xc7c20030  lwc1        $f2, 0x30($fp)
    ctx->pc = 0x346f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346f90: 0xc7c10020  lwc1        $f1, 0x20($fp)
    ctx->pc = 0x346f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346f94: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x346f94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x346f98: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x346f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x346f9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346fa0: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x346fa4: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x346fa4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x346fa8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x346fa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x346fac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x346facu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x346fb0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x346fb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x346fb4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346FB4u;
    {
        const bool branch_taken_0x346fb4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x346FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346FB4u;
        // 0x346fb8: 0xe4810010  swc1        $f1, 0x10($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x346fb4) {
            ctx->pc = 0x346FCCu;
            goto label_346fcc;
        }
    }
    ctx->pc = 0x346FBCu;
    // 0x346fbc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x346fbcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346fc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346fc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x346FC4u;
    {
        const bool branch_taken_0x346fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346FC4u;
        // 0x346fc8: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x346fc4) {
            ctx->pc = 0x346FE8u;
            goto label_346fe8;
        }
    }
    ctx->pc = 0x346FCCu;
label_346fcc:
    // 0x346fcc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x346fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x346fd0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x346fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x346fd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x346fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x346fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x346fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346fdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x346fdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x346fe0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346fe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346fe4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x346fe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_346fe8:
    // 0x346fe8: 0xc7c20034  lwc1        $f2, 0x34($fp)
    ctx->pc = 0x346fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346fec: 0xc7c10024  lwc1        $f1, 0x24($fp)
    ctx->pc = 0x346fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346ff0: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x346ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x346ff4: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x346ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x346ff8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x346ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x346ffc: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x346ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x347000: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x347000u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x347004: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x347004u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x347008: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x347008u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34700c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x34700cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x347010: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347010u;
    {
        const bool branch_taken_0x347010 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x347014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347010u;
        // 0x347014: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347010) {
            ctx->pc = 0x347028u;
            goto label_347028;
        }
    }
    ctx->pc = 0x347018u;
    // 0x347018: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x347018u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34701c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34701cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347020: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x347020u;
    {
        const bool branch_taken_0x347020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347020u;
        // 0x347024: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347020) {
            ctx->pc = 0x347044u;
            goto label_347044;
        }
    }
    ctx->pc = 0x347028u;
label_347028:
    // 0x347028: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x347028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x34702c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x34702cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x347030: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x347030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347038: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34703c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34703cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347040: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x347040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_347044:
    // 0x347044: 0xc7c20038  lwc1        $f2, 0x38($fp)
    ctx->pc = 0x347044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x347048: 0xc7c10028  lwc1        $f1, 0x28($fp)
    ctx->pc = 0x347048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34704c: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x34704cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x347050: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x347050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x347054: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347058: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x347058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34705c: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x34705cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x347060: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x347060u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x347064: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x347064u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x347068: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x347068u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x34706c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34706Cu;
    {
        const bool branch_taken_0x34706c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x347070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34706Cu;
        // 0x347070: 0xe4810018  swc1        $f1, 0x18($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34706c) {
            ctx->pc = 0x347084u;
            goto label_347084;
        }
    }
    ctx->pc = 0x347074u;
    // 0x347074: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x347074u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347078: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34707c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34707Cu;
    {
        const bool branch_taken_0x34707c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34707Cu;
        // 0x347080: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34707c) {
            ctx->pc = 0x3470A0u;
            goto label_3470a0;
        }
    }
    ctx->pc = 0x347084u;
label_347084:
    // 0x347084: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x347084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x347088: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x347088u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x34708c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34708cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347094: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347098: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34709c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34709cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3470a0:
    // 0x3470a0: 0xc7c2003c  lwc1        $f2, 0x3C($fp)
    ctx->pc = 0x3470a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3470a4: 0xc7c1002c  lwc1        $f1, 0x2C($fp)
    ctx->pc = 0x3470a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3470a8: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x3470a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3470ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3470acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3470b0: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x3470b0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3470b4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3470b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3470b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3470b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3470bc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3470bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3470c0: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x3470c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_3470c4:
    // 0x3470c4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3470c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3470c8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3470c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3470cc: 0x2463c2c8  addiu       $v1, $v1, -0x3D38
    ctx->pc = 0x3470ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951624));
    // 0x3470d0: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x3470d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C378u));
    // 0x3470d4: 0x4400045  bltz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x3470D4u;
    {
        const bool branch_taken_0x3470d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3470D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470D4u;
        // 0x3470d8: 0x2121018  mult        $v0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3470d4) {
            ctx->pc = 0x3471ECu;
            goto label_3471ec;
        }
    }
    ctx->pc = 0x3470DCu;
    // 0x3470dc: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x3470dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3470e0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3470E0u;
    {
        const bool branch_taken_0x3470e0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3470E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470E0u;
        // 0x3470e4: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3470e0) {
            ctx->pc = 0x3470F8u;
            goto label_3470f8;
        }
    }
    ctx->pc = 0x3470E8u;
    // 0x3470e8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3470e8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3470ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3470ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3470f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3470F0u;
    {
        const bool branch_taken_0x3470f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3470F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470F0u;
        // 0x3470f4: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3470f0) {
            ctx->pc = 0x347110u;
            goto label_347110;
        }
    }
    ctx->pc = 0x3470F8u;
label_3470f8:
    // 0x3470f8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3470f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3470fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3470fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347104: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347108: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34710c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34710cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_347110:
    // 0x347110: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x347110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x347114: 0xc78380b0  lwc1        $f3, -0x7F50($gp)
    ctx->pc = 0x347114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x347118: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x347118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34711c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34711cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347120: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x347120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x347124: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x347124u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x347128: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x347128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x34712c: 0x46011580  add.s       $f22, $f2, $f1
    ctx->pc = 0x34712cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x347130: 0x46161834  c.lt.s      $f3, $f22
    ctx->pc = 0x347130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347134: 0x0  nop
    ctx->pc = 0x347134u;
    // NOP
    // 0x347138: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x347138u;
    {
        const bool branch_taken_0x347138 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x347138) {
            ctx->pc = 0x34713Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347138u;
            // 0x34713c: 0x4619b581  sub.s       $f22, $f22, $f25 (Delay Slot)
            ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x347160u;
            goto label_347160;
        }
    }
    ctx->pc = 0x347140u;
    // 0x347140: 0x4618b034  c.lt.s      $f22, $f24
    ctx->pc = 0x347140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347144: 0x0  nop
    ctx->pc = 0x347144u;
    // NOP
    // 0x347148: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x347148u;
    {
        const bool branch_taken_0x347148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347148u;
        // 0x34714c: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347148) {
            ctx->pc = 0x347174u;
            goto label_347174;
        }
    }
    ctx->pc = 0x347150u;
    // 0x347150: 0x46161834  c.lt.s      $f3, $f22
    ctx->pc = 0x347150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347154: 0x0  nop
    ctx->pc = 0x347154u;
    // NOP
    // 0x347158: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x347158u;
    {
        const bool branch_taken_0x347158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x347158) {
            ctx->pc = 0x34715Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347158u;
            // 0x34715c: 0x4619b581  sub.s       $f22, $f22, $f25 (Delay Slot)
            ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x347160u;
            goto label_347160;
        }
    }
    ctx->pc = 0x347160u;
label_347160:
    // 0x347160: 0x4618b034  c.lt.s      $f22, $f24
    ctx->pc = 0x347160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347164: 0x0  nop
    ctx->pc = 0x347164u;
    // NOP
    // 0x347168: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x347168u;
    {
        const bool branch_taken_0x347168 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x347168) {
            ctx->pc = 0x34716Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347168u;
            // 0x34716c: 0x4619b580  add.s       $f22, $f22, $f25 (Delay Slot)
            ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x347170u;
            goto label_347170;
        }
    }
    ctx->pc = 0x347170u;
label_347170:
    // 0x347170: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x347170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_347174:
    // 0x347174: 0x2484c2c8  addiu       $a0, $a0, -0x3D38
    ctx->pc = 0x347174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951624));
    // 0x347178: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x347178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x34717c: 0x440001b  bltz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x34717Cu;
    {
        const bool branch_taken_0x34717c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x347180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34717Cu;
        // 0x347180: 0x2121818  mult        $v1, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34717c) {
            ctx->pc = 0x3471ECu;
            goto label_3471ec;
        }
    }
    ctx->pc = 0x347184u;
    // 0x347184: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x347184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x347188: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x347188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x34718c: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x34718cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x347190: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347190u;
    {
        const bool branch_taken_0x347190 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x347194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347190u;
        // 0x347194: 0xe4960000  swc1        $f22, 0x0($a0) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347190) {
            ctx->pc = 0x3471A8u;
            goto label_3471a8;
        }
    }
    ctx->pc = 0x347198u;
    // 0x347198: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x347198u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34719c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34719cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3471a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3471A0u;
    {
        const bool branch_taken_0x3471a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3471A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3471A0u;
        // 0x3471a4: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3471a0) {
            ctx->pc = 0x3471C4u;
            goto label_3471c4;
        }
    }
    ctx->pc = 0x3471A8u;
label_3471a8:
    // 0x3471a8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3471a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3471ac: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3471acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3471b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3471b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3471b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3471b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3471b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3471b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3471bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3471bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3471c0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3471c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3471c4:
    // 0x3471c4: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x3471c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3471c8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3471c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3471cc: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x3471ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3471d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3471d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3471d4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3471d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3471d8: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x3471d8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3471dc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3471dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3471e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3471e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3471e4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3471e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3471e8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3471e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3471ec:
    // 0x3471ec: 0x3c0c0062  lui         $t4, 0x62
    ctx->pc = 0x3471ecu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)98 << 16));
    // 0x3471f0: 0x258cc2c8  addiu       $t4, $t4, -0x3D38
    ctx->pc = 0x3471f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294951624));
    // 0x3471f4: 0x8d8200a0  lw          $v0, 0xA0($t4)
    ctx->pc = 0x3471f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C368u));
    // 0x3471f8: 0x44000be  bltz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x3471F8u;
    {
        const bool branch_taken_0x3471f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3471FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3471F8u;
        // 0x3471fc: 0x2121018  mult        $v0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3471f8) {
            ctx->pc = 0x3474F4u;
            goto label_3474f4;
        }
    }
    ctx->pc = 0x347200u;
    // 0x347200: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x347200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x347204: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347204u;
    {
        const bool branch_taken_0x347204 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x347208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347204u;
        // 0x347208: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347204) {
            ctx->pc = 0x34721Cu;
            goto label_34721c;
        }
    }
    ctx->pc = 0x34720Cu;
    // 0x34720c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x34720cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347210: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347214: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x347214u;
    {
        const bool branch_taken_0x347214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347214u;
        // 0x347218: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347214) {
            ctx->pc = 0x347234u;
            goto label_347234;
        }
    }
    ctx->pc = 0x34721Cu;
label_34721c:
    // 0x34721c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x34721cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x347220: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x347220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347228: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34722c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34722cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347230: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x347230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_347234:
    // 0x347234: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x347234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347238: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x347238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34723c: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x34723cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x347240: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347244: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x347244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x347248: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x347248u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34724c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x34724cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x347250: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x347250u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x347254: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347254u;
    {
        const bool branch_taken_0x347254 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x347258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347254u;
        // 0x347258: 0xe7a20040  swc1        $f2, 0x40($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347254) {
            ctx->pc = 0x34726Cu;
            goto label_34726c;
        }
    }
    ctx->pc = 0x34725Cu;
    // 0x34725c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x34725cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347260: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347264: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x347264u;
    {
        const bool branch_taken_0x347264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347264u;
        // 0x347268: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347264) {
            ctx->pc = 0x347288u;
            goto label_347288;
        }
    }
    ctx->pc = 0x34726Cu;
label_34726c:
    // 0x34726c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x34726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x347270: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x347270u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x347274: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x347274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34727c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34727cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347280: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347280u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347284: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x347284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_347288:
    // 0x347288: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x347288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34728c: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x34728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x347290: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x347290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x347294: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347298: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x347298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34729c: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x34729cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3472a0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x3472a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3472a4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3472a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3472a8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3472A8u;
    {
        const bool branch_taken_0x3472a8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3472ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3472A8u;
        // 0x3472ac: 0xe7a20044  swc1        $f2, 0x44($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3472a8) {
            ctx->pc = 0x3472C0u;
            goto label_3472c0;
        }
    }
    ctx->pc = 0x3472B0u;
    // 0x3472b0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3472b0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3472b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3472b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3472b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3472B8u;
    {
        const bool branch_taken_0x3472b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3472BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3472B8u;
        // 0x3472bc: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3472b8) {
            ctx->pc = 0x3472DCu;
            goto label_3472dc;
        }
    }
    ctx->pc = 0x3472C0u;
label_3472c0:
    // 0x3472c0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3472c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3472c4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3472c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3472c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3472c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3472cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3472ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3472d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3472d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3472d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3472d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3472d8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3472d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3472dc:
    // 0x3472dc: 0xc6e10028  lwc1        $f1, 0x28($s7)
    ctx->pc = 0x3472dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3472e0: 0xc6e20020  lwc1        $f2, 0x20($s7)
    ctx->pc = 0x3472e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3472e4: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x3472e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3472e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3472e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3472ec: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x3472ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3472f0: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x3472f0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3472f4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x3472f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3472f8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3472f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3472fc: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3472FCu;
    {
        const bool branch_taken_0x3472fc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x347300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3472FCu;
        // 0x347300: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3472fc) {
            ctx->pc = 0x347314u;
            goto label_347314;
        }
    }
    ctx->pc = 0x347304u;
    // 0x347304: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x347304u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347308: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34730c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34730Cu;
    {
        const bool branch_taken_0x34730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34730Cu;
        // 0x347310: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34730c) {
            ctx->pc = 0x347330u;
            goto label_347330;
        }
    }
    ctx->pc = 0x347314u;
label_347314:
    // 0x347314: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x347314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x347318: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x347318u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x34731c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34731cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347324: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347328: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34732c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34732cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_347330:
    // 0x347330: 0xc6e1002c  lwc1        $f1, 0x2C($s7)
    ctx->pc = 0x347330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347334: 0xc6e20024  lwc1        $f2, 0x24($s7)
    ctx->pc = 0x347334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x347338: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x347338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x34733c: 0x2463c2c8  addiu       $v1, $v1, -0x3D38
    ctx->pc = 0x34733cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951624));
    // 0x347340: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347344: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x347344u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C388u));
    // 0x347348: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x347348u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34734c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x34734cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x347350: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x347350u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x347354: 0x4400067  bltz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x347354u;
    {
        const bool branch_taken_0x347354 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x347358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347354u;
        // 0x347358: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347354) {
            ctx->pc = 0x3474F4u;
            goto label_3474f4;
        }
    }
    ctx->pc = 0x34735Cu;
    // 0x34735c: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x34735cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x347360: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x347360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347364: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x347364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x347368: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x347368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34736c: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x34736cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x347370: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x347370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347374: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x347374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x347378: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x347378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34737c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x34737cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347380: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x347380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x347384: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x347384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347388: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347388u;
    {
        const bool branch_taken_0x347388 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x34738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347388u;
        // 0x34738c: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347388) {
            ctx->pc = 0x3473A0u;
            goto label_3473a0;
        }
    }
    ctx->pc = 0x347390u;
    // 0x347390: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x347390u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347394: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347398: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x347398u;
    {
        const bool branch_taken_0x347398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347398u;
        // 0x34739c: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347398) {
            ctx->pc = 0x3473BCu;
            goto label_3473bc;
        }
    }
    ctx->pc = 0x3473A0u;
label_3473a0:
    // 0x3473a0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3473a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3473a4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3473a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3473a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3473a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3473ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3473acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3473b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3473b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3473b4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3473b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3473b8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3473b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3473bc:
    // 0x3473bc: 0xc6e20018  lwc1        $f2, 0x18($s7)
    ctx->pc = 0x3473bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3473c0: 0xc6e10010  lwc1        $f1, 0x10($s7)
    ctx->pc = 0x3473c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3473c4: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x3473c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3473c8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3473c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3473cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3473ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3473d0: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x3473d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3473d4: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x3473d4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3473d8: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3473d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3473dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3473dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3473e0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3473e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3473e4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3473E4u;
    {
        const bool branch_taken_0x3473e4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3473E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473E4u;
        // 0x3473e8: 0xe4810010  swc1        $f1, 0x10($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3473e4) {
            ctx->pc = 0x3473FCu;
            goto label_3473fc;
        }
    }
    ctx->pc = 0x3473ECu;
    // 0x3473ec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3473ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3473f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3473f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3473f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3473F4u;
    {
        const bool branch_taken_0x3473f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3473F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473F4u;
        // 0x3473f8: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3473f4) {
            ctx->pc = 0x347418u;
            goto label_347418;
        }
    }
    ctx->pc = 0x3473FCu;
label_3473fc:
    // 0x3473fc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3473fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x347400: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x347400u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x347404: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x347404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34740c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34740cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347410: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347414: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x347414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_347418:
    // 0x347418: 0xc6e2001c  lwc1        $f2, 0x1C($s7)
    ctx->pc = 0x347418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34741c: 0xc6e10014  lwc1        $f1, 0x14($s7)
    ctx->pc = 0x34741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347420: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x347420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x347424: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x347424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x347428: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34742c: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x34742cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x347430: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x347430u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x347434: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x347434u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x347438: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x347438u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x34743c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x34743cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x347440: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347440u;
    {
        const bool branch_taken_0x347440 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x347444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347440u;
        // 0x347444: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347440) {
            ctx->pc = 0x347458u;
            goto label_347458;
        }
    }
    ctx->pc = 0x347448u;
    // 0x347448: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x347448u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34744c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34744cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347450: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x347450u;
    {
        const bool branch_taken_0x347450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347450u;
        // 0x347454: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347450) {
            ctx->pc = 0x347474u;
            goto label_347474;
        }
    }
    ctx->pc = 0x347458u;
label_347458:
    // 0x347458: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x347458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x34745c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x34745cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x347460: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x347460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34746c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x34746cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347470: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x347470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_347474:
    // 0x347474: 0xc6e20038  lwc1        $f2, 0x38($s7)
    ctx->pc = 0x347474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x347478: 0xc6e10030  lwc1        $f1, 0x30($s7)
    ctx->pc = 0x347478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34747c: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x34747cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x347480: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x347480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x347484: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347488: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x347488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34748c: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x34748cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x347490: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x347490u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x347494: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x347494u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x347498: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x347498u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x34749c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34749Cu;
    {
        const bool branch_taken_0x34749c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3474A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34749Cu;
        // 0x3474a0: 0xe4810018  swc1        $f1, 0x18($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34749c) {
            ctx->pc = 0x3474B4u;
            goto label_3474b4;
        }
    }
    ctx->pc = 0x3474A4u;
    // 0x3474a4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3474a4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3474a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3474a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3474ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3474ACu;
    {
        const bool branch_taken_0x3474ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3474B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474ACu;
        // 0x3474b0: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474ac) {
            ctx->pc = 0x3474D0u;
            goto label_3474d0;
        }
    }
    ctx->pc = 0x3474B4u;
label_3474b4:
    // 0x3474b4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3474b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3474b8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3474b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3474bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3474bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3474c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3474c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3474c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3474c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3474c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3474c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3474cc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3474ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3474d0:
    // 0x3474d0: 0xc6e2003c  lwc1        $f2, 0x3C($s7)
    ctx->pc = 0x3474d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3474d4: 0xc6e10034  lwc1        $f1, 0x34($s7)
    ctx->pc = 0x3474d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3474d8: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x3474d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3474dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3474dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3474e0: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x3474e0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3474e4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3474e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3474e8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3474e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3474ec: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3474ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3474f0: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x3474f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_3474f4:
    // 0x3474f4: 0x12a00151  beqz        $s5, . + 4 + (0x151 << 2)
    ctx->pc = 0x3474F4u;
    {
        const bool branch_taken_0x3474f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3474F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3474F4u;
        // 0x3474f8: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3474f4) {
            ctx->pc = 0x347A3Cu;
            goto label_347a3c;
        }
    }
    ctx->pc = 0x3474FCu;
    // 0x3474fc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3474fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x347500: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x347500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x347504: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x347504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x347508: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x347508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34750c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34750Cu;
    {
        const bool branch_taken_0x34750c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34750Cu;
        // 0x347510: 0x8fa30074  lw          $v1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34750c) {
            ctx->pc = 0x34753Cu;
            goto label_34753c;
        }
    }
    ctx->pc = 0x347514u;
    // 0x347514: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x347514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x347518: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x347518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34751c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34751cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x347520: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x347520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x347524: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x347524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x347528: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x347528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34752c: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x34752cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x347530: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x347530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347534: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x347534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x347538: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x347538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_34753c:
    // 0x34753c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x34753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x347540: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x347540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x347544: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x347544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x347548: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x347548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x34754c: 0x104000ec  beqz        $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x34754Cu;
    {
        const bool branch_taken_0x34754c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34754Cu;
        // 0x347550: 0x2121018  mult        $v0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34754c) {
            ctx->pc = 0x347900u;
            goto label_347900;
        }
    }
    ctx->pc = 0x347554u;
    // 0x347554: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x347554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x347558: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347558u;
    {
        const bool branch_taken_0x347558 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x34755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347558u;
        // 0x34755c: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347558) {
            ctx->pc = 0x347570u;
            goto label_347570;
        }
    }
    ctx->pc = 0x347560u;
    // 0x347560: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x347560u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347564: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347568: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x347568u;
    {
        const bool branch_taken_0x347568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347568u;
        // 0x34756c: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347568) {
            ctx->pc = 0x347588u;
            goto label_347588;
        }
    }
    ctx->pc = 0x347570u;
label_347570:
    // 0x347570: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x347570u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x347574: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x347574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34757c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34757cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347580: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347584: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x347584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_347588:
    // 0x347588: 0xc521004c  lwc1        $f1, 0x4C($t1)
    ctx->pc = 0x347588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34758c: 0xc5220040  lwc1        $f2, 0x40($t1)
    ctx->pc = 0x34758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x347590: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x347590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x347594: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347598: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x347598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34759c: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x34759cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3475a0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x3475a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3475a4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3475a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3475a8: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3475A8u;
    {
        const bool branch_taken_0x3475a8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3475ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3475A8u;
        // 0x3475ac: 0xe7a20000  swc1        $f2, 0x0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3475a8) {
            ctx->pc = 0x3475C0u;
            goto label_3475c0;
        }
    }
    ctx->pc = 0x3475B0u;
    // 0x3475b0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3475b0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3475b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3475b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3475b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3475B8u;
    {
        const bool branch_taken_0x3475b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3475BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3475B8u;
        // 0x3475bc: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3475b8) {
            ctx->pc = 0x3475DCu;
            goto label_3475dc;
        }
    }
    ctx->pc = 0x3475C0u;
label_3475c0:
    // 0x3475c0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3475c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3475c4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3475c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3475c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3475c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3475cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3475ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3475d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3475d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3475d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3475d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3475d8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3475d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3475dc:
    // 0x3475dc: 0xc5210050  lwc1        $f1, 0x50($t1)
    ctx->pc = 0x3475dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3475e0: 0xc5220044  lwc1        $f2, 0x44($t1)
    ctx->pc = 0x3475e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3475e4: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x3475e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3475e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3475e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3475ec: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x3475ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3475f0: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x3475f0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3475f4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x3475f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3475f8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3475f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3475fc: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3475FCu;
    {
        const bool branch_taken_0x3475fc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x347600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3475FCu;
        // 0x347600: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3475fc) {
            ctx->pc = 0x347614u;
            goto label_347614;
        }
    }
    ctx->pc = 0x347604u;
    // 0x347604: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x347604u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34760c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34760Cu;
    {
        const bool branch_taken_0x34760c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34760Cu;
        // 0x347610: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34760c) {
            ctx->pc = 0x347630u;
            goto label_347630;
        }
    }
    ctx->pc = 0x347614u;
label_347614:
    // 0x347614: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x347614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x347618: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x347618u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x34761c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34761cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347624: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347628: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34762c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34762cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_347630:
    // 0x347630: 0xc5210054  lwc1        $f1, 0x54($t1)
    ctx->pc = 0x347630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347634: 0xc5220048  lwc1        $f2, 0x48($t1)
    ctx->pc = 0x347634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x347638: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x347638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34763c: 0x7fa700d0  sq          $a3, 0xD0($sp)
    ctx->pc = 0x34763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 7));
    // 0x347640: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x347640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347644: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347648: 0x7fa900e0  sq          $t1, 0xE0($sp)
    ctx->pc = 0x347648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    // 0x34764c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34764cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347650: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x347650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x347654: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x347654u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x347658: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x347658u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x34765c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34765cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x347660: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x347660u;
    SET_GPR_U32(ctx, 31, 0x347668u);
    ctx->pc = 0x347664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347660u;
    // 0x347664: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x347660u, 0x347668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347668u;
label_347668:
    // 0x347668: 0x7ba700d0  lq          $a3, 0xD0($sp)
    ctx->pc = 0x347668u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x34766c: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34766Cu;
    {
        const bool branch_taken_0x34766c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x347670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34766Cu;
        // 0x347670: 0x7ba900e0  lq          $t1, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34766c) {
            ctx->pc = 0x347684u;
            goto label_347684;
        }
    }
    ctx->pc = 0x347674u;
    // 0x347674: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x347674u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347678: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34767c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34767Cu;
    {
        const bool branch_taken_0x34767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34767Cu;
        // 0x347680: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34767c) {
            ctx->pc = 0x3476A0u;
            goto label_3476a0;
        }
    }
    ctx->pc = 0x347684u;
label_347684:
    // 0x347684: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x347684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x347688: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x347688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x34768c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34768cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347694: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347698: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34769c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34769cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3476a0:
    // 0x3476a0: 0xc5210064  lwc1        $f1, 0x64($t1)
    ctx->pc = 0x3476a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3476a4: 0xc5220058  lwc1        $f2, 0x58($t1)
    ctx->pc = 0x3476a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3476a8: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x3476a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3476ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3476acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3476b0: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x3476b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3476b4: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x3476b4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x3476b8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x3476b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3476bc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3476bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3476c0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3476C0u;
    {
        const bool branch_taken_0x3476c0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3476C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3476C0u;
        // 0x3476c4: 0xe7a20010  swc1        $f2, 0x10($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3476c0) {
            ctx->pc = 0x3476D8u;
            goto label_3476d8;
        }
    }
    ctx->pc = 0x3476C8u;
    // 0x3476c8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3476c8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3476cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3476ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3476d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3476D0u;
    {
        const bool branch_taken_0x3476d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3476D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3476D0u;
        // 0x3476d4: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3476d0) {
            ctx->pc = 0x3476F4u;
            goto label_3476f4;
        }
    }
    ctx->pc = 0x3476D8u;
label_3476d8:
    // 0x3476d8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3476d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3476dc: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3476dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3476e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3476e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3476e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3476e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3476e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3476e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3476ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3476ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3476f0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3476f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3476f4:
    // 0x3476f4: 0xc5210068  lwc1        $f1, 0x68($t1)
    ctx->pc = 0x3476f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3476f8: 0xc522005c  lwc1        $f2, 0x5C($t1)
    ctx->pc = 0x3476f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3476fc: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x3476fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x347700: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347704: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x347704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x347708: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x347708u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x34770c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x34770cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x347710: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x347710u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x347714: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347714u;
    {
        const bool branch_taken_0x347714 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x347718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347714u;
        // 0x347718: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347714) {
            ctx->pc = 0x34772Cu;
            goto label_34772c;
        }
    }
    ctx->pc = 0x34771Cu;
    // 0x34771c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x34771cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347720: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x347720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347724: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x347724u;
    {
        const bool branch_taken_0x347724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347724u;
        // 0x347728: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347724) {
            ctx->pc = 0x347748u;
            goto label_347748;
        }
    }
    ctx->pc = 0x34772Cu;
label_34772c:
    // 0x34772c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x34772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x347730: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x347730u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x347734: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x347734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x347738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x347738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34773c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34773cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x347740: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347744: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x347744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_347748:
    // 0x347748: 0xc521006c  lwc1        $f1, 0x6C($t1)
    ctx->pc = 0x347748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34774c: 0xc5220060  lwc1        $f2, 0x60($t1)
    ctx->pc = 0x34774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x347750: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x347750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x347754: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x347754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x347758: 0x7fa700d0  sq          $a3, 0xD0($sp)
    ctx->pc = 0x347758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 7));
    // 0x34775c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34775cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347760: 0x7fa900e0  sq          $t1, 0xE0($sp)
    ctx->pc = 0x347760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    // 0x347764: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x347764u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x347768: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x347768u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x34776c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x34776cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x347770: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x347770u;
    SET_GPR_U32(ctx, 31, 0x347778u);
    ctx->pc = 0x347774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347770u;
    // 0x347774: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x347770u, 0x347778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347778u;
label_347778:
    // 0x347778: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x347778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x34777c: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x34777cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x347780: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x347780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347784: 0xb2630027  sdl         $v1, 0x27($s3)
    ctx->pc = 0x347784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347788: 0xb6630020  sdr         $v1, 0x20($s3)
    ctx->pc = 0x347788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34778c: 0xae640028  sw          $a0, 0x28($s3)
    ctx->pc = 0x34778cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 4));
    // 0x347790: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x347790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347794: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x347794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x347798: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x347798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34779c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x34779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3477a0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3477a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3477a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3477a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3477a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3477a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3477ac: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x3477acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x3477b0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x3477b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3477b4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x3477b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3477b8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3477b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3477bc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3477bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3477c0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3477c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3477c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3477c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3477c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3477c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3477cc: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x3477ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x3477d0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3477d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3477d4: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x3477d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3477d8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x3477d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3477dc: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x3477dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3477e0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3477e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3477e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3477e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3477e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3477e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3477ec: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x3477ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x3477f0: 0x8fac0074  lw          $t4, 0x74($sp)
    ctx->pc = 0x3477f0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x3477f4: 0x69820007  ldl         $v0, 0x7($t4)
    ctx->pc = 0x3477f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3477f8: 0x6d820000  ldr         $v0, 0x0($t4)
    ctx->pc = 0x3477f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3477fc: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x3477fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x347800: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x347800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347804: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x347804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x347808: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x347808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x34780c: 0x25820010  addiu       $v0, $t4, 0x10
    ctx->pc = 0x34780cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x347810: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x347810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347814: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x347814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x347818: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x347818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34781c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x34781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347820: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x347820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x347824: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x347824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x347828: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x347828u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34782c: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x34782cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x347830: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x347830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x347834: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x347834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x347838: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x347838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34783c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x34783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347840: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x347840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x347844: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x347844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x347848: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x347848u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34784c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x34784cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x347850: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x347850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347854: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x347854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x347858: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x347858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34785c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x34785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x347860: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x347860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x347864: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x347864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x347868: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x347868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34786c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x34786cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x347870: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x347870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347874: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x347874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347878: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x347878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34787c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34787cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x347880: 0xc6630008  lwc1        $f3, 0x8($s3)
    ctx->pc = 0x347880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x347884: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x347884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x347888: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x347888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34788c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x34788cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x347890: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x347890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x347894: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x347894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347898: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x347898u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x34789c: 0xe6630008  swc1        $f3, 0x8($s3)
    ctx->pc = 0x34789cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x3478a0: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3478a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3478a4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3478a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3478a8: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x3478a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3478ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3478acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3478b0: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x3478b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3478b4: 0xe6610010  swc1        $f1, 0x10($s3)
    ctx->pc = 0x3478b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x3478b8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3478b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3478bc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3478bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3478c0: 0xe6620014  swc1        $f2, 0x14($s3)
    ctx->pc = 0x3478c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x3478c4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3478c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3478c8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3478c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3478cc: 0xe6630018  swc1        $f3, 0x18($s3)
    ctx->pc = 0x3478ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x3478d0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3478d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3478d4: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x3478d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x3478d8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x3478d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3478dc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3478dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3478e0: 0x1866021  addu        $t4, $t4, $a2
    ctx->pc = 0x3478e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x3478e4: 0xafac0074  sw          $t4, 0x74($sp)
    ctx->pc = 0x3478e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 12));
    // 0x3478e8: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x3478e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x3478ec: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3478ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3478f0: 0xe6610038  swc1        $f1, 0x38($s3)
    ctx->pc = 0x3478f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x3478f4: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x3478f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x3478f8: 0x7ba900e0  lq          $t1, 0xE0($sp)
    ctx->pc = 0x3478f8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3478fc: 0x7ba700d0  lq          $a3, 0xD0($sp)
    ctx->pc = 0x3478fcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_347900:
    // 0x347900: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x347900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x347904: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x347904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x347908: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x347908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34790c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x34790cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x347910: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x347910u;
    {
        const bool branch_taken_0x347910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347910u;
        // 0x347914: 0x8fac0080  lw          $t4, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347910) {
            ctx->pc = 0x347940u;
            goto label_347940;
        }
    }
    ctx->pc = 0x347918u;
    // 0x347918: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x347918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x34791c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x34791cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x347920: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x347920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347924: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x347924u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x347928: 0xafac0080  sw          $t4, 0x80($sp)
    ctx->pc = 0x347928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 12));
    // 0x34792c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x34792cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x347930: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x347930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347934: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x347934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x347938: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x347938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34793c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x34793cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_347940:
    // 0x347940: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x347940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x347944: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x347944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x347948: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x347948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x34794c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x34794cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x347950: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x347950u;
    {
        const bool branch_taken_0x347950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347950u;
        // 0x347954: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347950) {
            ctx->pc = 0x3479B4u;
            goto label_3479b4;
        }
    }
    ctx->pc = 0x347958u;
    // 0x347958: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x347958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x34795c: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x34795cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x347960: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x347960u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x347964: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x347964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x347968: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x347968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x34796c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x34796cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x347970: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x347970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x347974: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x347974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x347978: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x347978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34797c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34797cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x347980: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x347980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x347984: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x347984u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x347988: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x347988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34798c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34798cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x347990: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x347990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x347994: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x347994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x347998: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x347998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x34799c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x34799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3479a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3479a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3479a4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3479a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3479a8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x3479a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3479ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3479acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3479b0: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x3479b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
label_3479b4:
    // 0x3479b4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3479b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3479b8: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x3479b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x3479bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3479bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3479c0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3479c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3479c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3479C4u;
    {
        const bool branch_taken_0x3479c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3479C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3479C4u;
        // 0x3479c8: 0x8fa2007c  lw          $v0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3479c4) {
            ctx->pc = 0x347A04u;
            goto label_347a04;
        }
    }
    ctx->pc = 0x3479CCu;
    // 0x3479cc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x3479ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3479d0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3479d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3479d4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x3479d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3479d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3479d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3479dc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x3479dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x3479e0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x3479e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3479e4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3479e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3479e8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x3479e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3479ec: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x3479ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3479f0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x3479f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3479f4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x3479f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3479f8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3479f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3479fc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3479fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x347a00: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x347a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
label_347a04:
    // 0x347a04: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x347a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x347a08: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x347a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x347a0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x347a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x347a10: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x347a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x347a14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x347A14u;
    {
        const bool branch_taken_0x347a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A14u;
        // 0x347a18: 0x8fa500b4  lw          $a1, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a14) {
            ctx->pc = 0x347A38u;
            goto label_347a38;
        }
    }
    ctx->pc = 0x347A1Cu;
    // 0x347a1c: 0xe4b60000  swc1        $f22, 0x0($a1)
    ctx->pc = 0x347a1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x347a20: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x347a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x347a24: 0x8fac0098  lw          $t4, 0x98($sp)
    ctx->pc = 0x347a24u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x347a28: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x347a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x347a2c: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x347a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x347a30: 0xafa60084  sw          $a2, 0x84($sp)
    ctx->pc = 0x347a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
    // 0x347a34: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x347a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
label_347a38:
    // 0x347a38: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x347a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_347a3c:
    // 0x347a3c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x347a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x347a40: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x347a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x347a44: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x347a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x347a48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x347a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x347a4c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x347a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x347a50: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x347a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x347a54: 0x14e0fb6c  bnez        $a3, . + 4 + (-0x494 << 2)
    ctx->pc = 0x347A54u;
    {
        const bool branch_taken_0x347a54 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x347A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A54u;
        // 0x347a58: 0xafa400a4  sw          $a0, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a54) {
            ctx->pc = 0x346808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346808;
        }
    }
    ctx->pc = 0x347A5Cu;
label_347a5c:
    // 0x347a5c: 0x12a00038  beqz        $s5, . + 4 + (0x38 << 2)
    ctx->pc = 0x347A5Cu;
    {
        const bool branch_taken_0x347a5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x347A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A5Cu;
        // 0x347a60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a5c) {
            ctx->pc = 0x347B40u;
            goto label_347b40;
        }
    }
    ctx->pc = 0x347A64u;
    // 0x347a64: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x347a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x347a68: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x347a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x347a6c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x347a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x347a70: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x347a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x347a74: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x347a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x347a78: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x347A78u;
    {
        const bool branch_taken_0x347a78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x347A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A78u;
        // 0x347a7c: 0xaea20008  sw          $v0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a78) {
            ctx->pc = 0x347A90u;
            goto label_347a90;
        }
    }
    ctx->pc = 0x347A80u;
    // 0x347a80: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x347a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x347a84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x347a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347a88: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x347a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x347a8c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x347a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_347a90:
    // 0x347a90: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x347a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x347a94: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x347a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x347a98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347A98u;
    {
        const bool branch_taken_0x347a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A98u;
        // 0x347a9c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a98) {
            ctx->pc = 0x347AB4u;
            goto label_347ab4;
        }
    }
    ctx->pc = 0x347AA0u;
    // 0x347aa0: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x347aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x347aa4: 0x8fac0078  lw          $t4, 0x78($sp)
    ctx->pc = 0x347aa4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x347aa8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x347aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x347aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x347aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x347ab0: 0xac4c0000  sw          $t4, 0x0($v0)
    ctx->pc = 0x347ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 12));
label_347ab4:
    // 0x347ab4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x347ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x347ab8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x347ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x347abc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347ABCu;
    {
        const bool branch_taken_0x347abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347ABCu;
        // 0x347ac0: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347abc) {
            ctx->pc = 0x347AD8u;
            goto label_347ad8;
        }
    }
    ctx->pc = 0x347AC4u;
    // 0x347ac4: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x347ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x347ac8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x347ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x347acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x347accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x347ad0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x347ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x347ad4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x347ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_347ad8:
    // 0x347ad8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x347ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x347adc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x347adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x347ae0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347AE0u;
    {
        const bool branch_taken_0x347ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AE0u;
        // 0x347ae4: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ae0) {
            ctx->pc = 0x347AFCu;
            goto label_347afc;
        }
    }
    ctx->pc = 0x347AE8u;
    // 0x347ae8: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x347ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x347aec: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x347aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x347af0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x347af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x347af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x347af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x347af8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x347af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_347afc:
    // 0x347afc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x347afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x347b00: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x347b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x347b04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x347B04u;
    {
        const bool branch_taken_0x347b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B04u;
        // 0x347b08: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b04) {
            ctx->pc = 0x347B20u;
            goto label_347b20;
        }
    }
    ctx->pc = 0x347B0Cu;
    // 0x347b0c: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x347b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x347b10: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x347b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x347b14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x347b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x347b18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x347b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x347b1c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x347b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_347b20:
    // 0x347b20: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x347b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x347b24: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x347b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x347b28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347B28u;
    {
        const bool branch_taken_0x347b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B28u;
        // 0x347b2c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b28) {
            ctx->pc = 0x347B40u;
            goto label_347b40;
        }
    }
    ctx->pc = 0x347B30u;
    // 0x347b30: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x347b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x347b34: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x347b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x347b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x347b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x347b3c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x347b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_347b40:
    // 0x347b40: 0x8fac0070  lw          $t4, 0x70($sp)
    ctx->pc = 0x347b40u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x347b44: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x347b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x347b48: 0x8d820008  lw          $v0, 0x8($t4)
    ctx->pc = 0x347b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x347b4c: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x347b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x347b50: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x347b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x347b54: 0xad820010  sw          $v0, 0x10($t4)
    ctx->pc = 0x347b54u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 2));
    // 0x347b58: 0xad830008  sw          $v1, 0x8($t4)
    ctx->pc = 0x347b58u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 3));
    // 0x347b5c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x347b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x347b60: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x347b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x347b64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x347b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x347b68: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x347b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x347b6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x347B6Cu;
    {
        const bool branch_taken_0x347b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B6Cu;
        // 0x347b70: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b6c) {
            ctx->pc = 0x347B78u;
            goto label_347b78;
        }
    }
    ctx->pc = 0x347B74u;
label_347b74:
    // 0x347b74: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x347b74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_347b78:
    // 0x347b78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x347b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_347b7c:
    // 0x347b7c: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x347b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x347b80: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x347b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x347b84: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x347b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x347b88: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x347b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x347b8c: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x347b8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x347b90: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x347b90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x347b94: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x347b94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x347b98: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x347b98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x347b9c: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x347b9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x347ba0: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x347ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x347ba4: 0xc7b901b8  lwc1        $f25, 0x1B8($sp)
    ctx->pc = 0x347ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x347ba8: 0xc7b801b0  lwc1        $f24, 0x1B0($sp)
    ctx->pc = 0x347ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x347bac: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x347bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x347bb0: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x347bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x347bb4: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x347bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x347bb8: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x347bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x347bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x347BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BBCu;
        // 0x347bc0: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347BC4u;
    // 0x347bc4: 0x0  nop
    ctx->pc = 0x347bc4u;
    // NOP
    ctx->pc = 0x347bc8u;
}
