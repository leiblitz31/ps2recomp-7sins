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

// Function: sub_002E4070
// Address: 0x2e4070 - 0x2e4730
void sub_002E4070_0x2e4070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4070_0x2e4070");
#endif

    switch (ctx->pc) {
        case 0x2e4210u: goto label_2e4210;
        case 0x2e4278u: goto label_2e4278;
        case 0x2e42a0u: goto label_2e42a0;
        case 0x2e42b8u: goto label_2e42b8;
        case 0x2e42c8u: goto label_2e42c8;
        case 0x2e42dcu: goto label_2e42dc;
        case 0x2e42f0u: goto label_2e42f0;
        case 0x2e4308u: goto label_2e4308;
        case 0x2e4338u: goto label_2e4338;
        case 0x2e4378u: goto label_2e4378;
        case 0x2e4390u: goto label_2e4390;
        case 0x2e43b8u: goto label_2e43b8;
        case 0x2e43ccu: goto label_2e43cc;
        case 0x2e43d8u: goto label_2e43d8;
        case 0x2e43e4u: goto label_2e43e4;
        case 0x2e43f4u: goto label_2e43f4;
        case 0x2e4418u: goto label_2e4418;
        case 0x2e4430u: goto label_2e4430;
        case 0x2e4440u: goto label_2e4440;
        case 0x2e4454u: goto label_2e4454;
        case 0x2e447cu: goto label_2e447c;
        case 0x2e4494u: goto label_2e4494;
        case 0x2e44b8u: goto label_2e44b8;
        case 0x2e44fcu: goto label_2e44fc;
        case 0x2e4518u: goto label_2e4518;
        case 0x2e4524u: goto label_2e4524;
        case 0x2e4538u: goto label_2e4538;
        case 0x2e454cu: goto label_2e454c;
        case 0x2e4558u: goto label_2e4558;
        case 0x2e456cu: goto label_2e456c;
        case 0x2e4598u: goto label_2e4598;
        case 0x2e45a4u: goto label_2e45a4;
        case 0x2e45bcu: goto label_2e45bc;
        case 0x2e45f0u: goto label_2e45f0;
        case 0x2e4658u: goto label_2e4658;
        case 0x2e46d8u: goto label_2e46d8;
        case 0x2e46e8u: goto label_2e46e8;
        default: break;
    }

    ctx->pc = 0x2e4070u;

    // 0x2e4070: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2e4070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2e4074: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e4074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e4078: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e4078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e407c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e4080: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e4080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e4084: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e4084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e4088: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e4088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e408c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e4090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e4090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e4094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e4098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e409c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x2e409cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x2e40a0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2e40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2e40a4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2e40a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e40a8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e40ac: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2e40acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e40b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e40b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e40b4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2e40b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2e40b8: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2e40b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x2e40bc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2e40bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e40c0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e40c4: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2e40c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e40c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e40c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e40cc: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2e40ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2e40d0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e40d4: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x2e40d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e40d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e40dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e40dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e40e0: 0x0  nop
    ctx->pc = 0x2e40e0u;
    // NOP
    // 0x2e40e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e40e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e40e8: 0x45010069  bc1t        . + 4 + (0x69 << 2)
    ctx->pc = 0x2E40E8u;
    {
        const bool branch_taken_0x2e40e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e40e8) {
            ctx->pc = 0x2E4290u;
            goto label_2e4290;
        }
    }
    ctx->pc = 0x2E40F0u;
    // 0x2e40f0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2e40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e40f4: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x2e40f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e40f8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e40fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e40fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4100: 0x0  nop
    ctx->pc = 0x2e4100u;
    // NOP
    // 0x2e4104: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e4104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e4108: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2e4108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x2e410c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4110: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e4110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e4114: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e4114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4118: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e4118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e411c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x2e411cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e4120: 0x1020005b  beqz        $at, . + 4 + (0x5B << 2)
    ctx->pc = 0x2E4120u;
    {
        const bool branch_taken_0x2e4120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4120) {
            ctx->pc = 0x2E4290u;
            goto label_2e4290;
        }
    }
    ctx->pc = 0x2E4128u;
    // 0x2e4128: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e412c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e412cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4130: 0x0  nop
    ctx->pc = 0x2e4130u;
    // NOP
    // 0x2e4134: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e4134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e4138: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e4138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e413c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2e413cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e4140: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e4140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4144: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e4144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e4148: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2E4148u;
    {
        const bool branch_taken_0x2e4148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e4148) {
            ctx->pc = 0x2E4208u;
            goto label_2e4208;
        }
    }
    ctx->pc = 0x2E4150u;
    // 0x2e4150: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2e4150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4154: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e4154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4158: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2e4158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e415c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e4160: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e4160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e4164: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4164u;
    {
        const bool branch_taken_0x2e4164 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e4164) {
            ctx->pc = 0x2E4180u;
            goto label_2e4180;
        }
    }
    ctx->pc = 0x2E416Cu;
    // 0x2e416c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e416cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4170: 0x0  nop
    ctx->pc = 0x2e4170u;
    // NOP
    // 0x2e4174: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e4174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e4178: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4178u;
    {
        const bool branch_taken_0x2e4178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4178) {
            ctx->pc = 0x2E419Cu;
            goto label_2e419c;
        }
    }
    ctx->pc = 0x2E4180u;
