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

// Function: sub_001E06D0
// Address: 0x1e06d0 - 0x1e14e0
void sub_001E06D0_0x1e06d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E06D0_0x1e06d0");
#endif

    switch (ctx->pc) {
        case 0x1e0714u: goto label_1e0714;
        case 0x1e072cu: goto label_1e072c;
        case 0x1e073cu: goto label_1e073c;
        case 0x1e0960u: goto label_1e0960;
        case 0x1e096cu: goto label_1e096c;
        case 0x1e0980u: goto label_1e0980;
        case 0x1e0994u: goto label_1e0994;
        case 0x1e09a0u: goto label_1e09a0;
        case 0x1e09b4u: goto label_1e09b4;
        case 0x1e09c8u: goto label_1e09c8;
        case 0x1e09e0u: goto label_1e09e0;
        case 0x1e09fcu: goto label_1e09fc;
        case 0x1e0a08u: goto label_1e0a08;
        case 0x1e0a30u: goto label_1e0a30;
        case 0x1e0a50u: goto label_1e0a50;
        case 0x1e0a64u: goto label_1e0a64;
        case 0x1e0a74u: goto label_1e0a74;
        case 0x1e0a88u: goto label_1e0a88;
        case 0x1e0aa0u: goto label_1e0aa0;
        case 0x1e0aacu: goto label_1e0aac;
        case 0x1e0abcu: goto label_1e0abc;
        case 0x1e0ac8u: goto label_1e0ac8;
        case 0x1e0adcu: goto label_1e0adc;
        case 0x1e0aecu: goto label_1e0aec;
        case 0x1e0b04u: goto label_1e0b04;
        case 0x1e0b14u: goto label_1e0b14;
        case 0x1e0b2cu: goto label_1e0b2c;
        case 0x1e0b3cu: goto label_1e0b3c;
        case 0x1e0b58u: goto label_1e0b58;
        case 0x1e0b68u: goto label_1e0b68;
        case 0x1e0b84u: goto label_1e0b84;
        case 0x1e0b90u: goto label_1e0b90;
        case 0x1e0bb0u: goto label_1e0bb0;
        case 0x1e0bccu: goto label_1e0bcc;
        case 0x1e0be0u: goto label_1e0be0;
        case 0x1e0becu: goto label_1e0bec;
        case 0x1e0c00u: goto label_1e0c00;
        case 0x1e0c18u: goto label_1e0c18;
        case 0x1e0c24u: goto label_1e0c24;
        case 0x1e0c34u: goto label_1e0c34;
        case 0x1e0c40u: goto label_1e0c40;
        case 0x1e0c48u: goto label_1e0c48;
        case 0x1e0ca0u: goto label_1e0ca0;
        case 0x1e0d04u: goto label_1e0d04;
        case 0x1e0d20u: goto label_1e0d20;
        case 0x1e0d30u: goto label_1e0d30;
        case 0x1e0d40u: goto label_1e0d40;
        case 0x1e0d5cu: goto label_1e0d5c;
        case 0x1e0d6cu: goto label_1e0d6c;
        case 0x1e0d88u: goto label_1e0d88;
        case 0x1e0d94u: goto label_1e0d94;
        case 0x1e0db4u: goto label_1e0db4;
        case 0x1e0dd4u: goto label_1e0dd4;
        case 0x1e0de0u: goto label_1e0de0;
        case 0x1e0df4u: goto label_1e0df4;
        case 0x1e0e20u: goto label_1e0e20;
        case 0x1e0e48u: goto label_1e0e48;
        case 0x1e0ea0u: goto label_1e0ea0;
        case 0x1e1024u: goto label_1e1024;
        case 0x1e1030u: goto label_1e1030;
        case 0x1e1040u: goto label_1e1040;
        case 0x1e109cu: goto label_1e109c;
        case 0x1e10a8u: goto label_1e10a8;
        case 0x1e1204u: goto label_1e1204;
        case 0x1e121cu: goto label_1e121c;
        case 0x1e123cu: goto label_1e123c;
        case 0x1e1254u: goto label_1e1254;
        case 0x1e1260u: goto label_1e1260;
        case 0x1e1280u: goto label_1e1280;
        case 0x1e12a0u: goto label_1e12a0;
        case 0x1e12e0u: goto label_1e12e0;
        case 0x1e1300u: goto label_1e1300;
        case 0x1e130cu: goto label_1e130c;
        case 0x1e1320u: goto label_1e1320;
        case 0x1e1358u: goto label_1e1358;
        case 0x1e1374u: goto label_1e1374;
        case 0x1e1388u: goto label_1e1388;
        case 0x1e13a0u: goto label_1e13a0;
        case 0x1e13b4u: goto label_1e13b4;
        case 0x1e13c4u: goto label_1e13c4;
        case 0x1e13dcu: goto label_1e13dc;
        case 0x1e13f8u: goto label_1e13f8;
        case 0x1e1414u: goto label_1e1414;
        case 0x1e1434u: goto label_1e1434;
        case 0x1e1454u: goto label_1e1454;
        case 0x1e146cu: goto label_1e146c;
        case 0x1e147cu: goto label_1e147c;
        case 0x1e148cu: goto label_1e148c;
        case 0x1e14a4u: goto label_1e14a4;
        default: break;
    }

    ctx->pc = 0x1e06d0u;

    // 0x1e06d0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1e06d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1e06d4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e06d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1e06d8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1e06d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1e06dc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1e06dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1e06e0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1e06e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1e06e4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e06e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1e06e8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e06e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1e06ec: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e06ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1e06f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e06f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1e06f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e06f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e06f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e06f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e06fc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1e06fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e0700: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x1e0700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x1e0704: 0x8fb30140  lw          $s3, 0x140($sp)
    ctx->pc = 0x1e0704u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0708: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x1e0708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1e070c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E070Cu;
    SET_GPR_U32(ctx, 31, 0x1E0714u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E070Cu, 0x1E0714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0714u;
label_1e0714:
    // 0x1e0714: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1e0714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0718: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e0718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e071c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e071cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0720: 0x27a60118  addiu       $a2, $sp, 0x118
    ctx->pc = 0x1e0720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1e0724: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1E0724u;
    SET_GPR_U32(ctx, 31, 0x1E072Cu);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1E0724u, 0x1E072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E072Cu;
label_1e072c:
    // 0x1e072c: 0x27a4013c  addiu       $a0, $sp, 0x13C
    ctx->pc = 0x1e072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
    // 0x1e0730: 0x27a50138  addiu       $a1, $sp, 0x138
    ctx->pc = 0x1e0730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x1e0734: 0xc11c208  jal         func_470820
    ctx->pc = 0x1E0734u;
    SET_GPR_U32(ctx, 31, 0x1E073Cu);
    ctx->pc = 0x470820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470820u, 0x1E0734u, 0x1E073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E073Cu;
label_1e073c:
    // 0x1e073c: 0xc78182c4  lwc1        $f1, -0x7D3C($gp)
    ctx->pc = 0x1e073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0740: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1e0740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0744: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e0744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e0748: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1e0748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1e074c: 0xc78182c4  lwc1        $f1, -0x7D3C($gp)
    ctx->pc = 0x1e074cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0750: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1e0750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0754: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e0754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e0758: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1e0758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1e075c: 0xc78182d4  lwc1        $f1, -0x7D2C($gp)
    ctx->pc = 0x1e075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0760: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x1e0760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0764: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e0764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e0768: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1e0768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1e076c: 0xc7818044  lwc1        $f1, -0x7FBC($gp)
    ctx->pc = 0x1e076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0770: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1e0770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0774: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e0774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e0778: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1e0778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1e077c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1e077cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1e0780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0784: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0788: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1e0788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1e078c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e078cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0794: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0798: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1e0798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1e079c: 0xc78081b0  lwc1        $f0, -0x7E50($gp)
    ctx->pc = 0x1e079cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e07a0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e07a4: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x1e07a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1e07a8: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1e07a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e07ac: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e07acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e07b0: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x1e07b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x1e07b4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e07b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e07b8: 0xc78182d4  lwc1        $f1, -0x7D2C($gp)
    ctx->pc = 0x1e07b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e07bc: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x1e07bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e07c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e07c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e07c4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e07c8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1e07c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1e07cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e07ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07d0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1e07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e07d4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e07d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1e07d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e07d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07dc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e07e0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e07e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e07e4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e07e8: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1e07e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e07ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e07ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07f0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e07f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e07f4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1e07f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e07f8: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x1e07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x1e07fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e07fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0800: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0804: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1e0804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1e0808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e080c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1e080cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0810: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x1e0810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x1e0814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0818: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e081c: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1e081cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1e0820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0824: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0828: 0xa043003c  sb          $v1, 0x3C($v0)
    ctx->pc = 0x1e0828u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 60), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e082c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e082cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e0830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0834: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0838: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x1e0838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x1e083c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e083cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0840: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1e0840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0844: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1e0844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1e0848: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e084c: 0xa040009c  sb          $zero, 0x9C($v0)
    ctx->pc = 0x1e084cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 156), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e0850: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0854: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e0854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0858: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e085c: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x1e085cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x1e0860: 0xc7808290  lwc1        $f0, -0x7D70($gp)
    ctx->pc = 0x1e0860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0864: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e0864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0868: 0xe48000e8  swc1        $f0, 0xE8($a0)
    ctx->pc = 0x1e0868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
    // 0x1e086c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0870: 0xa04000ec  sb          $zero, 0xEC($v0)
    ctx->pc = 0x1e0870u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e0874: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e0874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0878: 0xa08000ed  sb          $zero, 0xED($a0)
    ctx->pc = 0x1e0878u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 237), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e087c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e087cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0880: 0xa04000ee  sb          $zero, 0xEE($v0)
    ctx->pc = 0x1e0880u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 238), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e0884: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e0884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0888: 0xa08000ef  sb          $zero, 0xEF($a0)
    ctx->pc = 0x1e0888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 239), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e088c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1e088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0890: 0x8fa70140  lw          $a3, 0x140($sp)
    ctx->pc = 0x1e0890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0894: 0xe4e00058  swc1        $f0, 0x58($a3)
    ctx->pc = 0x1e0894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 88), bits); }
    // 0x1e0898: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x1e0898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e089c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1e089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e08a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e08a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e08a4: 0x8fa80140  lw          $t0, 0x140($sp)
    ctx->pc = 0x1e08a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e08a8: 0xe500005c  swc1        $f0, 0x5C($t0)
    ctx->pc = 0x1e08a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 92), bits); }
    // 0x1e08ac: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1e08acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e08b0: 0x8fa90140  lw          $t1, 0x140($sp)
    ctx->pc = 0x1e08b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e08b4: 0xe5200064  swc1        $f0, 0x64($t1)
    ctx->pc = 0x1e08b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 100), bits); }
    // 0x1e08b8: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x1e08b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e08bc: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x1e08bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e08c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e08c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e08c4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e08c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e08c8: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x1e08c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x1e08cc: 0x8fb10140  lw          $s1, 0x140($sp)
    ctx->pc = 0x1e08ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e08d0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1e08d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1e08d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e08d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e08d8: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x1e08d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e08dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e08dcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e08e0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e08e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e08e4: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x1e08e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x1e08e8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e08ec: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x1e08ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e08f0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e08f4: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x1e08f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x1e08f8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1e08f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1e08fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e08fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0900: 0x8fb00140  lw          $s0, 0x140($sp)
    ctx->pc = 0x1e0900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0904: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1e0904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1e0908: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e090c: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1e090cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0910: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e0910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0914: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x1e0914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x1e0918: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e0918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e091c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e091cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0920: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0924: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1e0924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x1e0928: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e0928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e092c: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x1e092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0930: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1e0930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0934: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x1e0934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x1e0938: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1e0938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e093c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0940: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1e0940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1e0944: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0948: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e0948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e094c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0950: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e0950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e0954: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1e0954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1e0958: 0xc078c20  jal         func_1E3080
    ctx->pc = 0x1E0958u;
    SET_GPR_U32(ctx, 31, 0x1E0960u);
    ctx->pc = 0x1E3080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3080u, 0x1E0958u, 0x1E0960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0960u;
