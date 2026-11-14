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

// Function: sub_00330758
// Address: 0x330758 - 0x331360
void sub_00330758_0x330758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330758_0x330758");
#endif

    switch (ctx->pc) {
        case 0x330798u: goto label_330798;
        case 0x3307c0u: goto label_3307c0;
        case 0x3309f0u: goto label_3309f0;
        case 0x330accu: goto label_330acc;
        case 0x330aecu: goto label_330aec;
        case 0x330d78u: goto label_330d78;
        case 0x330e18u: goto label_330e18;
        case 0x330f0cu: goto label_330f0c;
        case 0x3312d8u: goto label_3312d8;
        case 0x33131cu: goto label_33131c;
        case 0x331350u: goto label_331350;
        default: break;
    }

    ctx->pc = 0x330758u;

label_330758:
    // 0x330758: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x330758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x33075c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33075cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x330760: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x330760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x330764: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x330764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330768: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x330768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x33076c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33076cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330770: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x330770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x330774: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x330774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x330778: 0x8c460768  lw          $a2, 0x768($v0)
    ctx->pc = 0x330778u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x61D5E8u));
    // 0x33077c: 0x8c4e0738  lw          $t6, 0x738($v0)
    ctx->pc = 0x33077cu;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x61D5B8u));
    // 0x330780: 0x18c00054  blez        $a2, . + 4 + (0x54 << 2)
    ctx->pc = 0x330780u;
    {
        const bool branch_taken_0x330780 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x330784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330780u;
        // 0x330784: 0x8c490764  lw          $t1, 0x764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330780) {
            ctx->pc = 0x3308D4u;
            goto label_3308d4;
        }
    }
    ctx->pc = 0x330788u;
    // 0x330788: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x330788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33078c: 0x25cd0014  addiu       $t5, $t6, 0x14
    ctx->pc = 0x33078cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x330790: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x330790u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330794: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x330794u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_330798:
    // 0x330798: 0x25c20014  addiu       $v0, $t6, 0x14
    ctx->pc = 0x330798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x33079c: 0x2539ffd8  addiu       $t9, $t1, -0x28
    ctx->pc = 0x33079cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967256));
    // 0x3307a0: 0x24780001  addiu       $t8, $v1, 0x1
    ctx->pc = 0x3307a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3307a4: 0x240f0026  addiu       $t7, $zero, 0x26
    ctx->pc = 0x3307a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x3307a8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3307a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3307ac: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3307acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3307b0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3307b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3307b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3307b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3307b8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3307b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3307bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3307bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3307c0:
    // 0x3307c0: 0xc4e0fff0  lwc1        $f0, -0x10($a3)
    ctx->pc = 0x3307c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3307c4: 0x258c0018  addiu       $t4, $t4, 0x18
    ctx->pc = 0x3307c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
    // 0x3307c8: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x3307c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x3307cc: 0x256b0024  addiu       $t3, $t3, 0x24
    ctx->pc = 0x3307ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 36));
    // 0x3307d0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3307d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3307d4: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x3307d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x3307d8: 0x25ad0048  addiu       $t5, $t5, 0x48
    ctx->pc = 0x3307d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 72));
    // 0x3307dc: 0x25ce0048  addiu       $t6, $t6, 0x48
    ctx->pc = 0x3307dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 72));
    // 0x3307e0: 0xc501fff4  lwc1        $f1, -0xC($t0)
    ctx->pc = 0x3307e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3307e4: 0x25effffd  addiu       $t7, $t7, -0x3
    ctx->pc = 0x3307e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967293));
    // 0x3307e8: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x3307e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x3307ec: 0xc520fff8  lwc1        $f0, -0x8($t1)
    ctx->pc = 0x3307ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3307f0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3307f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3307f4: 0xc541fffc  lwc1        $f1, -0x4($t2)
    ctx->pc = 0x3307f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3307f8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3307f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3307fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3307fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330800: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x330800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x330804: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x330804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330808: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x330808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x33080c: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x33080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330810: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x330810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x330814: 0xc5210010  lwc1        $f1, 0x10($t1)
    ctx->pc = 0x330814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330818: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x330818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x33081c: 0xc5400014  lwc1        $f0, 0x14($t2)
    ctx->pc = 0x33081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330820: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x330820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x330824: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x330824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330828: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x330828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x33082c: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x33082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330830: 0x24e70048  addiu       $a3, $a3, 0x48
    ctx->pc = 0x330830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 72));
    // 0x330834: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x330834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x330838: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x330838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x33083c: 0xc5000024  lwc1        $f0, 0x24($t0)
    ctx->pc = 0x33083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330840: 0x25080048  addiu       $t0, $t0, 0x48
    ctx->pc = 0x330840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 72));
    // 0x330844: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x330844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x330848: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x330848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x33084c: 0xc5200028  lwc1        $f0, 0x28($t1)
    ctx->pc = 0x33084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330850: 0x25290048  addiu       $t1, $t1, 0x48
    ctx->pc = 0x330850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 72));
    // 0x330854: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x330854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x330858: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x330858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x33085c: 0xc540002c  lwc1        $f0, 0x2C($t2)
    ctx->pc = 0x33085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330860: 0x254a0048  addiu       $t2, $t2, 0x48
    ctx->pc = 0x330860u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 72));
    // 0x330864: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x330864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x330868: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x330868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33086c: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x33086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330870: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x330870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x330874: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x330874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x330878: 0x5e1ffd1  bgez        $t7, . + 4 + (-0x2F << 2)
    ctx->pc = 0x330878u;
    {
        const bool branch_taken_0x330878 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x33087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330878u;
        // 0x33087c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330878) {
            ctx->pc = 0x3307C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3307c0;
        }
    }
    ctx->pc = 0x330880u;
    // 0x330880: 0xc5a0fff0  lwc1        $f0, -0x10($t5)
    ctx->pc = 0x330880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330884: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x330884u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330888: 0x320482d  daddu       $t1, $t9, $zero
    ctx->pc = 0x330888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33088c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x33088cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x330890: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x330890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x330894: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x330894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x330898: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x330898u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x33089c: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x33089cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3308a0: 0xc5a0fff4  lwc1        $f0, -0xC($t5)
    ctx->pc = 0x3308a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3308a4: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x3308a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x3308a8: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x3308a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x3308ac: 0xc5a0fff8  lwc1        $f0, -0x8($t5)
    ctx->pc = 0x3308acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3308b0: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x3308b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x3308b4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3308b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3308b8: 0xc5a0fffc  lwc1        $f0, -0x4($t5)
    ctx->pc = 0x3308b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3308bc: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x3308bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x3308c0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3308c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3308c4: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x3308c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3308c8: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x3308c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x3308cc: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x3308CCu;
    {
        const bool branch_taken_0x3308cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3308D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308CCu;
        // 0x3308d0: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308cc) {
            ctx->pc = 0x330798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330798;
        }
    }
    ctx->pc = 0x3308D4u;