label_2e4180:
    // 0x2e4180: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e4180u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e4184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e4184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e4188: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e4188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e418c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e418cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4190: 0x0  nop
    ctx->pc = 0x2e4190u;
    // NOP
    // 0x2e4194: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e4194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e4198: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e4198u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e419c:
    // 0x2e419c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e419cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e41a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e41a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e41a4: 0x0  nop
    ctx->pc = 0x2e41a4u;
    // NOP
    // 0x2e41a8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e41a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e41ac: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2e41acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e41b0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e41b4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x2e41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2e41b8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2e41bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e41bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e41c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E41C0u;
    {
        const bool branch_taken_0x2e41c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e41c0) {
            ctx->pc = 0x2E41DCu;
            goto label_2e41dc;
        }
    }
    ctx->pc = 0x2E41C8u;
    // 0x2e41c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e41c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e41cc: 0x0  nop
    ctx->pc = 0x2e41ccu;
    // NOP
    // 0x2e41d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e41d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e41d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E41D4u;
    {
        const bool branch_taken_0x2e41d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e41d4) {
            ctx->pc = 0x2E41F8u;
            goto label_2e41f8;
        }
    }
    ctx->pc = 0x2E41DCu;
label_2e41dc:
    // 0x2e41dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e41dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e41e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e41e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e41e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e41e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e41e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e41e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e41ec: 0x0  nop
    ctx->pc = 0x2e41ecu;
    // NOP
    // 0x2e41f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e41f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e41f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e41f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e41f8:
    // 0x2e41f8: 0x0  nop
    ctx->pc = 0x2e41f8u;
    // NOP
    // 0x2e41fc: 0x0  nop
    ctx->pc = 0x2e41fcu;
    // NOP
    // 0x2e4200: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2e4200u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e4204: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e4204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_2e4208:
    // 0x2e4208: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2E4208u;
    SET_GPR_U32(ctx, 31, 0x2E4210u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2E4208u, 0x2E4210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4210u;
label_2e4210:
    // 0x2e4210: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E4210u;
    {
        const bool branch_taken_0x2e4210 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2e4210) {
            ctx->pc = 0x2E422Cu;
            goto label_2e422c;
        }
    }
    ctx->pc = 0x2E4218u;
    // 0x2e4218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e421c: 0x0  nop
    ctx->pc = 0x2e421cu;
    // NOP
    // 0x2e4220: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e4220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e4224: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4224u;
    {
        const bool branch_taken_0x2e4224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4224) {
            ctx->pc = 0x2E4248u;
            goto label_2e4248;
        }
    }
    ctx->pc = 0x2E422Cu;
label_2e422c:
    // 0x2e422c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2e422cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2e4230: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e4230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e4234: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e4234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e4238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e4238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e423c: 0x0  nop
    ctx->pc = 0x2e423cu;
    // NOP
    // 0x2e4240: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e4240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e4244: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e4244u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e4248:
    // 0x2e4248: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e4248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e424c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e424cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4250: 0x0  nop
    ctx->pc = 0x2e4250u;
    // NOP
    // 0x2e4254: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2e4254u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e4258: 0x0  nop
    ctx->pc = 0x2e4258u;
    // NOP
    // 0x2e425c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4260: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e4260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4264: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2E4264u;
    {
        const bool branch_taken_0x2e4264 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4264) {
            ctx->pc = 0x2E4290u;
            goto label_2e4290;
        }
    }
    ctx->pc = 0x2E426Cu;
    // 0x2e426c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2e426cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4270: 0xc0b91ec  jal         func_2E47B0
    ctx->pc = 0x2E4270u;
    SET_GPR_U32(ctx, 31, 0x2E4278u);
    ctx->pc = 0x2E47B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E47B0u, 0x2E4270u, 0x2E4278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4278u;