label_1e0960:
    // 0x1e0960: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0964: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1E0964u;
    {
        const bool branch_taken_0x1e0964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0964) {
            ctx->pc = 0x1E0A1Cu;
            goto label_1e0a1c;
        }
    }
    ctx->pc = 0x1E096Cu;
label_1e096c:
    // 0x1e096c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x1e096cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0970: 0x24a400a4  addiu       $a0, $a1, 0xA4
    ctx->pc = 0x1e0970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1e0974: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0978: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1E0978u;
    SET_GPR_U32(ctx, 31, 0x1E0980u);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E0978u, 0x1E0980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0980u;
label_1e0980:
    // 0x1e0980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0984: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1e0984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1e0988: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e098c: 0xc0788f0  jal         func_1E23C0
    ctx->pc = 0x1E098Cu;
    SET_GPR_U32(ctx, 31, 0x1E0994u);
    ctx->pc = 0x1E23C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E23C0u, 0x1E098Cu, 0x1E0994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0994u;
label_1e0994:
    // 0x1e0994: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e0994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0998: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E0998u;
    {
        const bool branch_taken_0x1e0998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0998) {
            ctx->pc = 0x1E09E4u;
            goto label_1e09e4;
        }
    }
    ctx->pc = 0x1E09A0u;
label_1e09a0:
    // 0x1e09a0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e09a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e09a4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e09a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e09a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e09a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09ac: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1E09ACu;
    SET_GPR_U32(ctx, 31, 0x1E09B4u);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E09ACu, 0x1E09B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E09B4u;
label_1e09b4:
    // 0x1e09b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e09b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e09b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e09b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e09bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09c0: 0xc078840  jal         func_1E2100
    ctx->pc = 0x1E09C0u;
    SET_GPR_U32(ctx, 31, 0x1E09C8u);
    ctx->pc = 0x1E2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2100u, 0x1E09C0u, 0x1E09C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E09C8u;
label_1e09c8:
    // 0x1e09c8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e09c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e09cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e09ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e09d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e09d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e09d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09d8: 0xc078820  jal         func_1E2080
    ctx->pc = 0x1E09D8u;
    SET_GPR_U32(ctx, 31, 0x1E09E0u);
    ctx->pc = 0x1E2080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2080u, 0x1E09D8u, 0x1E09E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E09E0u;