label_3308d4:
    // 0x3308d4: 0x1920007a  blez        $t1, . + 4 + (0x7A << 2)
    ctx->pc = 0x3308D4u;
    {
        const bool branch_taken_0x3308d4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3308D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308D4u;
        // 0x3308d8: 0x91023  negu        $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308d4) {
            ctx->pc = 0x330AC0u;
            goto label_330ac0;
        }
    }
    ctx->pc = 0x3308DCu;
    // 0x3308dc: 0x120782d  daddu       $t7, $t1, $zero
    ctx->pc = 0x3308dcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308e0: 0x30470003  andi        $a3, $v0, 0x3
    ctx->pc = 0x3308e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3308e4: 0x25c60014  addiu       $a2, $t6, 0x14
    ctx->pc = 0x3308e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
    // 0x3308e8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3308e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3308ec: 0x10e00039  beqz        $a3, . + 4 + (0x39 << 2)
    ctx->pc = 0x3308ECu;
    {
        const bool branch_taken_0x3308ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3308F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308ECu;
        // 0x3308f0: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308ec) {
            ctx->pc = 0x3309D4u;
            goto label_3309d4;
        }
    }
    ctx->pc = 0x3308F4u;
    // 0x3308f4: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x3308f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3308f8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3308F8u;
    {
        const bool branch_taken_0x3308f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3308FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3308F8u;
        // 0x3308fc: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308f8) {
            ctx->pc = 0x33098Cu;
            goto label_33098c;
        }
    }
    ctx->pc = 0x330900u;
    // 0x330900: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x330900u;
    {
        const bool branch_taken_0x330900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330900u;
        // 0x330904: 0xc4c0fff0  lwc1        $f0, -0x10($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x330900) {
            ctx->pc = 0x33094Cu;
            goto label_33094c;
        }
    }
    ctx->pc = 0x330908u;
    // 0x330908: 0x252fffff  addiu       $t7, $t1, -0x1
    ctx->pc = 0x330908u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x33090c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x33090cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x330910: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x330910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x330914: 0xc4c1fff4  lwc1        $f1, -0xC($a2)
    ctx->pc = 0x330914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330918: 0x24880004  addiu       $t0, $a0, 0x4
    ctx->pc = 0x330918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x33091c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x33091cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x330920: 0xc4c0fff8  lwc1        $f0, -0x8($a2)
    ctx->pc = 0x330920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330924: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x330924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x330928: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x330928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x33092c: 0xc4c0fffc  lwc1        $f0, -0x4($a2)
    ctx->pc = 0x33092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330930: 0x25c6002c  addiu       $a2, $t6, 0x2C
    ctx->pc = 0x330930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 44));
    // 0x330934: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x330934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x330938: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x330938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x33093c: 0xc5c00014  lwc1        $f0, 0x14($t6)
    ctx->pc = 0x33093cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330940: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x330940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x330944: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x330944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x330948: 0xc4c0fff0  lwc1        $f0, -0x10($a2)
    ctx->pc = 0x330948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33094c:
    // 0x33094c: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x33094cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x330950: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x330950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x330954: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x330954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x330958: 0xc4c0fff4  lwc1        $f0, -0xC($a2)
    ctx->pc = 0x330958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33095c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x33095cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x330960: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x330960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x330964: 0xc4c0fff8  lwc1        $f0, -0x8($a2)
    ctx->pc = 0x330964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330968: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x330968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33096c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x33096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x330970: 0xc4c0fffc  lwc1        $f0, -0x4($a2)
    ctx->pc = 0x330970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330974: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x330974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x330978: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x330978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x33097c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x33097cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330980: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x330980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x330984: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x330984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x330988: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x330988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_33098c:
    // 0x33098c: 0xc4c0fff0  lwc1        $f0, -0x10($a2)
    ctx->pc = 0x33098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330990: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x330990u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x330994: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x330994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x330998: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x330998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x33099c: 0xc4c0fff4  lwc1        $f0, -0xC($a2)
    ctx->pc = 0x33099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3309a0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x3309a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x3309a4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3309a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3309a8: 0xc4c0fff8  lwc1        $f0, -0x8($a2)
    ctx->pc = 0x3309a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3309ac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3309acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3309b0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3309b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3309b4: 0xc4c0fffc  lwc1        $f0, -0x4($a2)
    ctx->pc = 0x3309b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3309b8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3309b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3309bc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3309bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3309c0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3309c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3309c4: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x3309c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x3309c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3309c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3309cc: 0x11e0003c  beqz        $t7, . + 4 + (0x3C << 2)
    ctx->pc = 0x3309CCu;
    {
        const bool branch_taken_0x3309cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x3309D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309CCu;
        // 0x3309d0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309cc) {
            ctx->pc = 0x330AC0u;
            goto label_330ac0;
        }
    }
    ctx->pc = 0x3309D4u;
