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

// Function: sub_003C75E0
// Address: 0x3c75e0 - 0x3c78f0
void sub_003C75E0_0x3c75e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C75E0_0x3c75e0");
#endif

    switch (ctx->pc) {
        case 0x3c780cu: goto label_3c780c;
        case 0x3c78ccu: goto label_3c78cc;
        default: break;
    }

    ctx->pc = 0x3c75e0u;

    // 0x3c75e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c75e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3c75e4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x3c75e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x3c75e8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3c75e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3c75ec: 0x2507e1c0  addiu       $a3, $t0, -0x1E40
    ctx->pc = 0x3c75ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959552));
    // 0x3c75f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c75f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3c75f4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c75f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3c75f8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c75f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3c75fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c75fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c7600: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3c7600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3c7604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c7604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c7608: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x3c7608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x3c760c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c760cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3c7610: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x3c7610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c7614: 0xaf84bda0  sw          $a0, -0x4260($gp)
    ctx->pc = 0x3c7614u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950304), GPR_U32(ctx, 4));
    // 0x3c7618: 0xe507e1c0  swc1        $f7, -0x1E40($t0)
    ctx->pc = 0x3c7618u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E1C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E1C0u, _value); } while (0); }
    // 0x3c761c: 0xaf86bd9c  sw          $a2, -0x4264($gp)
    ctx->pc = 0x3c761cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950300), GPR_U32(ctx, 6));
    // 0x3c7620: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3c7620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7624: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x3c7624u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E1C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E1C8u, _value); } while (0); }
    // 0x3c7628: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x3c7628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c762c: 0xe4e60024  swc1        $f6, 0x24($a3)
    ctx->pc = 0x3c762cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E1E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E1E4u, _value); } while (0); }
    // 0x3c7630: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x3c7630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7634: 0xe4e3002c  swc1        $f3, 0x2C($a3)
    ctx->pc = 0x3c7634u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E1ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E1ECu, _value); } while (0); }
    // 0x3c7638: 0x46021941  sub.s       $f5, $f3, $f2
    ctx->pc = 0x3c7638u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3c763c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x3c763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7640: 0x46142902  mul.s       $f4, $f5, $f20
    ctx->pc = 0x3c7640u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x3c7644: 0xe4e10048  swc1        $f1, 0x48($a3)
    ctx->pc = 0x3c7644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E208u, _value); } while (0); }
    // 0x3c7648: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x3c7648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c764c: 0x46002064  .word       0x46002064                   # cvt.w.s     $f1, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c764cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c7650: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3c7650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c7654: 0xe4e5000c  swc1        $f5, 0xC($a3)
    ctx->pc = 0x3c7654u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x3c7658: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3c7658u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3c765c: 0xe4e00050  swc1        $f0, 0x50($a3)
    ctx->pc = 0x3c765cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 80), bits); }
    // 0x3c7660: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3c7660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3c7664: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x3c7664u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x3c7668: 0x461410c2  mul.s       $f3, $f2, $f20
    ctx->pc = 0x3c7668u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3c766c: 0xe4e20054  swc1        $f2, 0x54($a3)
    ctx->pc = 0x3c766cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 84), bits); }
    // 0x3c7670: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x3c7670u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3c7674: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x3c7674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x3c7678: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7678u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c767c: 0xe4e00058  swc1        $f0, 0x58($a3)
    ctx->pc = 0x3c767cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 88), bits); }
    // 0x3c7680: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7680u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c7684: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x3c7684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x3c7688: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C7688u;
    {
        const bool branch_taken_0x3c7688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7688u;
        // 0x3c768c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7688) {
            ctx->pc = 0x3C76A0u;
            goto label_3c76a0;
        }
    }
    ctx->pc = 0x3C7690u;
    // 0x3c7690: 0x46073001  sub.s       $f0, $f6, $f7
    ctx->pc = 0x3c7690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x3c7694: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x3c7694u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x3c7698: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3c7698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3c769c: 0x0  nop
    ctx->pc = 0x3c769cu;
    // NOP