label_1e09e0:
    // 0x1e09e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e09e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e09e4:
    // 0x1e09e4: 0x8fa90140  lw          $t1, 0x140($sp)
    ctx->pc = 0x1e09e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e09e8: 0x253e00a4  addiu       $fp, $t1, 0xA4
    ctx->pc = 0x1e09e8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 9), 164));
    // 0x1e09ec: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e09ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e09f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09f4: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1E09F4u;
    SET_GPR_U32(ctx, 31, 0x1E09FCu);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E09F4u, 0x1E09FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E09FCu;
label_1e09fc:
    // 0x1e09fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e09fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a00: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E0A00u;
    SET_GPR_U32(ctx, 31, 0x1E0A08u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E0A00u, 0x1E0A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A08u;
label_1e0a08:
    // 0x1e0a08: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e0a08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e0a0c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1E0A0Cu;
    {
        const bool branch_taken_0x1e0a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0a0c) {
            ctx->pc = 0x1E09A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e09a0;
        }
    }
    ctx->pc = 0x1E0A14u;
    // 0x1e0a14: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1e0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e0a18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e0a1c:
    // 0x1e0a1c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e0a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0a20: 0x249e00a4  addiu       $fp, $a0, 0xA4
    ctx->pc = 0x1e0a20u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1e0a24: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e0a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a28: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E0A28u;
    SET_GPR_U32(ctx, 31, 0x1E0A30u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E0A28u, 0x1E0A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A30u;
label_1e0a30:
    // 0x1e0a30: 0x202202b  sltu        $a0, $s0, $v0
    ctx->pc = 0x1e0a30u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e0a34: 0x1480ffcd  bnez        $a0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1E0A34u;
    {
        const bool branch_taken_0x1e0a34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0a34) {
            ctx->pc = 0x1E096Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e096c;
        }
    }
    ctx->pc = 0x1E0A3Cu;
    // 0x1e0a3c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0a40: 0x244500a4  addiu       $a1, $v0, 0xA4
    ctx->pc = 0x1e0a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e0a44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e0a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a48: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E0A48u;
    SET_GPR_U32(ctx, 31, 0x1E0A50u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E0A48u, 0x1E0A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A50u;
label_1e0a50:
    // 0x1e0a50: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1e0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0a54: 0x246400bc  addiu       $a0, $v1, 0xBC
    ctx->pc = 0x1e0a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 188));
    // 0x1e0a58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a5c: 0xc078708  jal         func_1E1C20
    ctx->pc = 0x1E0A5Cu;
    SET_GPR_U32(ctx, 31, 0x1E0A64u);
    ctx->pc = 0x1E1C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1C20u, 0x1E0A5Cu, 0x1E0A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A64u;
label_1e0a64:
    // 0x1e0a64: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1e0a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1e0a68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a6c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1E0A6Cu;
    {
        const bool branch_taken_0x1e0a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0a6c) {
            ctx->pc = 0x1E0BA0u;
            goto label_1e0ba0;
        }
    }
    ctx->pc = 0x1E0A74u;
label_1e0a74:
    // 0x1e0a74: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0a78: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1e0a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1e0a7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a80: 0xc0786f0  jal         func_1E1BC0
    ctx->pc = 0x1E0A80u;
    SET_GPR_U32(ctx, 31, 0x1E0A88u);
    ctx->pc = 0x1E1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1BC0u, 0x1E0A80u, 0x1E0A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0A88u;
label_1e0a88:
    // 0x1e0a88: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1e0a88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a8c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x1e0a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0a90: 0x24a400a4  addiu       $a0, $a1, 0xA4
    ctx->pc = 0x1e0a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1e0a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0a98: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1E0A98u;
    SET_GPR_U32(ctx, 31, 0x1E0AA0u);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E0A98u, 0x1E0AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0AA0u;
label_1e0aa0:
    // 0x1e0aa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0aa4: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E0AA4u;
    SET_GPR_U32(ctx, 31, 0x1E0AACu);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E0AA4u, 0x1E0AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0AACu;
label_1e0aac:
    // 0x1e0aac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e0aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ab0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ab4: 0xc078640  jal         func_1E1900
    ctx->pc = 0x1E0AB4u;
    SET_GPR_U32(ctx, 31, 0x1E0ABCu);
    ctx->pc = 0x1E1900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1900u, 0x1E0AB4u, 0x1E0ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0ABCu;
label_1e0abc:
    // 0x1e0abc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e0abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ac0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1E0AC0u;
    {
        const bool branch_taken_0x1e0ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ac0) {
            ctx->pc = 0x1E0B70u;
            goto label_1e0b70;
        }
    }
    ctx->pc = 0x1E0AC8u;
label_1e0ac8:
    // 0x1e0ac8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0acc: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1e0accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1e0ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ad4: 0xc0786f0  jal         func_1E1BC0
    ctx->pc = 0x1E0AD4u;
    SET_GPR_U32(ctx, 31, 0x1E0ADCu);
    ctx->pc = 0x1E1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1BC0u, 0x1E0AD4u, 0x1E0ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0ADCu;
label_1e0adc:
    // 0x1e0adc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ae0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e0ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ae4: 0xc078628  jal         func_1E18A0
    ctx->pc = 0x1E0AE4u;
    SET_GPR_U32(ctx, 31, 0x1E0AECu);
    ctx->pc = 0x1E18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E18A0u, 0x1E0AE4u, 0x1E0AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0AECu;
label_1e0aec:
    // 0x1e0aec: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1e0aecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e0af0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0af4: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1e0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1e0af8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0afc: 0xc0786f0  jal         func_1E1BC0
    ctx->pc = 0x1E0AFCu;
    SET_GPR_U32(ctx, 31, 0x1E0B04u);
    ctx->pc = 0x1E1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1BC0u, 0x1E0AFCu, 0x1E0B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B04u;
label_1e0b04:
    // 0x1e0b04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e0b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b0c: 0xc078628  jal         func_1E18A0
    ctx->pc = 0x1E0B0Cu;
    SET_GPR_U32(ctx, 31, 0x1E0B14u);
    ctx->pc = 0x1E18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E18A0u, 0x1E0B0Cu, 0x1E0B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B14u;
label_1e0b14:
    // 0x1e0b14: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1e0b14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e0b18: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0b1c: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1e0b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1e0b20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b24: 0xc0786f0  jal         func_1E1BC0
    ctx->pc = 0x1E0B24u;
    SET_GPR_U32(ctx, 31, 0x1E0B2Cu);
    ctx->pc = 0x1E1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1BC0u, 0x1E0B24u, 0x1E0B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B2Cu;
label_1e0b2c:
    // 0x1e0b2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e0b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b34: 0xc078628  jal         func_1E18A0
    ctx->pc = 0x1E0B34u;
    SET_GPR_U32(ctx, 31, 0x1E0B3Cu);
    ctx->pc = 0x1E18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E18A0u, 0x1E0B34u, 0x1E0B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B3Cu;
label_1e0b3c:
    // 0x1e0b3c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1e0b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e0b40: 0x241e00ff  addiu       $fp, $zero, 0xFF
    ctx->pc = 0x1e0b40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e0b44: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e0b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0b48: 0x248400bc  addiu       $a0, $a0, 0xBC
    ctx->pc = 0x1e0b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 188));
    // 0x1e0b4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b50: 0xc0786f0  jal         func_1E1BC0
    ctx->pc = 0x1E0B50u;
    SET_GPR_U32(ctx, 31, 0x1E0B58u);
    ctx->pc = 0x1E1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1BC0u, 0x1E0B50u, 0x1E0B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B58u;