label_3309d4:
    // 0x3309d4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3309d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3309d8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3309d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3309dc: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x3309dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3309e0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3309e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3309e4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3309e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3309e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3309e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3309ec: 0x0  nop
    ctx->pc = 0x3309ecu;
    // NOP
label_3309f0:
    // 0x3309f0: 0xc4a1fff0  lwc1        $f1, -0x10($a1)
    ctx->pc = 0x3309f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3309f4: 0x25effffc  addiu       $t7, $t7, -0x4
    ctx->pc = 0x3309f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
    // 0x3309f8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x3309f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3309fc: 0xc4c0fff4  lwc1        $f0, -0xC($a2)
    ctx->pc = 0x3309fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330a00: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x330a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x330a04: 0xc4e1fff8  lwc1        $f1, -0x8($a3)
    ctx->pc = 0x330a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330a08: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x330a08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x330a0c: 0xc500fffc  lwc1        $f0, -0x4($t0)
    ctx->pc = 0x330a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330a10: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x330a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x330a14: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x330a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330a18: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x330a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x330a1c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x330a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330a20: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x330a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x330a24: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x330a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330a28: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x330a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x330a2c: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x330a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330a30: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x330a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x330a34: 0xc5010014  lwc1        $f1, 0x14($t0)
    ctx->pc = 0x330a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330a38: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x330a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x330a3c: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x330a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330a40: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x330a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x330a44: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x330a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330a48: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x330a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x330a4c: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x330a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330a50: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x330a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x330a54: 0xc4e10028  lwc1        $f1, 0x28($a3)
    ctx->pc = 0x330a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330a58: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x330a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x330a5c: 0xc500002c  lwc1        $f0, 0x2C($t0)
    ctx->pc = 0x330a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330a60: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x330a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x330a64: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x330a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330a68: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x330a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x330a6c: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x330a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330a70: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x330a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x330a74: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x330a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x330a78: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x330a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x330a7c: 0xc4c0003c  lwc1        $f0, 0x3C($a2)
    ctx->pc = 0x330a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330a80: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x330a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x330a84: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x330a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x330a88: 0xc4e10040  lwc1        $f1, 0x40($a3)
    ctx->pc = 0x330a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330a8c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x330a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x330a90: 0x24e70060  addiu       $a3, $a3, 0x60
    ctx->pc = 0x330a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x330a94: 0xe4410024  swc1        $f1, 0x24($v0)
    ctx->pc = 0x330a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x330a98: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x330a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x330a9c: 0xc5000044  lwc1        $f0, 0x44($t0)
    ctx->pc = 0x330a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330aa0: 0x25080060  addiu       $t0, $t0, 0x60
    ctx->pc = 0x330aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x330aa4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x330aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x330aa8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x330aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x330aac: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x330aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330ab0: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x330ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x330ab4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x330ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x330ab8: 0x15e0ffcd  bnez        $t7, . + 4 + (-0x33 << 2)
    ctx->pc = 0x330AB8u;
    {
        const bool branch_taken_0x330ab8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x330ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330AB8u;
        // 0x330abc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ab8) {
            ctx->pc = 0x3309F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3309f0;
        }
    }
    ctx->pc = 0x330AC0u;
label_330ac0:
    // 0x330ac0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x330ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330ac4: 0xc10a322  jal         func_428C88
    ctx->pc = 0x330AC4u;
    SET_GPR_U32(ctx, 31, 0x330ACCu);
    ctx->pc = 0x330AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330AC4u;
    // 0x330ac8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x330AC4u, 0x330ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330ACCu;
label_330acc:
    // 0x330acc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x330ACCu;
    {
        const bool branch_taken_0x330acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330ACCu;
        // 0x330ad0: 0x3c026c09  lui         $v0, 0x6C09 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27657 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330acc) {
            ctx->pc = 0x330AF4u;
            goto label_330af4;
        }
    }
    ctx->pc = 0x330AD4u;
    // 0x330ad4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x330ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x330ad8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x330ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x330adc: 0x2484b830  addiu       $a0, $a0, -0x47D0
    ctx->pc = 0x330adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948912));
    // 0x330ae0: 0x24a5b850  addiu       $a1, $a1, -0x47B0
    ctx->pc = 0x330ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948944));
    // 0x330ae4: 0xc0bbc80  jal         func_2EF200
    ctx->pc = 0x330AE4u;
    SET_GPR_U32(ctx, 31, 0x330AECu);
    ctx->pc = 0x330AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330AE4u;
    // 0x330ae8: 0x2406010a  addiu       $a2, $zero, 0x10A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF200u, 0x330AE4u, 0x330AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330AECu;
