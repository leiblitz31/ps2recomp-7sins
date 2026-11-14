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

// Function: sub_00313010
// Address: 0x313010 - 0x313900
void sub_00313010_0x313010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313010_0x313010");
#endif

    switch (ctx->pc) {
        case 0x313120u: goto label_313120;
        case 0x3131f0u: goto label_3131f0;
        case 0x313268u: goto label_313268;
        case 0x3133a8u: goto label_3133a8;
        case 0x313450u: goto label_313450;
        case 0x313470u: goto label_313470;
        case 0x3134c0u: goto label_3134c0;
        case 0x313560u: goto label_313560;
        case 0x313718u: goto label_313718;
        case 0x313790u: goto label_313790;
        default: break;
    }

    ctx->pc = 0x313010u;

    // 0x313010: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x313010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x313014: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x313014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x313018: 0xe7b80100  swc1        $f24, 0x100($sp)
    ctx->pc = 0x313018u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x31301c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x31301cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x313020: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x313020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x313024: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x313024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x313028: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x313028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31302c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x31302cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x313030: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x313030u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313034: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x313034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x313038: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x313038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x31303c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x31303cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x313040: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x313040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x313044: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x313044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x313048: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x313048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x31304c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x313050: 0xe7bb0118  swc1        $f27, 0x118($sp)
    ctx->pc = 0x313050u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x313054: 0xe7ba0110  swc1        $f26, 0x110($sp)
    ctx->pc = 0x313054u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x313058: 0xe7b90108  swc1        $f25, 0x108($sp)
    ctx->pc = 0x313058u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x31305c: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x31305cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x313060: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x313060u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x313064: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x313064u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x313068: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x313068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x31306c: 0xc4549508  lwc1        $f20, -0x6AF8($v0)
    ctx->pc = 0x31306cu;
    { uint32_t bits = FAST_READ32(0x609508u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x313070: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x313070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x313074: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x313074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x313078: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x313078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31307c: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x31307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x313080: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x313080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313084: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x313084u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x313088: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x313088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31308c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x31308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313090: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x313090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x313094: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x313094u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x313098: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x313098u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31309c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x31309cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3130a0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3130a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3130a4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3130a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3130a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3130a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3130ac: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3130acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3130b0: 0x3c170031  lui         $s7, 0x31
    ctx->pc = 0x3130b0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)49 << 16));
    // 0x3130b4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3130b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3130b8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3130b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3130bc: 0x0  nop
    ctx->pc = 0x3130bcu;
    // NOP
    // 0x3130c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3130C0u;
    {
        const bool branch_taken_0x3130c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3130C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130C0u;
        // 0x3130c4: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3130c0) {
            ctx->pc = 0x3130D0u;
            goto label_3130d0;
        }
    }
    ctx->pc = 0x3130C8u;
    // 0x3130c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3130c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3130cc: 0x0  nop
    ctx->pc = 0x3130ccu;
    // NOP
label_3130d0:
    // 0x3130d0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3130d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3130d4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3130d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3130d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3130d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3130dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3130dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3130e0: 0x0  nop
    ctx->pc = 0x3130e0u;
    // NOP
    // 0x3130e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3130E4u;
    {
        const bool branch_taken_0x3130e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3130E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130E4u;
        // 0x3130e8: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3130e4) {
            ctx->pc = 0x3130F0u;
            goto label_3130f0;
        }
    }
    ctx->pc = 0x3130ECu;
    // 0x3130ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3130ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3130f0:
    // 0x3130f0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x3130f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x3130f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3130f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3130f8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3130f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3130fc: 0x24960010  addiu       $s6, $a0, 0x10
    ctx->pc = 0x3130fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x313100: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x313100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x313104: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x313104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x313108: 0xafb60038  sw          $s6, 0x38($sp)
    ctx->pc = 0x313108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 22));
    // 0x31310c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31310cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313110: 0xc79a8048  lwc1        $f26, -0x7FB8($gp)
    ctx->pc = 0x313110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x313114: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x313114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x313118: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x313118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x31311c: 0x3b21821  addu        $v1, $sp, $s2
    ctx->pc = 0x31311cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
label_313120:
    // 0x313120: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x313120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313124: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x313124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x313128: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x313128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31312c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x31312cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x313130: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x313130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313134: 0x0  nop
    ctx->pc = 0x313134u;
    // NOP
    // 0x313138: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x313138u;
    {
        const bool branch_taken_0x313138 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x313138) {
            ctx->pc = 0x31313Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313138u;
            // 0x31313c: 0x46170000  add.s       $f0, $f0, $f23 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x313150u;
            goto label_313150;
        }
    }
    ctx->pc = 0x313140u;
    // 0x313140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x313140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x313144: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x313144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x313148u;
    {
        const bool branch_taken_0x313148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313148u;
        // 0x31314c: 0x8e2a0034  lw          $t2, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313148) {
            ctx->pc = 0x313154u;
            goto label_313154;
        }
    }
    ctx->pc = 0x313150u;
