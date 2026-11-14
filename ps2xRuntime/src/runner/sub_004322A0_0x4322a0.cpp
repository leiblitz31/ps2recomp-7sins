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

// Function: sub_004322A0
// Address: 0x4322a0 - 0x432590
void sub_004322A0_0x4322a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004322A0_0x4322a0");
#endif

    switch (ctx->pc) {
        case 0x4323d8u: goto label_4323d8;
        case 0x432418u: goto label_432418;
        case 0x432440u: goto label_432440;
        case 0x432480u: goto label_432480;
        case 0x4324a8u: goto label_4324a8;
        case 0x4324e4u: goto label_4324e4;
        case 0x4324f4u: goto label_4324f4;
        case 0x432504u: goto label_432504;
        case 0x432514u: goto label_432514;
        default: break;
    }

    ctx->pc = 0x4322a0u;

    // 0x4322a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4322a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4322a4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4322a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4322a8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4322a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x4322ac: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4322acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4322b0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4322b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4322b4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4322b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4322b8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4322b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x4322bc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4322bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x4322c0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4322c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x4322c4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x4322c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x4322c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4322c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4322cc: 0xe7b900c8  swc1        $f25, 0xC8($sp)
    ctx->pc = 0x4322ccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x4322d0: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x4322d0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x4322d4: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x4322d4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x4322d8: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x4322d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x4322dc: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x4322dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x4322e0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x4322e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x4322e4: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x4322e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x4322e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4322e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x4322ec: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x4322ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4322f0: 0x40836000  mtc0        $v1, Status
    ctx->pc = 0x4322f0u;
    ctx->cop0_status = GPR_U32(ctx, 3) & 0xFF57FFFF;
    // 0x4322f4: 0x3409f000  ori         $t1, $zero, 0xF000
    ctx->pc = 0x4322f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x4322f8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x4322f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x4322fc: 0x3529000d  ori         $t1, $t1, 0xD
    ctx->pc = 0x4322fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13);
    // 0x432300: 0x3c080500  lui         $t0, 0x500
    ctx->pc = 0x432300u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1280 << 16));
    // 0x432304: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x432304u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x432308: 0x35080100  ori         $t0, $t0, 0x100
    ctx->pc = 0x432308u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)256);
    // 0x43230c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x43230cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x432310: 0x35080102  ori         $t0, $t0, 0x102
    ctx->pc = 0x432310u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)258);
    // 0x432314: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x432314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x432318: 0x71093b89  pcpyld      $a3, $t0, $t1
    ctx->pc = 0x432318u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x43231c: 0x24843c10  addiu       $a0, $a0, 0x3C10
    ctx->pc = 0x43231cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15376));
    // 0x432320: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x432320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x432324: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x432324u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x432328: 0x24a53eb0  addiu       $a1, $a1, 0x3EB0
    ctx->pc = 0x432328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16048));
    // 0x43232c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x43232cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x432330: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x432330u;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x623EB0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x623EB0u, _value); } while (0);
    // 0x432334: 0x24423dd0  addiu       $v0, $v0, 0x3DD0
    ctx->pc = 0x432334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15824));
    // 0x432338: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x432338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x43233c: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x43233cu;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x623DD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x623DD0u, _value); } while (0);
    // 0x432340: 0x24633cf0  addiu       $v1, $v1, 0x3CF0
    ctx->pc = 0x432340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15600));
    // 0x432344: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x432344u;
    do { __m128i _value = (GPR_VEC(ctx, 7)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x623CF0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x623CF0u, _value); } while (0);
    // 0x432348: 0x3c087130  lui         $t0, 0x7130
    ctx->pc = 0x432348u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28976 << 16));
    // 0x43234c: 0x35084001  ori         $t0, $t0, 0x4001
    ctx->pc = 0x43234cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16385);
    // 0x432350: 0x3c093f3f  lui         $t1, 0x3F3F
    ctx->pc = 0x432350u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16191 << 16));
    // 0x432354: 0x35293f3f  ori         $t1, $t1, 0x3F3F
    ctx->pc = 0x432354u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16191);
    // 0x432358: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x432358u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x43235c: 0x35292000  ori         $t1, $t1, 0x2000
    ctx->pc = 0x43235cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)8192);
    // 0x432360: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x432360u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x432364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x432364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432368: 0x71093b89  pcpyld      $a3, $t0, $t1
    ctx->pc = 0x432368u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x43236c: 0xc7998088  lwc1        $f25, -0x7F78($gp)
    ctx->pc = 0x43236cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x432370: 0x7c870010  sq          $a3, 0x10($a0)
    ctx->pc = 0x432370u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 7));
    // 0x432374: 0x3c087130  lui         $t0, 0x7130
    ctx->pc = 0x432374u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28976 << 16));
    // 0x432378: 0x35084202  ori         $t0, $t0, 0x4202
    ctx->pc = 0x432378u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16898);
    // 0x43237c: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x43237cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x432380: 0x7ca70010  sq          $a3, 0x10($a1)
    ctx->pc = 0x432380u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 7));
    // 0x432384: 0x249e0080  addiu       $fp, $a0, 0x80
    ctx->pc = 0x432384u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x432388: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x432388u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x43238c: 0x24770080  addiu       $s7, $v1, 0x80
    ctx->pc = 0x43238cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x432390: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x432390u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x432394: 0x24560080  addiu       $s6, $v0, 0x80
    ctx->pc = 0x432394u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x432398: 0x71063b89  pcpyld      $a3, $t0, $a2
    ctx->pc = 0x432398u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 6)));
    // 0x43239c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x43239cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x4323a0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x4323a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x4323a4: 0x7ca70070  sq          $a3, 0x70($a1)
    ctx->pc = 0x4323a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 112), GPR_VEC(ctx, 7));
    // 0x4323a8: 0x2495001c  addiu       $s5, $a0, 0x1C
    ctx->pc = 0x4323a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x4323ac: 0x7c870070  sq          $a3, 0x70($a0)
    ctx->pc = 0x4323acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 7));
    // 0x4323b0: 0x2474001c  addiu       $s4, $v1, 0x1C
    ctx->pc = 0x4323b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x4323b4: 0x7c470070  sq          $a3, 0x70($v0)
    ctx->pc = 0x4323b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 7));
    // 0x4323b8: 0x2453001c  addiu       $s3, $v0, 0x1C
    ctx->pc = 0x4323b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x4323bc: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x4323bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x4323c0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x4323c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x4323c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4323c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4323c8: 0xc798808c  lwc1        $f24, -0x7F74($gp)
    ctx->pc = 0x4323c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x4323cc: 0x2411005f  addiu       $s1, $zero, 0x5F
    ctx->pc = 0x4323ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x4323d0: 0xc7978090  lwc1        $f23, -0x7F70($gp)
    ctx->pc = 0x4323d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x4323d4: 0x7c670070  sq          $a3, 0x70($v1)
    ctx->pc = 0x4323d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), GPR_VEC(ctx, 7));