label_2e4278:
    // 0x2e4278: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4278u;
    {
        const bool branch_taken_0x2e4278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4278) {
            ctx->pc = 0x2E4290u;
            goto label_2e4290;
        }
    }
    ctx->pc = 0x2E4280u;
    // 0x2e4280: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2e4280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4284: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2e4284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e4288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e4288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e428c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2e428cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2e4290:
    // 0x2e4290: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e4290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4294: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4298: 0xc0b91dc  jal         func_2E4770
    ctx->pc = 0x2E4298u;
    SET_GPR_U32(ctx, 31, 0x2E42A0u);
    ctx->pc = 0x2E4770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4770u, 0x2E4298u, 0x2E42A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E42A0u;
label_2e42a0:
    // 0x2e42a0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2e42a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e42a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e42a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e42a8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e42ac: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x2e42acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x2e42b0: 0xc09d650  jal         func_275940
    ctx->pc = 0x2E42B0u;
    SET_GPR_U32(ctx, 31, 0x2E42B8u);
    ctx->pc = 0x275940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275940u, 0x2E42B0u, 0x2E42B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E42B8u;
label_2e42b8:
    // 0x2e42b8: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x2e42b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x2e42bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e42bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e42c0: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x2E42C0u;
    {
        const bool branch_taken_0x2e42c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e42c0) {
            ctx->pc = 0x2E46ECu;
            goto label_2e46ec;
        }
    }
    ctx->pc = 0x2E42C8u;
label_2e42c8:
    // 0x2e42c8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e42cc: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e42ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e42d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e42d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e42d4: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E42D4u;
    SET_GPR_U32(ctx, 31, 0x2E42DCu);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E42D4u, 0x2E42DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E42DCu;
label_2e42dc:
    // 0x2e42dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e42e0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e42e4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2e42e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2e42e8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2E42E8u;
    SET_GPR_U32(ctx, 31, 0x2E42F0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2E42E8u, 0x2E42F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E42F0u;
label_2e42f0:
    // 0x2e42f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e42f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e42f4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e42f8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e42f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e42fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e42fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4300: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E4300u;
    SET_GPR_U32(ctx, 31, 0x2E4308u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E4300u, 0x2E4308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4308u;
label_2e4308:
    // 0x2e4308: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e4308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e430c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2e430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4310: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2e4310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4314: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2e4314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4318: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e4318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e431c: 0x4501006e  bc1t        . + 4 + (0x6E << 2)
    ctx->pc = 0x2E431Cu;
    {
        const bool branch_taken_0x2e431c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e431c) {
            ctx->pc = 0x2E44D8u;
            goto label_2e44d8;
        }
    }
    ctx->pc = 0x2E4324u;
    // 0x2e4324: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e4324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4328: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e432c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e432cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4330: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E4330u;
    SET_GPR_U32(ctx, 31, 0x2E4338u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E4330u, 0x2E4338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4338u;
label_2e4338:
    // 0x2e4338: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e4338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e433c: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x2e433cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e4340: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2E4340u;
    {
        const bool branch_taken_0x2e4340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4340) {
            ctx->pc = 0x2E44D8u;
            goto label_2e44d8;
        }
    }
    ctx->pc = 0x2E4348u;
    // 0x2e4348: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e4348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e434c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e434cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e4350: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e4350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4354: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e4354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e4358: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2e4358u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e435c: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x2E435Cu;
    {
        const bool branch_taken_0x2e435c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e435c) {
            ctx->pc = 0x2E44A4u;
            goto label_2e44a4;
        }
    }
    ctx->pc = 0x2E4364u;
    // 0x2e4364: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e4364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4368: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e436c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e436cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4370: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E4370u;
    SET_GPR_U32(ctx, 31, 0x2E4378u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E4370u, 0x2E4378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4378u;
label_2e4378:
    // 0x2e4378: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e4378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e437c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4380: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x2e4380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2e4384: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2e4384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e4388: 0xc0b9e54  jal         func_2E7950
    ctx->pc = 0x2E4388u;
    SET_GPR_U32(ctx, 31, 0x2E4390u);
    ctx->pc = 0x2E7950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7950u, 0x2E4388u, 0x2E4390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4390u;
label_2e4390:
    // 0x2e4390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4394: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2E4394u;
    {
        const bool branch_taken_0x2e4394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4394) {
            ctx->pc = 0x2E4468u;
            goto label_2e4468;
        }
    }
    ctx->pc = 0x2E439Cu;
    // 0x2e439c: 0x16a00024  bnez        $s5, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E439Cu;
    {
        const bool branch_taken_0x2e439c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e439c) {
            ctx->pc = 0x2E4430u;
            goto label_2e4430;
        }
    }
    ctx->pc = 0x2E43A4u;
    // 0x2e43a4: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2e43a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2e43a8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2e43a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2e43ac: 0x24a5e678  addiu       $a1, $a1, -0x1988
    ctx->pc = 0x2e43acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960760));
    // 0x2e43b0: 0xc040304  jal         func_100C10
    ctx->pc = 0x2E43B0u;
    SET_GPR_U32(ctx, 31, 0x2E43B8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2E43B0u, 0x2E43B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43B8u;
label_2e43b8:
    // 0x2e43b8: 0x8f82bcb0  lw          $v0, -0x4350($gp)
    ctx->pc = 0x2e43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
    // 0x2e43bc: 0x8c5e0044  lw          $fp, 0x44($v0)
    ctx->pc = 0x2e43bcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2e43c0: 0x27c40028  addiu       $a0, $fp, 0x28
    ctx->pc = 0x2e43c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 40));
    // 0x2e43c4: 0xc09d670  jal         func_2759C0
    ctx->pc = 0x2E43C4u;
    SET_GPR_U32(ctx, 31, 0x2E43CCu);
    ctx->pc = 0x2759C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2759C0u, 0x2E43C4u, 0x2E43CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43CCu;
