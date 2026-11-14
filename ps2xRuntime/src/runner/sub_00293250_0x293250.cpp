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

// Function: sub_00293250
// Address: 0x293250 - 0x2938e0
void sub_00293250_0x293250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293250_0x293250");
#endif

    switch (ctx->pc) {
        case 0x293298u: goto label_293298;
        case 0x2933b8u: goto label_2933b8;
        case 0x2934b8u: goto label_2934b8;
        case 0x2935bcu: goto label_2935bc;
        case 0x2936b8u: goto label_2936b8;
        case 0x2937bcu: goto label_2937bc;
        case 0x2938bcu: goto label_2938bc;
        default: break;
    }

    ctx->pc = 0x293250u;

    // 0x293250: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x293250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x293254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x293254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x293258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x293258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29325c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x293260: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x293260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x293264: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x293264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x293268: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x293268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x29326c: 0xe7ac00c0  swc1        $f12, 0xC0($sp)
    ctx->pc = 0x29326cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x293270: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x293270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x293274: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x293274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293278: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x293278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x29327c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x29327cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x293280: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x293280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x293284: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x293284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293288: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x293288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29328c: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x29328cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x293290: 0xc0a4838  jal         func_2920E0
    ctx->pc = 0x293290u;
    SET_GPR_U32(ctx, 31, 0x293298u);
    ctx->pc = 0x2920E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2920E0u, 0x293290u, 0x293298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293298u;
label_293298:
    // 0x293298: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x293298u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29329c: 0x10200187  beqz        $at, . + 4 + (0x187 << 2)
    ctx->pc = 0x29329Cu;
    {
        const bool branch_taken_0x29329c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29329c) {
            ctx->pc = 0x2938BCu;
            goto label_2938bc;
        }
    }
    ctx->pc = 0x2932A4u;
    // 0x2932a4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2932a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2932a8: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x2932a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x2932ac: 0x10030183  beq         $zero, $v1, . + 4 + (0x183 << 2)
    ctx->pc = 0x2932ACu;
    {
        const bool branch_taken_0x2932ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2932ac) {
            ctx->pc = 0x2938BCu;
            goto label_2938bc;
        }
    }
    ctx->pc = 0x2932B4u;
    // 0x2932b4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x2932b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2932b8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2932b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2932bc: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x2932bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2932c0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2932c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2932c4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2932c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2932c8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2932c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2932cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2932CCu;
    {
        const bool branch_taken_0x2932cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2932cc) {
            ctx->pc = 0x2932E8u;
            goto label_2932e8;
        }
    }
    ctx->pc = 0x2932D4u;
    // 0x2932d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2932d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2932d8: 0x0  nop
    ctx->pc = 0x2932d8u;
    // NOP
    // 0x2932dc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2932dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2932e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2932E0u;
    {
        const bool branch_taken_0x2932e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2932e0) {
            ctx->pc = 0x293304u;
            goto label_293304;
        }
    }
    ctx->pc = 0x2932E8u;
label_2932e8:
    // 0x2932e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2932e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2932ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2932ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2932f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2932f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2932f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2932f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2932f8: 0x0  nop
    ctx->pc = 0x2932f8u;
    // NOP
    // 0x2932fc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2932fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x293300: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x293300u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_293304:
    // 0x293304: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x293304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293308: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29330c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29330cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293310: 0x0  nop
    ctx->pc = 0x293310u;
    // NOP
    // 0x293314: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x293314u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x293318: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x293318u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x29331c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x29331cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x293320: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x293320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293324: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293328: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x293328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29332c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29332cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293330: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x293330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x293334: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x293334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x293338: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x293338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29333c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29333cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293340: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x293340u;
    {
        const bool branch_taken_0x293340 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x293340) {
            ctx->pc = 0x29335Cu;
            goto label_29335c;
        }
    }
    ctx->pc = 0x293348u;
    // 0x293348: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29334c: 0x0  nop
    ctx->pc = 0x29334cu;
    // NOP
    // 0x293350: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x293350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x293354: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x293354u;
    {
        const bool branch_taken_0x293354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293354) {
            ctx->pc = 0x293378u;
            goto label_293378;
        }
    }
    ctx->pc = 0x29335Cu;