label_330aec:
    // 0x330aec: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x330AECu;
    {
        const bool branch_taken_0x330aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330AECu;
        // 0x330af0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330aec) {
            ctx->pc = 0x330D20u;
            goto label_330d20;
        }
    }
    ctx->pc = 0x330AF4u;
label_330af4:
    // 0x330af4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x330af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x330af8: 0x344203cf  ori         $v0, $v0, 0x3CF
    ctx->pc = 0x330af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)975);
    // 0x330afc: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x330afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x330b00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x330b00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330b04: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x330b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x330b08: 0x34a50009  ori         $a1, $a1, 0x9
    ctx->pc = 0x330b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9);
    // 0x330b0c: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x330b0cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x330b10: 0x70651cc8  ppacw       $v1, $v1, $a1
    ctx->pc = 0x330b10u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x330b14: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x330b14u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x330b18: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x330b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x330b1c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x330b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x330b20: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x330b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x330b24: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x330b24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x330b28: 0x2622ce80  addiu       $v0, $s1, -0x3180
    ctx->pc = 0x330b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954624));
    // 0x330b2c: 0x8c450728  lw          $a1, 0x728($v0)
    ctx->pc = 0x330b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1832)));
    // 0x330b30: 0xc4430744  lwc1        $f3, 0x744($v0)
    ctx->pc = 0x330b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x330b34: 0xc4410740  lwc1        $f1, 0x740($v0)
    ctx->pc = 0x330b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330b38: 0xc44206f8  lwc1        $f2, 0x6F8($v0)
    ctx->pc = 0x330b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x330b3c: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x330b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330b40: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x330b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x330b44: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x330b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x330b48: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x330b48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x330b4c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x330b4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x330b50: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x330b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330b54: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x330b54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x330b58: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x330b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x330b5c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x330b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x330b60: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x330b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x330b64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x330b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x330b68: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x330b68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x330b6c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x330B6Cu;
    {
        const bool branch_taken_0x330b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x330B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B6Cu;
        // 0x330b70: 0xc4a10000  lwc1        $f1, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b6c) {
            ctx->pc = 0x330B78u;
            goto label_330b78;
        }
    }
    ctx->pc = 0x330B74u;
    // 0x330b74: 0xc7838438  lwc1        $f3, -0x7BC8($gp)
    ctx->pc = 0x330b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_330b78:
    // 0x330b78: 0xc7828438  lwc1        $f2, -0x7BC8($gp)
    ctx->pc = 0x330b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x330b7c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x330b7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x330b80: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x330b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x330b84: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x330b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330b88: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x330b88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x330b8c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x330b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x330b90: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x330b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330b94: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x330b94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x330b98: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x330b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x330b9c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x330b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330ba0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x330ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x330ba4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x330ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x330ba8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x330ba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330bac: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x330bacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x330bb0: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x330bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x330bb4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x330bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x330bb8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x330bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330bbc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x330bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x330bc0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x330bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x330bc4: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x330bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330bc8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x330bc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x330bcc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x330bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x330bd0: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x330bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330bd4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x330bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x330bd8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x330bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x330bdc: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x330bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330be0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x330be0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x330be4: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x330be4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x330be8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x330be8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330bec: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x330becu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x330bf0: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x330bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x330bf4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x330bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x330bf8: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x330bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330bfc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x330bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x330c00: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x330c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x330c04: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x330c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330c08: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x330c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x330c0c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x330c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x330c10: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x330c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330c14: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x330c14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x330c18: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x330c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x330c1c: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x330c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330c20: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x330c20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x330c24: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x330c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x330c28: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x330c28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330c2c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x330c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x330c30: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x330c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x330c34: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x330c34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x330c38: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x330c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330c3c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x330c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x330c40: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x330c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x330c44: 0xc4a1004c  lwc1        $f1, 0x4C($a1)
    ctx->pc = 0x330c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330c48: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x330c48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x330c4c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x330c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x330c50: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x330c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330c54: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x330c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x330c58: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x330c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x330c5c: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x330c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330c60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x330c60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x330c64: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x330c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x330c68: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x330c68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x330c6c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x330c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x330c70: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x330c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x330c74: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x330c74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x330c78: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x330c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330c7c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x330c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x330c80: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x330c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330c84: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x330c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x330c88: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x330c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x330c8c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x330c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x330c90: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x330c90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x330c94: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x330c94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x330c98: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x330c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x330c9c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x330c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x330ca0: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x330ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330ca4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x330ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x330ca8: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x330ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330cac: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x330cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x330cb0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x330cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x330cb4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x330cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x330cb8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x330cb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x330cbc: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x330cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x330cc0: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x330cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x330cc4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x330cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x330cc8: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x330cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330ccc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x330cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x330cd0: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x330cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330cd4: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x330cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x330cd8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x330cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x330cdc: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x330cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x330ce0: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x330ce0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x330ce4: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x330ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
    // 0x330ce8: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x330ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x330cec: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x330cecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x330cf0: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x330cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330cf4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x330cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x330cf8: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x330cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x330cfc: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x330cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x330d00: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x330d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x330d04: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x330d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x330d08: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x330d08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x330d0c: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x330d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
    // 0x330d10: 0x24820090  addiu       $v0, $a0, 0x90
    ctx->pc = 0x330d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x330d14: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x330d14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x330d18: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x330d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x330d1c: 0x0  nop
    ctx->pc = 0x330d1cu;
    // NOP