label_2e43cc:
    // 0x2e43cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e43ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E43D0u;
    {
        const bool branch_taken_0x2e43d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e43d0) {
            ctx->pc = 0x2E440Cu;
            goto label_2e440c;
        }
    }
    ctx->pc = 0x2E43D8u;
label_2e43d8:
    // 0x2e43d8: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2e43d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2e43dc: 0xc041874  jal         func_1061D0
    ctx->pc = 0x2E43DCu;
    SET_GPR_U32(ctx, 31, 0x2E43E4u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x2E43DCu, 0x2E43E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43E4u;
label_2e43e4:
    // 0x2e43e4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e43e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e43e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e43e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e43ec: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x2E43ECu;
    SET_GPR_U32(ctx, 31, 0x2E43F4u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x2E43ECu, 0x2E43F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E43F4u;
label_2e43f4:
    // 0x2e43f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E43F4u;
    {
        const bool branch_taken_0x2e43f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e43f4) {
            ctx->pc = 0x2E4408u;
            goto label_2e4408;
        }
    }
    ctx->pc = 0x2E43FCu;
    // 0x2e43fc: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x2e43fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e4400: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4400u;
    {
        const bool branch_taken_0x2e4400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4400) {
            ctx->pc = 0x2E4420u;
            goto label_2e4420;
        }
    }
    ctx->pc = 0x2E4408u;
label_2e4408:
    // 0x2e4408: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2e4408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2e440c:
    // 0x2e440c: 0x27c40028  addiu       $a0, $fp, 0x28
    ctx->pc = 0x2e440cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 40));
    // 0x2e4410: 0xc0b2e10  jal         func_2CB840
    ctx->pc = 0x2E4410u;
    SET_GPR_U32(ctx, 31, 0x2E4418u);
    ctx->pc = 0x2CB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB840u, 0x2E4410u, 0x2E4418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4418u;
label_2e4418:
    // 0x2e4418: 0x1642ffef  bne         $s2, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E4418u;
    {
        const bool branch_taken_0x2e4418 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e4418) {
            ctx->pc = 0x2E43D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e43d8;
        }
    }
    ctx->pc = 0x2E4420u;