label_313150:
    // 0x313150: 0x8e2a0034  lw          $t2, 0x34($s1)
    ctx->pc = 0x313150u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_313154:
    // 0x313154: 0x4600cd43  div.s       $f21, $f25, $f0
    ctx->pc = 0x313154u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[25], ctx->f[0]); }
    // 0x313158: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x313158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31315c: 0x1140003c  beqz        $t2, . + 4 + (0x3C << 2)
    ctx->pc = 0x31315Cu;
    {
        const bool branch_taken_0x31315c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x313160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31315Cu;
        // 0x313160: 0x26550004  addiu       $s5, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31315c) {
            ctx->pc = 0x313250u;
            goto label_313250;
        }
    }
    ctx->pc = 0x313164u;
    // 0x313164: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x313164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x313168: 0x31430003  andi        $v1, $t2, 0x3
    ctx->pc = 0x313168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x31316c: 0x19400016  blez        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x31316Cu;
    {
        const bool branch_taken_0x31316c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x313170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31316Cu;
        // 0x313170: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31316c) {
            ctx->pc = 0x3131C8u;
            goto label_3131c8;
        }
    }
    ctx->pc = 0x313174u;
    // 0x313174: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x313174u;
    {
        const bool branch_taken_0x313174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x313178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313174u;
        // 0x313178: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313174) {
            ctx->pc = 0x3131ECu;
            goto label_3131ec;
        }
    }
    ctx->pc = 0x31317Cu;
    // 0x31317c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x31317Cu;
    {
        const bool branch_taken_0x31317c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31317c) {
            ctx->pc = 0x313180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31317Cu;
            // 0x313180: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3131CCu;
            goto label_3131cc;
        }
    }
    ctx->pc = 0x313184u;
    // 0x313184: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x313184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x313188: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x313188u;
    {
        const bool branch_taken_0x313188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313188) {
            ctx->pc = 0x31318Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313188u;
            // 0x31318c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3131B0u;
            goto label_3131b0;
        }
    }
    ctx->pc = 0x313190u;
    // 0x313190: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x313190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x313194: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x313194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x313198: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x313198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31319c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31319cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3131a0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3131a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3131a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3131a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3131a8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3131a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3131ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3131acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3131b0:
    // 0x3131b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3131b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3131b4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3131b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3131b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3131b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3131bc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3131bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3131c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3131c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3131c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3131c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3131c8:
    // 0x3131c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3131c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3131cc:
    // 0x3131cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3131ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3131d0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3131d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3131d4: 0x20a482b  sltu        $t1, $s0, $t2
    ctx->pc = 0x3131d4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3131d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3131d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3131dc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3131dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3131e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3131e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3131e4: 0x1120001a  beqz        $t1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3131E4u;
    {
        const bool branch_taken_0x3131e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3131E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3131E4u;
        // 0x3131e8: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3131e4) {
            ctx->pc = 0x313250u;
            goto label_313250;
        }
    }
    ctx->pc = 0x3131ECu;
label_3131ec:
    // 0x3131ec: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3131ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3131f0:
    // 0x3131f0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3131f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3131f4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3131f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3131f8: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x3131f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3131fc: 0x20a482b  sltu        $t1, $s0, $t2
    ctx->pc = 0x3131fcu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x313200: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x313200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x313204: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x313204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x313208: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x313208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31320c: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x31320cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x313210: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x313210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313214: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x313214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x313218: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x313218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31321c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x31321cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x313220: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x313220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x313224: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x313224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x313228: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x313228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31322c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x31322cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x313230: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x313230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x313234: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x313234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x313238: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x313238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31323c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x31323cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313240: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x313240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x313244: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x313244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313248: 0x1520ffe9  bnez        $t1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x313248u;
    {
        const bool branch_taken_0x313248 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x31324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313248u;
        // 0x31324c: 0xe4a10008  swc1        $f1, 0x8($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x313248) {
            ctx->pc = 0x3131F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3131f0;
        }
    }
    ctx->pc = 0x313250u;
label_313250:
    // 0x313250: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x313250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x313254: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x313254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313258: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x313258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x31325c: 0x26e74778  addiu       $a3, $s7, 0x4778
    ctx->pc = 0x31325cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 18296));
    // 0x313260: 0xc0bbc9c  jal         func_2EF270
    ctx->pc = 0x313260u;
    SET_GPR_U32(ctx, 31, 0x313268u);
    ctx->pc = 0x313264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313260u;
    // 0x313264: 0x109882  srl         $s3, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF270u, 0x313260u, 0x313268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313268u;
