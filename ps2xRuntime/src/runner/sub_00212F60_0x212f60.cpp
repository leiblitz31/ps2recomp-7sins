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

// Function: sub_00212F60
// Address: 0x212f60 - 0x213590
void sub_00212F60_0x212f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212F60_0x212f60");
#endif

    switch (ctx->pc) {
        case 0x212f90u: goto label_212f90;
        case 0x213050u: goto label_213050;
        case 0x213070u: goto label_213070;
        case 0x2130c0u: goto label_2130c0;
        case 0x2131b4u: goto label_2131b4;
        case 0x213320u: goto label_213320;
        case 0x213338u: goto label_213338;
        case 0x213354u: goto label_213354;
        case 0x213364u: goto label_213364;
        case 0x21347cu: goto label_21347c;
        case 0x2134b4u: goto label_2134b4;
        case 0x21357cu: goto label_21357c;
        default: break;
    }

    ctx->pc = 0x212f60u;

    // 0x212f60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x212f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x212f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212f68: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x212f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x212f6c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x212f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x212f70: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x212f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212f74: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x212f74u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x212f78: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x212f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x212f7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x212f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212f80: 0x0  nop
    ctx->pc = 0x212f80u;
    // NOP
    // 0x212f84: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x212f84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x212f88: 0xc0c39dc  jal         func_30E770
    ctx->pc = 0x212F88u;
    SET_GPR_U32(ctx, 31, 0x212F90u);
    ctx->pc = 0x30E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E770u, 0x212F88u, 0x212F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212F90u;
