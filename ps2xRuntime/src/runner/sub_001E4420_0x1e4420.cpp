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

// Function: sub_001E4420
// Address: 0x1e4420 - 0x1e4970
void sub_001E4420_0x1e4420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4420_0x1e4420");
#endif

    switch (ctx->pc) {
        case 0x1e4450u: goto label_1e4450;
        case 0x1e445cu: goto label_1e445c;
        case 0x1e4468u: goto label_1e4468;
        case 0x1e4474u: goto label_1e4474;
        case 0x1e4488u: goto label_1e4488;
        case 0x1e4504u: goto label_1e4504;
        case 0x1e451cu: goto label_1e451c;
        case 0x1e4534u: goto label_1e4534;
        case 0x1e4540u: goto label_1e4540;
        case 0x1e4560u: goto label_1e4560;
        case 0x1e4578u: goto label_1e4578;
        case 0x1e45e4u: goto label_1e45e4;
        case 0x1e45fcu: goto label_1e45fc;
        case 0x1e460cu: goto label_1e460c;
        case 0x1e461cu: goto label_1e461c;
        case 0x1e462cu: goto label_1e462c;
        case 0x1e4644u: goto label_1e4644;
        case 0x1e4658u: goto label_1e4658;
        case 0x1e4674u: goto label_1e4674;
        case 0x1e4684u: goto label_1e4684;
        case 0x1e4698u: goto label_1e4698;
        case 0x1e46b4u: goto label_1e46b4;
        case 0x1e46bcu: goto label_1e46bc;
        case 0x1e4730u: goto label_1e4730;
        case 0x1e492cu: goto label_1e492c;
        case 0x1e493cu: goto label_1e493c;
        default: break;
    }

    ctx->pc = 0x1e4420u;

    // 0x1e4420: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e4420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e4424: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e4424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e4428: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e4428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e442c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e442cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e4430: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e4434: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e4438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e443c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e443cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4440: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1e4440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1e4444: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1e4444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1e4448: 0xc056254  jal         func_158950
    ctx->pc = 0x1E4448u;
    SET_GPR_U32(ctx, 31, 0x1E4450u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1E4448u, 0x1E4450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4450u;
label_1e4450:
    // 0x1e4450: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1e4450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1e4454: 0xc056254  jal         func_158950
    ctx->pc = 0x1E4454u;
    SET_GPR_U32(ctx, 31, 0x1E445Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1E4454u, 0x1E445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E445Cu;
label_1e445c:
    // 0x1e445c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e445cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4460: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1E4460u;
    {
        const bool branch_taken_0x1e4460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4460) {
            ctx->pc = 0x1E4550u;
            goto label_1e4550;
        }
    }
    ctx->pc = 0x1E4468u;
label_1e4468:
    // 0x1e4468: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e4468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e446c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1E446Cu;
    {
        const bool branch_taken_0x1e446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e446c) {
            ctx->pc = 0x1E4520u;
            goto label_1e4520;
        }
    }
    ctx->pc = 0x1E4474u;
label_1e4474:
    // 0x1e4474: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e4474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4478: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e447c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e447cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4480: 0xc079a38  jal         func_1E68E0
    ctx->pc = 0x1E4480u;
    SET_GPR_U32(ctx, 31, 0x1E4488u);
    ctx->pc = 0x1E68E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E68E0u, 0x1E4480u, 0x1E4488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4488u;
label_1e4488:
    // 0x1e4488: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4488u;
    {
        const bool branch_taken_0x1e4488 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e4488) {
            ctx->pc = 0x1E44A4u;
            goto label_1e44a4;
        }
    }
    ctx->pc = 0x1E4490u;
    // 0x1e4490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4494: 0x0  nop
    ctx->pc = 0x1e4494u;
    // NOP
    // 0x1e4498: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e4498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e449c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E449Cu;
    {
        const bool branch_taken_0x1e449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e449c) {
            ctx->pc = 0x1E44C0u;
            goto label_1e44c0;
        }
    }
    ctx->pc = 0x1E44A4u;