label_29335c:
    // 0x29335c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x29335cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x293360: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x293360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x293364: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29336c: 0x0  nop
    ctx->pc = 0x29336cu;
    // NOP
    // 0x293370: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x293370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x293374: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x293374u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_293378:
    // 0x293378: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x293378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x29337c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29337cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x293380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293384: 0x0  nop
    ctx->pc = 0x293384u;
    // NOP
    // 0x293388: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x293388u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x29338c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x29338cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x293390: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x293390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x293394: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x293394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x293398: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x293398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x29339c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2933a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2933a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2933a4: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2933a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2933a8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2933a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2933ac: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2933acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2933b0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2933B0u;
    SET_GPR_U32(ctx, 31, 0x2933B8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2933B0u, 0x2933B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933B8u;
label_2933b8:
    // 0x2933b8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2933b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2933bc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2933bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2933c0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2933c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2933c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2933C4u;
    {
        const bool branch_taken_0x2933c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2933c4) {
            ctx->pc = 0x2933E0u;
            goto label_2933e0;
        }
    }
    ctx->pc = 0x2933CCu;
    // 0x2933cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2933ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2933d0: 0x0  nop
    ctx->pc = 0x2933d0u;
    // NOP
    // 0x2933d4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2933d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2933d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2933D8u;
    {
        const bool branch_taken_0x2933d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2933d8) {
            ctx->pc = 0x2933FCu;
            goto label_2933fc;
        }
    }
    ctx->pc = 0x2933E0u;
label_2933e0:
    // 0x2933e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2933e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2933e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2933e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2933e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2933e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2933ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2933ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2933f0: 0x0  nop
    ctx->pc = 0x2933f0u;
    // NOP
    // 0x2933f4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2933f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2933f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2933f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2933fc:
    // 0x2933fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2933fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293400: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293404: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x293404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293408: 0x0  nop
    ctx->pc = 0x293408u;
    // NOP
    // 0x29340c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x29340cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x293410: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x293410u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x293414: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x293414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x293418: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x293418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x29341c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29341cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293420: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x293420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293424: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x293424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293428: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x293428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x29342c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293430: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x293430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x293434: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x293434u;
    {
        const bool branch_taken_0x293434 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x293434) {
            ctx->pc = 0x293450u;
            goto label_293450;
        }
    }
    ctx->pc = 0x29343Cu;
    // 0x29343c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29343cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293440: 0x0  nop
    ctx->pc = 0x293440u;
    // NOP
    // 0x293444: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x293444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x293448: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x293448u;
    {
        const bool branch_taken_0x293448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293448) {
            ctx->pc = 0x29346Cu;
            goto label_29346c;
        }
    }
    ctx->pc = 0x293450u;
label_293450:
    // 0x293450: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x293450u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x293454: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x293454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x293458: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29345c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29345cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293460: 0x0  nop
    ctx->pc = 0x293460u;
    // NOP
    // 0x293464: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x293464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x293468: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x293468u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29346c:
    // 0x29346c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x29346cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x293470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293474: 0x0  nop
    ctx->pc = 0x293474u;
    // NOP
    // 0x293478: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x293478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29347c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29347cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293484: 0x0  nop
    ctx->pc = 0x293484u;
    // NOP
    // 0x293488: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x293488u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29348c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x29348cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x293490: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x293490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x293494: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x293494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x293498: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x293498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29349c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2934a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2934a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2934a4: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2934a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2934a8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2934a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2934ac: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2934acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2934b0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2934B0u;
    SET_GPR_U32(ctx, 31, 0x2934B8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2934B0u, 0x2934B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934B8u;
label_2934b8:
    // 0x2934b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2934b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2934bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2934bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2934c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2934C0u;
    {
        const bool branch_taken_0x2934c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2934c0) {
            ctx->pc = 0x2934DCu;
            goto label_2934dc;
        }
    }
    ctx->pc = 0x2934C8u;
    // 0x2934c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2934c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2934cc: 0x0  nop
    ctx->pc = 0x2934ccu;
    // NOP
    // 0x2934d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2934d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2934d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2934D4u;
    {
        const bool branch_taken_0x2934d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2934d4) {
            ctx->pc = 0x2934F8u;
            goto label_2934f8;
        }
    }
    ctx->pc = 0x2934DCu;