label_3c76a0:
    // 0x3c76a0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x3c76a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x3c76a4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C76A4u;
    {
        const bool branch_taken_0x3c76a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c76a4) {
            ctx->pc = 0x3C76A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C76A4u;
            // 0x3c76a8: 0x8c620058  lw          $v0, 0x58($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C76C8u;
            goto label_3c76c8;
        }
    }
    ctx->pc = 0x3C76ACu;
    // 0x3c76ac: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x3c76acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c76b0: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x3c76b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c76b4: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x3c76b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c76b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3c76b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3c76bc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3c76bcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3c76c0: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x3c76c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x3c76c4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x3c76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_3c76c8:
    // 0x3c76c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C76C8u;
    {
        const bool branch_taken_0x3c76c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C76C8u;
        // 0x3c76cc: 0xc500e1c0  lwc1        $f0, -0x1E40($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c76c8) {
            ctx->pc = 0x3C76E4u;
            goto label_3c76e4;
        }
    }
    ctx->pc = 0x3C76D0u;
    // 0x3c76d0: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x3c76d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c76d4: 0xc4620054  lwc1        $f2, 0x54($v1)
    ctx->pc = 0x3c76d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c76d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3c76d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3c76dc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3c76dcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3c76e0: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x3c76e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
label_3c76e4:
    // 0x3c76e4: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x3c76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x3c76e8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x3c76e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x3c76ec: 0x8ce40058  lw          $a0, 0x58($a3)
    ctx->pc = 0x3c76ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x3c76f0: 0x24a5b198  addiu       $a1, $a1, -0x4E68
    ctx->pc = 0x3c76f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947224));
    // 0x3c76f4: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x3c76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3c76f8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3c76f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3c76fc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3c76fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3c7700: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x3c7700u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3c7704: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x3c7704u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3c7708: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3c7708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3c770c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3c7710: 0x3c130062  lui         $s3, 0x62
    ctx->pc = 0x3c7710u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
    // 0x3c7714: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3c7714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3c7718: 0x2671e230  addiu       $s1, $s3, -0x1DD0
    ctx->pc = 0x3c7718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959664));
    // 0x3c771c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3c771cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3c7720: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x3c7720u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3c7724: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x3c7724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3c7728: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c7728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3c772c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3c772cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c7730: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3c7730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7734: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3c7734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7738: 0x46000187  neg.s       $f6, $f0
    ctx->pc = 0x3c7738u;
    ctx->f[6] = FPU_NEG_S(ctx->f[0]);
    // 0x3c773c: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x3c773cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c7740: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c7740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c7744: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3c7744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7748: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3c7748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3c774c: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x3c774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7750: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x3c7750u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x3c7754: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x3c7754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c7758: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3c7758u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3c775c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x3c775cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x3c7760: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x3c7760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x3c7764: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x3c7764u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x3c7768: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7768u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c776c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x3c776cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x3c7770: 0xe486000c  swc1        $f6, 0xC($a0)
    ctx->pc = 0x3c7770u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3c7774: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7774u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c7778: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3c7778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3c777c: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x3c777cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3c7780: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x3c7780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3c7784: 0x46003306  mov.s       $f12, $f6
    ctx->pc = 0x3c7784u;
    ctx->f[12] = FPU_MOV_S(ctx->f[6]);
    // 0x3c7788: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7788u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c778c: 0xe661e230  swc1        $f1, -0x1DD0($s3)
    ctx->pc = 0x3c778cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294959664), bits); }
    // 0x3c7790: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x3c7790u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x3c7794: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x3c7794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7798: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7798u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3c779c: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x3c779cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x3c77a0: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x3c77a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c77a4: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c77a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c77a8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x3c77a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x3c77ac: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3c77acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c77b0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x3c77b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3c77b4: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x3c77b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x3c77b8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x3c77b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x3c77bc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3c77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3c77c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3c77c4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3c77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3c77c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c77c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c77cc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3c77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c77d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3c77d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3c77d4: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x3c77d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x3c77d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C77D8u;
    {
        const bool branch_taken_0x3c77d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C77D8u;
        // 0x3c77dc: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c77d8) {
            ctx->pc = 0x3C77E4u;
            goto label_3c77e4;
        }
    }
    ctx->pc = 0x3C77E0u;
    // 0x3c77e0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x3c77e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_3c77e4:
    // 0x3c77e4: 0x8f86bda0  lw          $a2, -0x4260($gp)
    ctx->pc = 0x3c77e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950304)));
    // 0x3c77e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3c77e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c77ec: 0x81c03  sra         $v1, $t0, 16
    ctx->pc = 0x3c77ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 8), 16));
    // 0x3c77f0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3c77f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c77f4: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x3c77f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3c77f8: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x3c77f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3c77fc: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x3c77fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3c7800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c7800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c7804: 0xc0f1c88  jal         func_3C7220
    ctx->pc = 0x3C7804u;
    SET_GPR_U32(ctx, 31, 0x3C780Cu);
    ctx->pc = 0x3C7808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7804u;
    // 0x3c7808: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7220u, 0x3C7804u, 0x3C780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C780Cu;
