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

// Function: sub_0014DFE0
// Address: 0x14dfe0 - 0x14ee70
void sub_0014DFE0_0x14dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DFE0_0x14dfe0");
#endif

    switch (ctx->pc) {
        case 0x14e03cu: goto label_14e03c;
        case 0x14e074u: goto label_14e074;
        case 0x14e098u: goto label_14e098;
        case 0x14e168u: goto label_14e168;
        case 0x14e1b4u: goto label_14e1b4;
        case 0x14e214u: goto label_14e214;
        case 0x14e25cu: goto label_14e25c;
        case 0x14e2bcu: goto label_14e2bc;
        case 0x14e348u: goto label_14e348;
        case 0x14e354u: goto label_14e354;
        case 0x14e3a0u: goto label_14e3a0;
        case 0x14e3c0u: goto label_14e3c0;
        case 0x14e3d0u: goto label_14e3d0;
        case 0x14e3e0u: goto label_14e3e0;
        case 0x14e3f4u: goto label_14e3f4;
        case 0x14e458u: goto label_14e458;
        case 0x14e47cu: goto label_14e47c;
        case 0x14e49cu: goto label_14e49c;
        case 0x14e510u: goto label_14e510;
        case 0x14e520u: goto label_14e520;
        case 0x14e534u: goto label_14e534;
        case 0x14e58cu: goto label_14e58c;
        case 0x14e5d0u: goto label_14e5d0;
        case 0x14e5e4u: goto label_14e5e4;
        case 0x14e5fcu: goto label_14e5fc;
        case 0x14e654u: goto label_14e654;
        case 0x14e688u: goto label_14e688;
        case 0x14e694u: goto label_14e694;
        case 0x14e6ccu: goto label_14e6cc;
        case 0x14e6dcu: goto label_14e6dc;
        case 0x14e6f0u: goto label_14e6f0;
        case 0x14e748u: goto label_14e748;
        case 0x14e77cu: goto label_14e77c;
        case 0x14e78cu: goto label_14e78c;
        case 0x14e7a0u: goto label_14e7a0;
        case 0x14e7f8u: goto label_14e7f8;
        case 0x14e81cu: goto label_14e81c;
        case 0x14e828u: goto label_14e828;
        case 0x14e85cu: goto label_14e85c;
        case 0x14e870u: goto label_14e870;
        case 0x14e884u: goto label_14e884;
        case 0x14e8e0u: goto label_14e8e0;
        case 0x14e920u: goto label_14e920;
        case 0x14e934u: goto label_14e934;
        case 0x14e948u: goto label_14e948;
        case 0x14e9a0u: goto label_14e9a0;
        case 0x14e9c8u: goto label_14e9c8;
        case 0x14e9d4u: goto label_14e9d4;
        case 0x14ea08u: goto label_14ea08;
        case 0x14ea1cu: goto label_14ea1c;
        case 0x14ea30u: goto label_14ea30;
        case 0x14ea88u: goto label_14ea88;
        case 0x14eabcu: goto label_14eabc;
        case 0x14eaccu: goto label_14eacc;
        case 0x14eae0u: goto label_14eae0;
        case 0x14eb3cu: goto label_14eb3c;
        case 0x14eb68u: goto label_14eb68;
        case 0x14eb74u: goto label_14eb74;
        case 0x14eba0u: goto label_14eba0;
        case 0x14ed78u: goto label_14ed78;
        case 0x14eda8u: goto label_14eda8;
        case 0x14eddcu: goto label_14eddc;
        case 0x14ee28u: goto label_14ee28;
        default: break;
    }

    ctx->pc = 0x14dfe0u;

    // 0x14dfe0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x14dfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x14dfe4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14dfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14dfe8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14dfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14dfec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14dfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14dff0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14dff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14dff4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14dff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14dff8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14dffc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14dffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14e000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14e000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14e004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e00c: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x14e00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x14e010: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e014: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14e014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e018: 0x14040004  bne         $zero, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E018u;
    {
        const bool branch_taken_0x14e018 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 4));
        if (branch_taken_0x14e018) {
            ctx->pc = 0x14E02Cu;
            goto label_14e02c;
        }
    }
    ctx->pc = 0x14E020u;
    // 0x14e020: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14e020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e024: 0x10000384  b           . + 4 + (0x384 << 2)
    ctx->pc = 0x14E024u;
    {
        const bool branch_taken_0x14e024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e024) {
            ctx->pc = 0x14EE38u;
            goto label_14ee38;
        }
    }
    ctx->pc = 0x14E02Cu;
label_14e02c:
    // 0x14e02c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e030: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x14e030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x14e034: 0xc053cd4  jal         func_14F350
    ctx->pc = 0x14E034u;
    SET_GPR_U32(ctx, 31, 0x14E03Cu);
    ctx->pc = 0x14F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F350u, 0x14E034u, 0x14E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E03Cu;
label_14e03c:
    // 0x14e03c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14e040: 0x24560030  addiu       $s6, $v0, 0x30
    ctx->pc = 0x14e040u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x14e044: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x14e044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x14e048: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x14e048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14e04c: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x14e04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e050: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x14e050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e054: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x14e054u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14e058: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x14e058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14e05c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14e05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14e060: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e064: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x14e064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14e068: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x14e068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14e06c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x14E06Cu;
    SET_GPR_U32(ctx, 31, 0x14E074u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x14E06Cu, 0x14E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E074u;
label_14e074:
    // 0x14e074: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x14e074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e078: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x14e078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e07c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14e07cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14e080: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x14e080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x14e084: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e088: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x14e088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14e08c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x14e08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14e090: 0xc090f80  jal         func_243E00
    ctx->pc = 0x14E090u;
    SET_GPR_U32(ctx, 31, 0x14E098u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x14E090u, 0x14E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E098u;
label_14e098:
    // 0x14e098: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x14e098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e09c: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x14e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e0a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14e0a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14e0a4: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x14e0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x14e0a8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14e0ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e0b0: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x14e0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e0b4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14e0b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14e0b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14e0b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14e0bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14e0bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14e0c0: 0x0  nop
    ctx->pc = 0x14e0c0u;
    // NOP
    // 0x14e0c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14e0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e0c8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14e0cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e0d0: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x14e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e0d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14e0d4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14e0d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14e0d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14e0dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14e0dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14e0e0: 0x0  nop
    ctx->pc = 0x14e0e0u;
    // NOP
    // 0x14e0e4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x14e0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e0e8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14e0ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14e0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14e0f0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x14e0f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e0f4: 0x0  nop
    ctx->pc = 0x14e0f4u;
    // NOP
    // 0x14e0f8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14e0f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14e0fc: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x14e0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e100: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14e100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e104: 0x0  nop
    ctx->pc = 0x14e104u;
    // NOP
    // 0x14e108: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14e108u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x14e10c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x14e10cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x14e110: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x14e110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x14e114: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14e114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14e118: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14e118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14e11c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x14e11cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e120: 0x0  nop
    ctx->pc = 0x14e120u;
    // NOP
    // 0x14e124: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14e124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14e128: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x14e128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e12c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14e12cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e130: 0x0  nop
    ctx->pc = 0x14e130u;
    // NOP
    // 0x14e134: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14e134u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x14e138: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x14e138u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x14e13c: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x14e13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x14e140: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14e140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e144: 0x3c0441c8  lui         $a0, 0x41C8
    ctx->pc = 0x14e144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16840 << 16));
    // 0x14e148: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14e148u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e14c: 0x0  nop
    ctx->pc = 0x14e14cu;
    // NOP
    // 0x14e150: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x14e150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x14e154: 0x8f87ba90  lw          $a3, -0x4570($gp)
    ctx->pc = 0x14e154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
    // 0x14e158: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x14e158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e15c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x14e15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x14e160: 0xc085538  jal         func_2154E0
    ctx->pc = 0x14E160u;
    SET_GPR_U32(ctx, 31, 0x14E168u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x14E160u, 0x14E168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E168u;
label_14e168:
    // 0x14e168: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x14e168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x14e16c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e170: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e174: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14e174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e178: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14e178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x14e17c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14E17Cu;
    {
        const bool branch_taken_0x14e17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e17c) {
            ctx->pc = 0x14E1B4u;
            goto label_14e1b4;
        }
    }
    ctx->pc = 0x14E184u;
    // 0x14e184: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x14e184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e188: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x14e188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e18c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14e18cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e190: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x14E190u;
    {
        const bool branch_taken_0x14e190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e190) {
            ctx->pc = 0x14E1B4u;
            goto label_14e1b4;
        }
    }
    ctx->pc = 0x14E198u;
    // 0x14e198: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x14e198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14e19c: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x14e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e1a0: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x14e1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x14e1a4: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x14e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x14e1a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e1ac: 0xc090fa8  jal         func_243EA0
    ctx->pc = 0x14E1ACu;
    SET_GPR_U32(ctx, 31, 0x14E1B4u);
    ctx->pc = 0x243EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EA0u, 0x14E1ACu, 0x14E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1B4u;