label_2934dc:
    // 0x2934dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2934dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2934e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2934e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2934e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2934e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2934e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2934e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2934ec: 0x0  nop
    ctx->pc = 0x2934ecu;
    // NOP
    // 0x2934f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2934f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2934f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2934f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2934f8:
    // 0x2934f8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2934f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2934fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2934fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293500: 0x0  nop
    ctx->pc = 0x293500u;
    // NOP
    // 0x293504: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x293504u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x293508: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x293508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x29350c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29350cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293510: 0x0  nop
    ctx->pc = 0x293510u;
    // NOP
    // 0x293514: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x293514u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x293518: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x293518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x29351c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29351cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293520: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293524: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x293524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293528: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x293528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29352c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x29352cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x293530: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x293530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x293534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x293538: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x293538u;
    {
        const bool branch_taken_0x293538 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x293538) {
            ctx->pc = 0x293554u;
            goto label_293554;
        }
    }
    ctx->pc = 0x293540u;
    // 0x293540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293544: 0x0  nop
    ctx->pc = 0x293544u;
    // NOP
    // 0x293548: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x293548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29354c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29354Cu;
    {
        const bool branch_taken_0x29354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29354c) {
            ctx->pc = 0x293570u;
            goto label_293570;
        }
    }
    ctx->pc = 0x293554u;
label_293554:
    // 0x293554: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x293554u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x293558: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x293558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29355c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29355cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293560: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293564: 0x0  nop
    ctx->pc = 0x293564u;
    // NOP
    // 0x293568: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x293568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29356c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29356cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_293570:
    // 0x293570: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x293570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x293574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293578: 0x0  nop
    ctx->pc = 0x293578u;
    // NOP
    // 0x29357c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29357cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x293580: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x293580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293588: 0x0  nop
    ctx->pc = 0x293588u;
    // NOP
    // 0x29358c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29358cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x293590: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x293590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x293594: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x293594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x293598: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x293598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x29359c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x29359cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2935a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2935a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2935a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2935a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2935a8: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2935a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2935ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2935acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2935b0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2935b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2935b4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2935B4u;
    SET_GPR_U32(ctx, 31, 0x2935BCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2935B4u, 0x2935BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2935BCu;
label_2935bc:
    // 0x2935bc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2935bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2935c0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2935c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2935c4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2935c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2935c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2935C8u;
    {
        const bool branch_taken_0x2935c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2935c8) {
            ctx->pc = 0x2935E4u;
            goto label_2935e4;
        }
    }
    ctx->pc = 0x2935D0u;
    // 0x2935d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2935d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2935d4: 0x0  nop
    ctx->pc = 0x2935d4u;
    // NOP
    // 0x2935d8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2935d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2935dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2935DCu;
    {
        const bool branch_taken_0x2935dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2935dc) {
            ctx->pc = 0x293600u;
            goto label_293600;
        }
    }
    ctx->pc = 0x2935E4u;