label_212f90:
    // 0x212f90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x212f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x212f94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x212f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212f98: 0x0  nop
    ctx->pc = 0x212f98u;
    // NOP
    // 0x212f9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x212f9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x212fa0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x212fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x212fa4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x212fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x212fa8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x212fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212fac: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x212facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x212fb0: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x212fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212fb4: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x212fb4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x212fb8: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x212fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212fbc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x212fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x212fc0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x212fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212fc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212fc8: 0x0  nop
    ctx->pc = 0x212fc8u;
    // NOP
    // 0x212fcc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x212fccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x212fd0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x212fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x212fd4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x212fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x212fd8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x212fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x212fdc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x212fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212fe0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x212fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x212fe4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x212fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212fe8: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x212fe8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x212fec: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x212fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212ff0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x212ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x212ff4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x212ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212ffc: 0x0  nop
    ctx->pc = 0x212ffcu;
    // NOP
    // 0x213000: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x213000u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x213004: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x213004u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x213008: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x213008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x21300c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x21300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x213010: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x213010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213014: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x213014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x213018: 0xc783830c  lwc1        $f3, -0x7CF4($gp)
    ctx->pc = 0x213018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21301c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x21301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213020: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213024: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x213024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213028: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21302c: 0x0  nop
    ctx->pc = 0x21302cu;
    // NOP
    // 0x213030: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x213030u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x213034: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x213034u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x213038: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x213038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x21303c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213040: 0xc44c004c  lwc1        $f12, 0x4C($v0)
    ctx->pc = 0x213040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x213044: 0xc78d8300  lwc1        $f13, -0x7D00($gp)
    ctx->pc = 0x213044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x213048: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x213048u;
    SET_GPR_U32(ctx, 31, 0x213050u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x213048u, 0x213050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213050u;
label_213050:
    // 0x213050: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213054: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x213054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x213058: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21305c: 0xc7818310  lwc1        $f1, -0x7CF0($gp)
    ctx->pc = 0x21305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213060: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x213060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213064: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x213064u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213068: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x213068u;
    SET_GPR_U32(ctx, 31, 0x213070u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x213068u, 0x213070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213070u;
label_213070:
    // 0x213070: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213074: 0xc4410084  lwc1        $f1, 0x84($v0)
    ctx->pc = 0x213074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213078: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x213078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21307c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x21307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213080: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x213080u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213084: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213088: 0xc44200b0  lwc1        $f2, 0xB0($v0)
    ctx->pc = 0x213088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21308c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213090: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x213090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213098: 0x0  nop
    ctx->pc = 0x213098u;
    // NOP
    // 0x21309c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x21309cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2130a0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2130a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2130a4: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2130a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2130a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2130a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2130ac: 0xc7818314  lwc1        $f1, -0x7CEC($gp)
    ctx->pc = 0x2130acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2130b0: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x2130b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2130b4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2130b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2130b8: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x2130B8u;
    SET_GPR_U32(ctx, 31, 0x2130C0u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x2130B8u, 0x2130C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130C0u;
label_2130c0:
    // 0x2130c0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2130c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2130c4: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x2130c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2130c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2130c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2130cc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2130ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2130d0: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x2130d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2130d4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2130d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2130d8: 0xc44200b0  lwc1        $f2, 0xB0($v0)
    ctx->pc = 0x2130d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2130dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2130dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2130e0: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x2130e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2130e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2130e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2130e8: 0x0  nop
    ctx->pc = 0x2130e8u;
    // NOP
    // 0x2130ec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2130ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2130f0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2130f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2130f4: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2130f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2130f8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2130f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2130fc: 0x24849538  addiu       $a0, $a0, -0x6AC8
    ctx->pc = 0x2130fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939960));
    // 0x213100: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x213100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x213104: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x213104u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4E9538u));
    // 0x213108: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x213108u;
    { uint32_t bits = FAST_READ32(0x4E9540u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21310c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x21310cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x213110: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x213110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x213114: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213118: 0xc4430068  lwc1        $f3, 0x68($v0)
    ctx->pc = 0x213118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21311c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x21311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213120: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213124: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x213124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213128: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x213128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21312c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21312cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213134: 0x0  nop
    ctx->pc = 0x213134u;
    // NOP
    // 0x213138: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x213138u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x21313c: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x21313cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x213140: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x213140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x213144: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213148: 0xc443006c  lwc1        $f3, 0x6C($v0)
    ctx->pc = 0x213148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21314c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x21314cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213150: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213154: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x213154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213158: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x213158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21315c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21315cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213164: 0x0  nop
    ctx->pc = 0x213164u;
    // NOP
    // 0x213168: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x213168u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x21316c: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x21316cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x213170: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x213170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x213174: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213178: 0xc4430064  lwc1        $f3, 0x64($v0)
    ctx->pc = 0x213178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21317c: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x21317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213180: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213184: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x213184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213188: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x213188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21318c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21318cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213194: 0x0  nop
    ctx->pc = 0x213194u;
    // NOP
    // 0x213198: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x213198u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x21319c: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x21319cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2131a0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2131a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2131a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2131a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2131a8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2131a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2131ac: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x2131ACu;
    SET_GPR_U32(ctx, 31, 0x2131B4u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2131ACu, 0x2131B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2131B4u;
label_2131b4:
    // 0x2131b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2131b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2131b8: 0xc443006c  lwc1        $f3, 0x6C($v0)
    ctx->pc = 0x2131b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2131bc: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x2131bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2131c0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2131c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2131c4: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x2131c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2131c8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2131c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2131cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2131ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2131d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2131d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2131d4: 0x0  nop
    ctx->pc = 0x2131d4u;
    // NOP
    // 0x2131d8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2131d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2131dc: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2131dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2131e0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2131e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2131e4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2131e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2131e8: 0xc4430064  lwc1        $f3, 0x64($v0)
    ctx->pc = 0x2131e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2131ec: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2131ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2131f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2131f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2131f4: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x2131f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2131f8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2131f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2131fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2131fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213204: 0x0  nop
    ctx->pc = 0x213204u;
    // NOP
    // 0x213208: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x213208u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x21320c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x21320cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x213210: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x213210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x213214: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213218: 0xc4430068  lwc1        $f3, 0x68($v0)
    ctx->pc = 0x213218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21321c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x21321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213220: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213224: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x213224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213228: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x213228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21322c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21322cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213230: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213234: 0x0  nop
    ctx->pc = 0x213234u;
    // NOP
    // 0x213238: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x213238u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x21323c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x21323cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x213240: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x213240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x213244: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x213244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x213248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21324c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213250: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x213250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x213254: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x213254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x213258: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21325c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x21325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x213260: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x213260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x213264: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213268: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x213268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x21326c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x21326cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x213270: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213274: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213278: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x213278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x21327c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x21327cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x213280: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213284: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x213284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x213288: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x213288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x21328c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21328cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213290: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x213290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x213294: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x213294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x213298: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21329c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2132a0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2132a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2132a4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2132a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2132a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2132a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2132ac: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2132acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2132b0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2132b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2132b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2132b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2132b8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2132b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2132bc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2132bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2132c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2132c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2132c4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2132c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2132c8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2132c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2132cc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x2132ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2132d0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2132d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2132d4: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2132d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2132d8: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x2132d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2132dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2132dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2132e0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2132e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2132e4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2132e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2132e8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2132e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2132ec: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2132ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2132f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2132f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2132f4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2132f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2132f8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2132f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2132fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2132fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x213300: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213304: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x213304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x213308: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x213308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x21330c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21330cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213310: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x213310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x213314: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x213314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x213318: 0xc041d58  jal         func_107560
    ctx->pc = 0x213318u;
    SET_GPR_U32(ctx, 31, 0x213320u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x213318u, 0x213320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213320u;
label_213320:
    // 0x213320: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213324: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x213324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x213328: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x213328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x21332c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x21332cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x213330: 0xc041d58  jal         func_107560
    ctx->pc = 0x213330u;
    SET_GPR_U32(ctx, 31, 0x213338u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x213330u, 0x213338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213338u;
label_213338:
    // 0x213338: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21333c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x21333cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x213340: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213344: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x213344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x213348: 0x24450064  addiu       $a1, $v0, 0x64
    ctx->pc = 0x213348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x21334c: 0xc041d58  jal         func_107560
    ctx->pc = 0x21334Cu;
    SET_GPR_U32(ctx, 31, 0x213354u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x21334Cu, 0x213354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213354u;
label_213354:
    // 0x213354: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213358: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x213358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x21335c: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x21335Cu;
    SET_GPR_U32(ctx, 31, 0x213364u);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x21335Cu, 0x213364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213364u;
label_213364:
    // 0x213364: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213368: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x213368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21336c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213370: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x213370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213374: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x213374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x213378: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x213378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21337c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213380: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x213380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213384: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x213384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213388: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x213388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21338c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x21338Cu;
    {
        const bool branch_taken_0x21338c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21338c) {
            ctx->pc = 0x2133A8u;
            goto label_2133a8;
        }
    }
    ctx->pc = 0x213394u;
    // 0x213394: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213398: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x213398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21339c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21339cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2133a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2133A0u;
    {
        const bool branch_taken_0x2133a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2133a0) {
            ctx->pc = 0x2133D4u;
            goto label_2133d4;
        }
    }
    ctx->pc = 0x2133A8u;
label_2133a8:
    // 0x2133a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2133a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2133ac: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x2133acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2133b0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2133b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2133b4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2133b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2133b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2133b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2133bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2133BCu;
    {
        const bool branch_taken_0x2133bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2133bc) {
            ctx->pc = 0x2133D4u;
            goto label_2133d4;
        }
    }
    ctx->pc = 0x2133C4u;
    // 0x2133c4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2133c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2133c8: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x2133c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2133cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2133ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2133d0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2133d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_2133d4:
    // 0x2133d4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2133d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2133d8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2133d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2133dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2133dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2133e0: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x2133e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2133e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2133e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2133e8: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2133e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2133ec: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2133ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2133f0: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x2133f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2133f4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2133f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2133f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2133f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2133fc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2133FCu;
    {
        const bool branch_taken_0x2133fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2133fc) {
            ctx->pc = 0x213418u;
            goto label_213418;
        }
    }
    ctx->pc = 0x213404u;
    // 0x213404: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213408: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x213408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21340c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x21340cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x213410: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x213410u;
    {
        const bool branch_taken_0x213410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213410) {
            ctx->pc = 0x213444u;
            goto label_213444;
        }
    }
    ctx->pc = 0x213418u;
label_213418:
    // 0x213418: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21341c: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x21341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213420: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x213420u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x213424: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x213424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213428: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x213428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21342c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x21342Cu;
    {
        const bool branch_taken_0x21342c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21342c) {
            ctx->pc = 0x213444u;
            goto label_213444;
        }
    }
    ctx->pc = 0x213434u;
    // 0x213434: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213438: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x213438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21343c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x21343cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x213440: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x213440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_213444:
    // 0x213444: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x213444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x213448: 0x24849548  addiu       $a0, $a0, -0x6AB8
    ctx->pc = 0x213448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939976));
    // 0x21344c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x21344cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x213450: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x213450u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4E9548u));
    // 0x213454: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x213454u;
    { uint32_t bits = FAST_READ32(0x4E9550u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213458: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x213458u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x21345c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x21345cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x213460: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213464: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x213464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x213468: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x213468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21346c: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x21346cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x213470: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x213470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213474: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x213474u;
    SET_GPR_U32(ctx, 31, 0x21347Cu);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x213474u, 0x21347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21347Cu;
label_21347c:
    // 0x21347c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x21347cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x213480: 0x24849558  addiu       $a0, $a0, -0x6AA8
    ctx->pc = 0x213480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939992));
    // 0x213484: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x213484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x213488: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x213488u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4E9558u));
    // 0x21348c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x21348cu;
    { uint32_t bits = FAST_READ32(0x4E9560u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213490: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x213490u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x213494: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x213494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x213498: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21349c: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x21349cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2134a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2134a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2134a4: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2134a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2134a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2134a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2134ac: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x2134ACu;
    SET_GPR_U32(ctx, 31, 0x2134B4u);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x2134ACu, 0x2134B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134B4u;
label_2134b4:
    // 0x2134b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2134b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2134b8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2134b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2134bc: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x2134bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2134c0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2134c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2134c4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2134c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2134c8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2134c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2134cc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2134ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2134d0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2134d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2134d4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2134d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2134d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2134d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2134dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2134dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2134e0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2134e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2134e4: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x2134e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2134e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2134e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2134ec: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2134ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2134f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2134f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2134f4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2134f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2134f8: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x2134f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2134fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2134fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213500: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x213500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x213504: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213508: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x213508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21350c: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x21350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213510: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x213510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213514: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x213514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x213518: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21351c: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x21351cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213520: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x213520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213524: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x213524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x213528: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21352c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x21352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x213530: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x213530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x213534: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213538: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x213538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21353c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x21353cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213540: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x213540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x213544: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213548: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x213548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x21354c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x21354cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x213550: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213554: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x213554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213558: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x213558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21355c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21355cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x213560: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x213560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213564: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x213564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x213568: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x213568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x21356c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x213570: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x213570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x213574: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x213574u;
    SET_GPR_U32(ctx, 31, 0x21357Cu);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x213574u, 0x21357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21357Cu;
label_21357c:
    // 0x21357c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21357cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213580: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x213580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x213584: 0x3e00008  jr          $ra
    ctx->pc = 0x213584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21358Cu;
    // 0x21358c: 0x0  nop
    ctx->pc = 0x21358cu;
    // NOP
    ctx->pc = 0x213590u;
}