label_1e0b58:
    // 0x1e0b58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e0b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b60: 0xc078628  jal         func_1E18A0
    ctx->pc = 0x1E0B60u;
    SET_GPR_U32(ctx, 31, 0x1E0B68u);
    ctx->pc = 0x1E18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E18A0u, 0x1E0B60u, 0x1E0B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B68u;
label_1e0b68:
    // 0x1e0b68: 0xa05e0003  sb          $fp, 0x3($v0)
    ctx->pc = 0x1e0b68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 30));
    // 0x1e0b6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e0b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e0b70:
    // 0x1e0b70: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0b74: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1e0b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1e0b78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b7c: 0xc0786f0  jal         func_1E1BC0
    ctx->pc = 0x1E0B7Cu;
    SET_GPR_U32(ctx, 31, 0x1E0B84u);
    ctx->pc = 0x1E1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1BC0u, 0x1E0B7Cu, 0x1E0B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B84u;
label_1e0b84:
    // 0x1e0b84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b88: 0xc078618  jal         func_1E1860
    ctx->pc = 0x1E0B88u;
    SET_GPR_U32(ctx, 31, 0x1E0B90u);
    ctx->pc = 0x1E1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1860u, 0x1E0B88u, 0x1E0B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0B90u;
label_1e0b90:
    // 0x1e0b90: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e0b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e0b94: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1E0B94u;
    {
        const bool branch_taken_0x1e0b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0b94) {
            ctx->pc = 0x1E0AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0ac8;
        }
    }
    ctx->pc = 0x1E0B9Cu;
    // 0x1e0b9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e0b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e0ba0:
    // 0x1e0ba0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0ba4: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1e0ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1e0ba8: 0xc078608  jal         func_1E1820
    ctx->pc = 0x1E0BA8u;
    SET_GPR_U32(ctx, 31, 0x1E0BB0u);
    ctx->pc = 0x1E1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1820u, 0x1E0BA8u, 0x1E0BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0BB0u;
label_1e0bb0:
    // 0x1e0bb0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e0bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e0bb4: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x1E0BB4u;
    {
        const bool branch_taken_0x1e0bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0bb4) {
            ctx->pc = 0x1E0A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0a74;
        }
    }
    ctx->pc = 0x1E0BBCu;
    // 0x1e0bbc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0bc0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e0bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e0bc4: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E0BC4u;
    SET_GPR_U32(ctx, 31, 0x1E0BCCu);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E0BC4u, 0x1E0BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0BCCu;
label_1e0bcc:
    // 0x1e0bcc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1e0bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0bd0: 0x246400b0  addiu       $a0, $v1, 0xB0
    ctx->pc = 0x1e0bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x1e0bd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bd8: 0xc078548  jal         func_1E1520
    ctx->pc = 0x1E0BD8u;
    SET_GPR_U32(ctx, 31, 0x1E0BE0u);
    ctx->pc = 0x1E1520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1520u, 0x1E0BD8u, 0x1E0BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0BE0u;
label_1e0be0:
    // 0x1e0be0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0be4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1E0BE4u;
    {
        const bool branch_taken_0x1e0be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0be4) {
            ctx->pc = 0x1E0DA4u;
            goto label_1e0da4;
        }
    }
    ctx->pc = 0x1E0BECu;
label_1e0bec:
    // 0x1e0bec: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0bf0: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x1e0bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1e0bf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0bf8: 0xc077fb8  jal         func_1DFEE0
    ctx->pc = 0x1E0BF8u;
    SET_GPR_U32(ctx, 31, 0x1E0C00u);
    ctx->pc = 0x1DFEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFEE0u, 0x1E0BF8u, 0x1E0C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0C00u;
label_1e0c00:
    // 0x1e0c00: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1e0c00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c04: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0c08: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e0c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e0c0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c10: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1E0C10u;
    SET_GPR_U32(ctx, 31, 0x1E0C18u);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E0C10u, 0x1E0C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0C18u;
label_1e0c18:
    // 0x1e0c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c1c: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E0C1Cu;
    SET_GPR_U32(ctx, 31, 0x1E0C24u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E0C1Cu, 0x1E0C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0C24u;
label_1e0c24:
    // 0x1e0c24: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e0c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e0c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c2c: 0xc06dda0  jal         func_1B7680
    ctx->pc = 0x1E0C2Cu;
    SET_GPR_U32(ctx, 31, 0x1E0C34u);
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x1E0C2Cu, 0x1E0C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0C34u;
label_1e0c34:
    // 0x1e0c34: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e0c34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c38: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1E0C38u;
    {
        const bool branch_taken_0x1e0c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c38) {
            ctx->pc = 0x1E0D74u;
            goto label_1e0d74;
        }
    }
    ctx->pc = 0x1E0C40u;
label_1e0c40:
    // 0x1e0c40: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1E0C40u;
    SET_GPR_U32(ctx, 31, 0x1E0C48u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1E0C40u, 0x1E0C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0C48u;
label_1e0c48:
    // 0x1e0c48: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x1e0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1e0c4c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e0c4cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e0c50: 0x1010  mfhi        $v0
    ctx->pc = 0x1e0c50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e0c54: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0C54u;
    {
        const bool branch_taken_0x1e0c54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e0c54) {
            ctx->pc = 0x1E0C70u;
            goto label_1e0c70;
        }
    }
    ctx->pc = 0x1E0C5Cu;
    // 0x1e0c5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c60: 0x0  nop
    ctx->pc = 0x1e0c60u;
    // NOP
    // 0x1e0c64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e0c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e0c68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0C68u;
    {
        const bool branch_taken_0x1e0c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c68) {
            ctx->pc = 0x1E0C8Cu;
            goto label_1e0c8c;
        }
    }
    ctx->pc = 0x1E0C70u;
label_1e0c70:
    // 0x1e0c70: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e0c74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0c78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e0c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e0c7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e0c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c80: 0x0  nop
    ctx->pc = 0x1e0c80u;
    // NOP
    // 0x1e0c84: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e0c84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e0c88: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e0c88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e0c8c:
    // 0x1e0c8c: 0xc780825c  lwc1        $f0, -0x7DA4($gp)
    ctx->pc = 0x1e0c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0c90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e0c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e0c94: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1e0c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1e0c98: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1E0C98u;
    SET_GPR_U32(ctx, 31, 0x1E0CA0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1E0C98u, 0x1E0CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0CA0u;
label_1e0ca0:
    // 0x1e0ca0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1e0ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e0ca4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e0ca4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e0ca8: 0x1010  mfhi        $v0
    ctx->pc = 0x1e0ca8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e0cac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0CACu;
    {
        const bool branch_taken_0x1e0cac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e0cac) {
            ctx->pc = 0x1E0CC8u;
            goto label_1e0cc8;
        }
    }
    ctx->pc = 0x1E0CB4u;
    // 0x1e0cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0cb8: 0x0  nop
    ctx->pc = 0x1e0cb8u;
    // NOP
    // 0x1e0cbc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e0cbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e0cc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0CC0u;
    {
        const bool branch_taken_0x1e0cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0cc0) {
            ctx->pc = 0x1E0CE4u;
            goto label_1e0ce4;
        }
    }
    ctx->pc = 0x1E0CC8u;