label_1e44a4:
    // 0x1e44a4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e44a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e44a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e44a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e44ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e44acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e44b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e44b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e44b4: 0x0  nop
    ctx->pc = 0x1e44b4u;
    // NOP
    // 0x1e44b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e44b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e44bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e44bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e44c0:
    // 0x1e44c0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1e44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1e44c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e44c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e44c8: 0x0  nop
    ctx->pc = 0x1e44c8u;
    // NOP
    // 0x1e44cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e44ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e44d0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1e44d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1e44d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e44d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e44d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e44dc: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1e44dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e44e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e44e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e44e4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1E44E4u;
    {
        const bool branch_taken_0x1e44e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e44e4) {
            ctx->pc = 0x1E451Cu;
            goto label_1e451c;
        }
    }
    ctx->pc = 0x1E44ECu;
    // 0x1e44ec: 0xafb000a8  sw          $s0, 0xA8($sp)
    ctx->pc = 0x1e44ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 16));
    // 0x1e44f0: 0x27b400a8  addiu       $s4, $sp, 0xA8
    ctx->pc = 0x1e44f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1e44f4: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1e44f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1e44f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e44f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e44fc: 0xc05614c  jal         func_158530
    ctx->pc = 0x1E44FCu;
    SET_GPR_U32(ctx, 31, 0x1E4504u);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x1E44FCu, 0x1E4504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4504u;
label_1e4504:
    // 0x1e4504: 0xafb100a4  sw          $s1, 0xA4($sp)
    ctx->pc = 0x1e4504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 17));
    // 0x1e4508: 0x27b300a4  addiu       $s3, $sp, 0xA4
    ctx->pc = 0x1e4508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1e450c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1e450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1e4510: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e4510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4514: 0xc05614c  jal         func_158530
    ctx->pc = 0x1E4514u;
    SET_GPR_U32(ctx, 31, 0x1E451Cu);
    ctx->pc = 0x158530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158530u, 0x1E4514u, 0x1E451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E451Cu;
label_1e451c:
    // 0x1e451c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e451cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e4520:
    // 0x1e4520: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e4520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4524: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e4524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e4528: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e4528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e452c: 0xc077fa0  jal         func_1DFE80
    ctx->pc = 0x1E452Cu;
    SET_GPR_U32(ctx, 31, 0x1E4534u);
    ctx->pc = 0x1DFE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFE80u, 0x1E452Cu, 0x1E4534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4534u;
label_1e4534:
    // 0x1e4534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4538: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E4538u;
    SET_GPR_U32(ctx, 31, 0x1E4540u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E4538u, 0x1E4540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4540u;
label_1e4540:
    // 0x1e4540: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1e4540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e4544: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1E4544u;
    {
        const bool branch_taken_0x1e4544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4544) {
            ctx->pc = 0x1E4474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4474;
        }
    }
    ctx->pc = 0x1E454Cu;
    // 0x1e454c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e454cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e4550:
    // 0x1e4550: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e4550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4554: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1e4554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1e4558: 0xc077f1c  jal         func_1DFC70
    ctx->pc = 0x1E4558u;
    SET_GPR_U32(ctx, 31, 0x1E4560u);
    ctx->pc = 0x1DFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFC70u, 0x1E4558u, 0x1E4560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4560u;
label_1e4560:
    // 0x1e4560: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e4560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e4564: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1E4564u;
    {
        const bool branch_taken_0x1e4564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4564) {
            ctx->pc = 0x1E4468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4468;
        }
    }
    ctx->pc = 0x1E456Cu;
    // 0x1e456c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1e456cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1e4570: 0xc05611c  jal         func_158470
    ctx->pc = 0x1E4570u;
    SET_GPR_U32(ctx, 31, 0x1E4578u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1E4570u, 0x1E4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4578u;
label_1e4578:
    // 0x1e4578: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4578u;
    {
        const bool branch_taken_0x1e4578 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e4578) {
            ctx->pc = 0x1E4594u;
            goto label_1e4594;
        }
    }
    ctx->pc = 0x1E4580u;
    // 0x1e4580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4584: 0x0  nop
    ctx->pc = 0x1e4584u;
    // NOP
    // 0x1e4588: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e4588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e458c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E458Cu;
    {
        const bool branch_taken_0x1e458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e458c) {
            ctx->pc = 0x1E45B0u;
            goto label_1e45b0;
        }
    }
    ctx->pc = 0x1E4594u;
