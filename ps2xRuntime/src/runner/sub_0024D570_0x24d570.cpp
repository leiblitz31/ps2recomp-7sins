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

// Function: sub_0024D570
// Address: 0x24d570 - 0x24d6b0
void sub_0024D570_0x24d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D570_0x24d570");
#endif

    ctx->pc = 0x24d570u;

    // 0x24d570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24d570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24d574: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24d574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24d578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24d578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24d57c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24d57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24d580: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x24d580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x24d584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d588: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x24d588u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24d58c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x24d58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d590: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24d590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24d594: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d598: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x24d598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d59c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24d59cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24d5a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24d5a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x24d5a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x24d5a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24d5a8: 0x0  nop
    ctx->pc = 0x24d5a8u;
    // NOP
    // 0x24d5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d5b0: 0x0  nop
    ctx->pc = 0x24d5b0u;
    // NOP
    // 0x24d5b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24d5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24d5b8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24d5bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d5c0: 0x0  nop
    ctx->pc = 0x24d5c0u;
    // NOP
    // 0x24d5c4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24d5c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24d5c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x24d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d5cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24d5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d5d0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x24d5d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d5d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24D5D4u;
    {
        const bool branch_taken_0x24d5d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d5d4) {
            ctx->pc = 0x24D5ECu;
            goto label_24d5ec;
        }
    }
    ctx->pc = 0x24D5DCu;
    // 0x24d5dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d5e0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x24d5e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24d5e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24D5E4u;
    {
        const bool branch_taken_0x24d5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d5e4) {
            ctx->pc = 0x24D5F0u;
            goto label_24d5f0;
        }
    }
    ctx->pc = 0x24D5ECu;
label_24d5ec:
    // 0x24d5ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24d5ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d5f0:
    // 0x24d5f0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x24d5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x24d5f4: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x24d5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x24d5f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d5fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x24d5fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24d600: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24d600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x24d604: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24d604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x24d608: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x24d608u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24d60c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x24d60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d610: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24d610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24d614: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24d614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d618: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x24d618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d61c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24d61cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24d620: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24d620u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x24d624: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x24d624u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24d628: 0x0  nop
    ctx->pc = 0x24d628u;
    // NOP
    // 0x24d62c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d630: 0x0  nop
    ctx->pc = 0x24d630u;
    // NOP
    // 0x24d634: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24d634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24d638: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x24d638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x24d63c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24d63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d640: 0x0  nop
    ctx->pc = 0x24d640u;
    // NOP
    // 0x24d644: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24d644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24d648: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x24d648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d64c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24d64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d650: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x24d650u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d654: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x24D654u;
    {
        const bool branch_taken_0x24d654 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d654) {
            ctx->pc = 0x24D66Cu;
            goto label_24d66c;
        }
    }
    ctx->pc = 0x24D65Cu;
    // 0x24d65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d660: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x24d660u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24d664: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24D664u;
    {
        const bool branch_taken_0x24d664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d664) {
            ctx->pc = 0x24D670u;
            goto label_24d670;
        }
    }
    ctx->pc = 0x24D66Cu;
label_24d66c:
    // 0x24d66c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24d66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d670:
    // 0x24d670: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x24d670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x24d674: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x24d674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x24d678: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24d678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24d67c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x24d67cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24d680: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24d680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x24d684: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x24d684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x24d688: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x24d688u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24d68c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x24d68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x24d690: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24d690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d694: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24d694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24d698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d69c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24d69cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d6a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x24d6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24d6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x24D6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D6ACu;
    // 0x24d6ac: 0x0  nop
    ctx->pc = 0x24d6acu;
    // NOP
    ctx->pc = 0x24d6b0u;
}
