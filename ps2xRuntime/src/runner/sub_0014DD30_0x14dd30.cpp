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

// Function: sub_0014DD30
// Address: 0x14dd30 - 0x14dfe0
void sub_0014DD30_0x14dd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014DD30_0x14dd30");
#endif

    switch (ctx->pc) {
        case 0x14dd98u: goto label_14dd98;
        case 0x14ddbcu: goto label_14ddbc;
        case 0x14df04u: goto label_14df04;
        case 0x14df28u: goto label_14df28;
        case 0x14df80u: goto label_14df80;
        default: break;
    }

    ctx->pc = 0x14dd30u;

    // 0x14dd30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14dd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14dd34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14dd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14dd38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14dd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14dd3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14dd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14dd40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14dd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14dd44: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14dd48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14dd4c: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DD4Cu;
    {
        const bool branch_taken_0x14dd4c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x14dd4c) {
            ctx->pc = 0x14DD60u;
            goto label_14dd60;
        }
    }
    ctx->pc = 0x14DD54u;
    // 0x14dd54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14dd54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dd58: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x14DD58u;
    {
        const bool branch_taken_0x14dd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dd58) {
            ctx->pc = 0x14DFB8u;
            goto label_14dfb8;
        }
    }
    ctx->pc = 0x14DD60u;
label_14dd60:
    // 0x14dd60: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14dd64: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x14dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x14dd68: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x14dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14dd6c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x14dd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14dd70: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x14dd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dd74: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x14dd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dd78: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x14dd78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14dd7c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x14dd7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14dd80: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14dd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14dd84: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14dd88: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14dd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14dd8c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x14dd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14dd90: 0xc090f80  jal         func_243E00
    ctx->pc = 0x14DD90u;
    SET_GPR_U32(ctx, 31, 0x14DD98u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x14DD90u, 0x14DD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DD98u;
label_14dd98:
    // 0x14dd98: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x14dd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14dd9c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x14dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14dda0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14dda0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14dda4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x14dda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x14dda8: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14ddac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x14ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14ddb0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x14ddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14ddb4: 0xc090f80  jal         func_243E00
    ctx->pc = 0x14DDB4u;
    SET_GPR_U32(ctx, 31, 0x14DDBCu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x14DDB4u, 0x14DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DDBCu;
label_14ddbc:
    // 0x14ddbc: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x14ddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ddc0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x14ddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ddc4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14ddc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14ddc8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x14ddc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x14ddcc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14ddd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14ddd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ddd4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x14ddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ddd8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14ddd8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14dddc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14dddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14dde0: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x14dde0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x14dde4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14dde8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14dde8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ddec: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x14ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ddf0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x14ddf0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x14ddf4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ddf4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ddf8: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x14ddf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x14ddfc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14de00: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14de00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14de04: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x14de04u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14de08: 0x0  nop
    ctx->pc = 0x14de08u;
    // NOP
    // 0x14de0c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14de0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14de10: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x14de10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14de14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14de14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14de18: 0x0  nop
    ctx->pc = 0x14de18u;
    // NOP
    // 0x14de1c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14de1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x14de20: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x14de20u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x14de24: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x14de24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x14de28: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x14de28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x14de2c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14de2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14de30: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x14de30u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14de34: 0x0  nop
    ctx->pc = 0x14de34u;
    // NOP
    // 0x14de38: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14de38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14de3c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x14de3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14de40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14de40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14de44: 0x0  nop
    ctx->pc = 0x14de44u;
    // NOP
    // 0x14de48: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x14de48u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x14de4c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x14de4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x14de50: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x14de50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x14de54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14de54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de58: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x14de58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x14de5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14de5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14de60: 0x0  nop
    ctx->pc = 0x14de60u;
    // NOP
    // 0x14de64: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x14de64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x14de68: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14de6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14de70: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x14de70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14de74: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x14de74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x14de78: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14DE78u;
    {
        const bool branch_taken_0x14de78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de78) {
            ctx->pc = 0x14DEACu;
            goto label_14deac;
        }
    }
    ctx->pc = 0x14DE80u;
    // 0x14de80: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14de84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14de88: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x14de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x14de8c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14de90: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x14de90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x14de94: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x14de94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14de98: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14de9c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x14de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x14dea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dea4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x14DEA4u;
    {
        const bool branch_taken_0x14dea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dea4) {
            ctx->pc = 0x14DFB8u;
            goto label_14dfb8;
        }
    }
    ctx->pc = 0x14DEACu;