label_4323d8:
    // 0x4323d8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4323d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4323dc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4323DCu;
    {
        const bool branch_taken_0x4323dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4323E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4323DCu;
        // 0x4323e0: 0x118043  sra         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4323dc) {
            ctx->pc = 0x43244Cu;
            goto label_43244c;
        }
    }
    ctx->pc = 0x4323E4u;
    // 0x4323e4: 0x4492a000  mtc1        $s2, $f20
    ctx->pc = 0x4323e4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4323e8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x4323e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x4323ec: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x4323ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4323f0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x4323f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x4323f4: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x4323f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x4323f8: 0x4619a002  mul.s       $f0, $f20, $f25
    ctx->pc = 0x4323f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x4323fc: 0x4618a342  mul.s       $f13, $f20, $f24
    ctx->pc = 0x4323fcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x432400: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x432400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x432404: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x432404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x432408: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x432408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x43240c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x43240cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x432410: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x432410u;
    SET_GPR_U32(ctx, 31, 0x432418u);
    ctx->pc = 0x432414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432410u;
    // 0x432414: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x432410u, 0x432418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432418u;
label_432418:
    // 0x432418: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x432418u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x43241c: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x43241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x432420: 0x4617a342  mul.s       $f13, $f20, $f23
    ctx->pc = 0x432420u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x432424: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x432424u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x432428: 0x460da342  mul.s       $f13, $f20, $f13
    ctx->pc = 0x432428u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x43242c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43242cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x432430: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x432430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x432434: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x432434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x432438: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x432438u;
    SET_GPR_U32(ctx, 31, 0x432440u);
    ctx->pc = 0x43243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432438u;
    // 0x43243c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x432438u, 0x432440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432440u;
label_432440:
    // 0x432440: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x432440u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x432444: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x432444u;
    {
        const bool branch_taken_0x432444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432444u;
        // 0x432448: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432444) {
            ctx->pc = 0x4324B0u;
            goto label_4324b0;
        }
    }
    ctx->pc = 0x43244Cu;
label_43244c:
    // 0x43244c: 0x4492a000  mtc1        $s2, $f20
    ctx->pc = 0x43244cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x432450: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x432450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x432454: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x432454u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x432458: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x432458u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x43245c: 0x21e1821  addu        $v1, $s0, $fp
    ctx->pc = 0x43245cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x432460: 0x4619a002  mul.s       $f0, $f20, $f25
    ctx->pc = 0x432460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x432464: 0x4618a342  mul.s       $f13, $f20, $f24
    ctx->pc = 0x432464u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x432468: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x432468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x43246c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43246cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x432470: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x432470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x432474: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x432474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x432478: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x432478u;
    SET_GPR_U32(ctx, 31, 0x432480u);
    ctx->pc = 0x43247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432478u;
    // 0x43247c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x432478u, 0x432480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432480u;
