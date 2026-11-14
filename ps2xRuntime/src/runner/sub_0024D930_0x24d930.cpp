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

// Function: sub_0024D930
// Address: 0x24d930 - 0x24dca0
void sub_0024D930_0x24d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D930_0x24d930");
#endif

    switch (ctx->pc) {
        case 0x24d980u: goto label_24d980;
        case 0x24db80u: goto label_24db80;
        case 0x24db90u: goto label_24db90;
        case 0x24db9cu: goto label_24db9c;
        case 0x24dbb0u: goto label_24dbb0;
        case 0x24dc88u: goto label_24dc88;
        default: break;
    }

    ctx->pc = 0x24d930u;

    // 0x24d930: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x24d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x24d934: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x24d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x24d938: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x24d938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x24d93c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24d93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x24d940: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24d940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x24d944: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24d944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24d948: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24d948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24d94c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24d950: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24d950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24d954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24d954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24d958: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x24d958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x24d95c: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x24d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x24d960: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x24d960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x24d964: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x24d964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24d968: 0x100300ab  beq         $zero, $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x24D968u;
    {
        const bool branch_taken_0x24d968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x24d968) {
            ctx->pc = 0x24DC18u;
            goto label_24dc18;
        }
    }
    ctx->pc = 0x24D970u;
    // 0x24d970: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x24d970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24d974: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24d974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24d978: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24D978u;
    SET_GPR_U32(ctx, 31, 0x24D980u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24D978u, 0x24D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D980u;
label_24d980:
    // 0x24d980: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x24d980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24d984: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x24d984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x24d988: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x24d988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d98c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x24d98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d990: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24d990u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24d994: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x24d994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x24d998: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24d998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d99c: 0x0  nop
    ctx->pc = 0x24d99cu;
    // NOP
    // 0x24d9a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24d9a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d9a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24D9A4u;
    {
        const bool branch_taken_0x24d9a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d9a4) {
            ctx->pc = 0x24D9BCu;
            goto label_24d9bc;
        }
    }
    ctx->pc = 0x24D9ACu;
    // 0x24d9ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24d9acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24d9b0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x24d9b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24d9b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24D9B4u;
    {
        const bool branch_taken_0x24d9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d9b4) {
            ctx->pc = 0x24D9D0u;
            goto label_24d9d0;
        }
    }
    ctx->pc = 0x24D9BCu;
label_24d9bc:
    // 0x24d9bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24d9bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24d9c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24d9c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24d9c4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x24d9c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24d9c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x24d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x24d9cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x24d9ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_24d9d0:
    // 0x24d9d0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x24d9d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24d9d4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x24d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24d9d8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24d9dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d9e0: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x24d9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d9e4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24d9e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24d9e8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24d9ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d9f0: 0x0  nop
    ctx->pc = 0x24d9f0u;
    // NOP
    // 0x24d9f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24d9f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d9f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24D9F8u;
    {
        const bool branch_taken_0x24d9f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d9f8) {
            ctx->pc = 0x24DA10u;
            goto label_24da10;
        }
    }
    ctx->pc = 0x24DA00u;
    // 0x24da00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24da00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24da04: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24da04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24da08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24DA08u;
    {
        const bool branch_taken_0x24da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da08) {
            ctx->pc = 0x24DA24u;
            goto label_24da24;
        }
    }
    ctx->pc = 0x24DA10u;
label_24da10:
    // 0x24da10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24da10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24da14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24da14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24da18: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24da18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24da1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24da20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24da20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24da24:
    // 0x24da24: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x24da24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24da28: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x24da28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24da2c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24da30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24da30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24da34: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x24da34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24da38: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24da38u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24da3c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24da40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24da40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24da44: 0x0  nop
    ctx->pc = 0x24da44u;
    // NOP
    // 0x24da48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24da48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24da4c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24DA4Cu;
    {
        const bool branch_taken_0x24da4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24da4c) {
            ctx->pc = 0x24DA64u;
            goto label_24da64;
        }
    }
    ctx->pc = 0x24DA54u;
    // 0x24da54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24da54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24da58: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x24da58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24da5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24DA5Cu;
    {
        const bool branch_taken_0x24da5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24da5c) {
            ctx->pc = 0x24DA78u;
            goto label_24da78;
        }
    }
    ctx->pc = 0x24DA64u;