label_14deac:
    // 0x14deac: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14deacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14deb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14deb4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x14deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14deb8: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x14deb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x14debc: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x14DEBCu;
    {
        const bool branch_taken_0x14debc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14debc) {
            ctx->pc = 0x14DFB4u;
            goto label_14dfb4;
        }
    }
    ctx->pc = 0x14DEC4u;
    // 0x14dec4: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14dec8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14decc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x14deccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x14ded0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14ded4: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x14ded4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x14ded8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x14ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14dedc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14dedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14dee0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x14dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x14dee4: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14dee8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14deec: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x14deecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14def0: 0x1002001b  beq         $zero, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14DEF0u;
    {
        const bool branch_taken_0x14def0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14def0) {
            ctx->pc = 0x14DF60u;
            goto label_14df60;
        }
    }
    ctx->pc = 0x14DEF8u;
    // 0x14def8: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x14def8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14defc: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x14DEFCu;
    SET_GPR_U32(ctx, 31, 0x14DF04u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x14DEFCu, 0x14DF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF04u;
label_14df04:
    // 0x14df04: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x14df04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x14df08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14df08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14df0c: 0x0  nop
    ctx->pc = 0x14df0cu;
    // NOP
    // 0x14df10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14df10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14df14: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x14DF14u;
    {
        const bool branch_taken_0x14df14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14df14) {
            ctx->pc = 0x14DF60u;
            goto label_14df60;
        }
    }
    ctx->pc = 0x14DF1Cu;
    // 0x14df1c: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x14df1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14df20: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x14DF20u;
    SET_GPR_U32(ctx, 31, 0x14DF28u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x14DF20u, 0x14DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF28u;
label_14df28:
    // 0x14df28: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x14df28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x14df2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14df2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14df30: 0x0  nop
    ctx->pc = 0x14df30u;
    // NOP
    // 0x14df34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14df34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14df38: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x14DF38u;
    {
        const bool branch_taken_0x14df38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14df38) {
            ctx->pc = 0x14DF60u;
            goto label_14df60;
        }
    }
    ctx->pc = 0x14DF40u;
    // 0x14df40: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x14df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x14df44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14df44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14df48: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x14df48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14df4c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14df50: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x14df50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x14df54: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x14df54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14df58: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14df58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14df5c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x14df5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_14df60:
    // 0x14df60: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14df60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14df64: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x14df64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14df68: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14DF68u;
    {
        const bool branch_taken_0x14df68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14df68) {
            ctx->pc = 0x14DFA8u;
            goto label_14dfa8;
        }
    }
    ctx->pc = 0x14DF70u;
    // 0x14df70: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14df70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14df74: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x14df74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x14df78: 0xc085530  jal         func_2154C0
    ctx->pc = 0x14DF78u;
    SET_GPR_U32(ctx, 31, 0x14DF80u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x14DF78u, 0x14DF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14DF80u;
label_14df80:
    // 0x14df80: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x14df80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14df84: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14DF84u;
    {
        const bool branch_taken_0x14df84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14df84) {
            ctx->pc = 0x14DFA8u;
            goto label_14dfa8;
        }
    }
    ctx->pc = 0x14DF8Cu;
    // 0x14df8c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14df90: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x14df90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x14df94: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x14df94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x14df98: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x14df98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x14df9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14df9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14dfa0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14DFA0u;
    {
        const bool branch_taken_0x14dfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dfa0) {
            ctx->pc = 0x14DFB8u;
            goto label_14dfb8;
        }
    }
    ctx->pc = 0x14DFA8u;
label_14dfa8:
    // 0x14dfa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dfac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14DFACu;
    {
        const bool branch_taken_0x14dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dfac) {
            ctx->pc = 0x14DFB8u;
            goto label_14dfb8;
        }
    }
    ctx->pc = 0x14DFB4u;
label_14dfb4:
    // 0x14dfb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14dfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14dfb8:
    // 0x14dfb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14dfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dfbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14dfbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dfc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14dfc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dfc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14dfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14dfc8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x14dfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14dfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x14DFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DFD4u;
    // 0x14dfd4: 0x0  nop
    ctx->pc = 0x14dfd4u;
    // NOP
    // 0x14dfd8: 0x0  nop
    ctx->pc = 0x14dfd8u;
    // NOP
    // 0x14dfdc: 0x0  nop
    ctx->pc = 0x14dfdcu;
    // NOP
    ctx->pc = 0x14dfe0u;
}
