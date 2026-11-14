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

// Function: sub_001A7440
// Address: 0x1a7440 - 0x1a7560
void sub_001A7440_0x1a7440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7440_0x1a7440");
#endif

    switch (ctx->pc) {
        case 0x1a7530u: goto label_1a7530;
        default: break;
    }

    ctx->pc = 0x1a7440u;

    // 0x1a7440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a7444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7448: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a7448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a744c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1a744cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1a7450: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a7450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7454: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a7454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7458: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a7458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a745c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A745Cu;
    {
        const bool branch_taken_0x1a745c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a745c) {
            ctx->pc = 0x1A7470u;
            goto label_1a7470;
        }
    }
    ctx->pc = 0x1A7464u;
    // 0x1a7464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7468: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1A7468u;
    {
        const bool branch_taken_0x1a7468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7468) {
            ctx->pc = 0x1A7550u;
            goto label_1a7550;
        }
    }
    ctx->pc = 0x1A7470u;
label_1a7470:
    // 0x1a7470: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a7470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7474: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1a7474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a7478: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a747c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A747Cu;
    {
        const bool branch_taken_0x1a747c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a747c) {
            ctx->pc = 0x1A7490u;
            goto label_1a7490;
        }
    }
    ctx->pc = 0x1A7484u;
    // 0x1a7484: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7488: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1A7488u;
    {
        const bool branch_taken_0x1a7488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7488) {
            ctx->pc = 0x1A7550u;
            goto label_1a7550;
        }
    }
    ctx->pc = 0x1A7490u;
label_1a7490:
    // 0x1a7490: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a7490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7494: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x1a7494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7498: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a7498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a749c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a74a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a74a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a74a4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a74a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a74a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a74a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a74ac: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1a74acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a74b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1a74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a74b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a74b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a74b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a74b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a74bc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a74bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a74c0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1a74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1a74c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1a74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a74c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A74C8u;
    {
        const bool branch_taken_0x1a74c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a74c8) {
            ctx->pc = 0x1A74E4u;
            goto label_1a74e4;
        }
    }
    ctx->pc = 0x1A74D0u;
    // 0x1a74d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a74d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a74d4: 0x0  nop
    ctx->pc = 0x1a74d4u;
    // NOP
    // 0x1a74d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a74d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a74dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A74DCu;
    {
        const bool branch_taken_0x1a74dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a74dc) {
            ctx->pc = 0x1A7500u;
            goto label_1a7500;
        }
    }
    ctx->pc = 0x1A74E4u;
label_1a74e4:
    // 0x1a74e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a74e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a74e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a74e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a74ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a74ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a74f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a74f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a74f4: 0x0  nop
    ctx->pc = 0x1a74f4u;
    // NOP
    // 0x1a74f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a74f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a74fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a74fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a7500:
    // 0x1a7500: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1a7500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1a7504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a7504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7508: 0x0  nop
    ctx->pc = 0x1a7508u;
    // NOP
    // 0x1a750c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a750cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a7510: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x1a7510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x1a7514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a7514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a7518: 0x0  nop
    ctx->pc = 0x1a7518u;
    // NOP
    // 0x1a751c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a751cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a7520: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1a7520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1a7524: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a7524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a7528: 0xc104d30  jal         func_4134C0
    ctx->pc = 0x1A7528u;
    SET_GPR_U32(ctx, 31, 0x1A7530u);
    ctx->pc = 0x4134C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134C0u, 0x1A7528u, 0x1A7530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7530u;
label_1a7530:
    // 0x1a7530: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1a7530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a7534: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a7534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7538: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7538u;
    {
        const bool branch_taken_0x1a7538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a7538) {
            ctx->pc = 0x1A754Cu;
            goto label_1a754c;
        }
    }
    ctx->pc = 0x1A7540u;
    // 0x1a7540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7544: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7544u;
    {
        const bool branch_taken_0x1a7544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7544) {
            ctx->pc = 0x1A7550u;
            goto label_1a7550;
        }
    }
    ctx->pc = 0x1A754Cu;
label_1a754c:
    // 0x1a754c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a754cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7550:
    // 0x1a7550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7554: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a7554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a7558: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7560u;
}