label_432480:
    // 0x432480: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x432480u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x432484: 0x2171821  addu        $v1, $s0, $s7
    ctx->pc = 0x432484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x432488: 0x4617a342  mul.s       $f13, $f20, $f23
    ctx->pc = 0x432488u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x43248c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x43248cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x432490: 0x460da342  mul.s       $f13, $f20, $f13
    ctx->pc = 0x432490u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x432494: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x432494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x432498: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x432498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x43249c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x43249cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4324a0: 0xc0c39f4  jal         func_30E7D0
    ctx->pc = 0x4324A0u;
    SET_GPR_U32(ctx, 31, 0x4324A8u);
    ctx->pc = 0x4324A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4324A0u;
    // 0x4324a4: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E7D0u, 0x4324A0u, 0x4324A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4324A8u;
label_4324a8:
    // 0x4324a8: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x4324a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x4324ac: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x4324acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_4324b0:
    // 0x4324b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4324b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4324b4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4324b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4324b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4324b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4324bc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4324bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4324c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4324c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4324c4: 0x2a420060  slti        $v0, $s2, 0x60
    ctx->pc = 0x4324c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x4324c8: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x4324C8u;
    {
        const bool branch_taken_0x4324c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4324CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4324C8u;
        // 0x4324cc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4324c8) {
            ctx->pc = 0x4323D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4323d8;
        }
    }
    ctx->pc = 0x4324D0u;
    // 0x4324d0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4324d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4324d4: 0x24503c10  addiu       $s0, $v0, 0x3C10
    ctx->pc = 0x4324d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15376));
    // 0x4324d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4324d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4324dc: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4324DCu;
    SET_GPR_U32(ctx, 31, 0x4324E4u);
    ctx->pc = 0x4324E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4324DCu;
    // 0x4324e0: 0x2605015f  addiu       $a1, $s0, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4324DCu, 0x4324E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4324E4u;
label_4324e4:
    // 0x4324e4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4324e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4324e8: 0x24643cf0  addiu       $a0, $v1, 0x3CF0
    ctx->pc = 0x4324e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15600));
    // 0x4324ec: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4324ECu;
    SET_GPR_U32(ctx, 31, 0x4324F4u);
    ctx->pc = 0x4324F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4324ECu;
    // 0x4324f0: 0x2485015f  addiu       $a1, $a0, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4324ECu, 0x4324F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4324F4u;
label_4324f4:
    // 0x4324f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4324f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x4324f8: 0x24443dd0  addiu       $a0, $v0, 0x3DD0
    ctx->pc = 0x4324f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15824));
    // 0x4324fc: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4324FCu;
    SET_GPR_U32(ctx, 31, 0x432504u);
    ctx->pc = 0x432500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4324FCu;
    // 0x432500: 0x2485015f  addiu       $a1, $a0, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4324FCu, 0x432504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432504u;
label_432504:
    // 0x432504: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x432504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x432508: 0x24643eb0  addiu       $a0, $v1, 0x3EB0
    ctx->pc = 0x432508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16048));
    // 0x43250c: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x43250Cu;
    SET_GPR_U32(ctx, 31, 0x432514u);
    ctx->pc = 0x432510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43250Cu;
    // 0x432510: 0x2485015f  addiu       $a1, $a0, 0x15F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 351));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x43250Cu, 0x432514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432514u;
label_432514:
    // 0x432514: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x432514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x432518: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x432518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x43251c: 0x2442cac0  addiu       $v0, $v0, -0x3540
    ctx->pc = 0x43251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953664));
    // 0x432520: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x432520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x432524: 0x8c450860  lw          $a1, 0x860($v0)
    ctx->pc = 0x432524u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5DD320u));
    // 0x432528: 0xaf90bed4  sw          $s0, -0x412C($gp)
    ctx->pc = 0x432528u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950612), GPR_U32(ctx, 16));
    // 0x43252c: 0xaf83bed8  sw          $v1, -0x4128($gp)
    ctx->pc = 0x43252cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950616), GPR_U32(ctx, 3));
    // 0x432530: 0xaf80bee0  sw          $zero, -0x4120($gp)
    ctx->pc = 0x432530u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950624), GPR_U32(ctx, 0));
    // 0x432534: 0x14a40002  bne         $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x432534u;
    {
        const bool branch_taken_0x432534 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x432538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432534u;
        // 0x432538: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432534) {
            ctx->pc = 0x432540u;
            goto label_432540;
        }
    }
    ctx->pc = 0x43253Cu;
    // 0x43253c: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x43253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_432540:
    // 0x432540: 0xaf82bedc  sw          $v0, -0x4124($gp)
    ctx->pc = 0x432540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950620), GPR_U32(ctx, 2));
    // 0x432544: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x432544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x432548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x432548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43254c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x43254cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x432550: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x432550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x432554: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x432554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x432558: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x432558u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43255c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x43255cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x432560: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x432560u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x432564: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x432564u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x432568: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x432568u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43256c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43256cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432570: 0xc7b900c8  lwc1        $f25, 0xC8($sp)
    ctx->pc = 0x432570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x432574: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x432574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x432578: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x432578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x43257c: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x43257cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x432580: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x432580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x432584: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x432584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x432588: 0x3e00008  jr          $ra
    ctx->pc = 0x432588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432588u;
        // 0x43258c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x432590u;
}