label_330d20:
    // 0x330d20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x330d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330d24: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x330d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x330d28: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x330d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x330d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x330D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330D2Cu;
        // 0x330d30: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330D34u;
    // 0x330d34: 0x0  nop
    ctx->pc = 0x330d34u;
    // NOP
    // 0x330d38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x330d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x330d3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x330d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x330d40: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x330d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x330d44: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x330d44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x330d48: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x330d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x330d4c: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x330d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
    // 0x330d50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x330d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x330d54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x330d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330d5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x330d5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d60: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x330d60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x330d64: 0x96030764  lhu         $v1, 0x764($s0)
    ctx->pc = 0x330d64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x61D5E4u));
    // 0x330d68: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x330d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x330d6c: 0x96020764  lhu         $v0, 0x764($s0)
    ctx->pc = 0x330d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x61D5E4u));
    // 0x330d70: 0xc0eb85a  jal         func_3AE168
    ctx->pc = 0x330D70u;
    SET_GPR_U32(ctx, 31, 0x330D78u);
    ctx->pc = 0x330D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330D70u;
    // 0x330d74: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x330D70u, 0x330D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330D78u;
label_330d78:
    // 0x330d78: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x330d78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330d7c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x330d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x330d80: 0x8e0206f4  lw          $v0, 0x6F4($s0)
    ctx->pc = 0x330d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1780)));
    // 0x330d84: 0xae4a0004  sw          $t2, 0x4($s2)
    ctx->pc = 0x330d84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 10));
    // 0x330d88: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x330d88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x330d8c: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x330d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    // 0x330d90: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x330d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x330d94: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x330d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x330d98: 0x2788aa28  addiu       $t0, $gp, -0x55D8
    ctx->pc = 0x330d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945320));
    // 0x330d9c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x330d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x330da0: 0x8f83bd50  lw          $v1, -0x42B0($gp)
    ctx->pc = 0x330da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950224)));
    // 0x330da4: 0x24e6af20  addiu       $a2, $a3, -0x50E0
    ctx->pc = 0x330da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946592));
    // 0x330da8: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x330da8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x330dac: 0x2522e880  addiu       $v0, $t1, -0x1780
    ctx->pc = 0x330dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961280));
    // 0x330db0: 0xae280010  sw          $t0, 0x10($s1)
    ctx->pc = 0x330db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 8));
    // 0x330db4: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x330db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x330db8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x330db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x330dbc: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x330dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x330dc0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x330dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x330dc4: 0x9062002d  lbu         $v0, 0x2D($v1)
    ctx->pc = 0x330dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 45)));
    // 0x330dc8: 0x24842d00  addiu       $a0, $a0, 0x2D00
    ctx->pc = 0x330dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11520));
    // 0x330dcc: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x330dccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5DAF28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF28u, _value); } while (0);
    // 0x330dd0: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x330dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x330dd4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x330dd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DAF2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF2Cu, _value); } while (0);
    // 0x330dd8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x330dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x330ddc: 0xace2af20  sw          $v0, -0x50E0($a3)
    ctx->pc = 0x330ddcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5DAF20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF20u, _value); } while (0);
    // 0x330de0: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x330de0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x330de4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x330de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x330de8: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x330de8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5DAF38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF38u, _value); } while (0);
    // 0x330dec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x330decu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5DAF34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF34u, _value); } while (0);
    // 0x330df0: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x330df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5DAF30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAF30u, _value); } while (0);
    // 0x330df4: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x330df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x330df8: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x330df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x330dfc: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x330dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x330e00: 0x8d23e880  lw          $v1, -0x1780($t1)
    ctx->pc = 0x330e00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E880u));
    // 0x330e04: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x330E04u;
    {
        const bool branch_taken_0x330e04 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E04u;
        // 0x330e08: 0x24660020  addiu       $a2, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e04) {
            ctx->pc = 0x330E20u;
            goto label_330e20;
        }
    }
    ctx->pc = 0x330E0Cu;
    // 0x330e0c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x330e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x330e10: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x330E10u;
    SET_GPR_U32(ctx, 31, 0x330E18u);
    ctx->pc = 0x330E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330E10u;
    // 0x330e14: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x330E10u, 0x330E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330E18u;
label_330e18:
    // 0x330e18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x330E18u;
    {
        const bool branch_taken_0x330e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E18u;
        // 0x330e1c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e18) {
            ctx->pc = 0x330E28u;
            goto label_330e28;
        }
    }
    ctx->pc = 0x330E20u;
label_330e20:
    // 0x330e20: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x330e20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x330e24: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x330e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_330e28:
    // 0x330e28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x330e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330e2c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x330e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x330e30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x330E30u;
    {
        const bool branch_taken_0x330e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E30u;
        // 0x330e34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e30) {
            ctx->pc = 0x330E3Cu;
            goto label_330e3c;
        }
    }
    ctx->pc = 0x330E38u;
    // 0x330e38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x330e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_330e3c:
    // 0x330e3c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x330e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x330e40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x330e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330e44: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x330e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x330e48: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x330E48u;
    {
        const bool branch_taken_0x330e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x330E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E48u;
        // 0x330e4c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e48) {
            ctx->pc = 0x330E80u;
            goto label_330e80;
        }
    }
    ctx->pc = 0x330E50u;
    // 0x330e50: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x330e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x330e54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x330E54u;
    {
        const bool branch_taken_0x330e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E54u;
        // 0x330e58: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e54) {
            ctx->pc = 0x330E68u;
            goto label_330e68;
        }
    }
    ctx->pc = 0x330E5Cu;
    // 0x330e5c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x330e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x330e60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x330E60u;
    {
        const bool branch_taken_0x330e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330e60) {
            ctx->pc = 0x330E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330E60u;
            // 0x330e64: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x330E78u;
            goto label_330e78;
        }
    }
    ctx->pc = 0x330E68u;