label_14e1b4:
    // 0x14e1b4: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e1b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e1bc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e1c0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x14e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x14e1c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E1C4u;
    {
        const bool branch_taken_0x14e1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e1c4) {
            ctx->pc = 0x14E214u;
            goto label_14e214;
        }
    }
    ctx->pc = 0x14E1CCu;
    // 0x14e1cc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14e1d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e1d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e1d4: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x14e1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e1d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14e1d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14e1dc: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x14e1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e1e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14e1e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e1e4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x14E1E4u;
    {
        const bool branch_taken_0x14e1e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e1e4) {
            ctx->pc = 0x14E214u;
            goto label_14e214;
        }
    }
    ctx->pc = 0x14E1ECu;
    // 0x14e1ec: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x14e1ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14e1f0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14e1f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e1f8: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x14e1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e1fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14e1fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14e200: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x14e200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x14e204: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x14e204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x14e208: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14e208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14e20c: 0xc090fa8  jal         func_243EA0
    ctx->pc = 0x14E20Cu;
    SET_GPR_U32(ctx, 31, 0x14E214u);
    ctx->pc = 0x243EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EA0u, 0x14E20Cu, 0x14E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E214u;
label_14e214:
    // 0x14e214: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e218: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14e218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e21c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x14e21cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14e220: 0x30e20040  andi        $v0, $a3, 0x40
    ctx->pc = 0x14e220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x14e224: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14E224u;
    {
        const bool branch_taken_0x14e224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e224) {
            ctx->pc = 0x14E25Cu;
            goto label_14e25c;
        }
    }
    ctx->pc = 0x14E22Cu;
    // 0x14e22c: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x14e22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14e230: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x14e230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e234: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14e234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e238: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x14E238u;
    {
        const bool branch_taken_0x14e238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e238) {
            ctx->pc = 0x14E25Cu;
            goto label_14e25c;
        }
    }
    ctx->pc = 0x14E240u;
    // 0x14e240: 0x24120040  addiu       $s2, $zero, 0x40
    ctx->pc = 0x14e240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14e244: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x14e244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e248: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x14e248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x14e24c: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x14e24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x14e250: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14e250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e254: 0xc090fa8  jal         func_243EA0
    ctx->pc = 0x14E254u;
    SET_GPR_U32(ctx, 31, 0x14E25Cu);
    ctx->pc = 0x243EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EA0u, 0x14E254u, 0x14E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E25Cu;
label_14e25c:
    // 0x14e25c: 0x8f84ba98  lw          $a0, -0x4568($gp)
    ctx->pc = 0x14e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e260: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e264: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14e264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e268: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x14e268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x14e26c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E26Cu;
    {
        const bool branch_taken_0x14e26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e26c) {
            ctx->pc = 0x14E2BCu;
            goto label_14e2bc;
        }
    }
    ctx->pc = 0x14E274u;
    // 0x14e274: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14e274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14e278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e27c: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x14e27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e280: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14e280u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14e284: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x14e284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e288: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14e288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14e28c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x14E28Cu;
    {
        const bool branch_taken_0x14e28c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14e28c) {
            ctx->pc = 0x14E2BCu;
            goto label_14e2bc;
        }
    }
    ctx->pc = 0x14E294u;
    // 0x14e294: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x14e294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14e298: 0x3c1442a0  lui         $s4, 0x42A0
    ctx->pc = 0x14e298u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)17056 << 16));
    // 0x14e29c: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x14e29cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e2a0: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x14e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14e2a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14e2a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14e2a8: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x14e2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x14e2ac: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x14e2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x14e2b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e2b4: 0xc090fa8  jal         func_243EA0
    ctx->pc = 0x14E2B4u;
    SET_GPR_U32(ctx, 31, 0x14E2BCu);
    ctx->pc = 0x243EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EA0u, 0x14E2B4u, 0x14E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2BCu;
label_14e2bc:
    // 0x14e2bc: 0x124002dd  beqz        $s2, . + 4 + (0x2DD << 2)
    ctx->pc = 0x14E2BCu;
    {
        const bool branch_taken_0x14e2bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e2bc) {
            ctx->pc = 0x14EE34u;
            goto label_14ee34;
        }
    }
    ctx->pc = 0x14E2C4u;
    // 0x14e2c4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14e2c8: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x14e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x14e2cc: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x14e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14e2d0: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x14e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x14e2d4: 0x2402f00f  addiu       $v0, $zero, -0xFF1
    ctx->pc = 0x14e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x14e2d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e2dc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x14e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x14e2e0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x14e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14e2e4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x14e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x14e2e8: 0x30430700  andi        $v1, $v0, 0x700
    ctx->pc = 0x14e2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
    // 0x14e2ec: 0x30620410  andi        $v0, $v1, 0x410
    ctx->pc = 0x14e2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1040);
    // 0x14e2f0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x14E2F0u;
    {
        const bool branch_taken_0x14e2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e2f0) {
            ctx->pc = 0x14E430u;
            goto label_14e430;
        }
    }
    ctx->pc = 0x14E2F8u;
    // 0x14e2f8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14e2fc: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E2FCu;
    {
        const bool branch_taken_0x14e2fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e2fc) {
            ctx->pc = 0x14E314u;
            goto label_14e314;
        }
    }
    ctx->pc = 0x14E304u;
    // 0x14e304: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14e304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e308: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x14e308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x14e30c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14E30Cu;
    {
        const bool branch_taken_0x14e30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e30c) {
            ctx->pc = 0x14E318u;
            goto label_14e318;
        }
    }
    ctx->pc = 0x14E314u;