label_1e4594:
    // 0x1e4594: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e4594u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e4598: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e459c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e459cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e45a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e45a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e45a4: 0x0  nop
    ctx->pc = 0x1e45a4u;
    // NOP
    // 0x1e45a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e45a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e45ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e45acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e45b0:
    // 0x1e45b0: 0x3c024473  lui         $v0, 0x4473
    ctx->pc = 0x1e45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17523 << 16));
    // 0x1e45b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e45b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e45b8: 0x0  nop
    ctx->pc = 0x1e45b8u;
    // NOP
    // 0x1e45bc: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1e45bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e45c0: 0x3c024473  lui         $v0, 0x4473
    ctx->pc = 0x1e45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17523 << 16));
    // 0x1e45c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e45c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e45c8: 0x0  nop
    ctx->pc = 0x1e45c8u;
    // NOP
    // 0x1e45cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e45ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e45d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e45d4: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x1e45d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1e45d8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1e45d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1e45dc: 0xc05611c  jal         func_158470
    ctx->pc = 0x1E45DCu;
    SET_GPR_U32(ctx, 31, 0x1E45E4u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1E45DCu, 0x1E45E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E45E4u;
label_1e45e4:
    // 0x1e45e4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E45E4u;
    {
        const bool branch_taken_0x1e45e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e45e4) {
            ctx->pc = 0x1E4614u;
            goto label_1e4614;
        }
    }
    ctx->pc = 0x1E45ECu;
    // 0x1e45ec: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1e45ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1e45f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e45f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e45f4: 0xc056094  jal         func_158250
    ctx->pc = 0x1E45F4u;
    SET_GPR_U32(ctx, 31, 0x1E45FCu);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1E45F4u, 0x1E45FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E45FCu;
label_1e45fc:
    // 0x1e45fc: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1e45fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1e4600: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e4600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4604: 0xc056094  jal         func_158250
    ctx->pc = 0x1E4604u;
    SET_GPR_U32(ctx, 31, 0x1E460Cu);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1E4604u, 0x1E460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E460Cu;
label_1e460c:
    // 0x1e460c: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x1E460Cu;
    {
        const bool branch_taken_0x1e460c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e460c) {
            ctx->pc = 0x1E493Cu;
            goto label_1e493c;
        }
    }
    ctx->pc = 0x1E4614u;