label_2935e4:
    // 0x2935e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2935e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2935e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2935e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2935ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2935ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2935f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2935f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2935f4: 0x0  nop
    ctx->pc = 0x2935f4u;
    // NOP
    // 0x2935f8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2935f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2935fc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2935fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_293600:
    // 0x293600: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x293600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x293608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29360c: 0x0  nop
    ctx->pc = 0x29360cu;
    // NOP
    // 0x293610: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x293610u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x293614: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x293614u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x293618: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x293618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29361c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29361cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293620: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293624: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x293624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293628: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x293628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29362c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x29362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x293630: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x293630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x293634: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x293634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x293638: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x293638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29363c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29363Cu;
    {
        const bool branch_taken_0x29363c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x29363c) {
            ctx->pc = 0x293658u;
            goto label_293658;
        }
    }
    ctx->pc = 0x293644u;
    // 0x293644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293648: 0x0  nop
    ctx->pc = 0x293648u;
    // NOP
    // 0x29364c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x29364cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x293650: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x293650u;
    {
        const bool branch_taken_0x293650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293650) {
            ctx->pc = 0x293674u;
            goto label_293674;
        }
    }
    ctx->pc = 0x293658u;
label_293658:
    // 0x293658: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x293658u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x29365c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29365cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x293660: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293668: 0x0  nop
    ctx->pc = 0x293668u;
    // NOP
    // 0x29366c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x29366cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x293670: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x293670u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_293674:
    // 0x293674: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x293674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293678: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29367c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29367cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293680: 0x0  nop
    ctx->pc = 0x293680u;
    // NOP
    // 0x293684: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x293684u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x293688: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x293688u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x29368c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x29368cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x293690: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x293690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x293694: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x293694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x293698: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x293698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x29369c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2936a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2936a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2936a4: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2936a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2936a8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2936a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2936ac: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2936acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2936b0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2936B0u;
    SET_GPR_U32(ctx, 31, 0x2936B8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2936B0u, 0x2936B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2936B8u;
label_2936b8:
    // 0x2936b8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2936b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2936bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2936bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2936c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2936C0u;
    {
        const bool branch_taken_0x2936c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2936c0) {
            ctx->pc = 0x2936DCu;
            goto label_2936dc;
        }
    }
    ctx->pc = 0x2936C8u;
    // 0x2936c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2936c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2936cc: 0x0  nop
    ctx->pc = 0x2936ccu;
    // NOP
    // 0x2936d0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2936d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2936d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2936D4u;
    {
        const bool branch_taken_0x2936d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2936d4) {
            ctx->pc = 0x2936F8u;
            goto label_2936f8;
        }
    }
    ctx->pc = 0x2936DCu;
label_2936dc:
    // 0x2936dc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2936dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2936e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2936e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2936e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2936e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2936e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2936e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2936ec: 0x0  nop
    ctx->pc = 0x2936ecu;
    // NOP
    // 0x2936f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2936f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2936f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2936f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2936f8:
    // 0x2936f8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2936f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2936fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2936fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293700: 0x0  nop
    ctx->pc = 0x293700u;
    // NOP
    // 0x293704: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x293704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x293708: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x293708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x29370c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29370cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293710: 0x0  nop
    ctx->pc = 0x293710u;
    // NOP
    // 0x293714: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x293714u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x293718: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x293718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29371c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29371cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293720: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293724: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x293724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293728: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x293728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29372c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x29372cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x293730: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x293730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x293734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x293738: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x293738u;
    {
        const bool branch_taken_0x293738 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x293738) {
            ctx->pc = 0x293754u;
            goto label_293754;
        }
    }
    ctx->pc = 0x293740u;
    // 0x293740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293744: 0x0  nop
    ctx->pc = 0x293744u;
    // NOP
    // 0x293748: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x293748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29374c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29374Cu;
    {
        const bool branch_taken_0x29374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29374c) {
            ctx->pc = 0x293770u;
            goto label_293770;
        }
    }
    ctx->pc = 0x293754u;