label_313268:
    // 0x313268: 0x103042  srl         $a2, $s0, 1
    ctx->pc = 0x313268u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x31326c: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x31326cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x313270: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x313270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x313274: 0xd3a021  addu        $s4, $a2, $s3
    ctx->pc = 0x313274u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x313278: 0x134880  sll         $t1, $s3, 2
    ctx->pc = 0x313278u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x31327c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x31327cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x313280: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x313280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313284: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x313284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x313288: 0x1244021  addu        $t0, $t1, $a0
    ctx->pc = 0x313288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x31328c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x31328cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x313290: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x313290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x313294: 0x461a0842  mul.s       $f1, $f1, $f26
    ctx->pc = 0x313294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
    // 0x313298: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x313298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31329c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x31329cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3132a0: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x3132a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3132a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3132a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3132a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3132a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3132ac: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3132acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3132b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3132b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3132b4: 0x0  nop
    ctx->pc = 0x3132b4u;
    // NOP
    // 0x3132b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3132B8u;
    {
        const bool branch_taken_0x3132b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3132BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132B8u;
        // 0x3132bc: 0xc4620008  lwc1        $f2, 0x8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132b8) {
            ctx->pc = 0x3132D0u;
            goto label_3132d0;
        }
    }
    ctx->pc = 0x3132C0u;
    // 0x3132c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3132c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3132c4: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3132c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3132c8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x3132C8u;
    {
        const bool branch_taken_0x3132c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3132CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132C8u;
        // 0x3132cc: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132c8) {
            ctx->pc = 0x313450u;
            goto label_313450;
        }
    }
    ctx->pc = 0x3132D0u;
label_3132d0:
    // 0x3132d0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3132d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3132d4: 0x4600dd83  div.s       $f22, $f27, $f0
    ctx->pc = 0x3132d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[27], ctx->f[0]); }
    // 0x3132d8: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x3132d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3132dc: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3132DCu;
    {
        const bool branch_taken_0x3132dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3132E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132DCu;
        // 0x3132e0: 0x2902823  subu        $a1, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132dc) {
            ctx->pc = 0x313438u;
            goto label_313438;
        }
    }
    ctx->pc = 0x3132E4u;
    // 0x3132e4: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x3132e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3132e8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3132e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3132ec: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x3132ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3132f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3132f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3132f4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3132f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3132f8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3132F8u;
    {
        const bool branch_taken_0x3132f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3132FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132F8u;
        // 0x3132fc: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132f8) {
            ctx->pc = 0x313370u;
            goto label_313370;
        }
    }
    ctx->pc = 0x313300u;
    // 0x313300: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x313300u;
    {
        const bool branch_taken_0x313300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x313304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313300u;
        // 0x313304: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313300) {
            ctx->pc = 0x3133A0u;
            goto label_3133a0;
        }
    }
    ctx->pc = 0x313308u;
    // 0x313308: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x313308u;
    {
        const bool branch_taken_0x313308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313308) {
            ctx->pc = 0x31330Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313308u;
            // 0x31330c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313374u;
            goto label_313374;
        }
    }
    ctx->pc = 0x313310u;
    // 0x313310: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x313310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x313314: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x313314u;
    {
        const bool branch_taken_0x313314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313314) {
            ctx->pc = 0x313318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313314u;
            // 0x313318: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31334Cu;
            goto label_31334c;
        }
    }
    ctx->pc = 0x31331Cu;
    // 0x31331c: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x31331cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x313320: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x313320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313324: 0x0  nop
    ctx->pc = 0x313324u;
    // NOP
    // 0x313328: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x313328u;
    {
        const bool branch_taken_0x313328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313328u;
        // 0x31332c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313328) {
            ctx->pc = 0x31333Cu;
            goto label_31333c;
        }
    }
    ctx->pc = 0x313330u;
    // 0x313330: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x313330u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x313334: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x313334u;
    {
        const bool branch_taken_0x313334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313334u;
        // 0x313338: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x313334) {
            ctx->pc = 0x313340u;
            goto label_313340;
        }
    }
    ctx->pc = 0x31333Cu;
label_31333c:
    // 0x31333c: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x31333cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_313340:
    // 0x313340: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x313340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x313344: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x313344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x313348: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x313348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31334c:
    // 0x31334c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313350: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x313350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x313354: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x313354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313358: 0x0  nop
    ctx->pc = 0x313358u;
    // NOP
    // 0x31335c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x31335Cu;
    {
        const bool branch_taken_0x31335c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31335c) {
            ctx->pc = 0x313360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31335Cu;
            // 0x313360: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x313364u;
            goto label_313364;
        }
    }
    ctx->pc = 0x313364u;
label_313364:
    // 0x313364: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x313364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x313368: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x313368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x31336c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31336cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_313370:
    // 0x313370: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x313370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_313374:
    // 0x313374: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x313374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313378: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x313378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x31337c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31337cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313380: 0x0  nop
    ctx->pc = 0x313380u;
    // NOP
    // 0x313384: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x313384u;
    {
        const bool branch_taken_0x313384 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x313384) {
            ctx->pc = 0x313388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313384u;
            // 0x313388: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31338Cu;
            goto label_31338c;
        }
    }
    ctx->pc = 0x31338Cu;
label_31338c:
    // 0x31338c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x31338cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x313390: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x313390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x313394: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x313394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x313398: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x313398u;
    {
        const bool branch_taken_0x313398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313398u;
        // 0x31339c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313398) {
            ctx->pc = 0x313438u;
            goto label_313438;
        }
    }
    ctx->pc = 0x3133A0u;
label_3133a0:
    // 0x3133a0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3133a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3133a4: 0x0  nop
    ctx->pc = 0x3133a4u;
    // NOP