label_330e68:
    // 0x330e68: 0xa2230029  sb          $v1, 0x29($s1)
    ctx->pc = 0x330e68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x330e6c: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x330e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x330e70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x330E70u;
    {
        const bool branch_taken_0x330e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E70u;
        // 0x330e74: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e70) {
            ctx->pc = 0x330EB8u;
            goto label_330eb8;
        }
    }
    ctx->pc = 0x330E78u;
label_330e78:
    // 0x330e78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x330E78u;
    {
        const bool branch_taken_0x330e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E78u;
        // 0x330e7c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e78) {
            ctx->pc = 0x330E90u;
            goto label_330e90;
        }
    }
    ctx->pc = 0x330E80u;
label_330e80:
    // 0x330e80: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x330e80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x330e84: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x330e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x330e88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x330E88u;
    {
        const bool branch_taken_0x330e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E88u;
        // 0x330e8c: 0xa2230028  sb          $v1, 0x28($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e88) {
            ctx->pc = 0x330EBCu;
            goto label_330ebc;
        }
    }
    ctx->pc = 0x330E90u;
label_330e90:
    // 0x330e90: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x330e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x330e94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x330E94u;
    {
        const bool branch_taken_0x330e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330E94u;
        // 0x330e98: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330e94) {
            ctx->pc = 0x330EACu;
            goto label_330eac;
        }
    }
    ctx->pc = 0x330E9Cu;
    // 0x330e9c: 0xa2230029  sb          $v1, 0x29($s1)
    ctx->pc = 0x330e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x330ea0: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x330ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x330ea4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x330EA4u;
    {
        const bool branch_taken_0x330ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330EA4u;
        // 0x330ea8: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ea4) {
            ctx->pc = 0x330EB8u;
            goto label_330eb8;
        }
    }
    ctx->pc = 0x330EACu;
label_330eac:
    // 0x330eac: 0xa2250029  sb          $a1, 0x29($s1)
    ctx->pc = 0x330eacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 5));
    // 0x330eb0: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x330eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x330eb4: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x330eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_330eb8:
    // 0x330eb8: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x330eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_330ebc:
    // 0x330ebc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x330ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x330ec0: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x330EC0u;
    {
        const bool branch_taken_0x330ec0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x330EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330EC0u;
        // 0x330ec4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330ec0) {
            ctx->pc = 0x330ED4u;
            goto label_330ed4;
        }
    }
    ctx->pc = 0x330EC8u;
    // 0x330ec8: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x330ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x330ecc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x330eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x330ed0: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x330ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_330ed4:
    // 0x330ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x330ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330ed8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x330ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330edc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x330edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330ee0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x330ee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x330EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330EE8u;
        // 0x330eec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330EF0u;
    // 0x330ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x330ef4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x330ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x330ef8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x330ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330efc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x330efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330f00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x330f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f04: 0xc10a322  jal         func_428C88
    ctx->pc = 0x330F04u;
    SET_GPR_U32(ctx, 31, 0x330F0Cu);
    ctx->pc = 0x330F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330F04u;
    // 0x330f08: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x330F04u, 0x330F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F0Cu;
label_330f0c:
    // 0x330f0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x330f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x330f10: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x330f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x330f14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x330f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f18: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x330f18u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x330f1c: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x330f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x330f20: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x330f20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x330f24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x330f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x330f28: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x330f28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x330f2c: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x330f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x330f30: 0xa2030047  sb          $v1, 0x47($s0)
    ctx->pc = 0x330f30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 3));
    // 0x330f34: 0x3c066c01  lui         $a2, 0x6C01
    ctx->pc = 0x330f34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27649 << 16));
    // 0x330f38: 0x34c603fa  ori         $a2, $a2, 0x3FA
    ctx->pc = 0x330f38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1018);
    // 0x330f3c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x330f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x330f40: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x330f40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x330f44: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x330f44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x330f48: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x330f48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
    // 0x330f4c: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x330f4cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x330f50: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x330f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x330f54: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x330f54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x330f58: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x330f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x330f5c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x330f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x330f60: 0x92030047  lbu         $v1, 0x47($s0)
    ctx->pc = 0x330f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x330f64: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x330f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
    // 0x330f68: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x330f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x330f6c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x330f6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x330f70: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x330f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x330f74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x330F74u;
    {
        const bool branch_taken_0x330f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F74u;
        // 0x330f78: 0xaf83bec8  sw          $v1, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f74) {
            ctx->pc = 0x330F90u;
            goto label_330f90;
        }
    }
    ctx->pc = 0x330F7Cu;
    // 0x330f7c: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x330f7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x330f80: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x330f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x330f84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x330F84u;
    {
        const bool branch_taken_0x330f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F84u;
        // 0x330f88: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f84) {
            ctx->pc = 0x330F9Cu;
            goto label_330f9c;
        }
    }
    ctx->pc = 0x330F8Cu;
    // 0x330f8c: 0x0  nop
    ctx->pc = 0x330f8cu;
    // NOP