label_1e0cc8:
    // 0x1e0cc8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e0cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e0ccc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0cd0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e0cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e0cd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e0cd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0cd8: 0x0  nop
    ctx->pc = 0x1e0cd8u;
    // NOP
    // 0x1e0cdc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e0cdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e0ce0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e0ce0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e0ce4:
    // 0x1e0ce4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1e0ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1e0ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0cec: 0x0  nop
    ctx->pc = 0x1e0cecu;
    // NOP
    // 0x1e0cf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e0cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e0cf4: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1e0cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1e0cf8: 0xc7ac0134  lwc1        $f12, 0x134($sp)
    ctx->pc = 0x1e0cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0cfc: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1E0CFCu;
    SET_GPR_U32(ctx, 31, 0x1E0D04u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1E0CFCu, 0x1E0D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0D04u;
label_1e0d04:
    // 0x1e0d04: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x1e0d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0d08: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1e0d08u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e0d0c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0d10: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x1e0d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1e0d14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d18: 0xc077fb8  jal         func_1DFEE0
    ctx->pc = 0x1E0D18u;
    SET_GPR_U32(ctx, 31, 0x1E0D20u);
    ctx->pc = 0x1DFEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFEE0u, 0x1E0D18u, 0x1E0D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0D20u;
label_1e0d20:
    // 0x1e0d20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e0d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d28: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1E0D28u;
    SET_GPR_U32(ctx, 31, 0x1E0D30u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1E0D28u, 0x1E0D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0D30u;
label_1e0d30:
    // 0x1e0d30: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1e0d30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e0d34: 0xc7ac0134  lwc1        $f12, 0x134($sp)
    ctx->pc = 0x1e0d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0d38: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1E0D38u;
    SET_GPR_U32(ctx, 31, 0x1E0D40u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1E0D38u, 0x1E0D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0D40u;
label_1e0d40:
    // 0x1e0d40: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x1e0d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0d44: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1e0d44u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e0d48: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0d4c: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x1e0d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1e0d50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d54: 0xc077fb8  jal         func_1DFEE0
    ctx->pc = 0x1E0D54u;
    SET_GPR_U32(ctx, 31, 0x1E0D5Cu);
    ctx->pc = 0x1DFEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFEE0u, 0x1E0D54u, 0x1E0D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0D5Cu;
label_1e0d5c:
    // 0x1e0d5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e0d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d64: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1E0D64u;
    SET_GPR_U32(ctx, 31, 0x1E0D6Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1E0D64u, 0x1E0D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0D6Cu;
label_1e0d6c:
    // 0x1e0d6c: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1e0d6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e0d70: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e0d70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1e0d74:
    // 0x1e0d74: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0d78: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e0d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e0d7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d80: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1E0D80u;
    SET_GPR_U32(ctx, 31, 0x1E0D88u);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E0D80u, 0x1E0D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0D88u;
label_1e0d88:
    // 0x1e0d88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d8c: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E0D8Cu;
    SET_GPR_U32(ctx, 31, 0x1E0D94u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E0D8Cu, 0x1E0D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0D94u;
label_1e0d94:
    // 0x1e0d94: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1e0d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e0d98: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x1E0D98u;
    {
        const bool branch_taken_0x1e0d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0d98) {
            ctx->pc = 0x1E0C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0c40;
        }
    }
    ctx->pc = 0x1E0DA0u;
    // 0x1e0da0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e0da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e0da4:
    // 0x1e0da4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0da8: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x1e0da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1e0dac: 0xc078538  jal         func_1E14E0
    ctx->pc = 0x1E0DACu;
    SET_GPR_U32(ctx, 31, 0x1E0DB4u);
    ctx->pc = 0x1E14E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E14E0u, 0x1E0DACu, 0x1E0DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0DB4u;
label_1e0db4:
    // 0x1e0db4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e0db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e0db8: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x1E0DB8u;
    {
        const bool branch_taken_0x1e0db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0db8) {
            ctx->pc = 0x1E0BECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0bec;
        }
    }
    ctx->pc = 0x1E0DC0u;
    // 0x1e0dc0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0dc4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e0dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e0dc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dcc: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1E0DCCu;
    SET_GPR_U32(ctx, 31, 0x1E0DD4u);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E0DCCu, 0x1E0DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0DD4u;
label_1e0dd4:
    // 0x1e0dd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e0dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dd8: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E0DD8u;
    SET_GPR_U32(ctx, 31, 0x1E0DE0u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E0DD8u, 0x1E0DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0DE0u;
label_1e0de0:
    // 0x1e0de0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1e0de0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0de4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0de8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e0de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e0dec: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E0DECu;
    SET_GPR_U32(ctx, 31, 0x1E0DF4u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E0DECu, 0x1E0DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0DF4u;
label_1e0df4:
    // 0x1e0df4: 0x5eb018  mult        $s6, $v0, $fp
    ctx->pc = 0x1e0df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x1e0df8: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1e0df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1e0dfc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0e00: 0xac43010c  sw          $v1, 0x10C($v0)
    ctx->pc = 0x1e0e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 3));
    // 0x1e0e04: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x1e0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x1e0e08: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1e0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1e0e0c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1e0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e0e10: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0e14: 0xac430110  sw          $v1, 0x110($v0)
    ctx->pc = 0x1e0e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 3));
    // 0x1e0e18: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x1E0E18u;
    SET_GPR_U32(ctx, 31, 0x1E0E20u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x1E0E18u, 0x1E0E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0E20u;
label_1e0e20:
    // 0x1e0e20: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1e0e20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0e28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0e2c: 0xc6e00080  lwc1        $f0, 0x80($s7)
    ctx->pc = 0x1e0e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e30: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e0e30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e0e34: 0x0  nop
    ctx->pc = 0x1e0e34u;
    // NOP
    // 0x1e0e38: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e0e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1e0e3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E0E40u;
    {
        const bool branch_taken_0x1e0e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0e40) {
            ctx->pc = 0x1E0E78u;
            goto label_1e0e78;
        }
    }
    ctx->pc = 0x1E0E48u;
label_1e0e48:
    // 0x1e0e48: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e0e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e0e4c: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x1e0e4cu;
    { uint32_t bits = FAST_READ32(0x61E898u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e50: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1e0e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e0e54: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0e5c: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1e0e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1e0e60: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e0e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e64: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1e0e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1e0e68: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0e6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0e70: 0xe4400138  swc1        $f0, 0x138($v0)
    ctx->pc = 0x1e0e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 312), bits); }
    // 0x1e0e74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e0e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e0e78:
    // 0x1e0e78: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0e7c: 0x8c42010c  lw          $v0, 0x10C($v0)
    ctx->pc = 0x1e0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
    // 0x1e0e80: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e0e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e0e84: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1E0E84u;
    {
        const bool branch_taken_0x1e0e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0e84) {
            ctx->pc = 0x1E0E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0e48;
        }
    }
    ctx->pc = 0x1E0E8Cu;
    // 0x1e0e8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e0e8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e0e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e0e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e98: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1E0E98u;
    {
        const bool branch_taken_0x1e0e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0e98) {
            ctx->pc = 0x1E0F80u;
            goto label_1e0f80;
        }
    }
    ctx->pc = 0x1E0EA0u;