label_1e4614:
    // 0x1e4614: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1E4614u;
    SET_GPR_U32(ctx, 31, 0x1E461Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1E4614u, 0x1E461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E461Cu;
label_1e461c:
    // 0x1e461c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e461cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4620: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1e4620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1e4624: 0xc05611c  jal         func_158470
    ctx->pc = 0x1E4624u;
    SET_GPR_U32(ctx, 31, 0x1E462Cu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1E4624u, 0x1E462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E462Cu;
label_1e462c:
    // 0x1e462c: 0x2a2001b  divu        $zero, $s5, $v0
    ctx->pc = 0x1e462cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
    // 0x1e4630: 0x9010  mfhi        $s2
    ctx->pc = 0x1e4630u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1e4634: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1e4634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1e4638: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e4638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e463c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E463Cu;
    SET_GPR_U32(ctx, 31, 0x1E4644u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E463Cu, 0x1E4644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4644u;
label_1e4644:
    // 0x1e4644: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e4644u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4648: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1e4648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1e464c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e464cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4650: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E4650u;
    SET_GPR_U32(ctx, 31, 0x1E4658u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E4650u, 0x1E4658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4658u;
label_1e4658:
    // 0x1e4658: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e4658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e465c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1e465cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e4660: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e4660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4664: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1e4664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e4668: 0x27a80084  addiu       $t0, $sp, 0x84
    ctx->pc = 0x1e4668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1e466c: 0xc079adc  jal         func_1E6B70
    ctx->pc = 0x1E466Cu;
    SET_GPR_U32(ctx, 31, 0x1E4674u);
    ctx->pc = 0x1E6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6B70u, 0x1E466Cu, 0x1E4674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4674u;
label_1e4674:
    // 0x1e4674: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1e4674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1e4678: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e4678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e467c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E467Cu;
    SET_GPR_U32(ctx, 31, 0x1E4684u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E467Cu, 0x1E4684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4684u;
label_1e4684:
    // 0x1e4684: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e4684u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4688: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1e4688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1e468c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e468cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4690: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E4690u;
    SET_GPR_U32(ctx, 31, 0x1E4698u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E4690u, 0x1E4698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4698u;
label_1e4698:
    // 0x1e4698: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1e4698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e469c: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1e469cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e46a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e46a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e46a4: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x1e46a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1e46a8: 0x27a8007c  addiu       $t0, $sp, 0x7C
    ctx->pc = 0x1e46a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1e46ac: 0xc079b10  jal         func_1E6C40
    ctx->pc = 0x1E46ACu;
    SET_GPR_U32(ctx, 31, 0x1E46B4u);
    ctx->pc = 0x1E6C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6C40u, 0x1E46ACu, 0x1E46B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E46B4u;
label_1e46b4:
    // 0x1e46b4: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1E46B4u;
    SET_GPR_U32(ctx, 31, 0x1E46BCu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1E46B4u, 0x1E46BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E46BCu;
label_1e46bc:
    // 0x1e46bc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1e46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e46c0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e46c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e46c4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e46c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e46c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E46C8u;
    {
        const bool branch_taken_0x1e46c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e46c8) {
            ctx->pc = 0x1E46E4u;
            goto label_1e46e4;
        }
    }
    ctx->pc = 0x1E46D0u;
    // 0x1e46d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e46d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e46d4: 0x0  nop
    ctx->pc = 0x1e46d4u;
    // NOP
    // 0x1e46d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e46d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e46dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E46DCu;
    {
        const bool branch_taken_0x1e46dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e46dc) {
            ctx->pc = 0x1E4700u;
            goto label_1e4700;
        }
    }
    ctx->pc = 0x1E46E4u;
label_1e46e4:
    // 0x1e46e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e46e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e46e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e46e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e46ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e46ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e46f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e46f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e46f4: 0x0  nop
    ctx->pc = 0x1e46f4u;
    // NOP
    // 0x1e46f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e46f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e46fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e46fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e4700:
    // 0x1e4700: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1e4700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4704: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x1e4704u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e4708: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1e4708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e470c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1e470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4710: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4714: 0x0  nop
    ctx->pc = 0x1e4714u;
    // NOP
    // 0x1e4718: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e4718u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e471c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1e471cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e4720: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e4720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4724: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1e4724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1e4728: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1E4728u;
    SET_GPR_U32(ctx, 31, 0x1E4730u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1E4728u, 0x1E4730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4730u;
label_1e4730:
    // 0x1e4730: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1e4730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e4734: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e4734u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e4738: 0x1010  mfhi        $v0
    ctx->pc = 0x1e4738u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e473c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E473Cu;
    {
        const bool branch_taken_0x1e473c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e473c) {
            ctx->pc = 0x1E4758u;
            goto label_1e4758;
        }
    }
    ctx->pc = 0x1E4744u;
    // 0x1e4744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4748: 0x0  nop
    ctx->pc = 0x1e4748u;
    // NOP
    // 0x1e474c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e474cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e4750: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E4750u;
    {
        const bool branch_taken_0x1e4750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4750) {
            ctx->pc = 0x1E4774u;
            goto label_1e4774;
        }
    }
    ctx->pc = 0x1E4758u;
label_1e4758:
    // 0x1e4758: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e4758u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e475c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e475cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4760: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e4760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e4764: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e4764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4768: 0x0  nop
    ctx->pc = 0x1e4768u;
    // NOP
    // 0x1e476c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e476cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e4770: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e4770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e4774:
    // 0x1e4774: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1e4774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4778: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x1e4778u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e477c: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x1e477cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4780: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1e4780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4784: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4788: 0x0  nop
    ctx->pc = 0x1e4788u;
    // NOP
    // 0x1e478c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e478cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e4790: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1e4790u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e4794: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e4794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4798: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1e4798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1e479c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e47a0: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1e47a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e47a4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e47a8: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1e47a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e47ac: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1e47acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e47b0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e47b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1e47b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e47b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e47b8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1e47b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e47bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e47bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e47c0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e47c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e47c4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1E47C4u;
    {
        const bool branch_taken_0x1e47c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e47c4) {
            ctx->pc = 0x1E4800u;
            goto label_1e4800;
        }
    }
    ctx->pc = 0x1E47CCu;
    // 0x1e47cc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e47ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1e47d0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e47d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e47d4: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1e47d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e47d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e47dc: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x1e47dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e47e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e47e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e47e4: 0x0  nop
    ctx->pc = 0x1e47e4u;
    // NOP
    // 0x1e47e8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e47e8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e47ec: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e47ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e47f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e47f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e47f4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1e47f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1e47f8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E47F8u;
    {
        const bool branch_taken_0x1e47f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e47f8) {
            ctx->pc = 0x1E485Cu;
            goto label_1e485c;
        }
    }
    ctx->pc = 0x1E4800u;
label_1e4800:
    // 0x1e4800: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e4800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4804: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x1e4804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4808: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e4808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e480c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1e480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4810: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1e4810u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e4814: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e4814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1e4818: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e481c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1e481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4820: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e4820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e4824: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e4824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4828: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1E4828u;
    {
        const bool branch_taken_0x1e4828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4828) {
            ctx->pc = 0x1E485Cu;
            goto label_1e485c;
        }
    }
    ctx->pc = 0x1E4830u;
    // 0x1e4830: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e4830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1e4834: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e4834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e4838: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1e4838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e483c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4840: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x1e4840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4848: 0x0  nop
    ctx->pc = 0x1e4848u;
    // NOP
    // 0x1e484c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e484cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e4850: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1e4850u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e4854: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e4854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4858: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1e4858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_1e485c:
    // 0x1e485c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4860: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1e4860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4864: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e4864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4868: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x1e4868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e486c: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1e486cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e4870: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e4870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1e4874: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4878: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1e4878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e487c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e487cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e4880: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e4880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4884: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1E4884u;
    {
        const bool branch_taken_0x1e4884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4884) {
            ctx->pc = 0x1E48C0u;
            goto label_1e48c0;
        }
    }
    ctx->pc = 0x1E488Cu;
    // 0x1e488c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e488cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1e4890: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e4890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e4894: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x1e4894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e4898: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e4898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e489c: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x1e489cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e48a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e48a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e48a4: 0x0  nop
    ctx->pc = 0x1e48a4u;
    // NOP
    // 0x1e48a8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e48a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e48ac: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e48acu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e48b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e48b4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1e48b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1e48b8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E48B8u;
    {
        const bool branch_taken_0x1e48b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e48b8) {
            ctx->pc = 0x1E491Cu;
            goto label_1e491c;
        }
    }
    ctx->pc = 0x1E48C0u;