label_24da64:
    // 0x24da64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24da64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24da68: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24da68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24da6c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x24da6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24da70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24da70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24da74: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x24da74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_24da78:
    // 0x24da78: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x24da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24da7c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24da80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24da80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24da84: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x24da84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24da88: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24da88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24da8c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24da90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24da90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24da94: 0x0  nop
    ctx->pc = 0x24da94u;
    // NOP
    // 0x24da98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24da98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24da9c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24DA9Cu;
    {
        const bool branch_taken_0x24da9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24da9c) {
            ctx->pc = 0x24DAB4u;
            goto label_24dab4;
        }
    }
    ctx->pc = 0x24DAA4u;
    // 0x24daa4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24daa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24daa8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24daa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24daac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24DAACu;
    {
        const bool branch_taken_0x24daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24daac) {
            ctx->pc = 0x24DAC8u;
            goto label_24dac8;
        }
    }
    ctx->pc = 0x24DAB4u;
label_24dab4:
    // 0x24dab4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24dab4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24dab8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24dab8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24dabc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24dabcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24dac0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24dac4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24dac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24dac8:
    // 0x24dac8: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x24dac8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24dacc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x24daccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24dad0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24dad4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24dad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24dad8: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x24dad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24dadc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24dadcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24dae0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24dae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24dae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dae8: 0x0  nop
    ctx->pc = 0x24dae8u;
    // NOP
    // 0x24daec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24daecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24daf0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24DAF0u;
    {
        const bool branch_taken_0x24daf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24daf0) {
            ctx->pc = 0x24DB08u;
            goto label_24db08;
        }
    }
    ctx->pc = 0x24DAF8u;
    // 0x24daf8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24daf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24dafc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x24dafcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24db00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24DB00u;
    {
        const bool branch_taken_0x24db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24db00) {
            ctx->pc = 0x24DB1Cu;
            goto label_24db1c;
        }
    }
    ctx->pc = 0x24DB08u;
label_24db08:
    // 0x24db08: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24db08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24db0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24db0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24db10: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x24db10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24db14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24db14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24db18: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x24db18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_24db1c:
    // 0x24db1c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x24db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24db20: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24db20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24db24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24db24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24db28: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x24db28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24db2c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x24db2cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24db30: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24db30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x24db34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24db34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24db38: 0x0  nop
    ctx->pc = 0x24db38u;
    // NOP
    // 0x24db3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24db3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24db40: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x24DB40u;
    {
        const bool branch_taken_0x24db40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24db40) {
            ctx->pc = 0x24DB58u;
            goto label_24db58;
        }
    }
    ctx->pc = 0x24DB48u;
    // 0x24db48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24db48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24db4c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24db4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24db50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24DB50u;
    {
        const bool branch_taken_0x24db50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24db50) {
            ctx->pc = 0x24DB6Cu;
            goto label_24db6c;
        }
    }
    ctx->pc = 0x24DB58u;
label_24db58:
    // 0x24db58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24db58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24db5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24db5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24db60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24db60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24db64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x24db64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x24db68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x24db68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_24db6c:
    // 0x24db6c: 0x83b823  subu        $s7, $a0, $v1
    ctx->pc = 0x24db6cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24db70: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x24db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24db74: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24db74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24db78: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x24DB78u;
    SET_GPR_U32(ctx, 31, 0x24DB80u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x24DB78u, 0x24DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB80u;
label_24db80:
    // 0x24db80: 0x54b023  subu        $s6, $v0, $s4
    ctx->pc = 0x24db80u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x24db84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24db84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db88: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x24DB88u;
    {
        const bool branch_taken_0x24db88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24db88) {
            ctx->pc = 0x24DC0Cu;
            goto label_24dc0c;
        }
    }
    ctx->pc = 0x24DB90u;
label_24db90:
    // 0x24db90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24db90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db94: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24DB94u;
    {
        const bool branch_taken_0x24db94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24db94) {
            ctx->pc = 0x24DBF8u;
            goto label_24dbf8;
        }
    }
    ctx->pc = 0x24DB9Cu;