label_1e0ea0:
    // 0x1e0ea0: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x1e0ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1e0ea4: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1e0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1e0ea8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0eac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e0eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0eb0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1e0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1e0eb4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0eb8: 0xa444cd20  sh          $a0, -0x32E0($v0)
    ctx->pc = 0x1e0eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954272), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e0ebc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1e0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e0ec0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1e0ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e0ec4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1e0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e0ec8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1e0ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e0ecc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0ed0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e0ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0ed4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1e0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1e0ed8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0edc: 0xa444cd20  sh          $a0, -0x32E0($v0)
    ctx->pc = 0x1e0edcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954272), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e0ee0: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x1e0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1e0ee4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1e0ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e0ee8: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x1e0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x1e0eec: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1e0eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e0ef0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0ef4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0ef8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1e0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1e0efc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0f00: 0xa444cd20  sh          $a0, -0x32E0($v0)
    ctx->pc = 0x1e0f00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954272), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e0f04: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x1e0f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1e0f08: 0x26620003  addiu       $v0, $s3, 0x3
    ctx->pc = 0x1e0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x1e0f0c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1e0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e0f10: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0f14: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e0f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0f18: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1e0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1e0f1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e0f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0f20: 0xa444cd20  sh          $a0, -0x32E0($v0)
    ctx->pc = 0x1e0f20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954272), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e0f24: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x1e0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1e0f28: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1e0f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e0f2c: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x1e0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1e0f30: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1e0f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e0f34: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0f38: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e0f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0f3c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1e0f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1e0f40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0f44: 0xa444cd20  sh          $a0, -0x32E0($v0)
    ctx->pc = 0x1e0f44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954272), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e0f48: 0x26420003  addiu       $v0, $s2, 0x3
    ctx->pc = 0x1e0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x1e0f4c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1e0f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e0f50: 0x26620005  addiu       $v0, $s3, 0x5
    ctx->pc = 0x1e0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x1e0f54: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1e0f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1e0f58: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0f5c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1e0f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0f60: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1e0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1e0f64: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e0f68: 0xa444cd20  sh          $a0, -0x32E0($v0)
    ctx->pc = 0x1e0f68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294954272), (uint16_t)GPR_U32(ctx, 4));
    // 0x1e0f6c: 0x26730006  addiu       $s3, $s3, 0x6
    ctx->pc = 0x1e0f6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x1e0f70: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1e0f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e0f74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e0f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f78: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1e0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e0f7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e0f80:
    // 0x1e0f80: 0x216182b  sltu        $v1, $s0, $s6
    ctx->pc = 0x1e0f80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1e0f84: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1E0F84u;
    {
        const bool branch_taken_0x1e0f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f84) {
            ctx->pc = 0x1E0EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0ea0;
        }
    }
    ctx->pc = 0x1E0F8Cu;
    // 0x1e0f8c: 0x2785b6c0  addiu       $a1, $gp, -0x4940
    ctx->pc = 0x1e0f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1e0f90: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x1e0f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x1e0f94: 0x2786b6c0  addiu       $a2, $gp, -0x4940
    ctx->pc = 0x1e0f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1e0f98: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x1e0f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x1e0f9c: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1e0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1e0fa0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1e0fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1e0fa4: 0x2784b6c0  addiu       $a0, $gp, -0x4940
    ctx->pc = 0x1e0fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1e0fa8: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x1e0fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
    // 0x1e0fac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1e0facu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fb0: 0x36a50004  ori         $a1, $s5, 0x4
    ctx->pc = 0x1e0fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
    // 0x1e0fb4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e0fb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fb8: 0x36a20008  ori         $v0, $s5, 0x8
    ctx->pc = 0x1e0fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
    // 0x1e0fbc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e0fbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fc0: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x1e0fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0fc4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1e0fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0fc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e0fc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0fcc: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1e0fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1e0fd0: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x1e0fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0fd4: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x1e0fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0fd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e0fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0fdc: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1e0fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1e0fe0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0fe4: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x1e0fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e0fe8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0fec: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x1e0fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0ff0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e0ff4: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1e0ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0ff8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e0ff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e0ffc: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1e0ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1e1000: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e1000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1004: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1e1004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1008: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e1008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e100c: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x1e100cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1010: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e1010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e1014: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1e1014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x1e1018: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e1018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e101c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x1E101Cu;
    {
        const bool branch_taken_0x1e101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e101c) {
            ctx->pc = 0x1E1270u;
            goto label_1e1270;
        }
    }
    ctx->pc = 0x1E1024u;
label_1e1024:
    // 0x1e1024: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e1024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1028: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1E1028u;
    {
        const bool branch_taken_0x1e1028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1028) {
            ctx->pc = 0x1E1240u;
            goto label_1e1240;
        }
    }
    ctx->pc = 0x1E1030u;
label_1e1030:
    // 0x1e1030: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e1030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1034: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e1034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e1038: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E1038u;
    SET_GPR_U32(ctx, 31, 0x1E1040u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E1038u, 0x1E1040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1040u;
label_1e1040:
    // 0x1e1040: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1040u;
    {
        const bool branch_taken_0x1e1040 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e1040) {
            ctx->pc = 0x1E105Cu;
            goto label_1e105c;
        }
    }
    ctx->pc = 0x1E1048u;
    // 0x1e1048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e104c: 0x0  nop
    ctx->pc = 0x1e104cu;
    // NOP
    // 0x1e1050: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e1050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e1054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1054u;
    {
        const bool branch_taken_0x1e1054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1054) {
            ctx->pc = 0x1E1078u;
            goto label_1e1078;
        }
    }
    ctx->pc = 0x1E105Cu;
label_1e105c:
    // 0x1e105c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e105cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e1060: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e1064: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e1064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e1068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e1068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e106c: 0x0  nop
    ctx->pc = 0x1e106cu;
    // NOP
    // 0x1e1070: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e1070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e1074: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e1074u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e1078:
    // 0x1e1078: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1e1078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e107c: 0x0  nop
    ctx->pc = 0x1e107cu;
    // NOP
    // 0x1e1080: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e1080u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e1084: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1e1084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1e1088: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e1088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e108c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e108cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e1090: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1094: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1E1094u;
    SET_GPR_U32(ctx, 31, 0x1E109Cu);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E1094u, 0x1E109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E109Cu;
label_1e109c:
    // 0x1e109c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e109cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10a0: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E10A0u;
    SET_GPR_U32(ctx, 31, 0x1E10A8u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E10A0u, 0x1E10A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E10A8u;
label_1e10a8:
    // 0x1e10a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E10A8u;
    {
        const bool branch_taken_0x1e10a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e10a8) {
            ctx->pc = 0x1E10C4u;
            goto label_1e10c4;
        }
    }
    ctx->pc = 0x1E10B0u;
    // 0x1e10b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e10b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e10b4: 0x0  nop
    ctx->pc = 0x1e10b4u;
    // NOP
    // 0x1e10b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e10b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e10bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E10BCu;
    {
        const bool branch_taken_0x1e10bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e10bc) {
            ctx->pc = 0x1E10E0u;
            goto label_1e10e0;
        }
    }
    ctx->pc = 0x1E10C4u;