label_1e48c0:
    // 0x1e48c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e48c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e48c4: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1e48c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e48c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e48cc: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1e48ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e48d0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1e48d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e48d4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1e48d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e48d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e48dc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1e48dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e48e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e48e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e48e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e48e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e48e8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1E48E8u;
    {
        const bool branch_taken_0x1e48e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e48e8) {
            ctx->pc = 0x1E491Cu;
            goto label_1e491c;
        }
    }
    ctx->pc = 0x1E48F0u;
    // 0x1e48f0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1e48f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e48f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e48f8: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x1e48f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e48fc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4900: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x1e4900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4904: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4908: 0x0  nop
    ctx->pc = 0x1e4908u;
    // NOP
    // 0x1e490c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e490cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e4910: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1e4910u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e4914: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1e4914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4918: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1e4918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_1e491c:
    // 0x1e491c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1e491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1e4920: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e4920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4924: 0xc056094  jal         func_158250
    ctx->pc = 0x1E4924u;
    SET_GPR_U32(ctx, 31, 0x1E492Cu);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1E4924u, 0x1E492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E492Cu;
label_1e492c:
    // 0x1e492c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1e492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1e4930: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e4930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4934: 0xc056094  jal         func_158250
    ctx->pc = 0x1E4934u;
    SET_GPR_U32(ctx, 31, 0x1E493Cu);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1E4934u, 0x1E493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E493Cu;
label_1e493c:
    // 0x1e493c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e493cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e4940: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e4940u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4944: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e4944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4948: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e4948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e494c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e494cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4958: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1e4958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e495c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E495Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E495Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4964u;
    // 0x1e4964: 0x0  nop
    ctx->pc = 0x1e4964u;
    // NOP
    // 0x1e4968: 0x0  nop
    ctx->pc = 0x1e4968u;
    // NOP
    // 0x1e496c: 0x0  nop
    ctx->pc = 0x1e496cu;
    // NOP
    ctx->pc = 0x1e4970u;
}
