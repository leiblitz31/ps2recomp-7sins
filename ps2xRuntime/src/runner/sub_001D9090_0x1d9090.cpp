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

// Function: sub_001D9090
// Address: 0x1d9090 - 0x1db1a0
void sub_001D9090_0x1d9090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9090_0x1d9090");
#endif

    switch (ctx->pc) {
        case 0x1d90ecu: goto label_1d90ec;
        case 0x1d9104u: goto label_1d9104;
        case 0x1d9140u: goto label_1d9140;
        case 0x1d9158u: goto label_1d9158;
        case 0x1d9194u: goto label_1d9194;
        case 0x1d91a8u: goto label_1d91a8;
        case 0x1d91c0u: goto label_1d91c0;
        case 0x1d91d4u: goto label_1d91d4;
        case 0x1d9224u: goto label_1d9224;
        case 0x1d9248u: goto label_1d9248;
        case 0x1d925cu: goto label_1d925c;
        case 0x1d92a8u: goto label_1d92a8;
        case 0x1d92c4u: goto label_1d92c4;
        case 0x1d92f0u: goto label_1d92f0;
        case 0x1d9334u: goto label_1d9334;
        case 0x1d9358u: goto label_1d9358;
        case 0x1d937cu: goto label_1d937c;
        case 0x1d93a0u: goto label_1d93a0;
        case 0x1d93ecu: goto label_1d93ec;
        case 0x1d940cu: goto label_1d940c;
        case 0x1d945cu: goto label_1d945c;
        case 0x1d9484u: goto label_1d9484;
        case 0x1d949cu: goto label_1d949c;
        case 0x1d94e8u: goto label_1d94e8;
        case 0x1d9504u: goto label_1d9504;
        case 0x1d9528u: goto label_1d9528;
        case 0x1d956cu: goto label_1d956c;
        case 0x1d9590u: goto label_1d9590;
        case 0x1d95acu: goto label_1d95ac;
        case 0x1d95d4u: goto label_1d95d4;
        case 0x1d961cu: goto label_1d961c;
        case 0x1d9640u: goto label_1d9640;
        case 0x1d9748u: goto label_1d9748;
        case 0x1d9764u: goto label_1d9764;
        case 0x1d979cu: goto label_1d979c;
        case 0x1d97b4u: goto label_1d97b4;
        case 0x1d9808u: goto label_1d9808;
        case 0x1d983cu: goto label_1d983c;
        case 0x1d9854u: goto label_1d9854;
        case 0x1d986cu: goto label_1d986c;
        case 0x1d9880u: goto label_1d9880;
        case 0x1d9894u: goto label_1d9894;
        case 0x1d98c4u: goto label_1d98c4;
        case 0x1d98f4u: goto label_1d98f4;
        case 0x1d9908u: goto label_1d9908;
        case 0x1d9924u: goto label_1d9924;
        case 0x1d993cu: goto label_1d993c;
        case 0x1d996cu: goto label_1d996c;
        case 0x1d9984u: goto label_1d9984;
        case 0x1d99a8u: goto label_1d99a8;
        case 0x1d99bcu: goto label_1d99bc;
        case 0x1d99dcu: goto label_1d99dc;
        case 0x1d99f4u: goto label_1d99f4;
        case 0x1d9a1cu: goto label_1d9a1c;
        case 0x1d9a30u: goto label_1d9a30;
        case 0x1d9a5cu: goto label_1d9a5c;
        case 0x1d9a70u: goto label_1d9a70;
        case 0x1d9a90u: goto label_1d9a90;
        case 0x1d9b00u: goto label_1d9b00;
        case 0x1d9b40u: goto label_1d9b40;
        case 0x1d9b9cu: goto label_1d9b9c;
        case 0x1d9bbcu: goto label_1d9bbc;
        case 0x1d9bd4u: goto label_1d9bd4;
        case 0x1d9bf8u: goto label_1d9bf8;
        case 0x1d9c20u: goto label_1d9c20;
        case 0x1d9c5cu: goto label_1d9c5c;
        case 0x1d9c70u: goto label_1d9c70;
        case 0x1d9c98u: goto label_1d9c98;
        case 0x1d9cc0u: goto label_1d9cc0;
        case 0x1d9cecu: goto label_1d9cec;
        case 0x1d9d04u: goto label_1d9d04;
        case 0x1d9d30u: goto label_1d9d30;
        case 0x1d9d5cu: goto label_1d9d5c;
        case 0x1d9d84u: goto label_1d9d84;
        case 0x1d9d94u: goto label_1d9d94;
        case 0x1d9dc0u: goto label_1d9dc0;
        case 0x1d9de8u: goto label_1d9de8;
        case 0x1d9e20u: goto label_1d9e20;
        case 0x1d9e38u: goto label_1d9e38;
        case 0x1d9e5cu: goto label_1d9e5c;
        case 0x1d9e84u: goto label_1d9e84;
        case 0x1d9eb4u: goto label_1d9eb4;
        case 0x1d9ec4u: goto label_1d9ec4;
        case 0x1d9ee8u: goto label_1d9ee8;
        case 0x1d9f7cu: goto label_1d9f7c;
        case 0x1d9f90u: goto label_1d9f90;
        case 0x1da018u: goto label_1da018;
        case 0x1da034u: goto label_1da034;
        case 0x1da048u: goto label_1da048;
        case 0x1da06cu: goto label_1da06c;
        case 0x1da430u: goto label_1da430;
        case 0x1da460u: goto label_1da460;
        case 0x1da49cu: goto label_1da49c;
        case 0x1da4b0u: goto label_1da4b0;
        case 0x1da4ccu: goto label_1da4cc;
        case 0x1da4e4u: goto label_1da4e4;
        case 0x1da504u: goto label_1da504;
        case 0x1da564u: goto label_1da564;
        case 0x1da580u: goto label_1da580;
        case 0x1da590u: goto label_1da590;
        case 0x1da5a8u: goto label_1da5a8;
        case 0x1da5c0u: goto label_1da5c0;
        case 0x1da5e0u: goto label_1da5e0;
        case 0x1da5fcu: goto label_1da5fc;
        case 0x1da628u: goto label_1da628;
        case 0x1da650u: goto label_1da650;
        case 0x1da668u: goto label_1da668;
        case 0x1da680u: goto label_1da680;
        case 0x1da69cu: goto label_1da69c;
        case 0x1da6b4u: goto label_1da6b4;
        case 0x1da6d0u: goto label_1da6d0;
        case 0x1da704u: goto label_1da704;
        case 0x1da71cu: goto label_1da71c;
        case 0x1da738u: goto label_1da738;
        case 0x1da750u: goto label_1da750;
        case 0x1da778u: goto label_1da778;
        case 0x1da7a8u: goto label_1da7a8;
        case 0x1da7d4u: goto label_1da7d4;
        case 0x1da814u: goto label_1da814;
        case 0x1da828u: goto label_1da828;
        case 0x1da840u: goto label_1da840;
        case 0x1da858u: goto label_1da858;
        case 0x1da878u: goto label_1da878;
        case 0x1da8d8u: goto label_1da8d8;
        case 0x1da8f4u: goto label_1da8f4;
        case 0x1da908u: goto label_1da908;
        case 0x1da924u: goto label_1da924;
        case 0x1da93cu: goto label_1da93c;
        case 0x1da958u: goto label_1da958;
        case 0x1da970u: goto label_1da970;
        case 0x1da99cu: goto label_1da99c;
        case 0x1da9c8u: goto label_1da9c8;
        case 0x1da9d8u: goto label_1da9d8;
        case 0x1da9f0u: goto label_1da9f0;
        case 0x1daa04u: goto label_1daa04;
        case 0x1daa18u: goto label_1daa18;
        case 0x1daa30u: goto label_1daa30;
        case 0x1daa60u: goto label_1daa60;
        case 0x1daa74u: goto label_1daa74;
        case 0x1daa90u: goto label_1daa90;
        case 0x1daaa8u: goto label_1daaa8;
        case 0x1daac8u: goto label_1daac8;
        case 0x1dab0cu: goto label_1dab0c;
        case 0x1dab20u: goto label_1dab20;
        case 0x1dab38u: goto label_1dab38;
        case 0x1dab48u: goto label_1dab48;
        case 0x1dab84u: goto label_1dab84;
        case 0x1dab9cu: goto label_1dab9c;
        case 0x1dabb4u: goto label_1dabb4;
        case 0x1dabccu: goto label_1dabcc;
        case 0x1dabe4u: goto label_1dabe4;
        case 0x1dabfcu: goto label_1dabfc;
        case 0x1dac18u: goto label_1dac18;
        case 0x1dac34u: goto label_1dac34;
        case 0x1dac50u: goto label_1dac50;
        case 0x1dac74u: goto label_1dac74;
        case 0x1daca0u: goto label_1daca0;
        case 0x1dacb0u: goto label_1dacb0;
        case 0x1dacccu: goto label_1daccc;
        case 0x1dacecu: goto label_1dacec;
        case 0x1dacfcu: goto label_1dacfc;
        case 0x1dad18u: goto label_1dad18;
        case 0x1dad30u: goto label_1dad30;
        case 0x1dad44u: goto label_1dad44;
        case 0x1dad60u: goto label_1dad60;
        case 0x1dad84u: goto label_1dad84;
        case 0x1dad98u: goto label_1dad98;
        case 0x1dadb0u: goto label_1dadb0;
        case 0x1dade0u: goto label_1dade0;
        case 0x1dae00u: goto label_1dae00;
        case 0x1dae1cu: goto label_1dae1c;
        case 0x1dae30u: goto label_1dae30;
        case 0x1dae48u: goto label_1dae48;
        case 0x1dae60u: goto label_1dae60;
        case 0x1daea4u: goto label_1daea4;
        case 0x1daec0u: goto label_1daec0;
        case 0x1daee0u: goto label_1daee0;
        case 0x1daef8u: goto label_1daef8;
        case 0x1daf14u: goto label_1daf14;
        case 0x1daf30u: goto label_1daf30;
        case 0x1daf50u: goto label_1daf50;
        case 0x1daf6cu: goto label_1daf6c;
        case 0x1daf94u: goto label_1daf94;
        case 0x1dafbcu: goto label_1dafbc;
        case 0x1dafecu: goto label_1dafec;
        case 0x1db004u: goto label_1db004;
        case 0x1db020u: goto label_1db020;
        case 0x1db038u: goto label_1db038;
        case 0x1db050u: goto label_1db050;
        case 0x1db068u: goto label_1db068;
        case 0x1db07cu: goto label_1db07c;
        case 0x1db094u: goto label_1db094;
        case 0x1db0b0u: goto label_1db0b0;
        case 0x1db0d4u: goto label_1db0d4;
        case 0x1db0e8u: goto label_1db0e8;
        case 0x1db104u: goto label_1db104;
        case 0x1db12cu: goto label_1db12c;
        case 0x1db144u: goto label_1db144;
        default: break;
    }

    ctx->pc = 0x1d9090u;

    // 0x1d9090: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1d9090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1d9094: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d9094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1d9098: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1d9098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1d909c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1d909cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1d90a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d90a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d90a4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d90a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d90a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d90a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1d90ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d90acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d90b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d90b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d90b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d90b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d90b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d90b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d90bc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d90bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d90c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d90c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d90c4: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x1d90c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
    // 0x1d90c8: 0xe7ac0190  swc1        $f12, 0x190($sp)
    ctx->pc = 0x1d90c8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1d90cc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1d90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1d90d0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1d90d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d90d4: 0xe7a1017c  swc1        $f1, 0x17C($sp)
    ctx->pc = 0x1d90d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x1d90d8: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d90d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d90dc: 0x8c970040  lw          $s7, 0x40($a0)
    ctx->pc = 0x1d90dcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1d90e0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d90e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90e4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D90E4u;
    SET_GPR_U32(ctx, 31, 0x1D90ECu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D90E4u, 0x1D90ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D90ECu;
label_1d90ec:
    // 0x1d90ec: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d90ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d90f0: 0x8ca50048  lw          $a1, 0x48($a1)
    ctx->pc = 0x1d90f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1d90f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d90f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90f8: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x1d90f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1d90fc: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1D90FCu;
    SET_GPR_U32(ctx, 31, 0x1D9104u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1D90FCu, 0x1D9104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9104u;
label_1d9104:
    // 0x1d9104: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d9104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d9108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d910c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x1d910cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9110: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d9110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d9114: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1d9114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1d9118: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1d9118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x1d911c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1d911cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9120: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x1d9120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9124: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d9124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d9128: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1d9128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1d912c: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d912cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9130: 0x8ee60040  lw          $a2, 0x40($s7)
    ctx->pc = 0x1d9130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x1d9134: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d9134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9138: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9138u;
    SET_GPR_U32(ctx, 31, 0x1D9140u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9138u, 0x1D9140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9140u;
label_1d9140:
    // 0x1d9140: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9144: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x1d9144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1d9148: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d914c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1d914cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d9150: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1D9150u;
    SET_GPR_U32(ctx, 31, 0x1D9158u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1D9150u, 0x1D9158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9158u;
label_1d9158:
    // 0x1d9158: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1d9158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1d915c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d915cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9160: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x1d9160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9164: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d9164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d9168: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1d9168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1d916c: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1d916cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1d9170: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d9170u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9174: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x1d9174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9178: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d9178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d917c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1d917cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1d9180: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d9180u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9184: 0x8ee70040  lw          $a3, 0x40($s7)
    ctx->pc = 0x1d9184u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x1d9188: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1d9188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d918c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D918Cu;
    SET_GPR_U32(ctx, 31, 0x1D9194u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D918Cu, 0x1D9194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9194u;
label_1d9194:
    // 0x1d9194: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9198: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x1d9198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1d919c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d919cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91a0: 0xc08c794  jal         func_231E50
    ctx->pc = 0x1D91A0u;
    SET_GPR_U32(ctx, 31, 0x1D91A8u);
    ctx->pc = 0x231E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E50u, 0x1D91A0u, 0x1D91A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91A8u;
label_1d91a8:
    // 0x1d91a8: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x1d91a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x1d91ac: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1d91acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d91b0: 0x8cc70040  lw          $a3, 0x40($a2)
    ctx->pc = 0x1d91b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1d91b4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1d91b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91b8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D91B8u;
    SET_GPR_U32(ctx, 31, 0x1D91C0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D91B8u, 0x1D91C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91C0u;
label_1d91c0:
    // 0x1d91c0: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d91c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d91c4: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x1d91c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1d91c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d91c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91cc: 0xc08c794  jal         func_231E50
    ctx->pc = 0x1D91CCu;
    SET_GPR_U32(ctx, 31, 0x1D91D4u);
    ctx->pc = 0x231E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E50u, 0x1D91CCu, 0x1D91D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91D4u;
label_1d91d4:
    // 0x1d91d4: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x1d91d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x1d91d8: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d91d8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d91dc: 0x8ee2002c  lw          $v0, 0x2C($s7)
    ctx->pc = 0x1d91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 44)));
    // 0x1d91e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d91e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d91e4: 0x1044005f  beq         $v0, $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1D91E4u;
    {
        const bool branch_taken_0x1d91e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d91e4) {
            ctx->pc = 0x1D9364u;
            goto label_1d9364;
        }
    }
    ctx->pc = 0x1D91ECu;
    // 0x1d91ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d91ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d91f0: 0x1045002f  beq         $v0, $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1D91F0u;
    {
        const bool branch_taken_0x1d91f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d91f0) {
            ctx->pc = 0x1D92B0u;
            goto label_1d92b0;
        }
    }
    ctx->pc = 0x1D91F8u;
    // 0x1d91f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d91f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d91fc: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D91FCu;
    {
        const bool branch_taken_0x1d91fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1d91fc) {
            ctx->pc = 0x1D9214u;
            goto label_1d9214;
        }
    }
    ctx->pc = 0x1D9204u;
    // 0x1d9204: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9204u;
    {
        const bool branch_taken_0x1d9204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9204) {
            ctx->pc = 0x1D9214u;
            goto label_1d9214;
        }
    }
    ctx->pc = 0x1D920Cu;
    // 0x1d920c: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1D920Cu;
    {
        const bool branch_taken_0x1d920c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d920c) {
            ctx->pc = 0x1D940Cu;
            goto label_1d940c;
        }
    }
    ctx->pc = 0x1D9214u;
label_1d9214:
    // 0x1d9214: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d9214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9218: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x1d9218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1d921c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D921Cu;
    SET_GPR_U32(ctx, 31, 0x1D9224u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D921Cu, 0x1D9224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9224u;
label_1d9224:
    // 0x1d9224: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9228: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x1d9228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1d922c: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x1d922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9230: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1d9230u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1d9234: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9238: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x1d9238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1d923c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d923cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9240: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D9240u;
    SET_GPR_U32(ctx, 31, 0x1D9248u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D9240u, 0x1D9248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9248u;
label_1d9248:
    // 0x1d9248: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d9248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d924c: 0x8cf70040  lw          $s7, 0x40($a3)
    ctx->pc = 0x1d924cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1d9250: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d9250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9254: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9254u;
    SET_GPR_U32(ctx, 31, 0x1D925Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9254u, 0x1D925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D925Cu;
label_1d925c:
    // 0x1d925c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d925cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9260: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x1d9260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1d9264: 0x3c1442c8  lui         $s4, 0x42C8
    ctx->pc = 0x1d9264u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)17096 << 16));
    // 0x1d9268: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1d9268u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d926c: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x1d926cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9270: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1d9270u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d9274: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9278: 0xc4620084  lwc1        $f2, 0x84($v1)
    ctx->pc = 0x1d9278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d927c: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x1d927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9280: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d9280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9284: 0x0  nop
    ctx->pc = 0x1d9284u;
    // NOP
    // 0x1d9288: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x1d9288u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x1d928c: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x1d928cu;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1d9290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9294: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x1d9294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1d9298: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1d9298u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d929c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1d929cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92a0: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D92A0u;
    SET_GPR_U32(ctx, 31, 0x1D92A8u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D92A0u, 0x1D92A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92A8u;
label_1d92a8:
    // 0x1d92a8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1D92A8u;
    {
        const bool branch_taken_0x1d92a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d92a8) {
            ctx->pc = 0x1D940Cu;
            goto label_1d940c;
        }
    }
    ctx->pc = 0x1D92B0u;