label_3133a8:
    // 0x3133a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3133a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3133ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3133acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3133b0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3133b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3133b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3133b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3133b8: 0x0  nop
    ctx->pc = 0x3133b8u;
    // NOP
    // 0x3133bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3133BCu;
    {
        const bool branch_taken_0x3133bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3133bc) {
            ctx->pc = 0x3133C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3133BCu;
            // 0x3133c0: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3133C4u;
            goto label_3133c4;
        }
    }
    ctx->pc = 0x3133C4u;
label_3133c4:
    // 0x3133c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3133c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3133c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3133c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3133cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3133ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3133d0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3133d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3133d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3133d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3133d8: 0x0  nop
    ctx->pc = 0x3133d8u;
    // NOP
    // 0x3133dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3133DCu;
    {
        const bool branch_taken_0x3133dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3133dc) {
            ctx->pc = 0x3133E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3133DCu;
            // 0x3133e0: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3133E4u;
            goto label_3133e4;
        }
    }
    ctx->pc = 0x3133E4u;
label_3133e4:
    // 0x3133e4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3133e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3133e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3133e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3133ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3133ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3133f0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3133f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3133f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3133f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3133f8: 0x0  nop
    ctx->pc = 0x3133f8u;
    // NOP
    // 0x3133fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3133FCu;
    {
        const bool branch_taken_0x3133fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3133fc) {
            ctx->pc = 0x313400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3133FCu;
            // 0x313400: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x313404u;
            goto label_313404;
        }
    }
    ctx->pc = 0x313404u;
label_313404:
    // 0x313404: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x313404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x313408: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x313408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x31340c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313410: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x313410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x313414: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x313414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313418: 0x0  nop
    ctx->pc = 0x313418u;
    // NOP
    // 0x31341c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x31341Cu;
    {
        const bool branch_taken_0x31341c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31341c) {
            ctx->pc = 0x313420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31341Cu;
            // 0x313420: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x313424u;
            goto label_313424;
        }
    }
    ctx->pc = 0x313424u;
label_313424:
    // 0x313424: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x313424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x313428: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x313428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x31342c: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x31342cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x313430: 0x1040ffdd  beqz        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x313430u;
    {
        const bool branch_taken_0x313430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313430u;
        // 0x313434: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313430) {
            ctx->pc = 0x3133A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3133a8;
        }
    }
    ctx->pc = 0x313438u;
label_313438:
    // 0x313438: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x313438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x31343c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31343cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x313440: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x313440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313444: 0x26e74778  addiu       $a3, $s7, 0x4778
    ctx->pc = 0x313444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 18296));
    // 0x313448: 0xc0bbc9c  jal         func_2EF270
    ctx->pc = 0x313448u;
    SET_GPR_U32(ctx, 31, 0x313450u);
    ctx->pc = 0x31344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313448u;
    // 0x31344c: 0x892021  addu        $a0, $a0, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF270u, 0x313448u, 0x313450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313450u;
label_313450:
    // 0x313450: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x313450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313454: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x313454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x313458: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x313458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31345c: 0x14400103  bnez        $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x31345Cu;
    {
        const bool branch_taken_0x31345c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31345Cu;
        // 0x313460: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31345c) {
            ctx->pc = 0x31386Cu;
            goto label_31386c;
        }
    }
    ctx->pc = 0x313464u;
    // 0x313464: 0x2517821  addu        $t7, $s2, $s1
    ctx->pc = 0x313464u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x313468: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x313468u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31346c: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x31346cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_313470:
    // 0x313470: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x313470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x313474: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x313474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x313478: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x313478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31347c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x31347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x313480: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x313480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x313484: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x313484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x313488: 0x46162002  mul.s       $f0, $f4, $f22
    ctx->pc = 0x313488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[22]);
    // 0x31348c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31348cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x313490: 0x440e0800  mfc1        $t6, $f1
    ctx->pc = 0x313490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x313494: 0x0  nop
    ctx->pc = 0x313494u;
    // NOP
    // 0x313498: 0x11c700ee  beq         $t6, $a3, . + 4 + (0xEE << 2)
    ctx->pc = 0x313498u;
    {
        const bool branch_taken_0x313498 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 7));
        ctx->pc = 0x31349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313498u;
        // 0x31349c: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313498) {
            ctx->pc = 0x313854u;
            goto label_313854;
        }
    }
    ctx->pc = 0x3134A0u;
    // 0x3134a0: 0x24d0ffff  addiu       $s0, $a2, -0x1
    ctx->pc = 0x3134a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3134a4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3134a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3134a8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3134A8u;
    {
        const bool branch_taken_0x3134a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3134ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3134A8u;
        // 0x3134ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3134a8) {
            ctx->pc = 0x313528u;
            goto label_313528;
        }
    }
    ctx->pc = 0x3134B0u;
    // 0x3134b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3134b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3134b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3134b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3134b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3134b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3134bc: 0x0  nop
    ctx->pc = 0x3134bcu;
    // NOP
label_3134c0:
    // 0x3134c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3134c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3134c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3134c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3134c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3134c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3134cc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3134ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3134d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3134d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3134d4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3134d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x3134d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3134d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3134dc: 0x0  nop
    ctx->pc = 0x3134dcu;
    // NOP
    // 0x3134e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3134E0u;
    {
        const bool branch_taken_0x3134e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3134e0) {
            ctx->pc = 0x3134E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3134E0u;
            // 0x3134e4: 0xac680004  sw          $t0, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3134E8u;
            goto label_3134e8;
        }
    }
    ctx->pc = 0x3134E8u;