label_2e4420:
    // 0x2e4420: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2e4420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2e4424: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e4424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e4428: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2E4428u;
    SET_GPR_U32(ctx, 31, 0x2E4430u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2E4428u, 0x2E4430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4430u;
label_2e4430:
    // 0x2e4430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e4430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4434: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e4434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4438: 0xc0969b0  jal         func_25A6C0
    ctx->pc = 0x2E4438u;
    SET_GPR_U32(ctx, 31, 0x2E4440u);
    ctx->pc = 0x25A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6C0u, 0x2E4438u, 0x2E4440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4440u;
label_2e4440:
    // 0x2e4440: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e4440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4444: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e4444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4448: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e444c: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E444Cu;
    SET_GPR_U32(ctx, 31, 0x2E4454u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E444Cu, 0x2E4454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4454u;
label_2e4454:
    // 0x2e4454: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e4454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e445c: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x2e445cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e4460: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2E4460u;
    {
        const bool branch_taken_0x2e4460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4460) {
            ctx->pc = 0x2E44D8u;
            goto label_2e44d8;
        }
    }
    ctx->pc = 0x2E4468u;
label_2e4468:
    // 0x2e4468: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e4468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e446c: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e446cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e4470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4474: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E4474u;
    SET_GPR_U32(ctx, 31, 0x2E447Cu);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E4474u, 0x2E447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E447Cu;
label_2e447c:
    // 0x2e447c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e447cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4480: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2e4480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4484: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e4484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e4488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e4488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e448c: 0xc0b93c4  jal         func_2E4F10
    ctx->pc = 0x2E448Cu;
    SET_GPR_U32(ctx, 31, 0x2E4494u);
    ctx->pc = 0x2E4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F10u, 0x2E448Cu, 0x2E4494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4494u;
label_2e4494:
    // 0x2e4494: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2e4494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2e4498: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x2e4498u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x2e449c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E449Cu;
    {
        const bool branch_taken_0x2e449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e449c) {
            ctx->pc = 0x2E44D8u;
            goto label_2e44d8;
        }
    }
    ctx->pc = 0x2E44A4u;
label_2e44a4:
    // 0x2e44a4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e44a8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e44a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e44ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e44acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44b0: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E44B0u;
    SET_GPR_U32(ctx, 31, 0x2E44B8u);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E44B0u, 0x2E44B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44B8u;
label_2e44b8:
    // 0x2e44b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e44bc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2e44bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e44c0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2e44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2e44c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e44c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e44c8: 0x0  nop
    ctx->pc = 0x2e44c8u;
    // NOP
    // 0x2e44cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e44ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e44d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e44d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e44d4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2e44d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2e44d8:
    // 0x2e44d8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2e44d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e44dc: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2e44dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e44e0: 0x14200081  bnez        $at, . + 4 + (0x81 << 2)
    ctx->pc = 0x2E44E0u;
    {
        const bool branch_taken_0x2e44e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e44e0) {
            ctx->pc = 0x2E46E8u;
            goto label_2e46e8;
        }
    }
    ctx->pc = 0x2E44E8u;
    // 0x2e44e8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e44ec: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2e44ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e44f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e44f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44f4: 0xc0b91cc  jal         func_2E4730
    ctx->pc = 0x2E44F4u;
    SET_GPR_U32(ctx, 31, 0x2E44FCu);
    ctx->pc = 0x2E4730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4730u, 0x2E44F4u, 0x2E44FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E44FCu;
label_2e44fc:
    // 0x2e44fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e44fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4500: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x2e4500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e4504: 0x14600078  bnez        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x2E4504u;
    {
        const bool branch_taken_0x2e4504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4504) {
            ctx->pc = 0x2E46E8u;
            goto label_2e46e8;
        }
    }
    ctx->pc = 0x2E450Cu;
    // 0x2e450c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4510: 0xc05ce40  jal         func_173900
    ctx->pc = 0x2E4510u;
    SET_GPR_U32(ctx, 31, 0x2E4518u);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x2E4510u, 0x2E4518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4518u;
