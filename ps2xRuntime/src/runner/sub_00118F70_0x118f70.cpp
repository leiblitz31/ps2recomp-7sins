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

// Function: sub_00118F70
// Address: 0x118f70 - 0x119180
void sub_00118F70_0x118f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118F70_0x118f70");
#endif

    switch (ctx->pc) {
        case 0x119000u: goto label_119000;
        case 0x119038u: goto label_119038;
        case 0x11904cu: goto label_11904c;
        case 0x119060u: goto label_119060;
        case 0x1190a8u: goto label_1190a8;
        case 0x1190b4u: goto label_1190b4;
        case 0x1190ccu: goto label_1190cc;
        case 0x1190d4u: goto label_1190d4;
        case 0x119100u: goto label_119100;
        case 0x11911cu: goto label_11911c;
        case 0x11913cu: goto label_11913c;
        default: break;
    }

    ctx->pc = 0x118f70u;

    // 0x118f70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x118f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x118f74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x118f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x118f78: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x118f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x118f7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x118f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x118f80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x118f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x118f84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x118f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x118f88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x118f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x118f8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x118f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x118f90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x118f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x118f94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x118f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118f9c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x118f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x118fa0: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x118fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x118fa4: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x118fa4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x118fa8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x118fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x118fac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x118facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x118fb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x118fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118fb4: 0x0  nop
    ctx->pc = 0x118fb4u;
    // NOP
    // 0x118fb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x118fb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118fbc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x118FBCu;
    {
        const bool branch_taken_0x118fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x118fbc) {
            ctx->pc = 0x118FD4u;
            goto label_118fd4;
        }
    }
    ctx->pc = 0x118FC4u;
    // 0x118fc4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x118fc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x118fc8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x118fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x118fcc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x118FCCu;
    {
        const bool branch_taken_0x118fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118fcc) {
            ctx->pc = 0x118FE8u;
            goto label_118fe8;
        }
    }
    ctx->pc = 0x118FD4u;
label_118fd4:
    // 0x118fd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x118fd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x118fd8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x118fd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x118fdc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x118fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x118fe0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118fe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x118fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_118fe8:
    // 0x118fe8: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x118fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x118fec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x118fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x118ff0: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x118ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x118ff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ff8: 0xc1067fa  jal         func_419FE8
    ctx->pc = 0x118FF8u;
    SET_GPR_U32(ctx, 31, 0x119000u);
    ctx->pc = 0x419FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419FE8u, 0x118FF8u, 0x119000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119000u;
label_119000:
    // 0x119000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x119000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119004: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x119004u;
    {
        const bool branch_taken_0x119004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x119004) {
            ctx->pc = 0x119028u;
            goto label_119028;
        }
    }
    ctx->pc = 0x11900Cu;
    // 0x11900c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x11900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x119010: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x119010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x119014: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119014u;
    {
        const bool branch_taken_0x119014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x119014) {
            ctx->pc = 0x119028u;
            goto label_119028;
        }
    }
    ctx->pc = 0x11901Cu;
    // 0x11901c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x11901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x119020: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x119020u;
    {
        const bool branch_taken_0x119020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119020) {
            ctx->pc = 0x119140u;
            goto label_119140;
        }
    }
    ctx->pc = 0x119028u;
label_119028:
    // 0x119028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11902c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11902cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119030: 0xc0e0c2e  jal         func_3830B8
    ctx->pc = 0x119030u;
    SET_GPR_U32(ctx, 31, 0x119038u);
    ctx->pc = 0x3830B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3830B8u, 0x119030u, 0x119038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119038u;
label_119038:
    // 0x119038: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x119038u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11903c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x11903cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119044: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x119044u;
    SET_GPR_U32(ctx, 31, 0x11904Cu);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x119044u, 0x11904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11904Cu;
label_11904c:
    // 0x11904c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119050: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x119050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x119054: 0x24a51bf8  addiu       $a1, $a1, 0x1BF8
    ctx->pc = 0x119054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7160));
    // 0x119058: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x119058u;
    SET_GPR_U32(ctx, 31, 0x119060u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x119058u, 0x119060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119060u;
label_119060:
    // 0x119060: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119060u;
    {
        const bool branch_taken_0x119060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119060) {
            ctx->pc = 0x119074u;
            goto label_119074;
        }
    }
    ctx->pc = 0x119068u;
    // 0x119068: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x119068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11906c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x11906Cu;
    {
        const bool branch_taken_0x11906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11906c) {
            ctx->pc = 0x119140u;
            goto label_119140;
        }
    }
    ctx->pc = 0x119074u;