label_3134e8:
    // 0x3134e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3134e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3134ec: 0x0  nop
    ctx->pc = 0x3134ecu;
    // NOP
    // 0x3134f0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x3134F0u;
    {
        const bool branch_taken_0x3134f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3134f0) {
            ctx->pc = 0x3134F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3134F0u;
            // 0x3134f4: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313514u;
            goto label_313514;
        }
    }
    ctx->pc = 0x3134F8u;
    // 0x3134f8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x3134f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x3134fc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3134fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x313500: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x313500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x313504: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x313504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x313508: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x313508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x31350c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x31350cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x313510: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x313510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_313514:
    // 0x313514: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x313514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x313518: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x313518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x31351c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x31351cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x313520: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x313520u;
    {
        const bool branch_taken_0x313520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313520u;
        // 0x313524: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313520) {
            ctx->pc = 0x3134C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3134c0;
        }
    }
    ctx->pc = 0x313528u;
label_313528:
    // 0x313528: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x313528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x31352c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31352cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313530: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x313530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x313534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x313534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313538: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x313538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x31353c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x31353cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x313540: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x313540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x313544: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x313544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x313548: 0x8e390004  lw          $t9, 0x4($s1)
    ctx->pc = 0x313548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31354c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31354cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313550: 0x4800061  bltz        $a0, . + 4 + (0x61 << 2)
    ctx->pc = 0x313550u;
    {
        const bool branch_taken_0x313550 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x313554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313550u;
        // 0x313554: 0x46002986  mov.s       $f6, $f5 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313550) {
            ctx->pc = 0x3136D8u;
            goto label_3136d8;
        }
    }
    ctx->pc = 0x313558u;
    // 0x313558: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x313558u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x31355c: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x31355cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_313560:
    // 0x313560: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x313560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x313564: 0x248cffff  addiu       $t4, $a0, -0x1
    ctx->pc = 0x313564u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313568: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x313568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31356c: 0x24eb0008  addiu       $t3, $a3, 0x8
    ctx->pc = 0x31356cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x313570: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x313570u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
    // 0x313574: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x313574u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x313578: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x313578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31357c: 0x791021  addu        $v0, $v1, $t9
    ctx->pc = 0x31357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x313580: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x313580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x313584: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x313584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x313588: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x313588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31358c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x31358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313590: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x313590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x313594: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x313594u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x313598: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x313598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31359c: 0x0  nop
    ctx->pc = 0x31359cu;
    // NOP
    // 0x3135a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3135A0u;
    {
        const bool branch_taken_0x3135a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3135A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3135A0u;
        // 0x3135a4: 0x30850003  andi        $a1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3135a0) {
            ctx->pc = 0x3135B0u;
            goto label_3135b0;
        }
    }
    ctx->pc = 0x3135A8u;
    // 0x3135a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3135A8u;
    {
        const bool branch_taken_0x3135a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3135ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3135A8u;
        // 0x3135ac: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3135a8) {
            ctx->pc = 0x3135C0u;
            goto label_3135c0;
        }
    }
    ctx->pc = 0x3135B0u;
label_3135b0:
    // 0x3135b0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3135b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3135b4: 0x0  nop
    ctx->pc = 0x3135b4u;
    // NOP
    // 0x3135b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3135B8u;
    {
        const bool branch_taken_0x3135b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3135b8) {
            ctx->pc = 0x3135BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3135B8u;
            // 0x3135bc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3135C0u;
            goto label_3135c0;
        }
    }
    ctx->pc = 0x3135C0u;
label_3135c0:
    // 0x3135c0: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x3135c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x3135c4: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x3135c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3135c8: 0x791021  addu        $v0, $v1, $t9
    ctx->pc = 0x3135c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x3135cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3135ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3135d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3135d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3135d4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3135d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3135d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3135d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3135dc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3135dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x3135e0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x3135e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x3135e4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x3135e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3135e8: 0x0  nop
    ctx->pc = 0x3135e8u;
    // NOP
    // 0x3135ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3135ECu;
    {
        const bool branch_taken_0x3135ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3135F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3135ECu;
        // 0x3135f0: 0xa42824  and         $a1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3135ec) {
            ctx->pc = 0x3135FCu;
            goto label_3135fc;
        }
    }
    ctx->pc = 0x3135F4u;
    // 0x3135f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3135F4u;
    {
        const bool branch_taken_0x3135f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3135F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3135F4u;
        // 0x3135f8: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3135f4) {
            ctx->pc = 0x31360Cu;
            goto label_31360c;
        }
    }
    ctx->pc = 0x3135FCu;
label_3135fc:
    // 0x3135fc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3135fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313600: 0x0  nop
    ctx->pc = 0x313600u;
    // NOP
    // 0x313604: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x313604u;
    {
        const bool branch_taken_0x313604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x313604) {
            ctx->pc = 0x313608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313604u;
            // 0x313608: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31360Cu;
            goto label_31360c;
        }
    }
    ctx->pc = 0x31360Cu;