label_1d92b0:
    // 0x1d92b0: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d92b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d92b4: 0x8ce60040  lw          $a2, 0x40($a3)
    ctx->pc = 0x1d92b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1d92b8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d92b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92bc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D92BCu;
    SET_GPR_U32(ctx, 31, 0x1D92C4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D92BCu, 0x1D92C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92C4u;
label_1d92c4:
    // 0x1d92c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d92c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92c8: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d92c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d92cc: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x1d92ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1d92d0: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x1d92d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d92d4: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1d92d4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1d92d8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1d92d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92dc: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x1d92dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1d92e0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1d92e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d92e4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1d92e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92e8: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D92E8u;
    SET_GPR_U32(ctx, 31, 0x1D92F0u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D92E8u, 0x1D92F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92F0u;
label_1d92f0:
    // 0x1d92f0: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d92f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d92f4: 0x90e60018  lbu         $a2, 0x18($a3)
    ctx->pc = 0x1d92f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1d92f8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D92F8u;
    {
        const bool branch_taken_0x1d92f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d92f8) {
            ctx->pc = 0x1D9314u;
            goto label_1d9314;
        }
    }
    ctx->pc = 0x1D9300u;
    // 0x1d9300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d9300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9304: 0x0  nop
    ctx->pc = 0x1d9304u;
    // NOP
    // 0x1d9308: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1d9308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1d930c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D930Cu;
    {
        const bool branch_taken_0x1d930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d930c) {
            ctx->pc = 0x1D9324u;
            goto label_1d9324;
        }
    }
    ctx->pc = 0x1D9314u;
label_1d9314:
    // 0x1d9314: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d9314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1d9318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d931c: 0x0  nop
    ctx->pc = 0x1d931cu;
    // NOP
    // 0x1d9320: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1d9320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1d9324:
    // 0x1d9324: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9328: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x1d9328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1d932c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D932Cu;
    SET_GPR_U32(ctx, 31, 0x1D9334u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D932Cu, 0x1D9334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9334u;
label_1d9334:
    // 0x1d9334: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d9334u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9338: 0x8ee50048  lw          $a1, 0x48($s7)
    ctx->pc = 0x1d9338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
    // 0x1d933c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9340: 0x27be0108  addiu       $fp, $sp, 0x108
    ctx->pc = 0x1d9340u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1d9344: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1d9344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9348: 0xc7ac0128  lwc1        $f12, 0x128($sp)
    ctx->pc = 0x1d9348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d934c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d934cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9350: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D9350u;
    SET_GPR_U32(ctx, 31, 0x1D9358u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D9350u, 0x1D9358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9358u;
label_1d9358:
    // 0x1d9358: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1d9358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1d935c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1D935Cu;
    {
        const bool branch_taken_0x1d935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d935c) {
            ctx->pc = 0x1D940Cu;
            goto label_1d940c;
        }
    }
    ctx->pc = 0x1D9364u;
label_1d9364:
    // 0x1d9364: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9368: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1d9368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d936c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1d936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1d9370: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1d9370u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d9374: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9374u;
    SET_GPR_U32(ctx, 31, 0x1D937Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9374u, 0x1D937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D937Cu;
label_1d937c:
    // 0x1d937c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d937cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9380: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x1d9380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1d9384: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x1d9384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9388: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1d9388u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1d938c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d938cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9390: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x1d9390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1d9394: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9398: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D9398u;
    SET_GPR_U32(ctx, 31, 0x1D93A0u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D9398u, 0x1D93A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93A0u;
label_1d93a0:
    // 0x1d93a0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d93a4: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x1d93a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1d93a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D93A8u;
    {
        const bool branch_taken_0x1d93a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d93a8) {
            ctx->pc = 0x1D93C8u;
            goto label_1d93c8;
        }
    }
    ctx->pc = 0x1D93B0u;
    // 0x1d93b0: 0x3c05c2b4  lui         $a1, 0xC2B4
    ctx->pc = 0x1d93b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49844 << 16));
    // 0x1d93b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d93b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d93b8: 0x0  nop
    ctx->pc = 0x1d93b8u;
    // NOP
    // 0x1d93bc: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1d93bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x1d93c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D93C0u;
    {
        const bool branch_taken_0x1d93c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d93c0) {
            ctx->pc = 0x1D93D8u;
            goto label_1d93d8;
        }
    }
    ctx->pc = 0x1D93C8u;
label_1d93c8:
    // 0x1d93c8: 0x3c0742b4  lui         $a3, 0x42B4
    ctx->pc = 0x1d93c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17076 << 16));
    // 0x1d93cc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1d93ccu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d93d0: 0x0  nop
    ctx->pc = 0x1d93d0u;
    // NOP
    // 0x1d93d4: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1d93d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1d93d8:
    // 0x1d93d8: 0x8fbe0180  lw          $fp, 0x180($sp)
    ctx->pc = 0x1d93d8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d93dc: 0x8fd70040  lw          $s7, 0x40($fp)
    ctx->pc = 0x1d93dcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x1d93e0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d93e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93e4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D93E4u;
    SET_GPR_U32(ctx, 31, 0x1D93ECu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D93E4u, 0x1D93ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93ECu;
label_1d93ec:
    // 0x1d93ec: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d93ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d93f0: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x1d93f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1d93f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d93f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93f8: 0x27a60108  addiu       $a2, $sp, 0x108
    ctx->pc = 0x1d93f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1d93fc: 0xc7ac0124  lwc1        $f12, 0x124($sp)
    ctx->pc = 0x1d93fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9400: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9404: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D9404u;
    SET_GPR_U32(ctx, 31, 0x1D940Cu);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D9404u, 0x1D940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D940Cu;
label_1d940c:
    // 0x1d940c: 0x8fbe0180  lw          $fp, 0x180($sp)
    ctx->pc = 0x1d940cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9410: 0x8fd70030  lw          $s7, 0x30($fp)
    ctx->pc = 0x1d9410u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1d9414: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d9414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d9418: 0x12e4005f  beq         $s7, $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1D9418u;
    {
        const bool branch_taken_0x1d9418 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d9418) {
            ctx->pc = 0x1D9598u;
            goto label_1d9598;
        }
    }
    ctx->pc = 0x1D9420u;
    // 0x1d9420: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9424: 0x12e20032  beq         $s7, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D9424u;
    {
        const bool branch_taken_0x1d9424 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9424) {
            ctx->pc = 0x1D94F0u;
            goto label_1d94f0;
        }
    }
    ctx->pc = 0x1D942Cu;
    // 0x1d942c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d942cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9430: 0x12e50005  beq         $s7, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9430u;
    {
        const bool branch_taken_0x1d9430 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d9430) {
            ctx->pc = 0x1D9448u;
            goto label_1d9448;
        }
    }
    ctx->pc = 0x1D9438u;
    // 0x1d9438: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9438u;
    {
        const bool branch_taken_0x1d9438 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9438) {
            ctx->pc = 0x1D9448u;
            goto label_1d9448;
        }
    }
    ctx->pc = 0x1D9440u;
    // 0x1d9440: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1D9440u;
    {
        const bool branch_taken_0x1d9440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9440) {
            ctx->pc = 0x1D9640u;
            goto label_1d9640;
        }
    }
    ctx->pc = 0x1D9448u;
label_1d9448:
    // 0x1d9448: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1d9448u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d944c: 0x8cc70040  lw          $a3, 0x40($a2)
    ctx->pc = 0x1d944cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1d9450: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1d9450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9454: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9454u;
    SET_GPR_U32(ctx, 31, 0x1D945Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9454u, 0x1D945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D945Cu;
label_1d945c:
    // 0x1d945c: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d945cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9460: 0x8cf70058  lw          $s7, 0x58($a3)
    ctx->pc = 0x1d9460u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x1d9464: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x1d9464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9468: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1d9468u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1d946c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d946cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9470: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d9470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9474: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1d9474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d9478: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d947c: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D947Cu;
    SET_GPR_U32(ctx, 31, 0x1D9484u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D947Cu, 0x1D9484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9484u;
label_1d9484:
    // 0x1d9484: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1d9484u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9488: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d9488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d948c: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x1d948cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1d9490: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d9490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9494: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9494u;
    SET_GPR_U32(ctx, 31, 0x1D949Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9494u, 0x1D949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D949Cu;
label_1d949c:
    // 0x1d949c: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d949cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d94a0: 0x8ce60058  lw          $a2, 0x58($a3)
    ctx->pc = 0x1d94a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x1d94a4: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x1d94a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x1d94a8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1d94a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d94ac: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x1d94acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d94b0: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1d94b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d94b4: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d94b4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d94b8: 0xc6e20088  lwc1        $f2, 0x88($s7)
    ctx->pc = 0x1d94b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d94bc: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x1d94bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d94c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d94c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d94c4: 0x0  nop
    ctx->pc = 0x1d94c4u;
    // NOP
    // 0x1d94c8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d94c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1d94cc: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x1d94ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1d94d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d94d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d94d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94d8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1d94d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d94dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d94dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94e0: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D94E0u;
    SET_GPR_U32(ctx, 31, 0x1D94E8u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D94E0u, 0x1D94E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94E8u;
label_1d94e8:
    // 0x1d94e8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1D94E8u;
    {
        const bool branch_taken_0x1d94e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d94e8) {
            ctx->pc = 0x1D9640u;
            goto label_1d9640;
        }
    }
    ctx->pc = 0x1D94F0u;
label_1d94f0:
    // 0x1d94f0: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d94f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d94f4: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x1d94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1d94f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d94f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94fc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D94FCu;
    SET_GPR_U32(ctx, 31, 0x1D9504u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D94FCu, 0x1D9504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9504u;
label_1d9504:
    // 0x1d9504: 0x8fb00180  lw          $s0, 0x180($sp)
    ctx->pc = 0x1d9504u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9508: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1d9508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1d950c: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x1d950cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9510: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1d9510u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1d9514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9518: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1d9518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d951c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d951cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9520: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D9520u;
    SET_GPR_U32(ctx, 31, 0x1D9528u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D9520u, 0x1D9528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9528u;
label_1d9528:
    // 0x1d9528: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d952c: 0x90430019  lbu         $v1, 0x19($v0)
    ctx->pc = 0x1d952cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1d9530: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9530u;
    {
        const bool branch_taken_0x1d9530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9530) {
            ctx->pc = 0x1D954Cu;
            goto label_1d954c;
        }
    }
    ctx->pc = 0x1D9538u;
    // 0x1d9538: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d953c: 0x0  nop
    ctx->pc = 0x1d953cu;
    // NOP
    // 0x1d9540: 0xe7ac0120  swc1        $f12, 0x120($sp)
    ctx->pc = 0x1d9540u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1d9544: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9544u;
    {
        const bool branch_taken_0x1d9544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9544) {
            ctx->pc = 0x1D955Cu;
            goto label_1d955c;
        }
    }
    ctx->pc = 0x1D954Cu;
label_1d954c:
    // 0x1d954c: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x1d954cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
    // 0x1d9550: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x1d9550u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d9554: 0x0  nop
    ctx->pc = 0x1d9554u;
    // NOP
    // 0x1d9558: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x1d9558u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1d955c:
    // 0x1d955c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d955cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9560: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x1d9560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1d9564: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9564u;
    SET_GPR_U32(ctx, 31, 0x1D956Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9564u, 0x1D956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D956Cu;
label_1d956c:
    // 0x1d956c: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d956cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9570: 0x8ce50058  lw          $a1, 0x58($a3)
    ctx->pc = 0x1d9570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x1d9574: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9578: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1d9578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d957c: 0xc7ac0120  lwc1        $f12, 0x120($sp)
    ctx->pc = 0x1d957cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9580: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1d9580u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9584: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1d9584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9588: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D9588u;
    SET_GPR_U32(ctx, 31, 0x1D9590u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D9588u, 0x1D9590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9590u;
label_1d9590:
    // 0x1d9590: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1D9590u;
    {
        const bool branch_taken_0x1d9590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9590) {
            ctx->pc = 0x1D9640u;
            goto label_1d9640;
        }
    }
    ctx->pc = 0x1D9598u;
label_1d9598:
    // 0x1d9598: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d959c: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x1d959cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1d95a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d95a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95a4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D95A4u;
    SET_GPR_U32(ctx, 31, 0x1D95ACu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D95A4u, 0x1D95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95ACu;
label_1d95ac:
    // 0x1d95ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d95acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95b0: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d95b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d95b4: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x1d95b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1d95b8: 0xc7b40174  lwc1        $f20, 0x174($sp)
    ctx->pc = 0x1d95b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d95bc: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x1d95bcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x1d95c0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d95c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95c4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1d95c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d95c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d95c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d95cc: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D95CCu;
    SET_GPR_U32(ctx, 31, 0x1D95D4u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D95CCu, 0x1D95D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95D4u;
label_1d95d4:
    // 0x1d95d4: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d95d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d95d8: 0x90650019  lbu         $a1, 0x19($v1)
    ctx->pc = 0x1d95d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
    // 0x1d95dc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D95DCu;
    {
        const bool branch_taken_0x1d95dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d95dc) {
            ctx->pc = 0x1D95FCu;
            goto label_1d95fc;
        }
    }
    ctx->pc = 0x1D95E4u;
    // 0x1d95e4: 0x3c07c2b4  lui         $a3, 0xC2B4
    ctx->pc = 0x1d95e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49844 << 16));
    // 0x1d95e8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1d95e8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d95ec: 0x0  nop
    ctx->pc = 0x1d95ecu;
    // NOP
    // 0x1d95f0: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1d95f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1d95f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D95F4u;
    {
        const bool branch_taken_0x1d95f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d95f4) {
            ctx->pc = 0x1D960Cu;
            goto label_1d960c;
        }
    }
    ctx->pc = 0x1D95FCu;
label_1d95fc:
    // 0x1d95fc: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1d95fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1d9600: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1d9600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d9604: 0x0  nop
    ctx->pc = 0x1d9604u;
    // NOP
    // 0x1d9608: 0xe7b4011c  swc1        $f20, 0x11C($sp)
    ctx->pc = 0x1d9608u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1d960c:
    // 0x1d960c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d960cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9610: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x1d9610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1d9614: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9614u;
    SET_GPR_U32(ctx, 31, 0x1D961Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9614u, 0x1D961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D961Cu;
label_1d961c:
    // 0x1d961c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d961cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9620: 0x8c970058  lw          $s7, 0x58($a0)
    ctx->pc = 0x1d9620u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1d9624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9628: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d9628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d962c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1d962cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d9630: 0xc7ac011c  lwc1        $f12, 0x11C($sp)
    ctx->pc = 0x1d9630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9634: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9638: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D9638u;
    SET_GPR_U32(ctx, 31, 0x1D9640u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D9638u, 0x1D9640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9640u;
label_1d9640:
    // 0x1d9640: 0x8fbe0180  lw          $fp, 0x180($sp)
    ctx->pc = 0x1d9640u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9644: 0xc7c0001c  lwc1        $f0, 0x1C($fp)
    ctx->pc = 0x1d9644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9648: 0xc7ad0190  lwc1        $f13, 0x190($sp)
    ctx->pc = 0x1d9648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d964c: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x1d964cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9650: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1D9650u;
    {
        const bool branch_taken_0x1d9650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9650) {
            ctx->pc = 0x1D96BCu;
            goto label_1d96bc;
        }
    }
    ctx->pc = 0x1D9658u;
    // 0x1d9658: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d965c: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x1d965cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9660: 0xc7818288  lwc1        $f1, -0x7D78($gp)
    ctx->pc = 0x1d9660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9664: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d9664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9668: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1d9668u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d966c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d966cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9670: 0x0  nop
    ctx->pc = 0x1d9670u;
    // NOP
    // 0x1d9674: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x1d9674u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[13]));
    // 0x1d9678: 0x460c081c  madd.s      $f0, $f1, $f12
    ctx->pc = 0x1d9678u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[12]));
    // 0x1d967c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d967cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9680: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x1d9680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9684: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d9684u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d9688: 0xe4810020  swc1        $f1, 0x20($a0)
    ctx->pc = 0x1d9688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1d968c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9690: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x1d9690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9694: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x1d9694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9698: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d9698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d969c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d969cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d96a0: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x1d96a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1d96a4: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d96a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d96a8: 0x90a70018  lbu         $a3, 0x18($a1)
    ctx->pc = 0x1d96a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1d96ac: 0x7102b  sltu        $v0, $zero, $a3
    ctx->pc = 0x1d96acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1d96b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d96b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d96b4: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d96b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d96b8: 0xa0620018  sb          $v0, 0x18($v1)
    ctx->pc = 0x1d96b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 2));