label_14e314:
    // 0x14e314: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x14e314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_14e318:
    // 0x14e318: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x14e318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14e31c: 0x16470005  bne         $s2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E31Cu;
    {
        const bool branch_taken_0x14e31c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 7));
        if (branch_taken_0x14e31c) {
            ctx->pc = 0x14E334u;
            goto label_14e334;
        }
    }
    ctx->pc = 0x14E324u;
    // 0x14e324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e328: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x14e328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x14e32c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14E32Cu;
    {
        const bool branch_taken_0x14e32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e32c) {
            ctx->pc = 0x14E338u;
            goto label_14e338;
        }
    }
    ctx->pc = 0x14E334u;
label_14e334:
    // 0x14e334: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x14e334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_14e338:
    // 0x14e338: 0x8f94ba98  lw          $s4, -0x4568($gp)
    ctx->pc = 0x14e338u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e33c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x14e33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x14e340: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14E340u;
    SET_GPR_U32(ctx, 31, 0x14E348u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14E340u, 0x14E348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E348u;
label_14e348:
    // 0x14e348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e34c: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x14E34Cu;
    SET_GPR_U32(ctx, 31, 0x14E354u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x14E34Cu, 0x14E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E354u;
label_14e354:
    // 0x14e354: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x14e354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14e358: 0x8fb30140  lw          $s3, 0x140($sp)
    ctx->pc = 0x14e358u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x14e35c: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x14e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x14e360: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x14e360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14e364: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x14e364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x14e368: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x14e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x14e36c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14e370: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x14e370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x14e374: 0x324200c0  andi        $v0, $s2, 0xC0
    ctx->pc = 0x14e374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)192);
    // 0x14e378: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E378u;
    {
        const bool branch_taken_0x14e378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e378) {
            ctx->pc = 0x14E390u;
            goto label_14e390;
        }
    }
    ctx->pc = 0x14E380u;
    // 0x14e380: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x14e380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x14e384: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14e384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14e388: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14e388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14e38c: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x14e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_14e390:
    // 0x14e390: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e394: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14e394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e398: 0xc093728  jal         func_24DCA0
    ctx->pc = 0x14E398u;
    SET_GPR_U32(ctx, 31, 0x14E3A0u);
    ctx->pc = 0x24DCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DCA0u, 0x14E398u, 0x14E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3A0u;
label_14e3a0:
    // 0x14e3a0: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x14e3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x14e3a4: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x14e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x14e3a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3ac: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x14e3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x14e3b0: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x14e3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x14e3b4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x14e3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3b8: 0xc053bd0  jal         func_14EF40
    ctx->pc = 0x14E3B8u;
    SET_GPR_U32(ctx, 31, 0x14E3C0u);
    ctx->pc = 0x14EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF40u, 0x14E3B8u, 0x14E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3C0u;
label_14e3c0:
    // 0x14e3c0: 0x27a40144  addiu       $a0, $sp, 0x144
    ctx->pc = 0x14e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x14e3c4: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x14e3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x14e3c8: 0xc053ba4  jal         func_14EE90
    ctx->pc = 0x14E3C8u;
    SET_GPR_U32(ctx, 31, 0x14E3D0u);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x14E3C8u, 0x14E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3D0u;
label_14e3d0:
    // 0x14e3d0: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x14e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x14e3d4: 0x27a50144  addiu       $a1, $sp, 0x144
    ctx->pc = 0x14e3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    // 0x14e3d8: 0xc041998  jal         func_106660
    ctx->pc = 0x14E3D8u;
    SET_GPR_U32(ctx, 31, 0x14E3E0u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x14E3D8u, 0x14E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3E0u;
label_14e3e0:
    // 0x14e3e0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E3E0u;
    {
        const bool branch_taken_0x14e3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e3e0) {
            ctx->pc = 0x14E430u;
            goto label_14e430;
        }
    }
    ctx->pc = 0x14E3E8u;
    // 0x14e3e8: 0x27a40178  addiu       $a0, $sp, 0x178
    ctx->pc = 0x14e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x14e3ec: 0xc053b9c  jal         func_14EE70
    ctx->pc = 0x14E3ECu;
    SET_GPR_U32(ctx, 31, 0x14E3F4u);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x14E3ECu, 0x14E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3F4u;
label_14e3f4:
    // 0x14e3f4: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x14e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x14e3f8: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x14e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x14e3fc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x14e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x14e400: 0x1002000b  beq         $zero, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14E400u;
    {
        const bool branch_taken_0x14e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e400) {
            ctx->pc = 0x14E430u;
            goto label_14e430;
        }
    }
    ctx->pc = 0x14E408u;
    // 0x14e408: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x14e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x14e40c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x14e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x14e410: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x14e410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14e414: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x14e414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x14e418: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x14e418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14e41c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x14e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14e420: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x14e420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x14e424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e428: 0x10000283  b           . + 4 + (0x283 << 2)
    ctx->pc = 0x14E428u;
    {
        const bool branch_taken_0x14e428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e428) {
            ctx->pc = 0x14EE38u;
            goto label_14ee38;
        }
    }
    ctx->pc = 0x14E430u;
label_14e430:
    // 0x14e430: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x14e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14e434: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x14e434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x14e438: 0x30420700  andi        $v0, $v0, 0x700
    ctx->pc = 0x14e438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
    // 0x14e43c: 0x30420110  andi        $v0, $v0, 0x110
    ctx->pc = 0x14e43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)272);
    // 0x14e440: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E440u;
    {
        const bool branch_taken_0x14e440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e440) {
            ctx->pc = 0x14E464u;
            goto label_14e464;
        }
    }
    ctx->pc = 0x14E448u;
    // 0x14e448: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e44c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x14e44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x14e450: 0xc053cd4  jal         func_14F350
    ctx->pc = 0x14E450u;
    SET_GPR_U32(ctx, 31, 0x14E458u);
    ctx->pc = 0x14F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F350u, 0x14E450u, 0x14E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E458u;
label_14e458:
    // 0x14e458: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14e458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e45c: 0x10000276  b           . + 4 + (0x276 << 2)
    ctx->pc = 0x14E45Cu;
    {
        const bool branch_taken_0x14e45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e45c) {
            ctx->pc = 0x14EE38u;
            goto label_14ee38;
        }
    }
    ctx->pc = 0x14E464u;
label_14e464:
    // 0x14e464: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x14e464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14e468: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14e468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e46c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e470: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x14e470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e474: 0xc05450c  jal         func_151430
    ctx->pc = 0x14E474u;
    SET_GPR_U32(ctx, 31, 0x14E47Cu);
    ctx->pc = 0x151430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151430u, 0x14E474u, 0x14E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E47Cu;
label_14e47c:
    // 0x14e47c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x14e47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14e480: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14e484: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x14e484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x14e488: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14e488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14e48c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x14e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14e490: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E490u;
    {
        const bool branch_taken_0x14e490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e490) {
            ctx->pc = 0x14E4B8u;
            goto label_14e4b8;
        }
    }
    ctx->pc = 0x14E498u;
    // 0x14e498: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x14e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_14e49c:
    // 0x14e49c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x14e49cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14e4a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14e4a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14e4a8: 0x0  nop
    ctx->pc = 0x14e4a8u;
    // NOP
    // 0x14e4ac: 0x0  nop
    ctx->pc = 0x14e4acu;
    // NOP
    // 0x14e4b0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14E4B0u;
    {
        const bool branch_taken_0x14e4b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e4b0) {
            ctx->pc = 0x14E49Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e49c;
        }
    }
    ctx->pc = 0x14E4B8u;