label_31360c:
    // 0x31360c: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x31360cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x313610: 0x4a1818  mult        $v1, $v0, $t2
    ctx->pc = 0x313610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x313614: 0x791021  addu        $v0, $v1, $t9
    ctx->pc = 0x313614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x313618: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x313618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31361c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31361cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x313620: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x313620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x313624: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x313624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313628: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x313628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x31362c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x31362cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x313630: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x313630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313634: 0x0  nop
    ctx->pc = 0x313634u;
    // NOP
    // 0x313638: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x313638u;
    {
        const bool branch_taken_0x313638 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313638u;
        // 0x31363c: 0xa42824  and         $a1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313638) {
            ctx->pc = 0x313648u;
            goto label_313648;
        }
    }
    ctx->pc = 0x313640u;
    // 0x313640: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x313640u;
    {
        const bool branch_taken_0x313640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313640u;
        // 0x313644: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313640) {
            ctx->pc = 0x313658u;
            goto label_313658;
        }
    }
    ctx->pc = 0x313648u;
label_313648:
    // 0x313648: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x313648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31364c: 0x0  nop
    ctx->pc = 0x31364cu;
    // NOP
    // 0x313650: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x313650u;
    {
        const bool branch_taken_0x313650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x313650) {
            ctx->pc = 0x313654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313650u;
            // 0x313654: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x313658u;
            goto label_313658;
        }
    }
    ctx->pc = 0x313658u;
label_313658:
    // 0x313658: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x313658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x31365c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313660: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x313660u;
    {
        const bool branch_taken_0x313660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x313660) {
            ctx->pc = 0x313674u;
            goto label_313674;
        }
    }
    ctx->pc = 0x313668u;
    // 0x313668: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x313668u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x31366c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31366Cu;
    {
        const bool branch_taken_0x31366c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31366Cu;
        // 0x313670: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31366c) {
            ctx->pc = 0x3136CCu;
            goto label_3136cc;
        }
    }
    ctx->pc = 0x313674u;
label_313674:
    // 0x313674: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x313674u;
    {
        const bool branch_taken_0x313674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313674u;
        // 0x313678: 0x2c420004  sltiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313674) {
            ctx->pc = 0x313690u;
            goto label_313690;
        }
    }
    ctx->pc = 0x31367Cu;
    // 0x31367c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x31367Cu;
    {
        const bool branch_taken_0x31367c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31367Cu;
        // 0x313680: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31367c) {
            ctx->pc = 0x3136D0u;
            goto label_3136d0;
        }
    }
    ctx->pc = 0x313684u;
    // 0x313684: 0xaced0004  sw          $t5, 0x4($a3)
    ctx->pc = 0x313684u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 13));
    // 0x313688: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x313688u;
    {
        const bool branch_taken_0x313688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313688u;
        // 0x31368c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313688) {
            ctx->pc = 0x3136D0u;
            goto label_3136d0;
        }
    }
    ctx->pc = 0x313690u;
label_313690:
    // 0x313690: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x313690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313694: 0x0  nop
    ctx->pc = 0x313694u;
    // NOP
    // 0x313698: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x313698u;
    {
        const bool branch_taken_0x313698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x313698) {
            ctx->pc = 0x31369Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313698u;
            // 0x31369c: 0xace30004  sw          $v1, 0x4($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3136B8u;
            goto label_3136b8;
        }
    }
    ctx->pc = 0x3136A0u;
    // 0x3136a0: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x3136a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3136a4: 0xaced0004  sw          $t5, 0x4($a3)
    ctx->pc = 0x3136a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 13));
    // 0x3136a8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3136A8u;
    {
        const bool branch_taken_0x3136a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3136ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136A8u;
        // 0x3136ac: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136a8) {
            ctx->pc = 0x3136CCu;
            goto label_3136cc;
        }
    }
    ctx->pc = 0x3136B0u;
    // 0x3136b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3136B0u;
    {
        const bool branch_taken_0x3136b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3136B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136B0u;
        // 0x3136b4: 0x46001946  mov.s       $f5, $f3 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136b0) {
            ctx->pc = 0x3136CCu;
            goto label_3136cc;
        }
    }
    ctx->pc = 0x3136B8u;
label_3136b8:
    // 0x3136b8: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x3136b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3136bc: 0x0  nop
    ctx->pc = 0x3136bcu;
    // NOP
    // 0x3136c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3136C0u;
    {
        const bool branch_taken_0x3136c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3136C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136C0u;
        // 0x3136c4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136c0) {
            ctx->pc = 0x3136CCu;
            goto label_3136cc;
        }
    }
    ctx->pc = 0x3136C8u;
    // 0x3136c8: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x3136c8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_3136cc:
    // 0x3136cc: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x3136ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_3136d0:
    // 0x3136d0: 0x481ffa3  bgez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x3136D0u;
    {
        const bool branch_taken_0x3136d0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3136D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136D0u;
        // 0x3136d4: 0x160382d  daddu       $a3, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136d0) {
            ctx->pc = 0x313560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313560;
        }
    }
    ctx->pc = 0x3136D8u;