label_1d96bc:
    // 0x1d96bc: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d96bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d96c0: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x1d96c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d96c4: 0xc7ac0190  lwc1        $f12, 0x190($sp)
    ctx->pc = 0x1d96c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d96c8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1d96c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d96cc: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1D96CCu;
    {
        const bool branch_taken_0x1d96cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d96cc) {
            ctx->pc = 0x1D9738u;
            goto label_1d9738;
        }
    }
    ctx->pc = 0x1D96D4u;
    // 0x1d96d4: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d96d4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d96d8: 0xc6f5000c  lwc1        $f21, 0xC($s7)
    ctx->pc = 0x1d96d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d96dc: 0xc78c8288  lwc1        $f12, -0x7D78($gp)
    ctx->pc = 0x1d96dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d96e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d96e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d96e4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1d96e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d96e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d96e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d96ec: 0x0  nop
    ctx->pc = 0x1d96ecu;
    // NOP
    // 0x1d96f0: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x1d96f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[20]));
    // 0x1d96f4: 0x4615605c  madd.s      $f1, $f12, $f21
    ctx->pc = 0x1d96f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[21]));
    // 0x1d96f8: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d96f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d96fc: 0xc4940028  lwc1        $f20, 0x28($a0)
    ctx->pc = 0x1d96fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d9700: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x1d9700u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x1d9704: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x1d9704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1d9708: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d970c: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1d970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9710: 0xc7ad0190  lwc1        $f13, 0x190($sp)
    ctx->pc = 0x1d9710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9714: 0x46006b00  add.s       $f12, $f13, $f0
    ctx->pc = 0x1d9714u;
    ctx->f[12] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1d9718: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d9718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d971c: 0xe4ac0024  swc1        $f12, 0x24($a1)
    ctx->pc = 0x1d971cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x1d9720: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9724: 0x90440019  lbu         $a0, 0x19($v0)
    ctx->pc = 0x1d9724u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1d9728: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x1d9728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d972c: 0x38570001  xori        $s7, $v0, 0x1
    ctx->pc = 0x1d972cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d9730: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9734: 0xa0570019  sb          $s7, 0x19($v0)
    ctx->pc = 0x1d9734u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25), (uint8_t)GPR_U32(ctx, 23));