label_330f90:
    // 0x330f90: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x330f90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x330f94: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x330f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x330f98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x330f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_330f9c:
    // 0x330f9c: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x330f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x330fa0: 0x92060029  lbu         $a2, 0x29($s0)
    ctx->pc = 0x330fa0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x330fa4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x330fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x330fa8: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x330fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x330fac: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x330facu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
    // 0x330fb0: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x330fb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x330fb4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x330fb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x330fb8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x330fb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x330fbc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x330fbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x330fc0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x330fc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x330fc4: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x330fc4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
    // 0x330fc8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x330fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x330fcc: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x330fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
    // 0x330fd0: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x330fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x330fd4: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x330fd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x330fd8: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x330fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x330fdc: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x330fdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x330fe0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x330fe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x330fe4: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x330fe4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x330fe8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x330fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x330fec: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x330fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x330ff0: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x330ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x330ff4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x330ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x330ff8: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x330ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x330ffc: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x330ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x331000: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x331000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x331004: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x331004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x331008: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x331008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x33100c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33100cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x331010: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x331010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x331014: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x331014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331018: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x331018u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x33101c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x33101cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x331020: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x331020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x331024: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x331024u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x331028: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x331028u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x33102c: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x33102cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x331030: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x331030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x331034: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x331034u;
    {
        const bool branch_taken_0x331034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331034u;
        // 0x331038: 0x92020044  lbu         $v0, 0x44($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331034) {
            ctx->pc = 0x331040u;
            goto label_331040;
        }
    }
    ctx->pc = 0x33103Cu;
    // 0x33103c: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x33103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_331040:
    // 0x331040: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x331040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x331044: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x331044u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x331048: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x331048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x33104c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x33104cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x331050: 0x92050047  lbu         $a1, 0x47($s0)
    ctx->pc = 0x331050u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x331054: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x331054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x331058: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x331058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x33105c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x33105cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x331060: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x331060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x331064: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x331064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x331068: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x331068u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33106c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33106cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x331070: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x331070u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x331074: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x331074u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x331078: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x331078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33107c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x33107cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331080: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x331080u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x331084: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x331084u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x331088: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x331088u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x33108c: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x33108cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x331090: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x331090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x331094: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x331094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x331098: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x331098u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33109c: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x33109cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x3310a0: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x3310a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3310a4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3310a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3310a8: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x3310a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x3310ac: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x3310acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x3310b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3310b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3310b4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3310b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3310b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3310b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3310bc: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x3310bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x3310c0: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x3310c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x3310c4: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x3310c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x3310c8: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x3310c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x3310cc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3310ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3310d0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3310d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3310d4: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x3310d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3310d8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x3310d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3310dc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3310dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3310e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3310e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3310e4: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x3310e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3310e8: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x3310e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3310ec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3310ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3310f0: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x3310f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3310f4: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x3310f4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x3310f8: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x3310f8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x3310fc: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x3310fcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x331100: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x331100u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x331104: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x331104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x331108: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x331108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33110c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x33110cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x331110: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x331110u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x331114: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x331114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x331118: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x331118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33111c: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x33111cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x331120: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x331120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x331124: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x331124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x331128: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x331128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x33112c: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x33112cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x331130: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x331130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x331134: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x331134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x331138: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x331138u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x33113c: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x33113cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x331140: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x331140u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x331144: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x331144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x331148: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x331148u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33114c: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x33114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
    // 0x331150: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x331150u;
    {
        const bool branch_taken_0x331150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x331154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331150u;
        // 0x331154: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331150) {
            ctx->pc = 0x331160u;
            goto label_331160;
        }
    }
    ctx->pc = 0x331158u;
    // 0x331158: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x331158u;
    {
        const bool branch_taken_0x331158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331158) {
            ctx->pc = 0x33115Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331158u;
            // 0x33115c: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x331178u;
            goto label_331178;
        }
    }
    ctx->pc = 0x331160u;
label_331160:
    // 0x331160: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x331160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
    // 0x331164: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x331164u;
    {
        const bool branch_taken_0x331164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331164u;
        // 0x331168: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331164) {
            ctx->pc = 0x3311A0u;
            goto label_3311a0;
        }
    }
    ctx->pc = 0x33116Cu;
    // 0x33116c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x33116Cu;
    {
        const bool branch_taken_0x33116c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33116c) {
            ctx->pc = 0x331170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33116Cu;
            // 0x331170: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3311A8u;
            goto label_3311a8;
        }
    }
    ctx->pc = 0x331174u;
    // 0x331174: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x331174u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_331178:
    // 0x331178: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x331178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33117c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x33117cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x331180: 0x2463d670  addiu       $v1, $v1, -0x2990
    ctx->pc = 0x331180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956656));
    // 0x331184: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x331184u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5DD670u));
    // 0x331188: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x331188u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x33118c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x33118cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x331190: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x331190u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x331194: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x331194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x331198: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x331198u;
    {
        const bool branch_taken_0x331198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331198u;
        // 0x33119c: 0x2463d680  addiu       $v1, $v1, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331198) {
            ctx->pc = 0x3311C8u;
            goto label_3311c8;
        }
    }
    ctx->pc = 0x3311A0u;
label_3311a0:
    // 0x3311a0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3311a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x3311a4: 0x0  nop
    ctx->pc = 0x3311a4u;
    // NOP