label_3136d8:
    // 0x3136d8: 0x460620c0  add.s       $f3, $f4, $f6
    ctx->pc = 0x3136d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x3136dc: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x3136dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
    // 0x3136e0: 0x46052081  sub.s       $f2, $f4, $f5
    ctx->pc = 0x3136e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x3136e4: 0xafa90024  sw          $t1, 0x24($sp)
    ctx->pc = 0x3136e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
    // 0x3136e8: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x3136e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3136ec: 0x11000057  beqz        $t0, . + 4 + (0x57 << 2)
    ctx->pc = 0x3136ECu;
    {
        const bool branch_taken_0x3136ec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3136F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136ECu;
        // 0x3136f0: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136ec) {
            ctx->pc = 0x31384Cu;
            goto label_31384c;
        }
    }
    ctx->pc = 0x3136F4u;
    // 0x3136f4: 0x11200055  beqz        $t1, . + 4 + (0x55 << 2)
    ctx->pc = 0x3136F4u;
    {
        const bool branch_taken_0x3136f4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3136F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136F4u;
        // 0x3136f8: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136f4) {
            ctx->pc = 0x31384Cu;
            goto label_31384c;
        }
    }
    ctx->pc = 0x3136FCu;
    // 0x3136fc: 0xc5e10014  lwc1        $f1, 0x14($t7)
    ctx->pc = 0x3136fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313700: 0xc5e00020  lwc1        $f0, 0x20($t7)
    ctx->pc = 0x313700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313704: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x313704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x313708: 0x460209c1  sub.s       $f7, $f1, $f2
    ctx->pc = 0x313708u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x31370c: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x31370cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313710: 0x46001941  sub.s       $f5, $f3, $f0
    ctx->pc = 0x313710u;
    ctx->f[5] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x313714: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x313714u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_313718:
    // 0x313718: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x313718u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x31371c: 0x0  nop
    ctx->pc = 0x31371cu;
    // NOP
    // 0x313720: 0x0  nop
    ctx->pc = 0x313720u;
    // NOP
    // 0x313724: 0x0  nop
    ctx->pc = 0x313724u;
    // NOP
    // 0x313728: 0x0  nop
    ctx->pc = 0x313728u;
    // NOP
    // 0x31372c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31372Cu;
    {
        const bool branch_taken_0x31372c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31372Cu;
        // 0x313730: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31372c) {
            ctx->pc = 0x313718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313718;
        }
    }
    ctx->pc = 0x313734u;
    // 0x313734: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x313734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x313738: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x313738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x31373c: 0x581004  sllv        $v0, $t8, $v0
    ctx->pc = 0x31373cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 2) & 0x1F));
    // 0x313740: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x313740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x313744: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x313744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x313748: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31374c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31374cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x313750: 0x5000005  bltz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x313750u;
    {
        const bool branch_taken_0x313750 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x313754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313750u;
        // 0x313754: 0x81842  srl         $v1, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313750) {
            ctx->pc = 0x313768u;
            goto label_313768;
        }
    }
    ctx->pc = 0x313758u;
    // 0x313758: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x313758u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31375c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31375cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x313760: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x313760u;
    {
        const bool branch_taken_0x313760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313760) {
            ctx->pc = 0x31377Cu;
            goto label_31377c;
        }
    }
    ctx->pc = 0x313768u;
label_313768:
    // 0x313768: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x313768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x31376c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31376cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x313770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313774: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x313774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x313778: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x313778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_31377c:
    // 0x31377c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x31377cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x313780: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x313780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x313784: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x313784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313788: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313788u;
    {
        const bool branch_taken_0x313788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313788u;
        // 0x31378c: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313788) {
            ctx->pc = 0x3137ACu;
            goto label_3137ac;
        }
    }
    ctx->pc = 0x313790u;
label_313790:
    // 0x313790: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x313790u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x313794: 0x0  nop
    ctx->pc = 0x313794u;
    // NOP
    // 0x313798: 0x0  nop
    ctx->pc = 0x313798u;
    // NOP
    // 0x31379c: 0x0  nop
    ctx->pc = 0x31379cu;
    // NOP
    // 0x3137a0: 0x0  nop
    ctx->pc = 0x3137a0u;
    // NOP
    // 0x3137a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3137A4u;
    {
        const bool branch_taken_0x3137a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3137A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137A4u;
        // 0x3137a8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3137a4) {
            ctx->pc = 0x313790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313790;
        }
    }
    ctx->pc = 0x3137ACu;
label_3137ac:
    // 0x3137ac: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3137acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3137b0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3137b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3137b4: 0x581004  sllv        $v0, $t8, $v0
    ctx->pc = 0x3137b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 2) & 0x1F));
    // 0x3137b8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3137b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3137bc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3137bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3137c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3137c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3137c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3137c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3137c8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3137C8u;
    {
        const bool branch_taken_0x3137c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3137CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137C8u;
        // 0x3137cc: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3137c8) {
            ctx->pc = 0x3137E0u;
            goto label_3137e0;
        }
    }
    ctx->pc = 0x3137D0u;
    // 0x3137d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3137d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3137d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3137d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3137d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3137D8u;
    {
        const bool branch_taken_0x3137d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3137d8) {
            ctx->pc = 0x3137F4u;
            goto label_3137f4;
        }
    }
    ctx->pc = 0x3137E0u;