label_1d9738:
    // 0x1d9738: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d973c: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1d973cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1d9740: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9740u;
    SET_GPR_U32(ctx, 31, 0x1D9748u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9740u, 0x1D9748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9748u;
label_1d9748:
    // 0x1d9748: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d974c: 0x8c650044  lw          $a1, 0x44($v1)
    ctx->pc = 0x1d974cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1d9750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9754: 0x27a700f8  addiu       $a3, $sp, 0xF8
    ctx->pc = 0x1d9754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1d9758: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1d9758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d975c: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1D975Cu;
    SET_GPR_U32(ctx, 31, 0x1D9764u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1D975Cu, 0x1D9764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9764u;
label_1d9764:
    // 0x1d9764: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1d9764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1d9768: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1d9768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d976c: 0xc7ad00f8  lwc1        $f13, 0xF8($sp)
    ctx->pc = 0x1d976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9770: 0x460c6842  mul.s       $f1, $f13, $f12
    ctx->pc = 0x1d9770u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[12]);
    // 0x1d9774: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x1d9774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1d9778: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1d9778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1d977c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d977cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9780: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x1d9780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9784: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d9784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d9788: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1d9788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1d978c: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d978cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9790: 0x8ee40040  lw          $a0, 0x40($s7)
    ctx->pc = 0x1d9790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x1d9794: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9794u;
    SET_GPR_U32(ctx, 31, 0x1D979Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9794u, 0x1D979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D979Cu;
label_1d979c:
    // 0x1d979c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d979cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d97a0: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x1d97a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1d97a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d97a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d97a8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1d97a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d97ac: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1D97ACu;
    SET_GPR_U32(ctx, 31, 0x1D97B4u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1D97ACu, 0x1D97B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97B4u;
label_1d97b4:
    // 0x1d97b4: 0x3c103f00  lui         $s0, 0x3F00
    ctx->pc = 0x1d97b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16128 << 16));
    // 0x1d97b8: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x1d97b8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d97bc: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1d97bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d97c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d97c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d97c4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1d97c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1d97c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d97cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d97ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d97d0: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x1d97d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d97d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d97d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d97d8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1d97d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1d97dc: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1d97dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d97e0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d97e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d97e4: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d97e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d97e8: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d97e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d97ec: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d97ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d97f0: 0xc4cc0064  lwc1        $f12, 0x64($a2)
    ctx->pc = 0x1d97f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d97f4: 0xc44d0070  lwc1        $f13, 0x70($v0)
    ctx->pc = 0x1d97f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d97f8: 0xc4ae0068  lwc1        $f14, 0x68($a1)
    ctx->pc = 0x1d97f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d97fc: 0xc46f006c  lwc1        $f15, 0x6C($v1)
    ctx->pc = 0x1d97fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d9800: 0xc076d4c  jal         func_1DB530
    ctx->pc = 0x1D9800u;
    SET_GPR_U32(ctx, 31, 0x1D9808u);
    ctx->pc = 0x1DB530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB530u, 0x1D9800u, 0x1D9808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9808u;
label_1d9808:
    // 0x1d9808: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d9808u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d980c: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x1d980cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1d9810: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d9810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9814: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9818: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d9818u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d981c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9820: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9824: 0xc4ac0074  lwc1        $f12, 0x74($a1)
    ctx->pc = 0x1d9824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9828: 0xc46d0080  lwc1        $f13, 0x80($v1)
    ctx->pc = 0x1d9828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d982c: 0xc6ee0078  lwc1        $f14, 0x78($s7)
    ctx->pc = 0x1d982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d9830: 0xc44f007c  lwc1        $f15, 0x7C($v0)
    ctx->pc = 0x1d9830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d9834: 0xc076d4c  jal         func_1DB530
    ctx->pc = 0x1D9834u;
    SET_GPR_U32(ctx, 31, 0x1D983Cu);
    ctx->pc = 0x1DB530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB530u, 0x1D9834u, 0x1D983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D983Cu;
label_1d983c:
    // 0x1d983c: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x1d983cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x1d9840: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9844: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x1d9844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d9848: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d9848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d984c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D984Cu;
    SET_GPR_U32(ctx, 31, 0x1D9854u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D984Cu, 0x1D9854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9854u;
label_1d9854:
    // 0x1d9854: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9858: 0x8c970044  lw          $s7, 0x44($a0)
    ctx->pc = 0x1d9858u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1d985c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d985cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9860: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d9860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9864: 0xc08c794  jal         func_231E50
    ctx->pc = 0x1D9864u;
    SET_GPR_U32(ctx, 31, 0x1D986Cu);
    ctx->pc = 0x231E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E50u, 0x1D9864u, 0x1D986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D986Cu;
label_1d986c:
    // 0x1d986c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x1d986cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1d9870: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9874: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1d9874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d9878: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9878u;
    SET_GPR_U32(ctx, 31, 0x1D9880u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9878u, 0x1D9880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9880u;
label_1d9880:
    // 0x1d9880: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d9880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9884: 0x8ca50054  lw          $a1, 0x54($a1)
    ctx->pc = 0x1d9884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1d9888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d988c: 0xc08c794  jal         func_231E50
    ctx->pc = 0x1D988Cu;
    SET_GPR_U32(ctx, 31, 0x1D9894u);
    ctx->pc = 0x231E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E50u, 0x1D988Cu, 0x1D9894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9894u;
label_1d9894:
    // 0x1d9894: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x1d9894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x1d9898: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d9898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d989c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d98a0: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d98a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d98a4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d98a8: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d98a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d98ac: 0xc4ac0064  lwc1        $f12, 0x64($a1)
    ctx->pc = 0x1d98acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d98b0: 0xc46d0070  lwc1        $f13, 0x70($v1)
    ctx->pc = 0x1d98b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d98b4: 0xc6ee0068  lwc1        $f14, 0x68($s7)
    ctx->pc = 0x1d98b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d98b8: 0xc44f006c  lwc1        $f15, 0x6C($v0)
    ctx->pc = 0x1d98b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d98bc: 0xc076d14  jal         func_1DB450
    ctx->pc = 0x1D98BCu;
    SET_GPR_U32(ctx, 31, 0x1D98C4u);
    ctx->pc = 0x1DB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB450u, 0x1D98BCu, 0x1D98C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D98C4u;
label_1d98c4:
    // 0x1d98c4: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x1d98c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d98c8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d98cc: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d98ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d98d0: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d98d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d98d4: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d98d4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d98d8: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d98d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d98dc: 0xc44c0074  lwc1        $f12, 0x74($v0)
    ctx->pc = 0x1d98dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d98e0: 0xc4ad0080  lwc1        $f13, 0x80($a1)
    ctx->pc = 0x1d98e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d98e4: 0xc46e0078  lwc1        $f14, 0x78($v1)
    ctx->pc = 0x1d98e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d98e8: 0xc6ef007c  lwc1        $f15, 0x7C($s7)
    ctx->pc = 0x1d98e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d98ec: 0xc076d14  jal         func_1DB450
    ctx->pc = 0x1D98ECu;
    SET_GPR_U32(ctx, 31, 0x1D98F4u);
    ctx->pc = 0x1DB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB450u, 0x1D98ECu, 0x1D98F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D98F4u;
label_1d98f4:
    // 0x1d98f4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1d98f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d98f8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d98fc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1d98fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d9900: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9900u;
    SET_GPR_U32(ctx, 31, 0x1D9908u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9900u, 0x1D9908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9908u;
label_1d9908:
    // 0x1d9908: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d9908u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d990c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9910: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x1d9910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d9914: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d9914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9918: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1d9918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d991c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1D991Cu;
    SET_GPR_U32(ctx, 31, 0x1D9924u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1D991Cu, 0x1D9924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9924u;
label_1d9924:
    // 0x1d9924: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9928: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1d9928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d992c: 0x8cc20040  lw          $v0, 0x40($a2)
    ctx->pc = 0x1d992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1d9930: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9934: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9934u;
    SET_GPR_U32(ctx, 31, 0x1D993Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9934u, 0x1D993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D993Cu;
label_1d993c:
    // 0x1d993c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d993cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9940: 0x8c970044  lw          $s7, 0x44($a0)
    ctx->pc = 0x1d9940u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1d9944: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x1d9944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9948: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x1d9948u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x1d994c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d994cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9950: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d9950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9954: 0x27a600f8  addiu       $a2, $sp, 0xF8
    ctx->pc = 0x1d9954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1d9958: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d9958u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d995c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9960: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d9960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9964: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D9964u;
    SET_GPR_U32(ctx, 31, 0x1D996Cu);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D9964u, 0x1D996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D996Cu;
label_1d996c:
    // 0x1d996c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d996cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9970: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d9970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9974: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x1d9974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1d9978: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d9978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d997c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D997Cu;
    SET_GPR_U32(ctx, 31, 0x1D9984u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D997Cu, 0x1D9984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9984u;
label_1d9984:
    // 0x1d9984: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9988: 0x8c650044  lw          $a1, 0x44($v1)
    ctx->pc = 0x1d9988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1d998c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d998cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9990: 0x27b700f8  addiu       $s7, $sp, 0xF8
    ctx->pc = 0x1d9990u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1d9994: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1d9994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9998: 0xc7ac0170  lwc1        $f12, 0x170($sp)
    ctx->pc = 0x1d9998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d999c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d999cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d99a0: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D99A0u;
    SET_GPR_U32(ctx, 31, 0x1D99A8u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D99A0u, 0x1D99A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99A8u;
label_1d99a8:
    // 0x1d99a8: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d99ac: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x1d99acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1d99b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d99b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d99b4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D99B4u;
    SET_GPR_U32(ctx, 31, 0x1D99BCu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D99B4u, 0x1D99BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99BCu;
label_1d99bc:
    // 0x1d99bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d99bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d99c0: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d99c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d99c4: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x1d99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x1d99c8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d99c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d99cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d99ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d99d0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1d99d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d99d4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1D99D4u;
    SET_GPR_U32(ctx, 31, 0x1D99DCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1D99D4u, 0x1D99DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99DCu;
label_1d99dc:
    // 0x1d99dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d99dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d99e0: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d99e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d99e4: 0x8cb70040  lw          $s7, 0x40($a1)
    ctx->pc = 0x1d99e4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1d99e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d99e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d99ec: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D99ECu;
    SET_GPR_U32(ctx, 31, 0x1D99F4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D99ECu, 0x1D99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D99F4u;
label_1d99f4:
    // 0x1d99f4: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d99f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d99f8: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x1d99f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1d99fc: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x1d99fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9a00: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1d9a00u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1d9a04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a08: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1d9a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d9a0c: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x1d9a0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x1d9a10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9a14: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D9A14u;
    SET_GPR_U32(ctx, 31, 0x1D9A1Cu);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D9A14u, 0x1D9A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A1Cu;
label_1d9a1c:
    // 0x1d9a1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a20: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9a24: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1d9a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d9a28: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9A28u;
    SET_GPR_U32(ctx, 31, 0x1D9A30u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9A28u, 0x1D9A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A30u;
label_1d9a30:
    // 0x1d9a30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a34: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1d9a34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9a38: 0x8cc70054  lw          $a3, 0x54($a2)
    ctx->pc = 0x1d9a38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x1d9a3c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d9a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a40: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1d9a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a44: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1d9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d9a48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d9a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a4c: 0xc7ac016c  lwc1        $f12, 0x16C($sp)
    ctx->pc = 0x1d9a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9a50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9a54: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1D9A54u;
    SET_GPR_U32(ctx, 31, 0x1D9A5Cu);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1D9A54u, 0x1D9A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A5Cu;
label_1d9a5c:
    // 0x1d9a5c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d9a5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a60: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9a64: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1d9a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d9a68: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9A68u;
    SET_GPR_U32(ctx, 31, 0x1D9A70u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9A68u, 0x1D9A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A70u;
label_1d9a70:
    // 0x1d9a70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a74: 0x8fb40180  lw          $s4, 0x180($sp)
    ctx->pc = 0x1d9a74u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9a78: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x1d9a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1d9a7c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d9a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a80: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d9a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a84: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x1d9a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1d9a88: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1D9A88u;
    SET_GPR_U32(ctx, 31, 0x1D9A90u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1D9A88u, 0x1D9A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9A90u;
label_1d9a90:
    // 0x1d9a90: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d9a90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9a94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9a98: 0x0  nop
    ctx->pc = 0x1d9a98u;
    // NOP
    // 0x1d9a9c: 0xe7ac0160  swc1        $f12, 0x160($sp)
    ctx->pc = 0x1d9a9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1d9aa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9aa4: 0x0  nop
    ctx->pc = 0x1d9aa4u;
    // NOP
    // 0x1d9aa8: 0xe7ac015c  swc1        $f12, 0x15C($sp)
    ctx->pc = 0x1d9aa8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x1d9aac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d9aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d9ab0: 0x0  nop
    ctx->pc = 0x1d9ab0u;
    // NOP
    // 0x1d9ab4: 0xe7ad0158  swc1        $f13, 0x158($sp)
    ctx->pc = 0x1d9ab4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x1d9ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d9ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9abc: 0x0  nop
    ctx->pc = 0x1d9abcu;
    // NOP
    // 0x1d9ac0: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x1d9ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x1d9ac4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9ac8: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d9ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9acc: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1d9accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9ad0: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9ad4: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9ad8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d9ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9adc: 0xc44c0064  lwc1        $f12, 0x64($v0)
    ctx->pc = 0x1d9adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9ae0: 0xc4ed0070  lwc1        $f13, 0x70($a3)
    ctx->pc = 0x1d9ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9ae4: 0xc4ce0068  lwc1        $f14, 0x68($a2)
    ctx->pc = 0x1d9ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d9ae8: 0xc46f006c  lwc1        $f15, 0x6C($v1)
    ctx->pc = 0x1d9ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d9aec: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x1d9aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1d9af0: 0x27b7015c  addiu       $s7, $sp, 0x15C
    ctx->pc = 0x1d9af0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x1d9af4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1d9af4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9af8: 0xc076d98  jal         func_1DB660
    ctx->pc = 0x1D9AF8u;
    SET_GPR_U32(ctx, 31, 0x1D9B00u);
    ctx->pc = 0x1DB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB660u, 0x1D9AF8u, 0x1D9B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B00u;
label_1d9b00:
    // 0x1d9b00: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d9b00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9b04: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1d9b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9b08: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9b0c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9b10: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9b18: 0xc4ec0074  lwc1        $f12, 0x74($a3)
    ctx->pc = 0x1d9b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9b1c: 0xc4cd0080  lwc1        $f13, 0x80($a2)
    ctx->pc = 0x1d9b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9b20: 0xc44e0078  lwc1        $f14, 0x78($v0)
    ctx->pc = 0x1d9b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1d9b24: 0xc46f007c  lwc1        $f15, 0x7C($v1)
    ctx->pc = 0x1d9b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d9b28: 0x27a20158  addiu       $v0, $sp, 0x158
    ctx->pc = 0x1d9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x1d9b2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d9b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9b30: 0x27b70154  addiu       $s7, $sp, 0x154
    ctx->pc = 0x1d9b30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x1d9b34: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1d9b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9b38: 0xc076d98  jal         func_1DB660
    ctx->pc = 0x1D9B38u;
    SET_GPR_U32(ctx, 31, 0x1D9B40u);
    ctx->pc = 0x1DB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB660u, 0x1D9B38u, 0x1D9B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B40u;
label_1d9b40:
    // 0x1d9b40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9b44: 0x3c1e3f80  lui         $fp, 0x3F80
    ctx->pc = 0x1d9b44u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9b48: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x1d9b48u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9b4c: 0x0  nop
    ctx->pc = 0x1d9b4cu;
    // NOP
    // 0x1d9b50: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1d9b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1d9b54: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1d9b54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9b58: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1d9b58u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9b5c: 0x0  nop
    ctx->pc = 0x1d9b5cu;
    // NOP
    // 0x1d9b60: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d9b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1d9b64: 0x12c00027  beqz        $s6, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D9B64u;
    {
        const bool branch_taken_0x1d9b64 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b64) {
            ctx->pc = 0x1D9C04u;
            goto label_1d9c04;
        }
    }
    ctx->pc = 0x1D9B6Cu;
    // 0x1d9b6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d9b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9b70: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1d9b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1d9b74: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1d9b74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d9b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9b7c: 0x0  nop
    ctx->pc = 0x1d9b7cu;
    // NOP
    // 0x1d9b80: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1d9b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1d9b84: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9b88: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1d9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d9b8c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1d9b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1d9b90: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1d9b90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d9b94: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9B94u;
    SET_GPR_U32(ctx, 31, 0x1D9B9Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9B94u, 0x1D9B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B9Cu;
label_1d9b9c:
    // 0x1d9b9c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9ba0: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x1d9ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1d9ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ba8: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x1d9ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9bac: 0xc7ad015c  lwc1        $f13, 0x15C($sp)
    ctx->pc = 0x1d9bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9bb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9bb4: 0xc08c208  jal         func_230820
    ctx->pc = 0x1D9BB4u;
    SET_GPR_U32(ctx, 31, 0x1D9BBCu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1D9BB4u, 0x1D9BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9BBCu;
label_1d9bbc:
    // 0x1d9bbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d9bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9bc0: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d9bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9bc4: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x1d9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1d9bc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9bcc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9BCCu;
    SET_GPR_U32(ctx, 31, 0x1D9BD4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9BCCu, 0x1D9BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9BD4u;
label_1d9bd4:
    // 0x1d9bd4: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9bd8: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x1d9bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1d9bdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9be0: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x1d9be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9be4: 0xc7ad0150  lwc1        $f13, 0x150($sp)
    ctx->pc = 0x1d9be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9bec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9bf0: 0xc08c544  jal         func_231510
    ctx->pc = 0x1D9BF0u;
    SET_GPR_U32(ctx, 31, 0x1D9BF8u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1D9BF0u, 0x1D9BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9BF8u;
label_1d9bf8:
    // 0x1d9bf8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1d9bf8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9bfc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1D9BFCu;
    {
        const bool branch_taken_0x1d9bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9bfc) {
            ctx->pc = 0x1D9C98u;
            goto label_1d9c98;
        }
    }
    ctx->pc = 0x1D9C04u;
label_1d9c04:
    // 0x1d9c04: 0xc78082d8  lwc1        $f0, -0x7D28($gp)
    ctx->pc = 0x1d9c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9c08: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1d9c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1d9c0c: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d9c0cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9c10: 0x8ee20040  lw          $v0, 0x40($s7)
    ctx->pc = 0x1d9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x1d9c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c18: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9C18u;
    SET_GPR_U32(ctx, 31, 0x1D9C20u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9C18u, 0x1D9C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9C20u;
label_1d9c20:
    // 0x1d9c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c24: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d9c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9c28: 0x8ca60050  lw          $a2, 0x50($a1)
    ctx->pc = 0x1d9c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1d9c2c: 0x3c0740c0  lui         $a3, 0x40C0
    ctx->pc = 0x1d9c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16576 << 16));
    // 0x1d9c30: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1d9c30u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9c34: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x1d9c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9c38: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1d9c38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d9c3c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1d9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1d9c40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d9c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9c44: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x1d9c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9c48: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x1d9c48u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d9c4c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d9c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9c50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c54: 0xc08c208  jal         func_230820
    ctx->pc = 0x1D9C54u;
    SET_GPR_U32(ctx, 31, 0x1D9C5Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1D9C54u, 0x1D9C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9C5Cu;
label_1d9c5c:
    // 0x1d9c5c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1d9c5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c60: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d9c60u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9c64: 0x8ee40040  lw          $a0, 0x40($s7)
    ctx->pc = 0x1d9c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x1d9c68: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9C68u;
    SET_GPR_U32(ctx, 31, 0x1D9C70u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9C68u, 0x1D9C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9C70u;
label_1d9c70:
    // 0x1d9c70: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1d9c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9c74: 0x8ca60050  lw          $a2, 0x50($a1)
    ctx->pc = 0x1d9c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1d9c78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d9c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c80: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x1d9c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9c84: 0xc7ad0150  lwc1        $f13, 0x150($sp)
    ctx->pc = 0x1d9c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9c88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9c90: 0xc08c544  jal         func_231510
    ctx->pc = 0x1D9C90u;
    SET_GPR_U32(ctx, 31, 0x1D9C98u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1D9C90u, 0x1D9C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9C98u;
label_1d9c98:
    // 0x1d9c98: 0x32c700ff  andi        $a3, $s6, 0xFF
    ctx->pc = 0x1d9c98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1d9c9c: 0x9397bb54  lbu         $s7, -0x44AC($gp)
    ctx->pc = 0x1d9c9cu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949716)));
    // 0x1d9ca0: 0x32e600ff  andi        $a2, $s7, 0xFF
    ctx->pc = 0x1d9ca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x1d9ca4: 0x10e60022  beq         $a3, $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x1D9CA4u;
    {
        const bool branch_taken_0x1d9ca4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x1d9ca4) {
            ctx->pc = 0x1D9D30u;
            goto label_1d9d30;
        }
    }
    ctx->pc = 0x1D9CACu;
    // 0x1d9cac: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d9cacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9cb0: 0x8cfe0040  lw          $fp, 0x40($a3)
    ctx->pc = 0x1d9cb0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1d9cb4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1d9cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cb8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9CB8u;
    SET_GPR_U32(ctx, 31, 0x1D9CC0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9CB8u, 0x1D9CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CC0u;
label_1d9cc0:
    // 0x1d9cc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cc4: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1d9cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9cc8: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x1d9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x1d9ccc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d9cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cd4: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x1d9cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9cd8: 0xc7ad0150  lwc1        $f13, 0x150($sp)
    ctx->pc = 0x1d9cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9cdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ce0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ce4: 0xc08c544  jal         func_231510
    ctx->pc = 0x1D9CE4u;
    SET_GPR_U32(ctx, 31, 0x1D9CECu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1D9CE4u, 0x1D9CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9CECu;
label_1d9cec:
    // 0x1d9cec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d9cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cf0: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9cf4: 0x8c970040  lw          $s7, 0x40($a0)
    ctx->pc = 0x1d9cf4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1d9cf8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d9cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cfc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9CFCu;
    SET_GPR_U32(ctx, 31, 0x1D9D04u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9CFCu, 0x1D9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D04u;
label_1d9d04:
    // 0x1d9d04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d9d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d08: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d9d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9d0c: 0x8ce20050  lw          $v0, 0x50($a3)
    ctx->pc = 0x1d9d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1d9d10: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d9d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d18: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x1d9d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9d1c: 0xc7ad0150  lwc1        $f13, 0x150($sp)
    ctx->pc = 0x1d9d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9d20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d28: 0xc08c544  jal         func_231510
    ctx->pc = 0x1D9D28u;
    SET_GPR_U32(ctx, 31, 0x1D9D30u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1D9D28u, 0x1D9D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D30u;
label_1d9d30:
    // 0x1d9d30: 0x12a00026  beqz        $s5, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D9D30u;
    {
        const bool branch_taken_0x1d9d30 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9d30) {
            ctx->pc = 0x1D9DCCu;
            goto label_1d9dcc;
        }
    }
    ctx->pc = 0x1D9D38u;
    // 0x1d9d38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9d3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9d40: 0x0  nop
    ctx->pc = 0x1d9d40u;
    // NOP
    // 0x1d9d44: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d9d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1d9d48: 0x8fb00180  lw          $s0, 0x180($sp)
    ctx->pc = 0x1d9d48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9d4c: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1d9d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1d9d50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d9d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d54: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9D54u;
    SET_GPR_U32(ctx, 31, 0x1D9D5Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9D54u, 0x1D9D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D5Cu;
label_1d9d5c:
    // 0x1d9d5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d9d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d60: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d9d60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9d64: 0x8ce20060  lw          $v0, 0x60($a3)
    ctx->pc = 0x1d9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x1d9d68: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d9d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d70: 0xc7ac0158  lwc1        $f12, 0x158($sp)
    ctx->pc = 0x1d9d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9d74: 0xc7ad0154  lwc1        $f13, 0x154($sp)
    ctx->pc = 0x1d9d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9d78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d7c: 0xc08c208  jal         func_230820
    ctx->pc = 0x1D9D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D84u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1D9D7Cu, 0x1D9D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D84u;
label_1d9d84:
    // 0x1d9d84: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9d88: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x1d9d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1d9d8c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9D8Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D94u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9D8Cu, 0x1D9D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D94u;
label_1d9d94:
    // 0x1d9d94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d9d94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d98: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9d9c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x1d9d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1d9da0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1d9da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9da4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9da8: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x1d9da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9dac: 0xc7ad014c  lwc1        $f13, 0x14C($sp)
    ctx->pc = 0x1d9dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9db0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9db4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9db8: 0xc08c544  jal         func_231510
    ctx->pc = 0x1D9DB8u;
    SET_GPR_U32(ctx, 31, 0x1D9DC0u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1D9DB8u, 0x1D9DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DC0u;
label_1d9dc0:
    // 0x1d9dc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9dc4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D9DC4u;
    {
        const bool branch_taken_0x1d9dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9dc4) {
            ctx->pc = 0x1D9E5Cu;
            goto label_1d9e5c;
        }
    }
    ctx->pc = 0x1D9DCCu;
label_1d9dcc:
    // 0x1d9dcc: 0xc78082d8  lwc1        $f0, -0x7D28($gp)
    ctx->pc = 0x1d9dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9dd0: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d9dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1d9dd4: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1d9dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9dd8: 0x8cd70040  lw          $s7, 0x40($a2)
    ctx->pc = 0x1d9dd8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1d9ddc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d9ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9de0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9DE0u;
    SET_GPR_U32(ctx, 31, 0x1D9DE8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9DE0u, 0x1D9DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DE8u;
label_1d9de8:
    // 0x1d9de8: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9dec: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x1d9decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1d9df0: 0x3c0640c0  lui         $a2, 0x40C0
    ctx->pc = 0x1d9df0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16576 << 16));
    // 0x1d9df4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1d9df4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9df8: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x1d9df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9dfc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1d9dfcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d9e00: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1d9e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1d9e04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d9e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9e08: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x1d9e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9e0c: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x1d9e0cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d9e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e18: 0xc08c208  jal         func_230820
    ctx->pc = 0x1D9E18u;
    SET_GPR_U32(ctx, 31, 0x1D9E20u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1D9E18u, 0x1D9E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E20u;
label_1d9e20:
    // 0x1d9e20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e24: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1d9e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9e28: 0x8cc70040  lw          $a3, 0x40($a2)
    ctx->pc = 0x1d9e28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1d9e2c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1d9e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e30: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9E30u;
    SET_GPR_U32(ctx, 31, 0x1D9E38u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9E30u, 0x1D9E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E38u;
label_1d9e38:
    // 0x1d9e38: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9e3c: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x1d9e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1d9e40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e44: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x1d9e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9e48: 0xc7ad014c  lwc1        $f13, 0x14C($sp)
    ctx->pc = 0x1d9e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9e4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e54: 0xc08c544  jal         func_231510
    ctx->pc = 0x1D9E54u;
    SET_GPR_U32(ctx, 31, 0x1D9E5Cu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1D9E54u, 0x1D9E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E5Cu;
label_1d9e5c:
    // 0x1d9e5c: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x1d9e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x1d9e60: 0x9384bb58  lbu         $a0, -0x44A8($gp)
    ctx->pc = 0x1d9e60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949720)));
    // 0x1d9e64: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1d9e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1d9e68: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D9E68u;
    {
        const bool branch_taken_0x1d9e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9e68) {
            ctx->pc = 0x1D9EE8u;
            goto label_1d9ee8;
        }
    }
    ctx->pc = 0x1D9E70u;
    // 0x1d9e70: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9e74: 0x8c970040  lw          $s7, 0x40($a0)
    ctx->pc = 0x1d9e74u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1d9e78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d9e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e7c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E84u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9E7Cu, 0x1D9E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E84u;
label_1d9e84:
    // 0x1d9e84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d9e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e88: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1d9e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9e8c: 0x8ce2005c  lw          $v0, 0x5C($a3)
    ctx->pc = 0x1d9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x1d9e90: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d9e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d9e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e98: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x1d9e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9e9c: 0xc7ad014c  lwc1        $f13, 0x14C($sp)
    ctx->pc = 0x1d9e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9ea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ea4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1d9ea4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ea8: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x1d9ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eac: 0xc08c544  jal         func_231510
    ctx->pc = 0x1D9EACu;
    SET_GPR_U32(ctx, 31, 0x1D9EB4u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1D9EACu, 0x1D9EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EB4u;
label_1d9eb4:
    // 0x1d9eb4: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9eb8: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1d9eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1d9ebc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1D9EBCu;
    SET_GPR_U32(ctx, 31, 0x1D9EC4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1D9EBCu, 0x1D9EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EC4u;
label_1d9ec4:
    // 0x1d9ec4: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9ec8: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x1d9ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1d9ecc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ed0: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x1d9ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9ed4: 0xc7ad014c  lwc1        $f13, 0x14C($sp)
    ctx->pc = 0x1d9ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9ed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9edc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ee0: 0xc08c544  jal         func_231510
    ctx->pc = 0x1D9EE0u;
    SET_GPR_U32(ctx, 31, 0x1D9EE8u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1D9EE0u, 0x1D9EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EE8u;
label_1d9ee8:
    // 0x1d9ee8: 0xa396bb54  sb          $s6, -0x44AC($gp)
    ctx->pc = 0x1d9ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949716), (uint8_t)GPR_U32(ctx, 22));
    // 0x1d9eec: 0xa395bb58  sb          $s5, -0x44A8($gp)
    ctx->pc = 0x1d9eecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949720), (uint8_t)GPR_U32(ctx, 21));
    // 0x1d9ef0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9ef4: 0xc441008c  lwc1        $f1, 0x8C($v0)
    ctx->pc = 0x1d9ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9ef8: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x1d9ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9efc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d9efcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9f00: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1D9F00u;
    {
        const bool branch_taken_0x1d9f00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9f00) {
            ctx->pc = 0x1D9F70u;
            goto label_1d9f70;
        }
    }
    ctx->pc = 0x1D9F08u;
    // 0x1d9f08: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9f0c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1d9f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9f10: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x1d9f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9f14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d9f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d9f18: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9f1c: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x1d9f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x1d9f20: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d9f20u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9f24: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x1d9f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9f28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9f30: 0x0  nop
    ctx->pc = 0x1d9f30u;
    // NOP
    // 0x1d9f34: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1d9f34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d9f38: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9f3c: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x1d9f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9f40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d9f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d9f44: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x1d9f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1d9f48: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9f4c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1d9f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9f50: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1d9f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9f54: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d9f54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9f58: 0x0  nop
    ctx->pc = 0x1d9f58u;
    // NOP
    // 0x1d9f5c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1d9f5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d9f60: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d9f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9f64: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x1d9f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9f68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d9f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d9f6c: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x1d9f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_1d9f70:
    // 0x1d9f70: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9f74: 0xc076e3c  jal         func_1DB8F0
    ctx->pc = 0x1D9F74u;
    SET_GPR_U32(ctx, 31, 0x1D9F7Cu);
    ctx->pc = 0x1DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8F0u, 0x1D9F74u, 0x1D9F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9F7Cu;
label_1d9f7c:
    // 0x1d9f7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d9f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f80: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1d9f80u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9f84: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d9f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f88: 0xc076ea8  jal         func_1DBAA0
    ctx->pc = 0x1D9F88u;
    SET_GPR_U32(ctx, 31, 0x1D9F90u);
    ctx->pc = 0x1DBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBAA0u, 0x1D9F88u, 0x1D9F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9F90u;
label_1d9f90:
    // 0x1d9f90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f94: 0x2a410003  slti        $at, $s2, 0x3
    ctx->pc = 0x1d9f94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d9f98: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9F98u;
    {
        const bool branch_taken_0x1d9f98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f98) {
            ctx->pc = 0x1D9FB8u;
            goto label_1d9fb8;
        }
    }
    ctx->pc = 0x1D9FA0u;
    // 0x1d9fa0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d9fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9fa4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d9fa4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9fa8: 0x0  nop
    ctx->pc = 0x1d9fa8u;
    // NOP
    // 0x1d9fac: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1d9facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1d9fb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9FB0u;
    {
        const bool branch_taken_0x1d9fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9fb0) {
            ctx->pc = 0x1D9FC0u;
            goto label_1d9fc0;
        }
    }
    ctx->pc = 0x1D9FB8u;
label_1d9fb8:
    // 0x1d9fb8: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x1d9fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9fbc: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1d9fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1d9fc0:
    // 0x1d9fc0: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x1d9fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9fc4: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1d9fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d9fc8: 0xe48000c0  swc1        $f0, 0xC0($a0)
    ctx->pc = 0x1d9fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
    // 0x1d9fcc: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x1d9fccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d9fd0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9FD0u;
    {
        const bool branch_taken_0x1d9fd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9fd0) {
            ctx->pc = 0x1D9FF0u;
            goto label_1d9ff0;
        }
    }
    ctx->pc = 0x1D9FD8u;
    // 0x1d9fd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d9fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9fe0: 0x0  nop
    ctx->pc = 0x1d9fe0u;
    // NOP
    // 0x1d9fe4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1d9fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1d9fe8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9FE8u;
    {
        const bool branch_taken_0x1d9fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9fe8) {
            ctx->pc = 0x1D9FF8u;
            goto label_1d9ff8;
        }
    }
    ctx->pc = 0x1D9FF0u;
label_1d9ff0:
    // 0x1d9ff0: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x1d9ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9ff4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1d9ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1d9ff8:
    // 0x1d9ff8: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x1d9ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9ffc: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d9ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da000: 0xe46000c8  swc1        $f0, 0xC8($v1)
    ctx->pc = 0x1da000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 200), bits); }
    // 0x1da004: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1da004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da008: 0x8ca70040  lw          $a3, 0x40($a1)
    ctx->pc = 0x1da008u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1da00c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1da00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da010: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DA010u;
    SET_GPR_U32(ctx, 31, 0x1DA018u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DA010u, 0x1DA018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA018u;
label_1da018:
    // 0x1da018: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1da018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da01c: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x1da01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1da020: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1da020u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da028: 0xc6ec00bc  lwc1        $f12, 0xBC($s7)
    ctx->pc = 0x1da028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da02c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DA02Cu;
    SET_GPR_U32(ctx, 31, 0x1DA034u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DA02Cu, 0x1DA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA034u;
label_1da034:
    // 0x1da034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da038: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da03c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1da03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1da040: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DA040u;
    SET_GPR_U32(ctx, 31, 0x1DA048u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DA040u, 0x1DA048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA048u;
label_1da048:
    // 0x1da048: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da04c: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1da04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da050: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x1da050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x1da054: 0x8fb00180  lw          $s0, 0x180($sp)
    ctx->pc = 0x1da054u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da058: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1da058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da05c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da060: 0xc60c00c4  lwc1        $f12, 0xC4($s0)
    ctx->pc = 0x1da060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da064: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DA064u;
    SET_GPR_U32(ctx, 31, 0x1DA06Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DA064u, 0x1DA06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA06Cu;
label_1da06c:
    // 0x1da06c: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1da06cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da070: 0xc4c100b4  lwc1        $f1, 0xB4($a2)
    ctx->pc = 0x1da070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da074: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x1da074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da078: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1da078u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da07c: 0x45010069  bc1t        . + 4 + (0x69 << 2)
    ctx->pc = 0x1DA07Cu;
    {
        const bool branch_taken_0x1da07c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da07c) {
            ctx->pc = 0x1DA224u;
            goto label_1da224;
        }
    }
    ctx->pc = 0x1DA084u;
    // 0x1da084: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da088: 0xc44100b0  lwc1        $f1, 0xB0($v0)
    ctx->pc = 0x1da088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da08c: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x1da08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da090: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1da090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1da094: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1da094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da098: 0xe4a000b4  swc1        $f0, 0xB4($a1)
    ctx->pc = 0x1da098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 180), bits); }
    // 0x1da09c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1da09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da0a0: 0xc46100bc  lwc1        $f1, 0xBC($v1)
    ctx->pc = 0x1da0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da0a4: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1da0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da0a8: 0xc48000c0  lwc1        $f0, 0xC0($a0)
    ctx->pc = 0x1da0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da0ac: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1da0acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da0b0: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x1DA0B0u;
    {
        const bool branch_taken_0x1da0b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da0b0) {
            ctx->pc = 0x1DA160u;
            goto label_1da160;
        }
    }
    ctx->pc = 0x1DA0B8u;
    // 0x1da0b8: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1da0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da0bc: 0xc4a100bc  lwc1        $f1, 0xBC($a1)
    ctx->pc = 0x1da0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da0c0: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1da0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da0c4: 0xc46000c0  lwc1        $f0, 0xC0($v1)
    ctx->pc = 0x1da0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da0c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1da0c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da0cc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA0CCu;
    {
        const bool branch_taken_0x1da0cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da0cc) {
            ctx->pc = 0x1DA0F4u;
            goto label_1da0f4;
        }
    }
    ctx->pc = 0x1DA0D4u;
    // 0x1da0d4: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1da0d4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da0d8: 0xc6e100b8  lwc1        $f1, 0xB8($s7)
    ctx->pc = 0x1da0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da0dc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da0e0: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x1da0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da0e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1da0e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1da0e8: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x1da0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x1da0ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA0ECu;
    {
        const bool branch_taken_0x1da0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da0ec) {
            ctx->pc = 0x1DA10Cu;
            goto label_1da10c;
        }
    }
    ctx->pc = 0x1DA0F4u;
label_1da0f4:
    // 0x1da0f4: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1da0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da0f8: 0xc48100b8  lwc1        $f1, 0xB8($a0)
    ctx->pc = 0x1da0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da0fc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da100: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x1da100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da104: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1da104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1da108: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x1da108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_1da10c:
    // 0x1da10c: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1da10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da110: 0xc4a100bc  lwc1        $f1, 0xBC($a1)
    ctx->pc = 0x1da110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da114: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x1da114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1da118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da11c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA11Cu;
    {
        const bool branch_taken_0x1da11c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da11c) {
            ctx->pc = 0x1DA130u;
            goto label_1da130;
        }
    }
    ctx->pc = 0x1DA124u;
    // 0x1da124: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x1da124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da128: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da12c: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x1da12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_1da130:
    // 0x1da130: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1da130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da134: 0xc48100bc  lwc1        $f1, 0xBC($a0)
    ctx->pc = 0x1da134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da138: 0x3c173f80  lui         $s7, 0x3F80
    ctx->pc = 0x1da138u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16256 << 16));
    // 0x1da13c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x1da13cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da140: 0x0  nop
    ctx->pc = 0x1da140u;
    // NOP
    // 0x1da144: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1da144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da148: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA148u;
    {
        const bool branch_taken_0x1da148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da148) {
            ctx->pc = 0x1DA160u;
            goto label_1da160;
        }
    }
    ctx->pc = 0x1DA150u;
    // 0x1da150: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1da150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1da154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da158: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1da158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da15c: 0xe48000bc  swc1        $f0, 0xBC($a0)
    ctx->pc = 0x1da15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