label_3c780c:
    // 0x3c780c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3c780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3c7810: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C7810u;
    {
        const bool branch_taken_0x3c7810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7810) {
            ctx->pc = 0x3C7814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7810u;
            // 0x3c7814: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7864u;
            goto label_3c7864;
        }
    }
    ctx->pc = 0x3C7818u;
    // 0x3c7818: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3c7818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3c781c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3c781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7820: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3c7820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7824: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3c7824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3c7828: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x3c7828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c782c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3c782cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3c7830: 0xc46c000c  lwc1        $f12, 0xC($v1)
    ctx->pc = 0x3c7830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c7834: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3c7834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3c7838: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3c7838u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3c783c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c783cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x3c7840: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x3c7840u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x3c7844: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7844u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c7848: 0xe660e230  swc1        $f0, -0x1DD0($s3)
    ctx->pc = 0x3c7848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294959664), bits); }
    // 0x3c784c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c784cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c7850: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c7850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c7854: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x3c7854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3c7858: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3c7858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c785c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3C785Cu;
    {
        const bool branch_taken_0x3c785c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C785Cu;
        // 0x3c7860: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c785c) {
            ctx->pc = 0x3C78BCu;
            goto label_3c78bc;
        }
    }
    ctx->pc = 0x3C7864u;
label_3c7864:
    // 0x3c7864: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x3c7864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7868: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3c7868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c786c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3c786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7870: 0x46001307  neg.s       $f12, $f2
    ctx->pc = 0x3c7870u;
    ctx->f[12] = FPU_NEG_S(ctx->f[2]);
    // 0x3c7874: 0x46020902  mul.s       $f4, $f1, $f2
    ctx->pc = 0x3c7874u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c7878: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3c7878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c787c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c787cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c7880: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x3c7880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x3c7884: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3c7884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3c7888: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x3c7888u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x3c788c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3c788cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3c7890: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7890u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3c7894: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x3c7894u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x3c7898: 0x46141842  mul.s       $f1, $f3, $f20
    ctx->pc = 0x3c7898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x3c789c: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x3c789cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3c78a0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c78a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3c78a4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3c78a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c78a8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c78a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c78ac: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3c78acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x3c78b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3c78b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c78b4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3c78b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c78b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3c78b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c78bc:
    // 0x3c78bc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3c78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3c78c0: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x3c78c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3c78c4: 0xc0f1c88  jal         func_3C7220
    ctx->pc = 0x3C78C4u;
    SET_GPR_U32(ctx, 31, 0x3C78CCu);
    ctx->pc = 0x3C78C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C78C4u;
    // 0x3c78c8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7220u, 0x3C78C4u, 0x3C78CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C78CCu;
label_3c78cc:
    // 0x3c78cc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c78ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c78d0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c78d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c78d4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c78d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c78d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c78d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c78dc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3c78dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c78e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c78e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c78e4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3c78e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c78e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C78E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C78ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C78E8u;
        // 0x3c78ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C78E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C78F0u;
}