label_3137e0:
    // 0x3137e0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3137e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3137e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3137e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3137e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3137e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3137ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3137ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3137f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3137f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3137f4:
    // 0x3137f4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x3137f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x3137f8: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x3137f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x3137fc: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x3137fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x313800: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x313800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x313804: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x313804u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x313808: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x313808u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[6]); }
    // 0x31380c: 0x46150802  mul.s       $f0, $f1, $f21
    ctx->pc = 0x31380cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x313810: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x313810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313814: 0x0  nop
    ctx->pc = 0x313814u;
    // NOP
    // 0x313818: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x313818u;
    {
        const bool branch_taken_0x313818 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313818u;
        // 0x31381c: 0x1c0382d  daddu       $a3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313818) {
            ctx->pc = 0x313850u;
            goto label_313850;
        }
    }
    ctx->pc = 0x313820u;
    // 0x313820: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x313820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x313824: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x313824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x313828: 0x6ba5002f  ldl         $a1, 0x2F($sp)
    ctx->pc = 0x313828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x31382c: 0x6fa50028  ldr         $a1, 0x28($sp)
    ctx->pc = 0x31382cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x313830: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x313830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313834: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x313834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313838: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x313838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31383c: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x31383cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313840: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x313840u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x313844: 0x46002606  mov.s       $f24, $f4
    ctx->pc = 0x313844u;
    ctx->f[24] = FPU_MOV_S(ctx->f[4]);
    // 0x313848: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x313848u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31384c:
    // 0x31384c: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x31384cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_313850:
    // 0x313850: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x313850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_313854:
    // 0x313854: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x313854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313858: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x313858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31385c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31385Cu;
    {
        const bool branch_taken_0x31385c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31385c) {
            ctx->pc = 0x313860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31385Cu;
            // 0x313860: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313870u;
            goto label_313870;
        }
    }
    ctx->pc = 0x313864u;
    // 0x313864: 0x5cc0ff02  bgtzl       $a2, . + 4 + (-0xFE << 2)
    ctx->pc = 0x313864u;
    {
        const bool branch_taken_0x313864 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x313864) {
            ctx->pc = 0x313868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313864u;
            // 0x313868: 0x8e250038  lw          $a1, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313470;
        }
    }
    ctx->pc = 0x31386Cu;
label_31386c:
    // 0x31386c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x31386cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_313870:
    // 0x313870: 0x2a42000c  slti        $v0, $s2, 0xC
    ctx->pc = 0x313870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x313874: 0x1440fe2a  bnez        $v0, . + 4 + (-0x1D6 << 2)
    ctx->pc = 0x313874u;
    {
        const bool branch_taken_0x313874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313874u;
        // 0x313878: 0x3b21821  addu        $v1, $sp, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313874) {
            ctx->pc = 0x313120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313120;
        }
    }
    ctx->pc = 0x31387Cu;
    // 0x31387c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x31387cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x313880: 0xc4809508  lwc1        $f0, -0x6AF8($a0)
    ctx->pc = 0x313880u;
    { uint32_t bits = FAST_READ32(0x609508u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313884: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x313884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313888: 0x0  nop
    ctx->pc = 0x313888u;
    // NOP
    // 0x31388c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x31388Cu;
    {
        const bool branch_taken_0x31388c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x313890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31388Cu;
        // 0x313890: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31388c) {
            ctx->pc = 0x31389Cu;
            goto label_31389c;
        }
    }
    ctx->pc = 0x313894u;
    // 0x313894: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x313894u;
    {
        const bool branch_taken_0x313894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313894u;
        // 0x313898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313894) {
            ctx->pc = 0x3138ACu;
            goto label_3138ac;
        }
    }
    ctx->pc = 0x31389Cu;
label_31389c:
    // 0x31389c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31389cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3138a0: 0xacbe0000  sw          $fp, 0x0($a1)
    ctx->pc = 0x3138a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 30));
    // 0x3138a4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x3138a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3138a8: 0xe4780000  swc1        $f24, 0x0($v1)
    ctx->pc = 0x3138a8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3138ac:
    // 0x3138ac: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3138acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3138b0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3138b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3138b4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3138b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3138b8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3138b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3138bc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3138bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3138c0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3138c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3138c4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3138c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3138c8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3138c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3138cc: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x3138ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3138d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3138d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3138d4: 0xc7bb0118  lwc1        $f27, 0x118($sp)
    ctx->pc = 0x3138d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x3138d8: 0xc7ba0110  lwc1        $f26, 0x110($sp)
    ctx->pc = 0x3138d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x3138dc: 0xc7b90108  lwc1        $f25, 0x108($sp)
    ctx->pc = 0x3138dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3138e0: 0xc7b80100  lwc1        $f24, 0x100($sp)
    ctx->pc = 0x3138e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3138e4: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x3138e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3138e8: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x3138e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3138ec: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x3138ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3138f0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x3138f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3138f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3138F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3138F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138F4u;
        // 0x3138f8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3138F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3138FCu;
    // 0x3138fc: 0x0  nop
    ctx->pc = 0x3138fcu;
    // NOP
    ctx->pc = 0x313900u;
}