label_1e10c4:
    // 0x1e10c4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e10c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e10c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e10cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e10ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e10d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e10d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e10d4: 0x0  nop
    ctx->pc = 0x1e10d4u;
    // NOP
    // 0x1e10d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e10d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e10dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e10dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e10e0:
    // 0x1e10e0: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x1e10e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e10e4: 0x0  nop
    ctx->pc = 0x1e10e4u;
    // NOP
    // 0x1e10e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e10e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e10ec: 0x0  nop
    ctx->pc = 0x1e10ecu;
    // NOP
    // 0x1e10f0: 0x0  nop
    ctx->pc = 0x1e10f0u;
    // NOP
    // 0x1e10f4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1e10f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1e10f8: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E10F8u;
    {
        const bool branch_taken_0x1e10f8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1e10f8) {
            ctx->pc = 0x1E1114u;
            goto label_1e1114;
        }
    }
    ctx->pc = 0x1E1100u;
    // 0x1e1100: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1e1100u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1104: 0x0  nop
    ctx->pc = 0x1e1104u;
    // NOP
    // 0x1e1108: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x1e1108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1e110c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E110Cu;
    {
        const bool branch_taken_0x1e110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e110c) {
            ctx->pc = 0x1E1130u;
            goto label_1e1130;
        }
    }
    ctx->pc = 0x1E1114u;
label_1e1114:
    // 0x1e1114: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1e1114u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1e1118: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1e1118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1e111c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e111cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e1120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e1120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1124: 0x0  nop
    ctx->pc = 0x1e1124u;
    // NOP
    // 0x1e1128: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x1e1128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1e112c: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x1e112cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_1e1130:
    // 0x1e1130: 0xc7a400f8  lwc1        $f4, 0xF8($sp)
    ctx->pc = 0x1e1130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e1134: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e1134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e1138: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e1138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e113c: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x1e113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1140: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e1140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1144: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x1e1144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1148: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e114c: 0x0  nop
    ctx->pc = 0x1e114cu;
    // NOP
    // 0x1e1150: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e1150u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e1154: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1e1154u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e1158: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e115c: 0x0  nop
    ctx->pc = 0x1e115cu;
    // NOP
    // 0x1e1160: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e1160u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e1164: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x1e1164u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1e1168: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1e1168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1e116c: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E116Cu;
    {
        const bool branch_taken_0x1e116c = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1e116c) {
            ctx->pc = 0x1E1188u;
            goto label_1e1188;
        }
    }
    ctx->pc = 0x1E1174u;
    // 0x1e1174: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1e1174u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1178: 0x0  nop
    ctx->pc = 0x1e1178u;
    // NOP
    // 0x1e117c: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x1e117cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1e1180: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E1180u;
    {
        const bool branch_taken_0x1e1180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1180) {
            ctx->pc = 0x1E11A4u;
            goto label_1e11a4;
        }
    }
    ctx->pc = 0x1E1188u;
label_1e1188:
    // 0x1e1188: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1e1188u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1e118c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1e118cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1e1190: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e1190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e1194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e1194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1198: 0x0  nop
    ctx->pc = 0x1e1198u;
    // NOP
    // 0x1e119c: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x1e119cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1e11a0: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x1e11a0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_1e11a4:
    // 0x1e11a4: 0xc7a400fc  lwc1        $f4, 0xFC($sp)
    ctx->pc = 0x1e11a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e11a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e11ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e11acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e11b0: 0xc7a200fc  lwc1        $f2, 0xFC($sp)
    ctx->pc = 0x1e11b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e11b4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e11b8: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x1e11b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e11bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e11bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e11c0: 0x0  nop
    ctx->pc = 0x1e11c0u;
    // NOP
    // 0x1e11c4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e11c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e11c8: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1e11c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e11cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e11ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e11d0: 0x0  nop
    ctx->pc = 0x1e11d0u;
    // NOP
    // 0x1e11d4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e11d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e11d8: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x1e11d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1e11dc: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1e11dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1e11e0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e11e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e11e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e11e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e11e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e11ec: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x1e11ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e11f0: 0xc7ad0104  lwc1        $f13, 0x104($sp)
    ctx->pc = 0x1e11f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e11f4: 0xc7ae00f8  lwc1        $f14, 0xF8($sp)
    ctx->pc = 0x1e11f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e11f8: 0xc7af00fc  lwc1        $f15, 0xFC($sp)
    ctx->pc = 0x1e11f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e11fc: 0xc0798d4  jal         func_1E6350
    ctx->pc = 0x1E11FCu;
    SET_GPR_U32(ctx, 31, 0x1E1204u);
    ctx->pc = 0x1E6350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6350u, 0x1E11FCu, 0x1E1204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1204u;
label_1e1204:
    // 0x1e1204: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e1204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1208: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e120c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e120cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1210: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e1210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1214: 0xc079994  jal         func_1E6650
    ctx->pc = 0x1E1214u;
    SET_GPR_U32(ctx, 31, 0x1E121Cu);
    ctx->pc = 0x1E6650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6650u, 0x1E1214u, 0x1E121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E121Cu;
label_1e121c:
    // 0x1e121c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e121cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1220: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1224: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e1224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1228: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1e1228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e122c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x1e122cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e1230: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x1e1230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e1234: 0xc079934  jal         func_1E64D0
    ctx->pc = 0x1E1234u;
    SET_GPR_U32(ctx, 31, 0x1E123Cu);
    ctx->pc = 0x1E64D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E64D0u, 0x1E1234u, 0x1E123Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E123Cu;
label_1e123c:
    // 0x1e123c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e123cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e1240:
    // 0x1e1240: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e1240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1244: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e1244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e1248: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e124c: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1E124Cu;
    SET_GPR_U32(ctx, 31, 0x1E1254u);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E124Cu, 0x1E1254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1254u;
label_1e1254:
    // 0x1e1254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1258: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E1258u;
    SET_GPR_U32(ctx, 31, 0x1E1260u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E1258u, 0x1E1260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1260u;
label_1e1260:
    // 0x1e1260: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e1260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1264: 0x1440ff72  bnez        $v0, . + 4 + (-0x8E << 2)
    ctx->pc = 0x1E1264u;
    {
        const bool branch_taken_0x1e1264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1264) {
            ctx->pc = 0x1E1030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1030;
        }
    }
    ctx->pc = 0x1E126Cu;
    // 0x1e126c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e126cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e1270:
    // 0x1e1270: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e1270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1274: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e1274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e1278: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E1278u;
    SET_GPR_U32(ctx, 31, 0x1E1280u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E1278u, 0x1E1280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1280u;
label_1e1280:
    // 0x1e1280: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e1280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1284: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x1E1284u;
    {
        const bool branch_taken_0x1e1284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1284) {
            ctx->pc = 0x1E1024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1024;
        }
    }
    ctx->pc = 0x1E128Cu;
    // 0x1e128c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e1290: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1e1290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e1294: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1294u;
    {
        const bool branch_taken_0x1e1294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1294) {
            ctx->pc = 0x1E12BCu;
            goto label_1e12bc;
        }
    }
    ctx->pc = 0x1E129Cu;
    // 0x1e129c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1e129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1e12a0:
    // 0x1e12a0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1e12a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e12a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e12a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e12a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e12a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e12ac: 0x0  nop
    ctx->pc = 0x1e12acu;
    // NOP
    // 0x1e12b0: 0x0  nop
    ctx->pc = 0x1e12b0u;
    // NOP
    // 0x1e12b4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E12B4u;
    {
        const bool branch_taken_0x1e12b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e12b4) {
            ctx->pc = 0x1E12A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e12a0;
        }
    }
    ctx->pc = 0x1E12BCu;