label_1da160:
    // 0x1da160: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da164: 0xc44100c4  lwc1        $f1, 0xC4($v0)
    ctx->pc = 0x1da164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da168: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1da168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da16c: 0xc4a000c8  lwc1        $f0, 0xC8($a1)
    ctx->pc = 0x1da16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da170: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1da170u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da174: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x1DA174u;
    {
        const bool branch_taken_0x1da174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da174) {
            ctx->pc = 0x1DA224u;
            goto label_1da224;
        }
    }
    ctx->pc = 0x1DA17Cu;
    // 0x1da17c: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1da17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da180: 0xc4a100c4  lwc1        $f1, 0xC4($a1)
    ctx->pc = 0x1da180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da184: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1da184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da188: 0xc4a000c8  lwc1        $f0, 0xC8($a1)
    ctx->pc = 0x1da188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da18c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1da18cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da190: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA190u;
    {
        const bool branch_taken_0x1da190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da190) {
            ctx->pc = 0x1DA1B8u;
            goto label_1da1b8;
        }
    }
    ctx->pc = 0x1DA198u;
    // 0x1da198: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1da198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da19c: 0xc46100b8  lwc1        $f1, 0xB8($v1)
    ctx->pc = 0x1da19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da1a0: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1da1a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da1a4: 0xc6e000c4  lwc1        $f0, 0xC4($s7)
    ctx->pc = 0x1da1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da1a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1da1a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1da1ac: 0xe6e000c4  swc1        $f0, 0xC4($s7)
    ctx->pc = 0x1da1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 196), bits); }
    // 0x1da1b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA1B0u;
    {
        const bool branch_taken_0x1da1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da1b0) {
            ctx->pc = 0x1DA1D0u;
            goto label_1da1d0;
        }
    }
    ctx->pc = 0x1DA1B8u;
label_1da1b8:
    // 0x1da1b8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da1bc: 0xc44100b8  lwc1        $f1, 0xB8($v0)
    ctx->pc = 0x1da1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da1c0: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1da1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da1c4: 0xc48000c4  lwc1        $f0, 0xC4($a0)
    ctx->pc = 0x1da1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da1c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1da1c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1da1cc: 0xe48000c4  swc1        $f0, 0xC4($a0)
    ctx->pc = 0x1da1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 196), bits); }
label_1da1d0:
    // 0x1da1d0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da1d4: 0xc44100c4  lwc1        $f1, 0xC4($v0)
    ctx->pc = 0x1da1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da1d8: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x1da1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da1dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1da1dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da1e0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA1E0u;
    {
        const bool branch_taken_0x1da1e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da1e0) {
            ctx->pc = 0x1DA1F4u;
            goto label_1da1f4;
        }
    }
    ctx->pc = 0x1DA1E8u;
    // 0x1da1e8: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x1da1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da1ec: 0x8fb60180  lw          $s6, 0x180($sp)
    ctx->pc = 0x1da1ecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da1f0: 0xe6c000c4  swc1        $f0, 0xC4($s6)
    ctx->pc = 0x1da1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 196), bits); }
label_1da1f4:
    // 0x1da1f4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da1f8: 0xc44100c4  lwc1        $f1, 0xC4($v0)
    ctx->pc = 0x1da1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da1fc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1da1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1da200: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1da200u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da204: 0x0  nop
    ctx->pc = 0x1da204u;
    // NOP
    // 0x1da208: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1da208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da20c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA20Cu;
    {
        const bool branch_taken_0x1da20c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da20c) {
            ctx->pc = 0x1DA224u;
            goto label_1da224;
        }
    }
    ctx->pc = 0x1DA214u;
    // 0x1da214: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1da214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1da218: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1da218u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da21c: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1da21cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da220: 0xe6e000c4  swc1        $f0, 0xC4($s7)
    ctx->pc = 0x1da220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 196), bits); }
label_1da224:
    // 0x1da224: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1da224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da228: 0xc48100a0  lwc1        $f1, 0xA0($a0)
    ctx->pc = 0x1da228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da22c: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x1da22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da230: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1da230u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da234: 0x45010063  bc1t        . + 4 + (0x63 << 2)
    ctx->pc = 0x1DA234u;
    {
        const bool branch_taken_0x1da234 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da234) {
            ctx->pc = 0x1DA3C4u;
            goto label_1da3c4;
        }
    }
    ctx->pc = 0x1DA23Cu;
    // 0x1da23c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da240: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x1da240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da244: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1da244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da248: 0xc480009c  lwc1        $f0, 0x9C($a0)
    ctx->pc = 0x1da248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da24c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1da24cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1da250: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1da250u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da254: 0xe6e100a0  swc1        $f1, 0xA0($s7)
    ctx->pc = 0x1da254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 160), bits); }
    // 0x1da258: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1da258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da25c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da260: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1da260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1da264: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1da264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da268: 0x12450020  beq         $s2, $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1DA268u;
    {
        const bool branch_taken_0x1da268 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x1da268) {
            ctx->pc = 0x1DA2ECu;
            goto label_1da2ec;
        }
    }
    ctx->pc = 0x1DA270u;
    // 0x1da270: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1da270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da274: 0x12450011  beq         $s2, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DA274u;
    {
        const bool branch_taken_0x1da274 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x1da274) {
            ctx->pc = 0x1DA2BCu;
            goto label_1da2bc;
        }
    }
    ctx->pc = 0x1DA27Cu;
    // 0x1da27c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA27Cu;
    {
        const bool branch_taken_0x1da27c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da27c) {
            ctx->pc = 0x1DA28Cu;
            goto label_1da28c;
        }
    }
    ctx->pc = 0x1DA284u;
    // 0x1da284: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1DA284u;
    {
        const bool branch_taken_0x1da284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da284) {
            ctx->pc = 0x1DA314u;
            goto label_1da314;
        }
    }
    ctx->pc = 0x1DA28Cu;
label_1da28c:
    // 0x1da28c: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1da28cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da290: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x1da290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1da294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da298: 0x0  nop
    ctx->pc = 0x1da298u;
    // NOP
    // 0x1da29c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1da29cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1da2a0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da2a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1da2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da2a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1da2a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1da2ac: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1da2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da2b0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1da2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1da2b4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1DA2B4u;
    {
        const bool branch_taken_0x1da2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da2b4) {
            ctx->pc = 0x1DA314u;
            goto label_1da314;
        }
    }
    ctx->pc = 0x1DA2BCu;
label_1da2bc:
    // 0x1da2bc: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1da2bcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da2c0: 0x8ee60038  lw          $a2, 0x38($s7)
    ctx->pc = 0x1da2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 56)));
    // 0x1da2c4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1da2c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da2c8: 0x0  nop
    ctx->pc = 0x1da2c8u;
    // NOP
    // 0x1da2cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1da2ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1da2d0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da2d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1da2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da2d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1da2d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1da2dc: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1da2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da2e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1da2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1da2e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DA2E4u;
    {
        const bool branch_taken_0x1da2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da2e4) {
            ctx->pc = 0x1DA314u;
            goto label_1da314;
        }
    }
    ctx->pc = 0x1DA2ECu;
label_1da2ec:
    // 0x1da2ec: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1da2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da2f0: 0x8ca6003c  lw          $a2, 0x3C($a1)
    ctx->pc = 0x1da2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1da2f4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1da2f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da2f8: 0x0  nop
    ctx->pc = 0x1da2f8u;
    // NOP
    // 0x1da2fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1da2fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1da300: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da304: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1da304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da308: 0x46006040  add.s       $f1, $f12, $f0
    ctx->pc = 0x1da308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1da30c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1da30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da310: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1da310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1da314:
    // 0x1da314: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1da314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da318: 0x12250020  beq         $s1, $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1DA318u;
    {
        const bool branch_taken_0x1da318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x1da318) {
            ctx->pc = 0x1DA39Cu;
            goto label_1da39c;
        }
    }
    ctx->pc = 0x1DA320u;
    // 0x1da320: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1da320u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da324: 0x12370011  beq         $s1, $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DA324u;
    {
        const bool branch_taken_0x1da324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        if (branch_taken_0x1da324) {
            ctx->pc = 0x1DA36Cu;
            goto label_1da36c;
        }
    }
    ctx->pc = 0x1DA32Cu;
    // 0x1da32c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA32Cu;
    {
        const bool branch_taken_0x1da32c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da32c) {
            ctx->pc = 0x1DA33Cu;
            goto label_1da33c;
        }
    }
    ctx->pc = 0x1DA334u;
    // 0x1da334: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1DA334u;
    {
        const bool branch_taken_0x1da334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da334) {
            ctx->pc = 0x1DA3C4u;
            goto label_1da3c4;
        }
    }
    ctx->pc = 0x1DA33Cu;
label_1da33c:
    // 0x1da33c: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1da33cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da340: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x1da340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1da344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da348: 0x0  nop
    ctx->pc = 0x1da348u;
    // NOP
    // 0x1da34c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1da34cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1da350: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1da350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da354: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1da354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da358: 0x46031000  add.s       $f0, $f2, $f3
    ctx->pc = 0x1da358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1da35c: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1da35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da360: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1da360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1da364: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1DA364u;
    {
        const bool branch_taken_0x1da364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da364) {
            ctx->pc = 0x1DA3C4u;
            goto label_1da3c4;
        }
    }
    ctx->pc = 0x1DA36Cu;
label_1da36c:
    // 0x1da36c: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1da36cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da370: 0x8cc70038  lw          $a3, 0x38($a2)
    ctx->pc = 0x1da370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1da374: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1da374u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da378: 0x0  nop
    ctx->pc = 0x1da378u;
    // NOP
    // 0x1da37c: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x1da37cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1da380: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da384: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1da384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da388: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1da388u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1da38c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1da38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da390: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x1da390u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1da394: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DA394u;
    {
        const bool branch_taken_0x1da394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da394) {
            ctx->pc = 0x1DA3C4u;
            goto label_1da3c4;
        }
    }
    ctx->pc = 0x1DA39Cu;