label_2e4518:
    // 0x2e4518: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e4518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e451c: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2E451Cu;
    SET_GPR_U32(ctx, 31, 0x2E4524u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2E451Cu, 0x2E4524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4524u;
label_2e4524:
    // 0x2e4524: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2e4524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4528: 0x8c650070  lw          $a1, 0x70($v1)
    ctx->pc = 0x2e4528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2e452c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e452cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4530: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2E4530u;
    SET_GPR_U32(ctx, 31, 0x2E4538u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2E4530u, 0x2E4538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4538u;
label_2e4538:
    // 0x2e4538: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e453c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2e453cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2e4540: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e4540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4544: 0xc05ce40  jal         func_173900
    ctx->pc = 0x2E4544u;
    SET_GPR_U32(ctx, 31, 0x2E454Cu);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x2E4544u, 0x2E454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E454Cu;
label_2e454c:
    // 0x2e454c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e454cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4550: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2E4550u;
    SET_GPR_U32(ctx, 31, 0x2E4558u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2E4550u, 0x2E4558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4558u;
label_2e4558:
    // 0x2e4558: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2e4558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e455c: 0x8c650070  lw          $a1, 0x70($v1)
    ctx->pc = 0x2e455cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2e4560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e4560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4564: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2E4564u;
    SET_GPR_U32(ctx, 31, 0x2E456Cu);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2E4564u, 0x2E456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E456Cu;
label_2e456c:
    // 0x2e456c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e456cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4570: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2e4570u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e4574: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2e4574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4578: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2e4578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e457c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e457cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e4580: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2e4580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2e4584: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2e4584u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4588: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e4588u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e458c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e458cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4590: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2E4590u;
    {
        const bool branch_taken_0x2e4590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4590) {
            ctx->pc = 0x2E46ACu;
            goto label_2e46ac;
        }
    }
    ctx->pc = 0x2E4598u;
label_2e4598:
    // 0x2e4598: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e4598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e459c: 0xc0969a8  jal         func_25A6A0
    ctx->pc = 0x2E459Cu;
    SET_GPR_U32(ctx, 31, 0x2E45A4u);
    ctx->pc = 0x25A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6A0u, 0x2E459Cu, 0x2E45A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45A4u;
label_2e45a4:
    // 0x2e45a4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2e45a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2e45a8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e45a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e45ac: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x2e45acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x2e45b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e45b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45b4: 0xc09d660  jal         func_275980
    ctx->pc = 0x2E45B4u;
    SET_GPR_U32(ctx, 31, 0x2E45BCu);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2E45B4u, 0x2E45BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45BCu;
label_2e45bc:
    // 0x2e45bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e45bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e45c0: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2e45c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e45c4: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E45C4u;
    {
        const bool branch_taken_0x2e45c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e45c4) {
            ctx->pc = 0x2E45DCu;
            goto label_2e45dc;
        }
    }
    ctx->pc = 0x2E45CCu;
    // 0x2e45cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e45ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e45d0: 0x307700ff  andi        $s7, $v1, 0xFF
    ctx->pc = 0x2e45d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e45d4: 0x16800039  bnez        $s4, . + 4 + (0x39 << 2)
    ctx->pc = 0x2E45D4u;
    {
        const bool branch_taken_0x2e45d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e45d4) {
            ctx->pc = 0x2E46BCu;
            goto label_2e46bc;
        }
    }
    ctx->pc = 0x2E45DCu;
label_2e45dc:
    // 0x2e45dc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e45e0: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x2e45e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x2e45e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e45e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45e8: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x2E45E8u;
    SET_GPR_U32(ctx, 31, 0x2E45F0u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x2E45E8u, 0x2E45F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45F0u;
label_2e45f0:
    // 0x2e45f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e45f4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E45F4u;
    {
        const bool branch_taken_0x2e45f4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2e45f4) {
            ctx->pc = 0x2E4610u;
            goto label_2e4610;
        }
    }
    ctx->pc = 0x2E45FCu;
    // 0x2e45fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e45fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4600: 0x0  nop
    ctx->pc = 0x2e4600u;
    // NOP
    // 0x2e4604: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e4604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e4608: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4608u;
    {
        const bool branch_taken_0x2e4608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4608) {
            ctx->pc = 0x2E462Cu;
            goto label_2e462c;
        }
    }
    ctx->pc = 0x2E4610u;