label_1e12bc:
    // 0x1e12bc: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x1e12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1e12c0: 0xdf849810  ld          $a0, -0x67F0($gp)
    ctx->pc = 0x1e12c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294940688)));
    // 0x1e12c4: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1e12c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x1e12c8: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x1e12c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e12cc: 0x24a200c8  addiu       $v0, $a1, 0xC8
    ctx->pc = 0x1e12ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 200));
    // 0x1e12d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e12d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e12d4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1e12d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1e12d8: 0xc056708  jal         func_159C20
    ctx->pc = 0x1E12D8u;
    SET_GPR_U32(ctx, 31, 0x1E12E0u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1E12D8u, 0x1E12E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E12E0u;
label_1e12e0:
    // 0x1e12e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e12e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e12e4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e12e8: 0x244500d4  addiu       $a1, $v0, 0xD4
    ctx->pc = 0x1e12e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
    // 0x1e12ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e12ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e12f0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1e12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1e12f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e12f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e12f8: 0xc06dda0  jal         func_1B7680
    ctx->pc = 0x1E12F8u;
    SET_GPR_U32(ctx, 31, 0x1E1300u);
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x1E12F8u, 0x1E1300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1300u;
label_1e1300:
    // 0x1e1300: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e1300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1304: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1E1304u;
    {
        const bool branch_taken_0x1e1304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1304) {
            ctx->pc = 0x1E1440u;
            goto label_1e1440;
        }
    }
    ctx->pc = 0x1E130Cu;
label_1e130c:
    // 0x1e130c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e130cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1310: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1e1310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1e1314: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1318: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E1318u;
    SET_GPR_U32(ctx, 31, 0x1E1320u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E1318u, 0x1E1320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1320u;
label_1e1320:
    // 0x1e1320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1324: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1e1324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1e1328: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1e1328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1e132c: 0x24a58108  addiu       $a1, $a1, -0x7EF8
    ctx->pc = 0x1e132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934792));
    // 0x1e1330: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1e1330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e1334: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e1334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e1338: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e1338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e133c: 0x27b100e8  addiu       $s1, $sp, 0xE8
    ctx->pc = 0x1e133cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1e1340: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1e1340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1344: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e1344u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1348: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x1e1348u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e134c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e134cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1350: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1E1350u;
    SET_GPR_U32(ctx, 31, 0x1E1358u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1E1350u, 0x1E1358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1358u;
label_1e1358:
    // 0x1e1358: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1e1358u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e135c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e135cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1360: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x1e1360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e1364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e136c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E136Cu;
    SET_GPR_U32(ctx, 31, 0x1E1374u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E136Cu, 0x1E1374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1374u;
label_1e1374:
    // 0x1e1374: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x1e1374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x1e1378: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e1378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e137c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e137cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e1380: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E1380u;
    SET_GPR_U32(ctx, 31, 0x1E1388u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E1380u, 0x1E1388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1388u;
label_1e1388:
    // 0x1e1388: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1e1388u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e138c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e138cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1390: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e1390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e1394: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1398: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E1398u;
    SET_GPR_U32(ctx, 31, 0x1E13A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E1398u, 0x1E13A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E13A0u;
label_1e13a0:
    // 0x1e13a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e13a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e13a4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e13a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e13a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e13a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e13ac: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1E13ACu;
    SET_GPR_U32(ctx, 31, 0x1E13B4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1E13ACu, 0x1E13B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E13B4u;
label_1e13b4:
    // 0x1e13b4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1e13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e13b8: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x1e13b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1e13bc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E13BCu;
    SET_GPR_U32(ctx, 31, 0x1E13C4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E13BCu, 0x1E13C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E13C4u;
label_1e13c4:
    // 0x1e13c4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1e13c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1e13c8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e13cc: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e13ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e13d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e13d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e13d4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E13D4u;
    SET_GPR_U32(ctx, 31, 0x1E13DCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E13D4u, 0x1E13DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E13DCu;
label_1e13dc:
    // 0x1e13dc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1e13dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e13e0: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x1e13e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e13e4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1e13e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1e13e8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1e13e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e13ec: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1e13ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1e13f0: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1E13F0u;
    SET_GPR_U32(ctx, 31, 0x1E13F8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1E13F0u, 0x1E13F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E13F8u;
label_1e13f8:
    // 0x1e13f8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1e13f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e13fc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1400: 0x244200d4  addiu       $v0, $v0, 0xD4
    ctx->pc = 0x1e1400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
    // 0x1e1404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1408: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e140c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1E140Cu;
    SET_GPR_U32(ctx, 31, 0x1E1414u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1E140Cu, 0x1E1414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1414u;
label_1e1414:
    // 0x1e1414: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1e1414u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e1418: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1e1418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e141c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e141cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1420: 0x248200d4  addiu       $v0, $a0, 0xD4
    ctx->pc = 0x1e1420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 212));
    // 0x1e1424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e142c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1E142Cu;
    SET_GPR_U32(ctx, 31, 0x1E1434u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1E142Cu, 0x1E1434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1434u;
label_1e1434:
    // 0x1e1434: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1e1434u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e1438: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1e1438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e143c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e143cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e1440:
    // 0x1e1440: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e1440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1444: 0x248200c8  addiu       $v0, $a0, 0xC8
    ctx->pc = 0x1e1444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
    // 0x1e1448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e144c: 0xc05611c  jal         func_158470
    ctx->pc = 0x1E144Cu;
    SET_GPR_U32(ctx, 31, 0x1E1454u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1E144Cu, 0x1E1454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1454u;
label_1e1454:
    // 0x1e1454: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e1454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1458: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1E1458u;
    {
        const bool branch_taken_0x1e1458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1458) {
            ctx->pc = 0x1E130Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e130c;
        }
    }
    ctx->pc = 0x1E1460u;
    // 0x1e1460: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e1460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1464: 0xc079108  jal         func_1E4420
    ctx->pc = 0x1E1464u;
    SET_GPR_U32(ctx, 31, 0x1E146Cu);
    ctx->pc = 0x1E4420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4420u, 0x1E1464u, 0x1E146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E146Cu;
label_1e146c:
    // 0x1e146c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1474: 0xc07971c  jal         func_1E5C70
    ctx->pc = 0x1E1474u;
    SET_GPR_U32(ctx, 31, 0x1E147Cu);
    ctx->pc = 0x1E5C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5C70u, 0x1E1474u, 0x1E147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E147Cu;
label_1e147c:
    // 0x1e147c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1e147cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1480: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1e1480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1484: 0xc07925c  jal         func_1E4970
    ctx->pc = 0x1E1484u;
    SET_GPR_U32(ctx, 31, 0x1E148Cu);
    ctx->pc = 0x1E4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4970u, 0x1E1484u, 0x1E148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E148Cu;
label_1e148c:
    // 0x1e148c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e148cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1490: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1e1490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1e1494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e1494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e149c: 0xc078e50  jal         func_1E3940
    ctx->pc = 0x1E149Cu;
    SET_GPR_U32(ctx, 31, 0x1E14A4u);
    ctx->pc = 0x1E3940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3940u, 0x1E149Cu, 0x1E14A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E14A4u;
label_1e14a4:
    // 0x1e14a4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1e14a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e14a8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1e14a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e14ac: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1e14acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e14b0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1e14b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e14b4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1e14b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e14b8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1e14b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e14bc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e14bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e14c0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e14c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e14c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e14c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e14c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e14c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e14cc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1e14ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e14d0: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x1e14d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e14d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E14D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E14D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E14DCu;
    // 0x1e14dc: 0x0  nop
    ctx->pc = 0x1e14dcu;
    // NOP
    ctx->pc = 0x1e14e0u;
}