label_14e4b8:
    // 0x14e4b8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14e4bc: 0x1242014a  beq         $s2, $v0, . + 4 + (0x14A << 2)
    ctx->pc = 0x14E4BCu;
    {
        const bool branch_taken_0x14e4bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e4bc) {
            ctx->pc = 0x14E9E8u;
            goto label_14e9e8;
        }
    }
    ctx->pc = 0x14E4C4u;
    // 0x14e4c4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x14e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14e4c8: 0x124200dd  beq         $s2, $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x14E4C8u;
    {
        const bool branch_taken_0x14e4c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e4c8) {
            ctx->pc = 0x14E840u;
            goto label_14e840;
        }
    }
    ctx->pc = 0x14E4D0u;
    // 0x14e4d0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14e4d4: 0x12420075  beq         $s2, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x14E4D4u;
    {
        const bool branch_taken_0x14e4d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e4d4) {
            ctx->pc = 0x14E6ACu;
            goto label_14e6ac;
        }
    }
    ctx->pc = 0x14E4DCu;
    // 0x14e4dc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x14e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14e4e0: 0x12430003  beq         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E4E0u;
    {
        const bool branch_taken_0x14e4e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x14e4e0) {
            ctx->pc = 0x14E4F0u;
            goto label_14e4f0;
        }
    }
    ctx->pc = 0x14E4E8u;
    // 0x14e4e8: 0x100001a5  b           . + 4 + (0x1A5 << 2)
    ctx->pc = 0x14E4E8u;
    {
        const bool branch_taken_0x14e4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e4e8) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14E4F0u;
label_14e4f0:
    // 0x14e4f0: 0xafb100b0  sw          $s1, 0xB0($sp)
    ctx->pc = 0x14e4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 17));
    // 0x14e4f4: 0xafb000b4  sw          $s0, 0xB4($sp)
    ctx->pc = 0x14e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 16));
    // 0x14e4f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e4fc: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x14e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x14e500: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x14e500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x14e504: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x14e504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x14e508: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x14E508u;
    {
        const bool branch_taken_0x14e508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e508) {
            ctx->pc = 0x14E5B4u;
            goto label_14e5b4;
        }
    }
    ctx->pc = 0x14E510u;
label_14e510:
    // 0x14e510: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e514: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14e514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e518: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14E518u;
    SET_GPR_U32(ctx, 31, 0x14E520u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14E518u, 0x14E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E520u;
label_14e520:
    // 0x14e520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e524: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x14e524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x14e528: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e52c: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14E52Cu;
    SET_GPR_U32(ctx, 31, 0x14E534u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14E52Cu, 0x14E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E534u;
label_14e534:
    // 0x14e534: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x14e534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
    // 0x14e538: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x14e538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x14e53c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x14E53Cu;
    {
        const bool branch_taken_0x14e53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e53c) {
            ctx->pc = 0x14E5C0u;
            goto label_14e5c0;
        }
    }
    ctx->pc = 0x14E544u;
    // 0x14e544: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x14e544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x14e548: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14e548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14e54c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x14e54cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x14e550: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x14E550u;
    {
        const bool branch_taken_0x14e550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e550) {
            ctx->pc = 0x14E5C0u;
            goto label_14e5c0;
        }
    }
    ctx->pc = 0x14E558u;
    // 0x14e558: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e55c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e560: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e564: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x14e564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x14e568: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14e568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e56c: 0x14440014  bne         $v0, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14E56Cu;
    {
        const bool branch_taken_0x14e56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14e56c) {
            ctx->pc = 0x14E5C0u;
            goto label_14e5c0;
        }
    }
    ctx->pc = 0x14E574u;
    // 0x14e574: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x14e574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14e578: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x14e578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x14e57c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e580: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x14e580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14e584: 0xc05450c  jal         func_151430
    ctx->pc = 0x14E584u;
    SET_GPR_U32(ctx, 31, 0x14E58Cu);
    ctx->pc = 0x151430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151430u, 0x14E584u, 0x14E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E58Cu;
label_14e58c:
    // 0x14e58c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x14e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x14e590: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x14e590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14e594: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x14e594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
    // 0x14e598: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x14e598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14e59c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14e5a0: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x14e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x14e5a4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x14e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x14e5a8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x14e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14e5ac: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x14e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x14e5b0: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x14e5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
label_14e5b4:
    // 0x14e5b4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x14e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x14e5b8: 0x441ffd5  bgez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x14E5B8u;
    {
        const bool branch_taken_0x14e5b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14e5b8) {
            ctx->pc = 0x14E510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e510;
        }
    }
    ctx->pc = 0x14E5C0u;
label_14e5c0:
    // 0x14e5c0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x14e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14e5c4: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x14e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x14e5c8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x14E5C8u;
    {
        const bool branch_taken_0x14e5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e5c8) {
            ctx->pc = 0x14E670u;
            goto label_14e670;
        }
    }
    ctx->pc = 0x14E5D0u;
label_14e5d0:
    // 0x14e5d0: 0x8f84ba98  lw          $a0, -0x4568($gp)
    ctx->pc = 0x14e5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e5d4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x14e5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14e5d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14e5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5dc: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14E5DCu;
    SET_GPR_U32(ctx, 31, 0x14E5E4u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14E5DCu, 0x14E5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5E4u;
label_14e5e4:
    // 0x14e5e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5e8: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x14e5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x14e5ec: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x14e5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5f4: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14E5F4u;
    SET_GPR_U32(ctx, 31, 0x14E5FCu);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14E5F4u, 0x14E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5FCu;
label_14e5fc:
    // 0x14e5fc: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x14e5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
    // 0x14e600: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x14e600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x14e604: 0x1040015e  beqz        $v0, . + 4 + (0x15E << 2)
    ctx->pc = 0x14E604u;
    {
        const bool branch_taken_0x14e604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e604) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14E60Cu;
    // 0x14e60c: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x14e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x14e610: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14e610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e614: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14e614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x14e618: 0x10400159  beqz        $v0, . + 4 + (0x159 << 2)
    ctx->pc = 0x14E618u;
    {
        const bool branch_taken_0x14e618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e618) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14E620u;
    // 0x14e620: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e624: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e628: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14e628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e62c: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x14e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x14e630: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e634: 0x14620152  bne         $v1, $v0, . + 4 + (0x152 << 2)
    ctx->pc = 0x14E634u;
    {
        const bool branch_taken_0x14e634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e634) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14E63Cu;
    // 0x14e63c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x14e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14e640: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x14e640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x14e644: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e648: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x14e648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14e64c: 0xc05450c  jal         func_151430
    ctx->pc = 0x14E64Cu;
    SET_GPR_U32(ctx, 31, 0x14E654u);
    ctx->pc = 0x151430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151430u, 0x14E64Cu, 0x14E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E654u;
label_14e654:
    // 0x14e654: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x14e654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x14e658: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14e658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14e65c: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x14e65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x14e660: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x14e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x14e664: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14e664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14e668: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x14e668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x14e66c: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x14e66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
label_14e670:
    // 0x14e670: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x14e670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x14e674: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x14e674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x14e678: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e67c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14e67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e680: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14E680u;
    SET_GPR_U32(ctx, 31, 0x14E688u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14E680u, 0x14E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E688u;
label_14e688:
    // 0x14e688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e68c: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x14E68Cu;
    SET_GPR_U32(ctx, 31, 0x14E694u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x14E68Cu, 0x14E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E694u;
label_14e694:
    // 0x14e694: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x14e694u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14e698: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14e698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14e69c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x14E69Cu;
    {
        const bool branch_taken_0x14e69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e69c) {
            ctx->pc = 0x14E5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e5d0;
        }
    }
    ctx->pc = 0x14E6A4u;
    // 0x14e6a4: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x14E6A4u;
    {
        const bool branch_taken_0x14e6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e6a4) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14E6ACu;
label_14e6ac:
    // 0x14e6ac: 0xafb100b0  sw          $s1, 0xB0($sp)
    ctx->pc = 0x14e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 17));
    // 0x14e6b0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x14e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14e6b4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x14e6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x14e6b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e6bc: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x14e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x14e6c0: 0x263effff  addiu       $fp, $s1, -0x1
    ctx->pc = 0x14e6c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x14e6c4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x14E6C4u;
    {
        const bool branch_taken_0x14e6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e6c4) {
            ctx->pc = 0x14E768u;
            goto label_14e768;
        }
    }
    ctx->pc = 0x14E6CCu;