label_1da39c:
    // 0x1da39c: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1da39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da3a0: 0x8cb7003c  lw          $s7, 0x3C($a1)
    ctx->pc = 0x1da3a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1da3a4: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x1da3a4u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da3a8: 0x0  nop
    ctx->pc = 0x1da3a8u;
    // NOP
    // 0x1da3ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1da3acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1da3b0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da3b4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1da3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da3b8: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1da3b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1da3bc: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1da3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da3c0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1da3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1da3c4:
    // 0x1da3c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1da3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da3c8: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1da3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da3cc: 0xc4ac0100  lwc1        $f12, 0x100($a1)
    ctx->pc = 0x1da3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da3d0: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x1da3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da3d4: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1da3d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da3d8: 0x450101be  bc1t        . + 4 + (0x1BE << 2)
    ctx->pc = 0x1DA3D8u;
    {
        const bool branch_taken_0x1da3d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da3d8) {
            ctx->pc = 0x1DAAD4u;
            goto label_1daad4;
        }
    }
    ctx->pc = 0x1DA3E0u;
    // 0x1da3e0: 0xc7808348  lwc1        $f0, -0x7CB8($gp)
    ctx->pc = 0x1da3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da3e4: 0xc7ac0190  lwc1        $f12, 0x190($sp)
    ctx->pc = 0x1da3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da3e8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x1da3e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1da3ec: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1da3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da3f0: 0xe4c00100  swc1        $f0, 0x100($a2)
    ctx->pc = 0x1da3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 256), bits); }
    // 0x1da3f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1da3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da3f8: 0x0  nop
    ctx->pc = 0x1da3f8u;
    // NOP
    // 0x1da3fc: 0xe7ac0148  swc1        $f12, 0x148($sp)
    ctx->pc = 0x1da3fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1da400: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1da400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da404: 0x0  nop
    ctx->pc = 0x1da404u;
    // NOP
    // 0x1da408: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x1da408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1da40c: 0x2a410003  slti        $at, $s2, 0x3
    ctx->pc = 0x1da40cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1da410: 0x102000dc  beqz        $at, . + 4 + (0xDC << 2)
    ctx->pc = 0x1DA410u;
    {
        const bool branch_taken_0x1da410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da410) {
            ctx->pc = 0x1DA784u;
            goto label_1da784;
        }
    }
    ctx->pc = 0x1DA418u;
    // 0x1da418: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1da418u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da41c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1da41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da420: 0x1647000a  bne         $s2, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1DA420u;
    {
        const bool branch_taken_0x1da420 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 7));
        if (branch_taken_0x1da420) {
            ctx->pc = 0x1DA44Cu;
            goto label_1da44c;
        }
    }
    ctx->pc = 0x1DA428u;
    // 0x1da428: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1DA428u;
    SET_GPR_U32(ctx, 31, 0x1DA430u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1DA428u, 0x1DA430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA430u;
label_1da430:
    // 0x1da430: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da434: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1da434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1da438: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x1da438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1da43c: 0x802826  xor         $a1, $a0, $zero
    ctx->pc = 0x1da43cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
    // 0x1da440: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1da440u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1da444: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x1da444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1da448: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1da448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1da44c:
    // 0x1da44c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1da44cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da450: 0x16470009  bne         $s2, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA450u;
    {
        const bool branch_taken_0x1da450 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 7));
        if (branch_taken_0x1da450) {
            ctx->pc = 0x1DA478u;
            goto label_1da478;
        }
    }
    ctx->pc = 0x1DA458u;
    // 0x1da458: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1DA458u;
    SET_GPR_U32(ctx, 31, 0x1DA460u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1DA458u, 0x1DA460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA460u;
label_1da460:
    // 0x1da460: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1da460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da464: 0x30570001  andi        $s7, $v0, 0x1
    ctx->pc = 0x1da464u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1da468: 0x2e01026  xor         $v0, $s7, $zero
    ctx->pc = 0x1da468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 0));
    // 0x1da46c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1da46cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1da470: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1da470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da474: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1da474u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da478:
    // 0x1da478: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA478u;
    {
        const bool branch_taken_0x1da478 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da478) {
            ctx->pc = 0x1DA488u;
            goto label_1da488;
        }
    }
    ctx->pc = 0x1DA480u;
    // 0x1da480: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1da480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da484: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x1da484u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1da488:
    // 0x1da488: 0x128000be  beqz        $s4, . + 4 + (0xBE << 2)
    ctx->pc = 0x1DA488u;
    {
        const bool branch_taken_0x1da488 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da488) {
            ctx->pc = 0x1DA784u;
            goto label_1da784;
        }
    }
    ctx->pc = 0x1DA490u;
    // 0x1da490: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1da490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da494: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x1DA494u;
    {
        const bool branch_taken_0x1da494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da494) {
            ctx->pc = 0x1DA764u;
            goto label_1da764;
        }
    }
    ctx->pc = 0x1DA49Cu;
label_1da49c:
    // 0x1da49c: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1da49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da4a0: 0x8c660040  lw          $a2, 0x40($v1)
    ctx->pc = 0x1da4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1da4a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1da4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4a8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DA4A8u;
    SET_GPR_U32(ctx, 31, 0x1DA4B0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DA4A8u, 0x1DA4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA4B0u;
label_1da4b0:
    // 0x1da4b0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1da4b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4b4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da4b8: 0x244700cc  addiu       $a3, $v0, 0xCC
    ctx->pc = 0x1da4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1da4bc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1da4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4c4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DA4C4u;
    SET_GPR_U32(ctx, 31, 0x1DA4CCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DA4C4u, 0x1DA4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA4CCu;
label_1da4cc:
    // 0x1da4cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1da4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1da4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1da4d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1da4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1da4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4dc: 0xc08c49c  jal         func_231270
    ctx->pc = 0x1DA4DCu;
    SET_GPR_U32(ctx, 31, 0x1DA4E4u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x1DA4DCu, 0x1DA4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA4E4u;
label_1da4e4:
    // 0x1da4e4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1da4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1da4e8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1da4e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1da4ec: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x1da4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da4f0: 0x46021832  c.eq.s      $f3, $f2
    ctx->pc = 0x1da4f0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da4f4: 0x45000099  bc1f        . + 4 + (0x99 << 2)
    ctx->pc = 0x1DA4F4u;
    {
        const bool branch_taken_0x1da4f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da4f4) {
            ctx->pc = 0x1DA75Cu;
            goto label_1da75c;
        }
    }
    ctx->pc = 0x1DA4FCu;
    // 0x1da4fc: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1DA4FCu;
    SET_GPR_U32(ctx, 31, 0x1DA504u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1DA4FCu, 0x1DA504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA504u;
label_1da504:
    // 0x1da504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da508: 0x24050168  addiu       $a1, $zero, 0x168
    ctx->pc = 0x1da508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1da50c: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1da50cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1da510: 0x3010  mfhi        $a2
    ctx->pc = 0x1da510u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1da514: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA514u;
    {
        const bool branch_taken_0x1da514 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1da514) {
            ctx->pc = 0x1DA530u;
            goto label_1da530;
        }
    }
    ctx->pc = 0x1DA51Cu;
    // 0x1da51c: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1da51cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da520: 0x0  nop
    ctx->pc = 0x1da520u;
    // NOP
    // 0x1da524: 0x46806060  cvt.s.w     $f1, $f12
    ctx->pc = 0x1da524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1da528: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA528u;
    {
        const bool branch_taken_0x1da528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da528) {
            ctx->pc = 0x1DA54Cu;
            goto label_1da54c;
        }
    }
    ctx->pc = 0x1DA530u;
label_1da530:
    // 0x1da530: 0x6b842  srl         $s7, $a2, 1
    ctx->pc = 0x1da530u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1da534: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1da534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1da538: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x1da538u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x1da53c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x1da53cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da540: 0x0  nop
    ctx->pc = 0x1da540u;
    // NOP
    // 0x1da544: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1da544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1da548: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1da548u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1da54c:
    // 0x1da54c: 0xc780825c  lwc1        $f0, -0x7DA4($gp)
    ctx->pc = 0x1da54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da550: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1da550u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1da554: 0xe7ac013c  swc1        $f12, 0x13C($sp)
    ctx->pc = 0x1da554u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1da558: 0xc7ac013c  lwc1        $f12, 0x13C($sp)
    ctx->pc = 0x1da558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da55c: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1DA55Cu;
    SET_GPR_U32(ctx, 31, 0x1DA564u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1DA55Cu, 0x1DA564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA564u;
label_1da564:
    // 0x1da564: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1da564u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1da568: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1da568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da56c: 0x24e600e4  addiu       $a2, $a3, 0xE4
    ctx->pc = 0x1da56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 228));
    // 0x1da570: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1da570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da574: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da578: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DA578u;
    SET_GPR_U32(ctx, 31, 0x1DA580u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DA578u, 0x1DA580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA580u;
label_1da580:
    // 0x1da580: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1da580u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1da584: 0xc7ac013c  lwc1        $f12, 0x13C($sp)
    ctx->pc = 0x1da584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da588: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1DA588u;
    SET_GPR_U32(ctx, 31, 0x1DA590u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1DA588u, 0x1DA590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA590u;
label_1da590:
    // 0x1da590: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1da590u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1da594: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1da594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da598: 0x246400e4  addiu       $a0, $v1, 0xE4
    ctx->pc = 0x1da598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 228));
    // 0x1da59c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5a0: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DA5A0u;
    SET_GPR_U32(ctx, 31, 0x1DA5A8u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DA5A0u, 0x1DA5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA5A8u;
label_1da5a8:
    // 0x1da5a8: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1da5a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1da5ac: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1da5acu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da5b0: 0x8ee50040  lw          $a1, 0x40($s7)
    ctx->pc = 0x1da5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
    // 0x1da5b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1da5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5b8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DA5B8u;
    SET_GPR_U32(ctx, 31, 0x1DA5C0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DA5B8u, 0x1DA5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA5C0u;
label_1da5c0:
    // 0x1da5c0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1da5c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5c4: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1da5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da5c8: 0x24e200cc  addiu       $v0, $a3, 0xCC
    ctx->pc = 0x1da5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 204));
    // 0x1da5cc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1da5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1da5d0: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1da5d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1da5d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DA5D8u;
    SET_GPR_U32(ctx, 31, 0x1DA5E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DA5D8u, 0x1DA5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA5E0u;
label_1da5e0:
    // 0x1da5e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1da5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da5e4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1da5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1da5e8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da5ec: 0x244400e4  addiu       $a0, $v0, 0xE4
    ctx->pc = 0x1da5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
    // 0x1da5f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da5f4: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DA5F4u;
    SET_GPR_U32(ctx, 31, 0x1DA5FCu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DA5F4u, 0x1DA5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA5FCu;
label_1da5fc:
    // 0x1da5fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da600: 0x3c064270  lui         $a2, 0x4270
    ctx->pc = 0x1da600u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17008 << 16));
    // 0x1da604: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1da604u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da608: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1da608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da60c: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x1da60cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1da610: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1da610u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da614: 0x24e200e4  addiu       $v0, $a3, 0xE4
    ctx->pc = 0x1da614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 228));
    // 0x1da618: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da61c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da620: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DA620u;
    SET_GPR_U32(ctx, 31, 0x1DA628u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DA620u, 0x1DA628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA628u;
label_1da628:
    // 0x1da628: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x1da628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x1da62c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1da62cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da630: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1da630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da634: 0x46006342  mul.s       $f13, $f12, $f0
    ctx->pc = 0x1da634u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1da638: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1da638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da63c: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x1da63cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1da640: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1da640u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1da644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da648: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DA648u;
    SET_GPR_U32(ctx, 31, 0x1DA650u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DA648u, 0x1DA650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA650u;
label_1da650:
    // 0x1da650: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da654: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1da654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da658: 0x8cfe0040  lw          $fp, 0x40($a3)
    ctx->pc = 0x1da658u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1da65c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1da65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da660: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DA660u;
    SET_GPR_U32(ctx, 31, 0x1DA668u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DA660u, 0x1DA668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA668u;
label_1da668:
    // 0x1da668: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1da668u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da66c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da670: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1da670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1da674: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da678: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DA678u;
    SET_GPR_U32(ctx, 31, 0x1DA680u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DA678u, 0x1DA680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA680u;
label_1da680:
    // 0x1da680: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da684: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1da684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da688: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1da688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da68c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1da68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da690: 0xc78c8278  lwc1        $f12, -0x7D88($gp)
    ctx->pc = 0x1da690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da694: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DA694u;
    SET_GPR_U32(ctx, 31, 0x1DA69Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DA694u, 0x1DA69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA69Cu;
label_1da69c:
    // 0x1da69c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1da69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6a0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da6a4: 0x8c5e0040  lw          $fp, 0x40($v0)
    ctx->pc = 0x1da6a4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1da6a8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1da6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6ac: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DA6ACu;
    SET_GPR_U32(ctx, 31, 0x1DA6B4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DA6ACu, 0x1DA6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA6B4u;
label_1da6b4:
    // 0x1da6b4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1da6b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6b8: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1da6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da6bc: 0x248200cc  addiu       $v0, $a0, 0xCC
    ctx->pc = 0x1da6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 204));
    // 0x1da6c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6c8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DA6C8u;
    SET_GPR_U32(ctx, 31, 0x1DA6D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DA6C8u, 0x1DA6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA6D0u;
label_1da6d0:
    // 0x1da6d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6d4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1da6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da6d8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1da6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1da6dc: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1da6dcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da6e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1da6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1da6e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1da6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1da6e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1da6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1da6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6f0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1da6f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1da6f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1da6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da6fc: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DA6FCu;
    SET_GPR_U32(ctx, 31, 0x1DA704u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DA6FCu, 0x1DA704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA704u;
label_1da704:
    // 0x1da704: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1da704u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da708: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1da708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da70c: 0x8cc70040  lw          $a3, 0x40($a2)
    ctx->pc = 0x1da70cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1da710: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1da710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da714: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DA714u;
    SET_GPR_U32(ctx, 31, 0x1DA71Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DA714u, 0x1DA71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA71Cu;
label_1da71c:
    // 0x1da71c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1da71cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da720: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1da720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da724: 0x24a600cc  addiu       $a2, $a1, 0xCC
    ctx->pc = 0x1da724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 204));
    // 0x1da728: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1da728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da72c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da730: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DA730u;
    SET_GPR_U32(ctx, 31, 0x1DA738u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DA730u, 0x1DA738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA738u;
label_1da738:
    // 0x1da738: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1da738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da73c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1da73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da740: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1da740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da744: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1da744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da748: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DA748u;
    SET_GPR_U32(ctx, 31, 0x1DA750u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DA748u, 0x1DA750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA750u;
label_1da750:
    // 0x1da750: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da754: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DA754u;
    {
        const bool branch_taken_0x1da754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da754) {
            ctx->pc = 0x1DA784u;
            goto label_1da784;
        }
    }
    ctx->pc = 0x1DA75Cu;
label_1da75c:
    // 0x1da75c: 0x26170001  addiu       $s7, $s0, 0x1
    ctx->pc = 0x1da75cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1da760: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x1da760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1da764:
    // 0x1da764: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1da764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da768: 0x24c700cc  addiu       $a3, $a2, 0xCC
    ctx->pc = 0x1da768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 204));
    // 0x1da76c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1da76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da770: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DA770u;
    SET_GPR_U32(ctx, 31, 0x1DA778u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DA770u, 0x1DA778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA778u;
label_1da778:
    // 0x1da778: 0x202382b  sltu        $a3, $s0, $v0
    ctx->pc = 0x1da778u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1da77c: 0x14e0ff47  bnez        $a3, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x1DA77Cu;
    {
        const bool branch_taken_0x1da77c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da77c) {
            ctx->pc = 0x1DA49Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da49c;
        }
    }
    ctx->pc = 0x1DA784u;
label_1da784:
    // 0x1da784: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x1da784u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1da788: 0x102000d2  beqz        $at, . + 4 + (0xD2 << 2)
    ctx->pc = 0x1DA788u;
    {
        const bool branch_taken_0x1da788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da788) {
            ctx->pc = 0x1DAAD4u;
            goto label_1daad4;
        }
    }
    ctx->pc = 0x1DA790u;
    // 0x1da790: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1da790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da794: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1da794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da798: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA798u;
    {
        const bool branch_taken_0x1da798 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da798) {
            ctx->pc = 0x1DA7C0u;
            goto label_1da7c0;
        }
    }
    ctx->pc = 0x1DA7A0u;
    // 0x1da7a0: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1DA7A0u;
    SET_GPR_U32(ctx, 31, 0x1DA7A8u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1DA7A0u, 0x1DA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7A8u;
label_1da7a8:
    // 0x1da7a8: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1da7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1da7ac: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x1da7acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1da7b0: 0xa03026  xor         $a2, $a1, $zero
    ctx->pc = 0x1da7b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
    // 0x1da7b4: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x1da7b4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1da7b8: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1da7b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1da7bc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1da7bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1da7c0:
    // 0x1da7c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da7c4: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA7C4u;
    {
        const bool branch_taken_0x1da7c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da7c4) {
            ctx->pc = 0x1DA7ECu;
            goto label_1da7ec;
        }
    }
    ctx->pc = 0x1DA7CCu;
    // 0x1da7cc: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1DA7CCu;
    SET_GPR_U32(ctx, 31, 0x1DA7D4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1DA7CCu, 0x1DA7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7D4u;
label_1da7d4:
    // 0x1da7d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1da7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da7d8: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x1da7d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1da7dc: 0x801826  xor         $v1, $a0, $zero
    ctx->pc = 0x1da7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
    // 0x1da7e0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1da7e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1da7e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1da7e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1da7e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1da7e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da7ec:
    // 0x1da7ec: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA7ECu;
    {
        const bool branch_taken_0x1da7ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da7ec) {
            ctx->pc = 0x1DA800u;
            goto label_1da800;
        }
    }
    ctx->pc = 0x1DA7F4u;
    // 0x1da7f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da7f8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1da7f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da7fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1da7fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1da800:
    // 0x1da800: 0x126000b4  beqz        $s3, . + 4 + (0xB4 << 2)
    ctx->pc = 0x1DA800u;
    {
        const bool branch_taken_0x1da800 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da800) {
            ctx->pc = 0x1DAAD4u;
            goto label_1daad4;
        }
    }
    ctx->pc = 0x1DA808u;
    // 0x1da808: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1da808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da80c: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x1DA80Cu;
    {
        const bool branch_taken_0x1da80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da80c) {
            ctx->pc = 0x1DAAB4u;
            goto label_1daab4;
        }
    }
    ctx->pc = 0x1DA814u;