label_293754:
    // 0x293754: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x293754u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x293758: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x293758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29375c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29375cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293760: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293764: 0x0  nop
    ctx->pc = 0x293764u;
    // NOP
    // 0x293768: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x293768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29376c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29376cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_293770:
    // 0x293770: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x293770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x293774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293778: 0x0  nop
    ctx->pc = 0x293778u;
    // NOP
    // 0x29377c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x29377cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x293780: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x293780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293788: 0x0  nop
    ctx->pc = 0x293788u;
    // NOP
    // 0x29378c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29378cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x293790: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x293790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x293794: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x293794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x293798: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x293798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29379c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x29379cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2937a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2937a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2937a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2937a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2937a8: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2937a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2937ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2937acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2937b0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2937b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2937b4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2937B4u;
    SET_GPR_U32(ctx, 31, 0x2937BCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2937B4u, 0x2937BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937BCu;
label_2937bc:
    // 0x2937bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2937bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2937c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2937c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2937c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2937C4u;
    {
        const bool branch_taken_0x2937c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2937c4) {
            ctx->pc = 0x2937E0u;
            goto label_2937e0;
        }
    }
    ctx->pc = 0x2937CCu;
    // 0x2937cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2937ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2937d0: 0x0  nop
    ctx->pc = 0x2937d0u;
    // NOP
    // 0x2937d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2937d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2937d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2937D8u;
    {
        const bool branch_taken_0x2937d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2937d8) {
            ctx->pc = 0x2937FCu;
            goto label_2937fc;
        }
    }
    ctx->pc = 0x2937E0u;
label_2937e0:
    // 0x2937e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2937e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2937e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2937e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2937e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2937e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2937ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2937ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2937f0: 0x0  nop
    ctx->pc = 0x2937f0u;
    // NOP
    // 0x2937f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2937f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2937f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2937f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2937fc:
    // 0x2937fc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2937fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x293800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293804: 0x0  nop
    ctx->pc = 0x293804u;
    // NOP
    // 0x293808: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x293808u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29380c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29380cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293814: 0x0  nop
    ctx->pc = 0x293814u;
    // NOP
    // 0x293818: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x293818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29381c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x29381cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x293820: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x293820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x293824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x293824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293828: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x293828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29382c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x29382cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x293830: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x293830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x293834: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x293834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x293838: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x293838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29383c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x29383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x293840: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x293840u;
    {
        const bool branch_taken_0x293840 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x293840) {
            ctx->pc = 0x29385Cu;
            goto label_29385c;
        }
    }
    ctx->pc = 0x293848u;
    // 0x293848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x293848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29384c: 0x0  nop
    ctx->pc = 0x29384cu;
    // NOP
    // 0x293850: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x293850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x293854: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x293854u;
    {
        const bool branch_taken_0x293854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293854) {
            ctx->pc = 0x293878u;
            goto label_293878;
        }
    }
    ctx->pc = 0x29385Cu;
label_29385c:
    // 0x29385c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x29385cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x293860: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x293860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x293864: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x293864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x293868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x293868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29386c: 0x0  nop
    ctx->pc = 0x29386cu;
    // NOP
    // 0x293870: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x293870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x293874: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x293874u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_293878:
    // 0x293878: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x293878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x29387c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29387cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293880: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x293880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293884: 0x0  nop
    ctx->pc = 0x293884u;
    // NOP
    // 0x293888: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x293888u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x29388c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x29388cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x293890: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x293890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x293894: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x293894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x293898: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x293898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x29389c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x29389cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2938a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2938a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2938a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2938a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2938a8: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2938a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2938ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2938acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2938b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2938b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2938b4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2938B4u;
    SET_GPR_U32(ctx, 31, 0x2938BCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2938B4u, 0x2938BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2938BCu;
label_2938bc:
    // 0x2938bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2938bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2938c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2938c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2938c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2938c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2938c8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2938c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2938cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2938CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2938CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2938D4u;
    // 0x2938d4: 0x0  nop
    ctx->pc = 0x2938d4u;
    // NOP
    // 0x2938d8: 0x0  nop
    ctx->pc = 0x2938d8u;
    // NOP
    // 0x2938dc: 0x0  nop
    ctx->pc = 0x2938dcu;
    // NOP
    ctx->pc = 0x2938e0u;
}