label_14e6cc:
    // 0x14e6cc: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e6d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e6d4: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14E6D4u;
    SET_GPR_U32(ctx, 31, 0x14E6DCu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14E6D4u, 0x14E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6DCu;
label_14e6dc:
    // 0x14e6dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e6e0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14e6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e6e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e6e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e6e8: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14E6E8u;
    SET_GPR_U32(ctx, 31, 0x14E6F0u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14E6E8u, 0x14E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6F0u;
label_14e6f0:
    // 0x14e6f0: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x14e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x14e6f4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x14e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x14e6f8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14E6F8u;
    {
        const bool branch_taken_0x14e6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e6f8) {
            ctx->pc = 0x14E770u;
            goto label_14e770;
        }
    }
    ctx->pc = 0x14E700u;
    // 0x14e700: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x14e704: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14e704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e708: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x14e708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x14e70c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14E70Cu;
    {
        const bool branch_taken_0x14e70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e70c) {
            ctx->pc = 0x14E770u;
            goto label_14e770;
        }
    }
    ctx->pc = 0x14E714u;
    // 0x14e714: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e718: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e71c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e720: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x14e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x14e724: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e728: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14E728u;
    {
        const bool branch_taken_0x14e728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e728) {
            ctx->pc = 0x14E770u;
            goto label_14e770;
        }
    }
    ctx->pc = 0x14E730u;
    // 0x14e730: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x14e730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14e734: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x14e734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e738: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e73c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x14e73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14e740: 0xc05450c  jal         func_151430
    ctx->pc = 0x14E740u;
    SET_GPR_U32(ctx, 31, 0x14E748u);
    ctx->pc = 0x151430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151430u, 0x14E740u, 0x14E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E748u;
label_14e748:
    // 0x14e748: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x14e748u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x14e74c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x14e74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14e750: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14e750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14e754: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x14e754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x14e758: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x14e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x14e75c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14e760: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x14e760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x14e764: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x14e764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_14e768:
    // 0x14e768: 0x7c1ffd8  bgez        $fp, . + 4 + (-0x28 << 2)
    ctx->pc = 0x14E768u;
    {
        const bool branch_taken_0x14e768 = (GPR_S32(ctx, 30) >= 0);
        if (branch_taken_0x14e768) {
            ctx->pc = 0x14E6CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e6cc;
        }
    }
    ctx->pc = 0x14E770u;
label_14e770:
    // 0x14e770: 0x26370001  addiu       $s7, $s1, 0x1
    ctx->pc = 0x14e770u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14e774: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x14E774u;
    {
        const bool branch_taken_0x14e774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e774) {
            ctx->pc = 0x14E80Cu;
            goto label_14e80c;
        }
    }
    ctx->pc = 0x14E77Cu;
label_14e77c:
    // 0x14e77c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e780: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14e780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e784: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14E784u;
    SET_GPR_U32(ctx, 31, 0x14E78Cu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14E784u, 0x14E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E78Cu;
label_14e78c:
    // 0x14e78c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e790: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14e790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e794: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e798: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14E798u;
    SET_GPR_U32(ctx, 31, 0x14E7A0u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14E798u, 0x14E7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E7A0u;
label_14e7a0:
    // 0x14e7a0: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x14e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x14e7a4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x14e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x14e7a8: 0x104000f5  beqz        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x14E7A8u;
    {
        const bool branch_taken_0x14e7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e7a8) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14E7B0u;
    // 0x14e7b0: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x14e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x14e7b4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e7b8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x14e7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x14e7bc: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x14E7BCu;
    {
        const bool branch_taken_0x14e7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e7bc) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14E7C4u;
    // 0x14e7c4: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e7c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e7cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e7d0: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x14e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x14e7d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e7d8: 0x146200e9  bne         $v1, $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x14E7D8u;
    {
        const bool branch_taken_0x14e7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e7d8) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14E7E0u;
    // 0x14e7e0: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x14e7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14e7e4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14e7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e7e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e7ec: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x14e7ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14e7f0: 0xc05450c  jal         func_151430
    ctx->pc = 0x14E7F0u;
    SET_GPR_U32(ctx, 31, 0x14E7F8u);
    ctx->pc = 0x151430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151430u, 0x14E7F0u, 0x14E7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E7F8u;
label_14e7f8:
    // 0x14e7f8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x14e7f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x14e7fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x14e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x14e800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14e800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14e804: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x14e804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x14e808: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x14e808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_14e80c:
    // 0x14e80c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e810: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14e810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e814: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14E814u;
    SET_GPR_U32(ctx, 31, 0x14E81Cu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14E814u, 0x14E81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E81Cu;
label_14e81c:
    // 0x14e81c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e820: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x14E820u;
    SET_GPR_U32(ctx, 31, 0x14E828u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x14E820u, 0x14E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E828u;
label_14e828:
    // 0x14e828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e82c: 0x2e4102a  slt         $v0, $s7, $a0
    ctx->pc = 0x14e82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x14e830: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x14E830u;
    {
        const bool branch_taken_0x14e830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e830) {
            ctx->pc = 0x14E77Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e77c;
        }
    }
    ctx->pc = 0x14E838u;
    // 0x14e838: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x14E838u;
    {
        const bool branch_taken_0x14e838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e838) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14E840u;
label_14e840:
    // 0x14e840: 0xafb100b0  sw          $s1, 0xB0($sp)
    ctx->pc = 0x14e840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 17));
    // 0x14e844: 0xafb000b4  sw          $s0, 0xB4($sp)
    ctx->pc = 0x14e844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 16));
    // 0x14e848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e84c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x14e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x14e850: 0x2616ffff  addiu       $s6, $s0, -0x1
    ctx->pc = 0x14e850u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x14e854: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x14E854u;
    {
        const bool branch_taken_0x14e854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e854) {
            ctx->pc = 0x14E908u;
            goto label_14e908;
        }
    }
    ctx->pc = 0x14E85Cu;