label_24db9c:
    // 0x24db9c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x24db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24dba0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24dba4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24dba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dba8: 0xc064774  jal         func_191DD0
    ctx->pc = 0x24DBA8u;
    SET_GPR_U32(ctx, 31, 0x24DBB0u);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x24DBA8u, 0x24DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DBB0u;
label_24dbb0:
    // 0x24dbb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24dbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dbb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24dbb8: 0x10030006  beq         $zero, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24DBB8u;
    {
        const bool branch_taken_0x24dbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x24dbb8) {
            ctx->pc = 0x24DBD4u;
            goto label_24dbd4;
        }
    }
    ctx->pc = 0x24DBC0u;
    // 0x24dbc0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x24dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24dbc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24dbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24dbc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24dbcc: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24DBCCu;
    {
        const bool branch_taken_0x24dbcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24dbcc) {
            ctx->pc = 0x24DBECu;
            goto label_24dbec;
        }
    }
    ctx->pc = 0x24DBD4u;
label_24dbd4:
    // 0x24dbd4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x24dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24dbd8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x24dbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x24dbdc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DBDCu;
    {
        const bool branch_taken_0x24dbdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dbdc) {
            ctx->pc = 0x24DBECu;
            goto label_24dbec;
        }
    }
    ctx->pc = 0x24DBE4u;
    // 0x24dbe4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x24dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x24dbe8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x24dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_24dbec:
    // 0x24dbec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24dbecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24dbf0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24dbf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24dbf4: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x24dbf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24dbf8:
    // 0x24dbf8: 0x254182b  sltu        $v1, $s2, $s4
    ctx->pc = 0x24dbf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x24dbfc: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x24DBFCu;
    {
        const bool branch_taken_0x24dbfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dbfc) {
            ctx->pc = 0x24DB9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24db9c;
        }
    }
    ctx->pc = 0x24DC04u;
    // 0x24dc04: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x24dc04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x24dc08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24dc08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_24dc0c:
    // 0x24dc0c: 0x277182b  sltu        $v1, $s3, $s7
    ctx->pc = 0x24dc0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x24dc10: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x24DC10u;
    {
        const bool branch_taken_0x24dc10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24dc10) {
            ctx->pc = 0x24DB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24db90;
        }
    }
    ctx->pc = 0x24DC18u;
label_24dc18:
    // 0x24dc18: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x24dc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24dc1c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24dc1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24dc20: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24dc20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24dc24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24dc24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24dc28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24dc28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24dc2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24dc2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24dc30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24dc30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24dc34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24dc34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24dc38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24dc38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24dc3c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x24dc3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24dc40: 0x3e00008  jr          $ra
    ctx->pc = 0x24DC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DC48u;
    // 0x24dc48: 0x0  nop
    ctx->pc = 0x24dc48u;
    // NOP
    // 0x24dc4c: 0x0  nop
    ctx->pc = 0x24dc4cu;
    // NOP
    // 0x24dc50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24dc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24dc54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24dc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24dc58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x24dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24dc5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x24dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x24dc60: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x24dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24dc64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24dc68: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24DC68u;
    {
        const bool branch_taken_0x24dc68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24dc68) {
            ctx->pc = 0x24DC78u;
            goto label_24dc78;
        }
    }
    ctx->pc = 0x24DC70u;
    // 0x24dc70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24DC70u;
    {
        const bool branch_taken_0x24dc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24dc70) {
            ctx->pc = 0x24DC88u;
            goto label_24dc88;
        }
    }
    ctx->pc = 0x24DC78u;
label_24dc78:
    // 0x24dc78: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24dc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24dc7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dc80: 0xc093174  jal         func_24C5D0
    ctx->pc = 0x24DC80u;
    SET_GPR_U32(ctx, 31, 0x24DC88u);
    ctx->pc = 0x24C5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C5D0u, 0x24DC80u, 0x24DC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DC88u;
label_24dc88:
    // 0x24dc88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24dc88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dc8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24dc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24dc90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x24dc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24dc94: 0x3e00008  jr          $ra
    ctx->pc = 0x24DC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24DC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24DC9Cu;
    // 0x24dc9c: 0x0  nop
    ctx->pc = 0x24dc9cu;
    // NOP
    ctx->pc = 0x24dca0u;
}