label_3311a8:
    // 0x3311a8: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x3311a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3311ac: 0x2463d650  addiu       $v1, $v1, -0x29B0
    ctx->pc = 0x3311acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x3311b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3311b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3311b4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3311b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3311b8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3311b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3311bc: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x3311bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x3311c0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3311c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x3311c4: 0x2463d660  addiu       $v1, $v1, -0x29A0
    ctx->pc = 0x3311c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956640));
label_3311c8:
    // 0x3311c8: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x3311c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3311cc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3311ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3311d0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3311d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3311d4: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x3311d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x3311d8: 0x8f83becc  lw          $v1, -0x4134($gp)
    ctx->pc = 0x3311d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
    // 0x3311dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3311dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3311e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3311E0u;
    {
        const bool branch_taken_0x3311e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3311E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3311E0u;
        // 0x3311e4: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3311e0) {
            ctx->pc = 0x3311F0u;
            goto label_3311f0;
        }
    }
    ctx->pc = 0x3311E8u;
    // 0x3311e8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3311e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3311ec: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x3311ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_3311f0:
    // 0x3311f0: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x3311f0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
    // 0x3311f4: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x3311f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3311f8: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x3311f8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
    // 0x3311fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3311fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x331200: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x331200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x331204: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x331204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x331208: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x331208u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x33120c: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x33120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x331210: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x331210u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x331214: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x331214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x331218: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x331218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33121c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x33121cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x331220: 0x8c64d5a4  lw          $a0, -0x2A5C($v1)
    ctx->pc = 0x331220u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61D5A4u));
    // 0x331224: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x331224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x331228: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x331228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x33122c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x33122cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x331230: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x331230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x331234: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x331234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x331238: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x331238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x33123c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33123cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x331240: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x331240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x331244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x331244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x331248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x331248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33124c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x33124cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x331250: 0x10a6000b  beq         $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x331250u;
    {
        const bool branch_taken_0x331250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x331254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331250u;
        // 0x331254: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331250) {
            ctx->pc = 0x331280u;
            goto label_331280;
        }
    }
    ctx->pc = 0x331258u;
    // 0x331258: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x331258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x33125c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33125cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x331260: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x331260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331264: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x331264u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x331268: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x331268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33126c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33126cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x331270: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x331270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x331274: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x331274u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x331278: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x331278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
    // 0x33127c: 0x0  nop
    ctx->pc = 0x33127cu;
    // NOP
label_331280:
    // 0x331280: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x331280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x331284: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x331284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331288: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x331288u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33128c: 0x250a0018  addiu       $t2, $t0, 0x18
    ctx->pc = 0x33128cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x331290: 0xad490004  sw          $t1, 0x4($t2)
    ctx->pc = 0x331290u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 9));
    // 0x331294: 0x9d440008  lwu         $a0, 0x8($t2)
    ctx->pc = 0x331294u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x331298: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x331298u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x33129c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x33129cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3312a0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3312a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3312a4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3312a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3312a8: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x3312a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x3312ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3312acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3312b0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x3312b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3312b4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3312b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3312b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3312b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3312bc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3312bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3312c0: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3312c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3312c4: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x3312c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3312c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3312c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3312cc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3312ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3312d0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3312d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3312d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3312d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3312d8:
    // 0x3312d8: 0x42000039  di
    ctx->pc = 0x3312d8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3312dc: 0x40f  sync.p
    ctx->pc = 0x3312dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3312e0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3312e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x3312e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3312e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3312e8: 0x0  nop
    ctx->pc = 0x3312e8u;
    // NOP
    // 0x3312ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3312ECu;
    {
        const bool branch_taken_0x3312ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3312ec) {
            ctx->pc = 0x3312D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3312d8;
        }
    }
    ctx->pc = 0x3312F4u;
    // 0x3312f4: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x3312f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x3312f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3312f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3312fc: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x3312fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x331300: 0x42000038  ei
    ctx->pc = 0x331300u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x331304: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x331304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x331308: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x331308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33130c: 0x14490004  bne         $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33130Cu;
    {
        const bool branch_taken_0x33130c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x331310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33130Cu;
        // 0x331310: 0xad420004  sw          $v0, 0x4($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33130c) {
            ctx->pc = 0x331320u;
            goto label_331320;
        }
    }
    ctx->pc = 0x331314u;
    // 0x331314: 0xc10a762  jal         func_429D88
    ctx->pc = 0x331314u;
    SET_GPR_U32(ctx, 31, 0x33131Cu);
    ctx->pc = 0x331318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331314u;
    // 0x331318: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x331314u, 0x33131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33131Cu;
label_33131c:
    // 0x33131c: 0x0  nop
    ctx->pc = 0x33131cu;
    // NOP
label_331320:
    // 0x331320: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x331320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33132c: 0x3e00008  jr          $ra
    ctx->pc = 0x33132Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33132Cu;
        // 0x331330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33132Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331334u;
    // 0x331334: 0x0  nop
    ctx->pc = 0x331334u;
    // NOP
    // 0x331338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33133c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x33133cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331344: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x331344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x331348: 0xc0cc1d6  jal         func_330758
    ctx->pc = 0x331348u;
    SET_GPR_U32(ctx, 31, 0x331350u);
    ctx->pc = 0x33134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331348u;
    // 0x33134c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330758u;
    goto label_330758;
    ctx->pc = 0x331350u;
label_331350:
    // 0x331350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331354: 0x3e00008  jr          $ra
    ctx->pc = 0x331354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331354u;
        // 0x331358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33135Cu;
    // 0x33135c: 0x0  nop
    ctx->pc = 0x33135cu;
    // NOP
    ctx->pc = 0x331360u;
}