label_14e85c:
    // 0x14e85c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e860: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e864: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e868: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14E868u;
    SET_GPR_U32(ctx, 31, 0x14E870u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14E868u, 0x14E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E870u;
label_14e870:
    // 0x14e870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14e874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e878: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x14e878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e87c: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14E87Cu;
    SET_GPR_U32(ctx, 31, 0x14E884u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14E87Cu, 0x14E884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E884u;
label_14e884:
    // 0x14e884: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14e884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e888: 0xafa50158  sw          $a1, 0x158($sp)
    ctx->pc = 0x14e888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 5));
    // 0x14e88c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x14e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x14e890: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14E890u;
    {
        const bool branch_taken_0x14e890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e890) {
            ctx->pc = 0x14E910u;
            goto label_14e910;
        }
    }
    ctx->pc = 0x14E898u;
    // 0x14e898: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x14e898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x14e89c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x14e89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14e8a0: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x14e8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x14e8a4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x14E8A4u;
    {
        const bool branch_taken_0x14e8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e8a4) {
            ctx->pc = 0x14E910u;
            goto label_14e910;
        }
    }
    ctx->pc = 0x14E8ACu;
    // 0x14e8ac: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e8b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e8b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e8b8: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x14e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x14e8bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e8c0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E8C0u;
    {
        const bool branch_taken_0x14e8c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e8c0) {
            ctx->pc = 0x14E910u;
            goto label_14e910;
        }
    }
    ctx->pc = 0x14E8C8u;
    // 0x14e8c8: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x14e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14e8cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14e8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e8d0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x14e8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e8d4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x14e8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14e8d8: 0xc05450c  jal         func_151430
    ctx->pc = 0x14E8D8u;
    SET_GPR_U32(ctx, 31, 0x14E8E0u);
    ctx->pc = 0x151430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151430u, 0x14E8D8u, 0x14E8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E8E0u;
label_14e8e0:
    // 0x14e8e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14e8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e8e4: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x14e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x14e8e8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x14e8e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e8ec: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x14e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x14e8f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14e8f4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x14e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x14e8f8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x14e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x14e8fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14e8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14e900: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x14e900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x14e904: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x14e904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_14e908:
    // 0x14e908: 0x6c1ffd4  bgez        $s6, . + 4 + (-0x2C << 2)
    ctx->pc = 0x14E908u;
    {
        const bool branch_taken_0x14e908 = (GPR_S32(ctx, 22) >= 0);
        if (branch_taken_0x14e908) {
            ctx->pc = 0x14E85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e85c;
        }
    }
    ctx->pc = 0x14E910u;
label_14e910:
    // 0x14e910: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x14e910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14e914: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x14e914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e918: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x14E918u;
    {
        const bool branch_taken_0x14e918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e918) {
            ctx->pc = 0x14E9B8u;
            goto label_14e9b8;
        }
    }
    ctx->pc = 0x14E920u;
label_14e920:
    // 0x14e920: 0x8f84ba98  lw          $a0, -0x4568($gp)
    ctx->pc = 0x14e920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e924: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14e924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14e928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e92c: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14E92Cu;
    SET_GPR_U32(ctx, 31, 0x14E934u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14E92Cu, 0x14E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E934u;
label_14e934:
    // 0x14e934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e938: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14e938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e93c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x14e93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e940: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14E940u;
    SET_GPR_U32(ctx, 31, 0x14E948u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14E940u, 0x14E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E948u;
label_14e948:
    // 0x14e948: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x14e948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x14e94c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x14e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x14e950: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x14E950u;
    {
        const bool branch_taken_0x14e950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e950) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14E958u;
    // 0x14e958: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x14e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x14e95c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e960: 0x30520040  andi        $s2, $v0, 0x40
    ctx->pc = 0x14e960u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x14e964: 0x12400086  beqz        $s2, . + 4 + (0x86 << 2)
    ctx->pc = 0x14E964u;
    {
        const bool branch_taken_0x14e964 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e964) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14E96Cu;
    // 0x14e96c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e970: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14e970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e974: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x14e974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e978: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x14e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x14e97c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e980: 0x14a2007f  bne         $a1, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x14E980u;
    {
        const bool branch_taken_0x14e980 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e980) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14E988u;
    // 0x14e988: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x14e988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14e98c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14e98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e990: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x14e990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e994: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x14e994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14e998: 0xc05450c  jal         func_151430
    ctx->pc = 0x14E998u;
    SET_GPR_U32(ctx, 31, 0x14E9A0u);
    ctx->pc = 0x151430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151430u, 0x14E998u, 0x14E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9A0u;
label_14e9a0:
    // 0x14e9a0: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x14e9a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14e9a4: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x14e9a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9a8: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x14e9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x14e9ac: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x14e9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14e9b0: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x14e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
    // 0x14e9b4: 0xafa50124  sw          $a1, 0x124($sp)
    ctx->pc = 0x14e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 5));
label_14e9b8:
    // 0x14e9b8: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14e9bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14e9c0: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14E9C0u;
    SET_GPR_U32(ctx, 31, 0x14E9C8u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14E9C0u, 0x14E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9C8u;
label_14e9c8:
    // 0x14e9c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14e9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e9cc: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x14E9CCu;
    SET_GPR_U32(ctx, 31, 0x14E9D4u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x14E9CCu, 0x14E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E9D4u;
label_14e9d4:
    // 0x14e9d4: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x14e9d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14e9d8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x14E9D8u;
    {
        const bool branch_taken_0x14e9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e9d8) {
            ctx->pc = 0x14E920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e920;
        }
    }
    ctx->pc = 0x14E9E0u;
    // 0x14e9e0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x14E9E0u;
    {
        const bool branch_taken_0x14e9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e9e0) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14E9E8u;
label_14e9e8:
    // 0x14e9e8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x14e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14e9ec: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x14e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x14e9f0: 0xafb000b4  sw          $s0, 0xB4($sp)
    ctx->pc = 0x14e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 16));
    // 0x14e9f4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x14e9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e9f8: 0xafb200bc  sw          $s2, 0xBC($sp)
    ctx->pc = 0x14e9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 18));
    // 0x14e9fc: 0x2614ffff  addiu       $s4, $s0, -0x1
    ctx->pc = 0x14e9fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x14ea00: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x14EA00u;
    {
        const bool branch_taken_0x14ea00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea00) {
            ctx->pc = 0x14EAA8u;
            goto label_14eaa8;
        }
    }
    ctx->pc = 0x14EA08u;
label_14ea08:
    // 0x14ea08: 0x8f84ba98  lw          $a0, -0x4568($gp)
    ctx->pc = 0x14ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14ea0c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x14ea0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14ea10: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14ea10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea14: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14EA14u;
    SET_GPR_U32(ctx, 31, 0x14EA1Cu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14EA14u, 0x14EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA1Cu;
label_14ea1c:
    // 0x14ea1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14ea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ea20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea24: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14ea24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea28: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14EA28u;
    SET_GPR_U32(ctx, 31, 0x14EA30u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14EA28u, 0x14EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA30u;
label_14ea30:
    // 0x14ea30: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x14ea30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x14ea34: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x14ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x14ea38: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x14EA38u;
    {
        const bool branch_taken_0x14ea38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea38) {
            ctx->pc = 0x14EAB0u;
            goto label_14eab0;
        }
    }
    ctx->pc = 0x14EA40u;
    // 0x14ea40: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x14ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x14ea44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14ea48: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x14ea48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x14ea4c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14EA4Cu;
    {
        const bool branch_taken_0x14ea4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea4c) {
            ctx->pc = 0x14EAB0u;
            goto label_14eab0;
        }
    }
    ctx->pc = 0x14EA54u;
    // 0x14ea54: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14ea58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ea5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ea60: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x14ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x14ea64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ea68: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14EA68u;
    {
        const bool branch_taken_0x14ea68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14ea68) {
            ctx->pc = 0x14EAB0u;
            goto label_14eab0;
        }
    }
    ctx->pc = 0x14EA70u;
    // 0x14ea70: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x14ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14ea74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ea74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea78: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14ea78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea7c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x14ea7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14ea80: 0xc05450c  jal         func_151430
    ctx->pc = 0x14EA80u;
    SET_GPR_U32(ctx, 31, 0x14EA88u);
    ctx->pc = 0x151430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151430u, 0x14EA80u, 0x14EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA88u;