label_119074:
    // 0x119074: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x119074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x119078: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x119078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11907c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x11907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x119080: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x119080u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x119084: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x119084u;
    {
        const bool branch_taken_0x119084 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x119084) {
            ctx->pc = 0x119098u;
            goto label_119098;
        }
    }
    ctx->pc = 0x11908Cu;
    // 0x11908c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x11908cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x119090: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x119090u;
    {
        const bool branch_taken_0x119090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x119090) {
            ctx->pc = 0x119140u;
            goto label_119140;
        }
    }
    ctx->pc = 0x119098u;
label_119098:
    // 0x119098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11909c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11909cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1190a0: 0xc0e33ee  jal         func_38CFB8
    ctx->pc = 0x1190A0u;
    SET_GPR_U32(ctx, 31, 0x1190A8u);
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x1190A0u, 0x1190A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1190A8u;
label_1190a8:
    // 0x1190a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1190a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190ac: 0xc106784  jal         func_419E10
    ctx->pc = 0x1190ACu;
    SET_GPR_U32(ctx, 31, 0x1190B4u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x1190ACu, 0x1190B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1190B4u;
label_1190b4:
    // 0x1190b4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1190b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190b8: 0x8e14005c  lw          $s4, 0x5C($s0)
    ctx->pc = 0x1190b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1190bc: 0x8e960014  lw          $s6, 0x14($s4)
    ctx->pc = 0x1190bcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1190c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1190c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1190C4u;
    {
        const bool branch_taken_0x1190c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1190c4) {
            ctx->pc = 0x119120u;
            goto label_119120;
        }
    }
    ctx->pc = 0x1190CCu;
label_1190cc:
    // 0x1190cc: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1190CCu;
    SET_GPR_U32(ctx, 31, 0x1190D4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1190CCu, 0x1190D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1190D4u;
label_1190d4:
    // 0x1190d4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1190d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1190d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1190d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1190dc: 0xa810  mfhi        $s5
    ctx->pc = 0x1190dcu;
    SET_GPR_U64(ctx, 21, ctx->hi);
    // 0x1190e0: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1190e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1190e4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1190e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1190e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1190e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1190ec: 0x2c22821  addu        $a1, $s6, $v0
    ctx->pc = 0x1190ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1190f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1190f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1190f4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1190f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1190f8: 0xc104d64  jal         func_413590
    ctx->pc = 0x1190F8u;
    SET_GPR_U32(ctx, 31, 0x119100u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x1190F8u, 0x119100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119100u;
label_119100:
    // 0x119100: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x119100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x119104: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x119108: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11910c: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x11910cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x119110: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x119110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x119114: 0xc041d58  jal         func_107560
    ctx->pc = 0x119114u;
    SET_GPR_U32(ctx, 31, 0x11911Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x119114u, 0x11911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11911Cu;
label_11911c:
    // 0x11911c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11911cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_119120:
    // 0x119120: 0x8f82b9cc  lw          $v0, -0x4634($gp)
    ctx->pc = 0x119120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949324)));
    // 0x119124: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x119124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x119128: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x119128u;
    {
        const bool branch_taken_0x119128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119128) {
            ctx->pc = 0x1190CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1190cc;
        }
    }
    ctx->pc = 0x119130u;
    // 0x119130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119134: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x119134u;
    SET_GPR_U32(ctx, 31, 0x11913Cu);
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x119134u, 0x11913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11913Cu;
label_11913c:
    // 0x11913c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11913cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119140:
    // 0x119140: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x119140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x119144: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x119144u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x119148: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x119148u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11914c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11914cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119150: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x119150u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119154: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x119154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119158: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x119158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11915c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11915cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x119160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x119164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119168: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x119168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x11916c: 0x3e00008  jr          $ra
    ctx->pc = 0x11916Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11916Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119174u;
    // 0x119174: 0x0  nop
    ctx->pc = 0x119174u;
    // NOP
    // 0x119178: 0x0  nop
    ctx->pc = 0x119178u;
    // NOP
    // 0x11917c: 0x0  nop
    ctx->pc = 0x11917cu;
    // NOP
    ctx->pc = 0x119180u;
}