label_2e4610:
    // 0x2e4610: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2e4610u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2e4614: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e4614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e4618: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2e4618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e461c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e461cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4620: 0x0  nop
    ctx->pc = 0x2e4620u;
    // NOP
    // 0x2e4624: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e4624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e4628: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e4628u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e462c:
    // 0x2e462c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2e462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4630: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e4630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4634: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x2E4634u;
    {
        const bool branch_taken_0x2e4634 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4634) {
            ctx->pc = 0x2E46A8u;
            goto label_2e46a8;
        }
    }
    ctx->pc = 0x2E463Cu;
    // 0x2e463c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E463Cu;
    {
        const bool branch_taken_0x2e463c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e463c) {
            ctx->pc = 0x2E46A4u;
            goto label_2e46a4;
        }
    }
    ctx->pc = 0x2E4644u;
    // 0x2e4644: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e4644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e4648: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x2e4648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e464c: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x2e464cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x2e4650: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x2E4650u;
    SET_GPR_U32(ctx, 31, 0x2E4658u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x2E4650u, 0x2E4658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4658u;
label_2e4658:
    // 0x2e4658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e4658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e465c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E465Cu;
    {
        const bool branch_taken_0x2e465c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2e465c) {
            ctx->pc = 0x2E4678u;
            goto label_2e4678;
        }
    }
    ctx->pc = 0x2E4664u;
    // 0x2e4664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e4664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4668: 0x0  nop
    ctx->pc = 0x2e4668u;
    // NOP
    // 0x2e466c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e466cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e4670: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4670u;
    {
        const bool branch_taken_0x2e4670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4670) {
            ctx->pc = 0x2E4694u;
            goto label_2e4694;
        }
    }
    ctx->pc = 0x2E4678u;
label_2e4678:
    // 0x2e4678: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2e4678u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2e467c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e467cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e4680: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2e4680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e4684: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e4684u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4688: 0x0  nop
    ctx->pc = 0x2e4688u;
    // NOP
    // 0x2e468c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e468cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e4690: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2e4690u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2e4694:
    // 0x2e4694: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2e4694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4698: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e4698u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e469c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E469Cu;
    {
        const bool branch_taken_0x2e469c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e469c) {
            ctx->pc = 0x2E46A8u;
            goto label_2e46a8;
        }
    }
    ctx->pc = 0x2E46A4u;
label_2e46a4:
    // 0x2e46a4: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2e46a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e46a8:
    // 0x2e46a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e46a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e46ac:
    // 0x2e46ac: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2e46acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e46b0: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2e46b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e46b4: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
    ctx->pc = 0x2E46B4u;
    {
        const bool branch_taken_0x2e46b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e46b4) {
            ctx->pc = 0x2E4598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4598;
        }
    }
    ctx->pc = 0x2E46BCu;
label_2e46bc:
    // 0x2e46bc: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x2E46BCu;
    {
        const bool branch_taken_0x2e46bc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e46bc) {
            ctx->pc = 0x2E46E8u;
            goto label_2e46e8;
        }
    }
    ctx->pc = 0x2E46C4u;
    // 0x2e46c4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e46c8: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x2e46c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x2e46cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e46ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46d0: 0xc09d660  jal         func_275980
    ctx->pc = 0x2E46D0u;
    SET_GPR_U32(ctx, 31, 0x2E46D8u);
    ctx->pc = 0x275980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275980u, 0x2E46D0u, 0x2E46D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E46D8u;
label_2e46d8:
    // 0x2e46d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e46d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e46dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e46e0: 0xc0969b0  jal         func_25A6C0
    ctx->pc = 0x2E46E0u;
    SET_GPR_U32(ctx, 31, 0x2E46E8u);
    ctx->pc = 0x25A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6C0u, 0x2E46E0u, 0x2E46E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E46E8u;
label_2e46e8:
    // 0x2e46e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e46e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e46ec:
    // 0x2e46ec: 0x216182b  sltu        $v1, $s0, $s6
    ctx->pc = 0x2e46ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2e46f0: 0x1460fef5  bnez        $v1, . + 4 + (-0x10B << 2)
    ctx->pc = 0x2E46F0u;
    {
        const bool branch_taken_0x2e46f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e46f0) {
            ctx->pc = 0x2E42C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e42c8;
        }
    }
    ctx->pc = 0x2E46F8u;
    // 0x2e46f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e46f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e46fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e46fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e4700: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e4700u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e4704: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e4704u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e4708: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e4708u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e470c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e470cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4710: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e4710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e4714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e4718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e471c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e471cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4720: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2e4720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e4724: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E472Cu;
    // 0x2e472c: 0x0  nop
    ctx->pc = 0x2e472cu;
    // NOP
    ctx->pc = 0x2e4730u;
}