label_14ea88:
    // 0x14ea88: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x14ea88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x14ea8c: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x14ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x14ea90: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x14ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x14ea94: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x14ea94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x14ea98: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x14ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x14ea9c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x14ea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14eaa0: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x14eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x14eaa4: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x14eaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_14eaa8:
    // 0x14eaa8: 0x681ffd7  bgez        $s4, . + 4 + (-0x29 << 2)
    ctx->pc = 0x14EAA8u;
    {
        const bool branch_taken_0x14eaa8 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x14eaa8) {
            ctx->pc = 0x14EA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ea08;
        }
    }
    ctx->pc = 0x14EAB0u;
label_14eab0:
    // 0x14eab0: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x14eab0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14eab4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x14EAB4u;
    {
        const bool branch_taken_0x14eab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eab4) {
            ctx->pc = 0x14EB58u;
            goto label_14eb58;
        }
    }
    ctx->pc = 0x14EABCu;
label_14eabc:
    // 0x14eabc: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14eac0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14eac4: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14EAC4u;
    SET_GPR_U32(ctx, 31, 0x14EACCu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14EAC4u, 0x14EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EACCu;
label_14eacc:
    // 0x14eacc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14eaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ead0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ead0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ead4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14ead4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ead8: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x14EAD8u;
    SET_GPR_U32(ctx, 31, 0x14EAE0u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x14EAD8u, 0x14EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAE0u;
label_14eae0:
    // 0x14eae0: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x14eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x14eae4: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x14eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x14eae8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x14EAE8u;
    {
        const bool branch_taken_0x14eae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eae8) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14EAF0u;
    // 0x14eaf0: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x14eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x14eaf4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14eaf8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x14eaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x14eafc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14EAFCu;
    {
        const bool branch_taken_0x14eafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eafc) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14EB04u;
    // 0x14eb04: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14eb08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14eb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14eb0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14eb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14eb10: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x14eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x14eb14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14eb18: 0x14820019  bne         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x14EB18u;
    {
        const bool branch_taken_0x14eb18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x14eb18) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14EB20u;
    // 0x14eb20: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x14eb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x14eb24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14eb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14eb28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14eb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb30: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x14eb30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14eb34: 0xc05450c  jal         func_151430
    ctx->pc = 0x14EB34u;
    SET_GPR_U32(ctx, 31, 0x14EB3Cu);
    ctx->pc = 0x151430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151430u, 0x14EB34u, 0x14EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB3Cu;
label_14eb3c:
    // 0x14eb3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14eb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb40: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x14eb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14eb44: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14eb44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb48: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x14eb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x14eb4c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x14eb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14eb50: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x14eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
    // 0x14eb54: 0xafa5011c  sw          $a1, 0x11C($sp)
    ctx->pc = 0x14eb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 5));
label_14eb58:
    // 0x14eb58: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14eb5c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14eb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14eb60: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x14EB60u;
    SET_GPR_U32(ctx, 31, 0x14EB68u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x14EB60u, 0x14EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB68u;
label_14eb68:
    // 0x14eb68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14eb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb6c: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x14EB6Cu;
    SET_GPR_U32(ctx, 31, 0x14EB74u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x14EB6Cu, 0x14EB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB74u;
label_14eb74:
    // 0x14eb74: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x14eb74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14eb78: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x14EB78u;
    {
        const bool branch_taken_0x14eb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14eb78) {
            ctx->pc = 0x14EABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14eabc;
        }
    }
    ctx->pc = 0x14EB80u;
label_14eb80:
    // 0x14eb80: 0x8f82ba94  lw          $v0, -0x456C($gp)
    ctx->pc = 0x14eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
    // 0x14eb84: 0x100200ab  beq         $zero, $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x14EB84u;
    {
        const bool branch_taken_0x14eb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14eb84) {
            ctx->pc = 0x14EE34u;
            goto label_14ee34;
        }
    }
    ctx->pc = 0x14EB8Cu;
    // 0x14eb8c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14eb90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x14eb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14eb94: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x14eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14eb98: 0xc090f80  jal         func_243E00
    ctx->pc = 0x14EB98u;
    SET_GPR_U32(ctx, 31, 0x14EBA0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x14EB98u, 0x14EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBA0u;
label_14eba0:
    // 0x14eba0: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x14eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14eba4: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x14eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14eba8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x14eba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14ebac: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x14ebacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ebb0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14ebb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ebb4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x14ebb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14ebb8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x14ebb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14ebbc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14ebbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14ebc0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14ebc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14ebc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ebc8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x14ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14ebcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ebccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ebd0: 0x0  nop
    ctx->pc = 0x14ebd0u;
    // NOP
    // 0x14ebd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14ebd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14ebd8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14ebd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14ebdc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x14ebe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ebe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ebe4: 0x0  nop
    ctx->pc = 0x14ebe4u;
    // NOP
    // 0x14ebe8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14ebe8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14ebec: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x14ebecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ebf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14ebf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14ebf4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x14ebf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x14ebf8: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x14ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ebfc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x14ec00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ec00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ec04: 0x0  nop
    ctx->pc = 0x14ec04u;
    // NOP
    // 0x14ec08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ec08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14ec0c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x14ec0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x14ec10: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14ec14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14ec14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ec18: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x14ec18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x14ec1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14ec1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ec20: 0x0  nop
    ctx->pc = 0x14ec20u;
    // NOP
    // 0x14ec24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14ec24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14ec28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14ec28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14ec2c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x14ec30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ec30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ec34: 0x0  nop
    ctx->pc = 0x14ec34u;
    // NOP
    // 0x14ec38: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14ec38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14ec3c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x14ec3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ec40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14ec40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14ec44: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x14ec44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x14ec48: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x14ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14ec4c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x14ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14ec50: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x14ec50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ec54: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x14ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ec58: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x14ec58u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x14ec5c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14ec5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14ec60: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14ec64: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14ec64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14ec68: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x14ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x14ec6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14ec6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ec70: 0x0  nop
    ctx->pc = 0x14ec70u;
    // NOP
    // 0x14ec74: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14ec74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14ec78: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x14ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x14ec7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14ec7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ec80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ec80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ec84: 0x0  nop
    ctx->pc = 0x14ec84u;
    // NOP
    // 0x14ec88: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14ec88u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x14ec8c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x14ec8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x14ec90: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x14ec90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ec94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14ec94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14ec98: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x14ec98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x14ec9c: 0x3c024384  lui         $v0, 0x4384
    ctx->pc = 0x14ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17284 << 16));
    // 0x14eca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14eca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14eca4: 0x0  nop
    ctx->pc = 0x14eca4u;
    // NOP
    // 0x14eca8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x14eca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x14ecac: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14ecb0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14ecb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14ecb4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x14ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x14ecb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ecb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ecbc: 0x0  nop
    ctx->pc = 0x14ecbcu;
    // NOP
    // 0x14ecc0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14ecc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14ecc4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x14ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x14ecc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14ecc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14eccc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ecccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ecd0: 0x0  nop
    ctx->pc = 0x14ecd0u;
    // NOP
    // 0x14ecd4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14ecd4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x14ecd8: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x14ecd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x14ecdc: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x14ecdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ece0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14ece0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14ece4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x14ece4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x14ece8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x14ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x14ecec: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x14ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x14ecf0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x14ecf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14ecf4: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x14ECF4u;
    {
        const bool branch_taken_0x14ecf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ecf4) {
            ctx->pc = 0x14ED34u;
            goto label_14ed34;
        }
    }
    ctx->pc = 0x14ECFCu;
    // 0x14ecfc: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x14ecfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ed00: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x14ed04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ed04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ed08: 0x0  nop
    ctx->pc = 0x14ed08u;
    // NOP
    // 0x14ed0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14ed0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14ed10: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x14ed10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x14ed14: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x14ed14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ed18: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x14ed1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ed1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ed20: 0x0  nop
    ctx->pc = 0x14ed20u;
    // NOP
    // 0x14ed24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ed24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14ed28: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x14ed28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x14ed2c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14ED2Cu;
    {
        const bool branch_taken_0x14ed2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed2c) {
            ctx->pc = 0x14ED64u;
            goto label_14ed64;
        }
    }
    ctx->pc = 0x14ED34u;