label_1da814:
    // 0x1da814: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1da814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da818: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x1da818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1da81c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1da81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da820: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DA820u;
    SET_GPR_U32(ctx, 31, 0x1DA828u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DA820u, 0x1DA828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA828u;
label_1da828:
    // 0x1da828: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1da828u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da82c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da830: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1da830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1da834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da838: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DA838u;
    SET_GPR_U32(ctx, 31, 0x1DA840u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DA838u, 0x1DA840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA840u;
label_1da840:
    // 0x1da840: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1da840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da844: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1da844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da848: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1da848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da84c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1da84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da850: 0xc08c49c  jal         func_231270
    ctx->pc = 0x1DA850u;
    SET_GPR_U32(ctx, 31, 0x1DA858u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x1DA850u, 0x1DA858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA858u;
label_1da858:
    // 0x1da858: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1da858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1da85c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1da85cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da860: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x1da860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da864: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1da864u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da868: 0x45000091  bc1f        . + 4 + (0x91 << 2)
    ctx->pc = 0x1DA868u;
    {
        const bool branch_taken_0x1da868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da868) {
            ctx->pc = 0x1DAAB0u;
            goto label_1daab0;
        }
    }
    ctx->pc = 0x1DA870u;
    // 0x1da870: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1DA870u;
    SET_GPR_U32(ctx, 31, 0x1DA878u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1DA870u, 0x1DA878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA878u;
label_1da878:
    // 0x1da878: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1da878u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da87c: 0x24050168  addiu       $a1, $zero, 0x168
    ctx->pc = 0x1da87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1da880: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x1da880u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1da884: 0x3010  mfhi        $a2
    ctx->pc = 0x1da884u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1da888: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA888u;
    {
        const bool branch_taken_0x1da888 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1da888) {
            ctx->pc = 0x1DA8A4u;
            goto label_1da8a4;
        }
    }
    ctx->pc = 0x1DA890u;
    // 0x1da890: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1da890u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da894: 0x0  nop
    ctx->pc = 0x1da894u;
    // NOP
    // 0x1da898: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1da898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1da89c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA89Cu;
    {
        const bool branch_taken_0x1da89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da89c) {
            ctx->pc = 0x1DA8C0u;
            goto label_1da8c0;
        }
    }
    ctx->pc = 0x1DA8A4u;
label_1da8a4:
    // 0x1da8a4: 0x63842  srl         $a3, $a2, 1
    ctx->pc = 0x1da8a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x1da8a8: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x1da8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1da8ac: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1da8acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1da8b0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1da8b0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da8b4: 0x0  nop
    ctx->pc = 0x1da8b4u;
    // NOP
    // 0x1da8b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1da8b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1da8bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1da8bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1da8c0:
    // 0x1da8c0: 0xc780825c  lwc1        $f0, -0x7DA4($gp)
    ctx->pc = 0x1da8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da8c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1da8c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1da8c8: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1da8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1da8cc: 0xc7ac0134  lwc1        $f12, 0x134($sp)
    ctx->pc = 0x1da8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da8d0: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1DA8D0u;
    SET_GPR_U32(ctx, 31, 0x1DA8D8u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1DA8D0u, 0x1DA8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8D8u;
label_1da8d8:
    // 0x1da8d8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1da8d8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1da8dc: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1da8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da8e0: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x1da8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x1da8e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1da8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8ec: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DA8ECu;
    SET_GPR_U32(ctx, 31, 0x1DA8F4u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DA8ECu, 0x1DA8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8F4u;
label_1da8f4:
    // 0x1da8f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1da8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8f8: 0xe4f50000  swc1        $f21, 0x0($a3)
    ctx->pc = 0x1da8f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1da8fc: 0xc7ac0134  lwc1        $f12, 0x134($sp)
    ctx->pc = 0x1da8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da900: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1DA900u;
    SET_GPR_U32(ctx, 31, 0x1DA908u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1DA900u, 0x1DA908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA908u;
label_1da908:
    // 0x1da908: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1da908u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1da90c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da910: 0x244300f0  addiu       $v1, $v0, 0xF0
    ctx->pc = 0x1da910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1da914: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1da914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da918: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da91c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DA91Cu;
    SET_GPR_U32(ctx, 31, 0x1DA924u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DA91Cu, 0x1DA924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA924u;
label_1da924:
    // 0x1da924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da928: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x1da928u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1da92c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da930: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1da930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1da934: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DA934u;
    SET_GPR_U32(ctx, 31, 0x1DA93Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DA934u, 0x1DA93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA93Cu;
label_1da93c:
    // 0x1da93c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1da93cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da940: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1da940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da944: 0x24c700d8  addiu       $a3, $a2, 0xD8
    ctx->pc = 0x1da944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 216));
    // 0x1da948: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1da948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da94c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da950: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DA950u;
    SET_GPR_U32(ctx, 31, 0x1DA958u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DA950u, 0x1DA958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA958u;
label_1da958:
    // 0x1da958: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x1da958u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da95c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da960: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1da960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1da964: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da968: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DA968u;
    SET_GPR_U32(ctx, 31, 0x1DA970u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DA968u, 0x1DA970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA970u;
label_1da970:
    // 0x1da970: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1da970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da974: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1da974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1da978: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1da978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da97c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1da97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da980: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1da980u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1da984: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1da984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da988: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x1da988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x1da98c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1da98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da994: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DA994u;
    SET_GPR_U32(ctx, 31, 0x1DA99Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DA994u, 0x1DA99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA99Cu;
label_1da99c:
    // 0x1da99c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1da99cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9a0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1da9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1da9a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1da9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da9a8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1da9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da9ac: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1da9acu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1da9b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1da9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9b4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1da9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1da9b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1da9bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1da9bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9c0: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DA9C0u;
    SET_GPR_U32(ctx, 31, 0x1DA9C8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DA9C0u, 0x1DA9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9C8u;
label_1da9c8:
    // 0x1da9c8: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1da9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da9cc: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x1da9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1da9d0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DA9D0u;
    SET_GPR_U32(ctx, 31, 0x1DA9D8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DA9D0u, 0x1DA9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9D8u;
label_1da9d8:
    // 0x1da9d8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1da9d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9dc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1da9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1da9e0: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1da9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1da9e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9e8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DA9E8u;
    SET_GPR_U32(ctx, 31, 0x1DA9F0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DA9E8u, 0x1DA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9F0u;
label_1da9f0:
    // 0x1da9f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1da9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da9f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1da9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9f8: 0xc78c8278  lwc1        $f12, -0x7D88($gp)
    ctx->pc = 0x1da9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da9fc: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DA9FCu;
    SET_GPR_U32(ctx, 31, 0x1DAA04u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DA9FCu, 0x1DAA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA04u;
label_1daa04:
    // 0x1daa04: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1daa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daa08: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1daa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1daa0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1daa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa10: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DAA10u;
    SET_GPR_U32(ctx, 31, 0x1DAA18u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DAA10u, 0x1DAA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA18u;
label_1daa18:
    // 0x1daa18: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1daa18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa1c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1daa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daa20: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1daa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1daa24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1daa24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa28: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DAA28u;
    SET_GPR_U32(ctx, 31, 0x1DAA30u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DAA28u, 0x1DAA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA30u;
label_1daa30:
    // 0x1daa30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1daa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1daa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1daa38: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1daa38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1daa3c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1daa3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1daa40: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1daa40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1daa44: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1daa44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1daa48: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1daa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1daa4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1daa50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1daa54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1daa58: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DAA58u;
    SET_GPR_U32(ctx, 31, 0x1DAA60u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DAA58u, 0x1DAA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA60u;
label_1daa60:
    // 0x1daa60: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1daa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daa64: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x1daa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1daa68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1daa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa6c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DAA6Cu;
    SET_GPR_U32(ctx, 31, 0x1DAA74u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DAA6Cu, 0x1DAA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA74u;
label_1daa74:
    // 0x1daa74: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1daa74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa78: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1daa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daa7c: 0x248200d8  addiu       $v0, $a0, 0xD8
    ctx->pc = 0x1daa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x1daa80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1daa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1daa84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa88: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DAA88u;
    SET_GPR_U32(ctx, 31, 0x1DAA90u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DAA88u, 0x1DAA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA90u;
label_1daa90:
    // 0x1daa90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1daa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa94: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1daa94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1daa98: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1daa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1daa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1daaa0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DAAA0u;
    SET_GPR_U32(ctx, 31, 0x1DAAA8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DAAA0u, 0x1DAAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAAA8u;
label_1daaa8:
    // 0x1daaa8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DAAA8u;
    {
        const bool branch_taken_0x1daaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daaa8) {
            ctx->pc = 0x1DAAD4u;
            goto label_1daad4;
        }
    }
    ctx->pc = 0x1DAAB0u;
label_1daab0:
    // 0x1daab0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1daab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1daab4:
    // 0x1daab4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1daab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daab8: 0x244600d8  addiu       $a2, $v0, 0xD8
    ctx->pc = 0x1daab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1daabc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1daabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daac0: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DAAC0u;
    SET_GPR_U32(ctx, 31, 0x1DAAC8u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DAAC0u, 0x1DAAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAAC8u;
label_1daac8:
    // 0x1daac8: 0x202282b  sltu        $a1, $s0, $v0
    ctx->pc = 0x1daac8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1daacc: 0x14a0ff51  bnez        $a1, . + 4 + (-0xAF << 2)
    ctx->pc = 0x1DAACCu;
    {
        const bool branch_taken_0x1daacc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daacc) {
            ctx->pc = 0x1DA814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da814;
        }
    }
    ctx->pc = 0x1DAAD4u;
label_1daad4:
    // 0x1daad4: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1daad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daad8: 0xc46100fc  lwc1        $f1, 0xFC($v1)
    ctx->pc = 0x1daad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1daadc: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x1daadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daae0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1daae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1daae4: 0x4501019b  bc1t        . + 4 + (0x19B << 2)
    ctx->pc = 0x1DAAE4u;
    {
        const bool branch_taken_0x1daae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1daae4) {
            ctx->pc = 0x1DB154u;
            goto label_1db154;
        }
    }
    ctx->pc = 0x1DAAECu;
    // 0x1daaec: 0xc7818290  lwc1        $f1, -0x7D70($gp)
    ctx->pc = 0x1daaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1daaf0: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x1daaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daaf4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1daaf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1daaf8: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1daaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daafc: 0xe48100fc  swc1        $f1, 0xFC($a0)
    ctx->pc = 0x1daafcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
    // 0x1dab00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dab00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab04: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1DAB04u;
    {
        const bool branch_taken_0x1dab04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dab04) {
            ctx->pc = 0x1DADECu;
            goto label_1dadec;
        }
    }
    ctx->pc = 0x1DAB0Cu;
label_1dab0c:
    // 0x1dab0c: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1dab0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dab10: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x1dab10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1dab14: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1dab14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab18: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DAB18u;
    SET_GPR_U32(ctx, 31, 0x1DAB20u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DAB18u, 0x1DAB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB20u;
label_1dab20:
    // 0x1dab20: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dab20u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab24: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1dab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dab28: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1dab28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1dab2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dab2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab30: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DAB30u;
    SET_GPR_U32(ctx, 31, 0x1DAB38u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DAB30u, 0x1DAB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB38u;
label_1dab38:
    // 0x1dab38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dab38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dab3c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dab3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab40: 0xc08c49c  jal         func_231270
    ctx->pc = 0x1DAB40u;
    SET_GPR_U32(ctx, 31, 0x1DAB48u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x1DAB40u, 0x1DAB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB48u;
label_1dab48:
    // 0x1dab48: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1dab48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1dab4c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x1dab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dab50: 0xc7818044  lwc1        $f1, -0x7FBC($gp)
    ctx->pc = 0x1dab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dab54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1dab54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1dab58: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x1dab58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1dab5c: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x1dab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dab60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dab60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dab64: 0x0  nop
    ctx->pc = 0x1dab64u;
    // NOP
    // 0x1dab68: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1dab68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dab6c: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1DAB6Cu;
    {
        const bool branch_taken_0x1dab6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dab6c) {
            ctx->pc = 0x1DAC04u;
            goto label_1dac04;
        }
    }
    ctx->pc = 0x1DAB74u;
    // 0x1dab74: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1dab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dab78: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dab78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dab7c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DAB7Cu;
    SET_GPR_U32(ctx, 31, 0x1DAB84u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DAB7Cu, 0x1DAB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB84u;
label_1dab84:
    // 0x1dab84: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dab84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab88: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1dab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dab8c: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1dab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1dab90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dab90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab94: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DAB94u;
    SET_GPR_U32(ctx, 31, 0x1DAB9Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DAB94u, 0x1DAB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB9Cu;
label_1dab9c:
    // 0x1dab9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dab9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1daba0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1daba0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1daba4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1daba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daba8: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x1daba8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x1dabac: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DABACu;
    SET_GPR_U32(ctx, 31, 0x1DABB4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DABACu, 0x1DABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DABB4u;
label_1dabb4:
    // 0x1dabb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dabb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabb8: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1dabb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dabbc: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x1dabbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1dabc0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1dabc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabc4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DABC4u;
    SET_GPR_U32(ctx, 31, 0x1DABCCu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DABC4u, 0x1DABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DABCCu;
label_1dabcc:
    // 0x1dabcc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dabccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabd0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1dabd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dabd4: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1dabd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1dabd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dabd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabdc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DABDCu;
    SET_GPR_U32(ctx, 31, 0x1DABE4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DABDCu, 0x1DABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DABE4u;
label_1dabe4:
    // 0x1dabe4: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1dabe4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dabe8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dabe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1dabecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dabf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabf4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DABF4u;
    SET_GPR_U32(ctx, 31, 0x1DABFCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DABF4u, 0x1DABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DABFCu;
label_1dabfc:
    // 0x1dabfc: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x1DABFCu;
    {
        const bool branch_taken_0x1dabfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dabfc) {
            ctx->pc = 0x1DADE4u;
            goto label_1dade4;
        }
    }
    ctx->pc = 0x1DAC04u;
label_1dac04:
    // 0x1dac04: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1dac04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dac08: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x1dac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1dac0c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1dac0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac10: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DAC10u;
    SET_GPR_U32(ctx, 31, 0x1DAC18u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DAC10u, 0x1DAC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC18u;
label_1dac18:
    // 0x1dac18: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dac18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac1c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1dac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dac20: 0x248200cc  addiu       $v0, $a0, 0xCC
    ctx->pc = 0x1dac20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 204));
    // 0x1dac24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dac24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dac28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac2c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DAC2Cu;
    SET_GPR_U32(ctx, 31, 0x1DAC34u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DAC2Cu, 0x1DAC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC34u;
label_1dac34:
    // 0x1dac34: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1dac34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac38: 0x8ebe0000  lw          $fp, 0x0($s5)
    ctx->pc = 0x1dac38u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1dac3c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1dac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dac40: 0x244400e4  addiu       $a0, $v0, 0xE4
    ctx->pc = 0x1dac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
    // 0x1dac44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dac44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac48: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DAC48u;
    SET_GPR_U32(ctx, 31, 0x1DAC50u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DAC48u, 0x1DAC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC50u;
label_1dac50:
    // 0x1dac50: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1dac50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1dac54: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1dac54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1dac58: 0xc44f0000  lwc1        $f15, 0x0($v0)
    ctx->pc = 0x1dac58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1dac5c: 0x460f7502  mul.s       $f20, $f14, $f15
    ctx->pc = 0x1dac5cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[14], ctx->f[15]);
    // 0x1dac60: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1dac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dac64: 0x244400e4  addiu       $a0, $v0, 0xE4
    ctx->pc = 0x1dac64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
    // 0x1dac68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac6c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DAC6Cu;
    SET_GPR_U32(ctx, 31, 0x1DAC74u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DAC6Cu, 0x1DAC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC74u;
label_1dac74:
    // 0x1dac74: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1dac74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1dac78: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1dac78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dac7c: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x1dac7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dac80: 0x460d6382  mul.s       $f14, $f12, $f13
    ctx->pc = 0x1dac80u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1dac84: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac88: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1dac88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dac8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dac90: 0x46007346  mov.s       $f13, $f14
    ctx->pc = 0x1dac90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
    // 0x1dac94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dac94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dac98: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DAC98u;
    SET_GPR_U32(ctx, 31, 0x1DACA0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DAC98u, 0x1DACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACA0u;
label_1daca0:
    // 0x1daca0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1daca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daca4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1daca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1daca8: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DACA8u;
    SET_GPR_U32(ctx, 31, 0x1DACB0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DACA8u, 0x1DACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACB0u;
label_1dacb0:
    // 0x1dacb0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dacb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacb4: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1dacb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dacb8: 0x244500cc  addiu       $a1, $v0, 0xCC
    ctx->pc = 0x1dacb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1dacbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1dacbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dacc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacc4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DACC4u;
    SET_GPR_U32(ctx, 31, 0x1DACCCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DACC4u, 0x1DACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACCCu;
label_1daccc:
    // 0x1daccc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dacccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacd0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1dacd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dacd4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dacd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacd8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1dacd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacdc: 0xc7af0130  lwc1        $f15, 0x130($sp)
    ctx->pc = 0x1dacdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1dace0: 0x46007b06  mov.s       $f12, $f15
    ctx->pc = 0x1dace0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[15]);
    // 0x1dace4: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DACE4u;
    SET_GPR_U32(ctx, 31, 0x1DACECu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DACE4u, 0x1DACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACECu;
label_1dacec:
    // 0x1dacec: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1dacecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dacf0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x1dacf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dacf4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DACF4u;
    SET_GPR_U32(ctx, 31, 0x1DACFCu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DACF4u, 0x1DACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACFCu;
label_1dacfc:
    // 0x1dacfc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dacfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad00: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1dad00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dad04: 0x24c200cc  addiu       $v0, $a2, 0xCC
    ctx->pc = 0x1dad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 204));
    // 0x1dad08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad10: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DAD10u;
    SET_GPR_U32(ctx, 31, 0x1DAD18u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DAD10u, 0x1DAD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD18u;
label_1dad18:
    // 0x1dad18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dad18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad1c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1dad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dad20: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dad20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad24: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1dad24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dad28: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1DAD28u;
    SET_GPR_U32(ctx, 31, 0x1DAD30u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1DAD28u, 0x1DAD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD30u;
label_1dad30:
    // 0x1dad30: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1dad30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dad34: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x1dad34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1dad38: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1dad38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad3c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DAD3Cu;
    SET_GPR_U32(ctx, 31, 0x1DAD44u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DAD3Cu, 0x1DAD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD44u;
label_1dad44:
    // 0x1dad44: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dad44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad48: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1dad48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dad4c: 0x24e200cc  addiu       $v0, $a3, 0xCC
    ctx->pc = 0x1dad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 204));
    // 0x1dad50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dad50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dad54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad58: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DAD58u;
    SET_GPR_U32(ctx, 31, 0x1DAD60u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DAD58u, 0x1DAD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD60u;
label_1dad60:
    // 0x1dad60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dad60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad64: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1dad64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dad68: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dad68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad6c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1dad6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1dad70: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1dad70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dad74: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1dad74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1dad78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dad78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dad7c: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1DAD7Cu;
    SET_GPR_U32(ctx, 31, 0x1DAD84u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1DAD7Cu, 0x1DAD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD84u;
label_1dad84:
    // 0x1dad84: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1dad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dad88: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x1dad88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1dad8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1dad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad90: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DAD90u;
    SET_GPR_U32(ctx, 31, 0x1DAD98u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DAD90u, 0x1DAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD98u;
label_1dad98:
    // 0x1dad98: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dad98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad9c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1dad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dada0: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1dada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1dada4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dada4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dada8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DADA8u;
    SET_GPR_U32(ctx, 31, 0x1DADB0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DADA8u, 0x1DADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DADB0u;
label_1dadb0:
    // 0x1dadb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dadb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadb4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1dadb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dadb8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dadb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadbc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1dadbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadc0: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x1dadc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dadc4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1dadc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1dadc8: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x1dadc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dadcc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1dadccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1dadd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dadd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dadd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dadd8: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DADD8u;
    SET_GPR_U32(ctx, 31, 0x1DADE0u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DADD8u, 0x1DADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DADE0u;
label_1dade0:
    // 0x1dade0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dade0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dade4:
    // 0x1dade4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1dade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dade8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dade8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dadec:
    // 0x1dadec: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1dadecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dadf0: 0x248500cc  addiu       $a1, $a0, 0xCC
    ctx->pc = 0x1dadf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 204));
    // 0x1dadf4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1dadf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadf8: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DADF8u;
    SET_GPR_U32(ctx, 31, 0x1DAE00u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DADF8u, 0x1DAE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE00u;
label_1dae00:
    // 0x1dae00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dae00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae04: 0x206382b  sltu        $a3, $s0, $a2
    ctx->pc = 0x1dae04u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1dae08: 0x14e0ff40  bnez        $a3, . + 4 + (-0xC0 << 2)
    ctx->pc = 0x1DAE08u;
    {
        const bool branch_taken_0x1dae08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dae08) {
            ctx->pc = 0x1DAB0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dab0c;
        }
    }
    ctx->pc = 0x1DAE10u;
    // 0x1dae10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dae10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae14: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x1DAE14u;
    {
        const bool branch_taken_0x1dae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dae14) {
            ctx->pc = 0x1DB130u;
            goto label_1db130;
        }
    }
    ctx->pc = 0x1DAE1Cu;
label_1dae1c:
    // 0x1dae1c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1dae1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dae20: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x1dae20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1dae24: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1dae24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae28: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DAE28u;
    SET_GPR_U32(ctx, 31, 0x1DAE30u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DAE28u, 0x1DAE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE30u;
label_1dae30:
    // 0x1dae30: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1dae30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae34: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1dae34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dae38: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1dae38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1dae3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dae3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae40: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DAE40u;
    SET_GPR_U32(ctx, 31, 0x1DAE48u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DAE40u, 0x1DAE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE48u;
label_1dae48:
    // 0x1dae48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dae48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae4c: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x1dae4cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dae50: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dae50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dae54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae58: 0xc08c49c  jal         func_231270
    ctx->pc = 0x1DAE58u;
    SET_GPR_U32(ctx, 31, 0x1DAE60u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x1DAE58u, 0x1DAE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE60u;
label_1dae60:
    // 0x1dae60: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1dae60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1dae64: 0xe7ac012c  swc1        $f12, 0x12C($sp)
    ctx->pc = 0x1dae64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1dae68: 0xc7ad012c  lwc1        $f13, 0x12C($sp)
    ctx->pc = 0x1dae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1dae6c: 0xc78e8044  lwc1        $f14, -0x7FBC($gp)
    ctx->pc = 0x1dae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1dae70: 0x460e6bc1  sub.s       $f15, $f13, $f14
    ctx->pc = 0x1dae70u;
    ctx->f[15] = FPU_SUB_S(ctx->f[13], ctx->f[14]);
    // 0x1dae74: 0xe7af012c  swc1        $f15, 0x12C($sp)
    ctx->pc = 0x1dae74u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1dae78: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x1dae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dae7c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1dae7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1dae80: 0x0  nop
    ctx->pc = 0x1dae80u;
    // NOP
    // 0x1dae84: 0x460d6036  c.le.s      $f12, $f13
    ctx->pc = 0x1dae84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dae88: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x1DAE88u;
    {
        const bool branch_taken_0x1dae88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dae88) {
            ctx->pc = 0x1DAF3Cu;
            goto label_1daf3c;
        }
    }
    ctx->pc = 0x1DAE90u;
    // 0x1dae90: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1dae90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dae94: 0x8c660040  lw          $a2, 0x40($v1)
    ctx->pc = 0x1dae94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1dae98: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1dae98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae9c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DAE9Cu;
    SET_GPR_U32(ctx, 31, 0x1DAEA4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DAE9Cu, 0x1DAEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEA4u;
label_1daea4:
    // 0x1daea4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1daea4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daea8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1daea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daeac: 0x244700d8  addiu       $a3, $v0, 0xD8
    ctx->pc = 0x1daeacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1daeb0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1daeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daeb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1daeb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daeb8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DAEB8u;
    SET_GPR_U32(ctx, 31, 0x1DAEC0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DAEB8u, 0x1DAEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEC0u;
label_1daec0:
    // 0x1daec0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1daec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daec4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1daec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1daec8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1daec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1daecc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1daeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daed0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1daed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daed4: 0x46007306  mov.s       $f12, $f14
    ctx->pc = 0x1daed4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
    // 0x1daed8: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DAED8u;
    SET_GPR_U32(ctx, 31, 0x1DAEE0u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DAED8u, 0x1DAEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEE0u;
label_1daee0:
    // 0x1daee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1daee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daee4: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1daee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daee8: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x1daee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1daeec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1daeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daef0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DAEF0u;
    SET_GPR_U32(ctx, 31, 0x1DAEF8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DAEF0u, 0x1DAEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEF8u;
label_1daef8:
    // 0x1daef8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1daef8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daefc: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1daefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daf00: 0x244700d8  addiu       $a3, $v0, 0xD8
    ctx->pc = 0x1daf00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1daf04: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1daf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1daf08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf0c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DAF0Cu;
    SET_GPR_U32(ctx, 31, 0x1DAF14u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DAF0Cu, 0x1DAF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF14u;
label_1daf14:
    // 0x1daf14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1daf14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf18: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1daf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1daf1c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1daf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1daf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1daf24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf28: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DAF28u;
    SET_GPR_U32(ctx, 31, 0x1DAF30u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DAF28u, 0x1DAF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF30u;
label_1daf30:
    // 0x1daf30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1daf30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf34: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1DAF34u;
    {
        const bool branch_taken_0x1daf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daf34) {
            ctx->pc = 0x1DB12Cu;
            goto label_1db12c;
        }
    }
    ctx->pc = 0x1DAF3Cu;
label_1daf3c:
    // 0x1daf3c: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x1daf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daf40: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1daf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1daf44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1daf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf48: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DAF48u;
    SET_GPR_U32(ctx, 31, 0x1DAF50u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DAF48u, 0x1DAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF50u;
label_1daf50:
    // 0x1daf50: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1daf50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf54: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1daf54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daf58: 0x24be00d8  addiu       $fp, $a1, 0xD8
    ctx->pc = 0x1daf58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 216));
    // 0x1daf5c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1daf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1daf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf64: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DAF64u;
    SET_GPR_U32(ctx, 31, 0x1DAF6Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DAF64u, 0x1DAF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF6Cu;
label_1daf6c:
    // 0x1daf6c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1daf6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf70: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1daf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1daf74: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1daf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1daf78: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1daf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daf7c: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x1daf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1daf80: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1daf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1daf84: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1daf84u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1daf88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1daf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf8c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DAF8Cu;
    SET_GPR_U32(ctx, 31, 0x1DAF94u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DAF8Cu, 0x1DAF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF94u;
label_1daf94:
    // 0x1daf94: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1daf94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1daf98: 0x44847800  mtc1        $a0, $f15
    ctx->pc = 0x1daf98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1daf9c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1daf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dafa0: 0x46007d02  mul.s       $f20, $f15, $f0
    ctx->pc = 0x1dafa0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x1dafa4: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1dafa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dafa8: 0x24a600f0  addiu       $a2, $a1, 0xF0
    ctx->pc = 0x1dafa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 240));
    // 0x1dafac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1dafacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dafb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dafb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dafb4: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1DAFB4u;
    SET_GPR_U32(ctx, 31, 0x1DAFBCu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1DAFB4u, 0x1DAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAFBCu;
label_1dafbc:
    // 0x1dafbc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1dafbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dafc0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1dafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1dafc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dafc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dafc8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1dafc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dafcc: 0x46006342  mul.s       $f13, $f12, $f0
    ctx->pc = 0x1dafccu;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1dafd0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dafd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dafd4: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x1dafd4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1dafd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dafd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dafdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dafdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dafe0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dafe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dafe4: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DAFE4u;
    SET_GPR_U32(ctx, 31, 0x1DAFECu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DAFE4u, 0x1DAFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAFECu;
label_1dafec:
    // 0x1dafec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dafecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daff0: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1daff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1daff4: 0x8ca70040  lw          $a3, 0x40($a1)
    ctx->pc = 0x1daff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1daff8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1daff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daffc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DAFFCu;
    SET_GPR_U32(ctx, 31, 0x1DB004u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DAFFCu, 0x1DB004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB004u;
label_1db004:
    // 0x1db004: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1db004u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db008: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1db008u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1db00c: 0x26e200d8  addiu       $v0, $s7, 0xD8
    ctx->pc = 0x1db00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 216));
    // 0x1db010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1db014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db018: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DB018u;
    SET_GPR_U32(ctx, 31, 0x1DB020u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DB018u, 0x1DB020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB020u;
label_1db020:
    // 0x1db020: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db024: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1db024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1db028: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1db028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db02c: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x1db02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1db030: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DB030u;
    SET_GPR_U32(ctx, 31, 0x1DB038u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DB030u, 0x1DB038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB038u;
label_1db038:
    // 0x1db038: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1db038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db03c: 0x8fa70180  lw          $a3, 0x180($sp)
    ctx->pc = 0x1db03cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1db040: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x1db040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1db044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1db044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db048: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DB048u;
    SET_GPR_U32(ctx, 31, 0x1DB050u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DB048u, 0x1DB050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB050u;
label_1db050:
    // 0x1db050: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1db050u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db054: 0x8fb70180  lw          $s7, 0x180($sp)
    ctx->pc = 0x1db054u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1db058: 0x26e400d8  addiu       $a0, $s7, 0xD8
    ctx->pc = 0x1db058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 216));
    // 0x1db05c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1db05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db060: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DB060u;
    SET_GPR_U32(ctx, 31, 0x1DB068u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DB060u, 0x1DB068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB068u;
label_1db068:
    // 0x1db068: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1db068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db06c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1db06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db070: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x1db070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1db074: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1DB074u;
    SET_GPR_U32(ctx, 31, 0x1DB07Cu);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1DB074u, 0x1DB07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB07Cu;
label_1db07c:
    // 0x1db07c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1db07cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db080: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1db080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1db084: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x1db084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1db088: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1db088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db08c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DB08Cu;
    SET_GPR_U32(ctx, 31, 0x1DB094u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DB08Cu, 0x1DB094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB094u;
label_1db094:
    // 0x1db094: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1db094u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db098: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1db098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1db09c: 0x24c700d8  addiu       $a3, $a2, 0xD8
    ctx->pc = 0x1db09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 216));
    // 0x1db0a0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1db0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1db0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0a8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DB0A8u;
    SET_GPR_U32(ctx, 31, 0x1DB0B0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DB0A8u, 0x1DB0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB0B0u;
label_1db0b0:
    // 0x1db0b0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1db0b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0b4: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x1db0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1db0b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1db0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0bc: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x1db0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1db0c0: 0xc78c8288  lwc1        $f12, -0x7D78($gp)
    ctx->pc = 0x1db0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1db0c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db0c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1db0c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0cc: 0xc08c64c  jal         func_231930
    ctx->pc = 0x1DB0CCu;
    SET_GPR_U32(ctx, 31, 0x1DB0D4u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1DB0CCu, 0x1DB0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB0D4u;
label_1db0d4:
    // 0x1db0d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1db0d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0d8: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1db0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1db0dc: 0x8cc40040  lw          $a0, 0x40($a2)
    ctx->pc = 0x1db0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x1db0e0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DB0E0u;
    SET_GPR_U32(ctx, 31, 0x1DB0E8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DB0E0u, 0x1DB0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB0E8u;
label_1db0e8:
    // 0x1db0e8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1db0e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0ec: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x1db0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1db0f0: 0x24c700d8  addiu       $a3, $a2, 0xD8
    ctx->pc = 0x1db0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 216));
    // 0x1db0f4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1db0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1db0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0fc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1DB0FCu;
    SET_GPR_U32(ctx, 31, 0x1DB104u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1DB0FCu, 0x1DB104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB104u;
label_1db104:
    // 0x1db104: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1db104u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db108: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1db108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db10c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1db10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db110: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x1db110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1db114: 0xc7ad012c  lwc1        $f13, 0x12C($sp)
    ctx->pc = 0x1db114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1db118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db11c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db120: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1db120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db124: 0xc08c544  jal         func_231510
    ctx->pc = 0x1DB124u;
    SET_GPR_U32(ctx, 31, 0x1DB12Cu);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1DB124u, 0x1DB12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB12Cu;
label_1db12c:
    // 0x1db12c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1db12cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1db130:
    // 0x1db130: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1db130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1db134: 0x24a600d8  addiu       $a2, $a1, 0xD8
    ctx->pc = 0x1db134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 216));
    // 0x1db138: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1db138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db13c: 0xc05611c  jal         func_158470
    ctx->pc = 0x1DB13Cu;
    SET_GPR_U32(ctx, 31, 0x1DB144u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1DB13Cu, 0x1DB144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB144u;
label_1db144:
    // 0x1db144: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1db144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db148: 0x207102b  sltu        $v0, $s0, $a3
    ctx->pc = 0x1db148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1db14c: 0x1440ff33  bnez        $v0, . + 4 + (-0xCD << 2)
    ctx->pc = 0x1DB14Cu;
    {
        const bool branch_taken_0x1db14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db14c) {
            ctx->pc = 0x1DAE1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dae1c;
        }
    }
    ctx->pc = 0x1DB154u;
label_1db154:
    // 0x1db154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db158: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1db158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1db15c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1db15cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1db160: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1db160u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1db164: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1db164u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1db168: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1db168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1db16c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1db16cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1db170: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1db170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db174: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1db174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db178: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1db178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db17c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1db17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db180: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1db180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1db184: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1db184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1db188: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x1db188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1db18c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB194u;
    // 0x1db194: 0x0  nop
    ctx->pc = 0x1db194u;
    // NOP
    // 0x1db198: 0x0  nop
    ctx->pc = 0x1db198u;
    // NOP
    // 0x1db19c: 0x0  nop
    ctx->pc = 0x1db19cu;
    // NOP
    ctx->pc = 0x1db1a0u;
}