label_14ed34:
    // 0x14ed34: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x14ed34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ed38: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x14ed38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x14ed3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14ed3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ed40: 0x0  nop
    ctx->pc = 0x14ed40u;
    // NOP
    // 0x14ed44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14ed44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14ed48: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x14ed48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x14ed4c: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x14ed4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ed50: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x14ed54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ed54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ed58: 0x0  nop
    ctx->pc = 0x14ed58u;
    // NOP
    // 0x14ed5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14ed5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14ed60: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x14ed60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_14ed64:
    // 0x14ed64: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x14ed64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x14ed68: 0xc7808d00  lwc1        $f0, -0x7300($gp)
    ctx->pc = 0x14ed68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ed6c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14ed6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x14ed70: 0xc0bbf1e  jal         func_2EFC78
    ctx->pc = 0x14ED70u;
    SET_GPR_U32(ctx, 31, 0x14ED78u);
    ctx->pc = 0x2EFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFC78u, 0x14ED70u, 0x14ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED78u;
label_14ed78:
    // 0x14ed78: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14ed7c: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x14ed7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x14ed80: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14ED80u;
    {
        const bool branch_taken_0x14ed80 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14ed80) {
            ctx->pc = 0x14ED94u;
            goto label_14ed94;
        }
    }
    ctx->pc = 0x14ED88u;
    // 0x14ed88: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14ED88u;
    {
        const bool branch_taken_0x14ed88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ed88) {
            ctx->pc = 0x14ED94u;
            goto label_14ed94;
        }
    }
    ctx->pc = 0x14ED90u;
    // 0x14ed90: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x14ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
label_14ed94:
    // 0x14ed94: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x14ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x14ed98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14ed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ed9c: 0xa3a20148  sb          $v0, 0x148($sp)
    ctx->pc = 0x14ed9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 328), (uint8_t)GPR_U32(ctx, 2));
    // 0x14eda0: 0xc0bbf1e  jal         func_2EFC78
    ctx->pc = 0x14EDA0u;
    SET_GPR_U32(ctx, 31, 0x14EDA8u);
    ctx->pc = 0x2EFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFC78u, 0x14EDA0u, 0x14EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDA8u;
label_14eda8:
    // 0x14eda8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14edac: 0x3044007f  andi        $a0, $v0, 0x7F
    ctx->pc = 0x14edacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x14edb0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EDB0u;
    {
        const bool branch_taken_0x14edb0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14edb0) {
            ctx->pc = 0x14EDC4u;
            goto label_14edc4;
        }
    }
    ctx->pc = 0x14EDB8u;
    // 0x14edb8: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14EDB8u;
    {
        const bool branch_taken_0x14edb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14edb8) {
            ctx->pc = 0x14EDC4u;
            goto label_14edc4;
        }
    }
    ctx->pc = 0x14EDC0u;
    // 0x14edc0: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x14edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
label_14edc4:
    // 0x14edc4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14edc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14edc8: 0x24a70080  addiu       $a3, $a1, 0x80
    ctx->pc = 0x14edc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x14edcc: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x14edccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x14edd0: 0xa3a20149  sb          $v0, 0x149($sp)
    ctx->pc = 0x14edd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 329), (uint8_t)GPR_U32(ctx, 2));
    // 0x14edd4: 0xc0bbf1e  jal         func_2EFC78
    ctx->pc = 0x14EDD4u;
    SET_GPR_U32(ctx, 31, 0x14EDDCu);
    ctx->pc = 0x2EFC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFC78u, 0x14EDD4u, 0x14EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EDDCu;
label_14eddc:
    // 0x14eddc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14ede0: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x14ede0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x14ede4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EDE4u;
    {
        const bool branch_taken_0x14ede4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x14ede4) {
            ctx->pc = 0x14EDF8u;
            goto label_14edf8;
        }
    }
    ctx->pc = 0x14EDECu;
    // 0x14edec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14EDECu;
    {
        const bool branch_taken_0x14edec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14edec) {
            ctx->pc = 0x14EDF8u;
            goto label_14edf8;
        }
    }
    ctx->pc = 0x14EDF4u;
    // 0x14edf4: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x14edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
label_14edf8:
    // 0x14edf8: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x14edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x14edfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14edfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ee00: 0xa3a2014a  sb          $v0, 0x14A($sp)
    ctx->pc = 0x14ee00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 330), (uint8_t)GPR_U32(ctx, 2));
    // 0x14ee04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14ee04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ee08: 0xa3a2018f  sb          $v0, 0x18F($sp)
    ctx->pc = 0x14ee08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 399), (uint8_t)GPR_U32(ctx, 2));
    // 0x14ee0c: 0x8f84ba94  lw          $a0, -0x456C($gp)
    ctx->pc = 0x14ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
    // 0x14ee10: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x14ee10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14ee14: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x14ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14ee18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14ee18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee1c: 0x27a70148  addiu       $a3, $sp, 0x148
    ctx->pc = 0x14ee1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x14ee20: 0xc0a43e4  jal         func_290F90
    ctx->pc = 0x14EE20u;
    SET_GPR_U32(ctx, 31, 0x14EE28u);
    ctx->pc = 0x290F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F90u, 0x14EE20u, 0x14EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE28u;
label_14ee28:
    // 0x14ee28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ee2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14EE2Cu;
    {
        const bool branch_taken_0x14ee2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee2c) {
            ctx->pc = 0x14EE38u;
            goto label_14ee38;
        }
    }
    ctx->pc = 0x14EE34u;
label_14ee34:
    // 0x14ee34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14ee34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ee38:
    // 0x14ee38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14ee38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14ee3c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14ee3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14ee40: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14ee40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14ee44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14ee44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ee48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14ee48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ee4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14ee4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ee50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14ee50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ee54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14ee54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ee58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ee58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ee5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ee5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ee60: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x14ee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x14ee64: 0x3e00008  jr          $ra
    ctx->pc = 0x14EE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EE6Cu;
    // 0x14ee6c: 0x0  nop
    ctx->pc = 0x14ee6cu;
    // NOP
    ctx->pc = 0x14ee70u;
}
