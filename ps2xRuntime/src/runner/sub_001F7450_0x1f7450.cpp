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

// Function: sub_001F7450
// Address: 0x1f7450 - 0x1f7790
void sub_001F7450_0x1f7450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7450_0x1f7450");
#endif

    switch (ctx->pc) {
        case 0x1f748cu: goto label_1f748c;
        case 0x1f74b8u: goto label_1f74b8;
        case 0x1f753cu: goto label_1f753c;
        case 0x1f7574u: goto label_1f7574;
        case 0x1f75acu: goto label_1f75ac;
        case 0x1f75e4u: goto label_1f75e4;
        case 0x1f7608u: goto label_1f7608;
        case 0x1f7630u: goto label_1f7630;
        case 0x1f765cu: goto label_1f765c;
        case 0x1f76c0u: goto label_1f76c0;
        case 0x1f76f8u: goto label_1f76f8;
        case 0x1f7730u: goto label_1f7730;
        case 0x1f7768u: goto label_1f7768;
        default: break;
    }

    ctx->pc = 0x1f7450u;

    // 0x1f7450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f7454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f7458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f7458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f745c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f745cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f7460: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1f7460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1f7464: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7468: 0x906300b4  lbu         $v1, 0xB4($v1)
    ctx->pc = 0x1f7468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1f746c: 0x146000c3  bnez        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x1F746Cu;
    {
        const bool branch_taken_0x1f746c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f746c) {
            ctx->pc = 0x1F777Cu;
            goto label_1f777c;
        }
    }
    ctx->pc = 0x1F7474u;
    // 0x1f7474: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7478: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f7478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f747c: 0x24640104  addiu       $a0, $v1, 0x104
    ctx->pc = 0x1f747cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x1f7480: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f7480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7484: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F7484u;
    SET_GPR_U32(ctx, 31, 0x1F748Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F7484u, 0x1F748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F748Cu;
label_1f748c:
    // 0x1f748c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f748cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7490: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7494: 0x14620055  bne         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1F7494u;
    {
        const bool branch_taken_0x1f7494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f7494) {
            ctx->pc = 0x1F75ECu;
            goto label_1f75ec;
        }
    }
    ctx->pc = 0x1F749Cu;
    // 0x1f749c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1f749cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f74a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f74a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f74a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f74a8: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x1f74a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1f74ac: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f74acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f74b0: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F74B0u;
    SET_GPR_U32(ctx, 31, 0x1F74B8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F74B0u, 0x1F74B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74B8u;
label_1f74b8:
    // 0x1f74b8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1f74b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1f74bc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f74bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f74c0: 0xac6000fc  sw          $zero, 0xFC($v1)
    ctx->pc = 0x1f74c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 252), GPR_U32(ctx, 0));
    // 0x1f74c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f74c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f74c8: 0xc46300c8  lwc1        $f3, 0xC8($v1)
    ctx->pc = 0x1f74c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f74cc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1f74ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1f74d0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1f74d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f74d4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f74d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f74d8: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f74d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f74dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f74dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f74e0: 0x0  nop
    ctx->pc = 0x1f74e0u;
    // NOP
    // 0x1f74e4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1f74e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1f74e8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1f74e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f74ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f74f0: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1f74f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x1f74f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f74f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f74f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f74f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f74fc: 0xa06400eb  sb          $a0, 0xEB($v1)
    ctx->pc = 0x1f74fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 235), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f7500: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f7500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7504: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7508: 0xa06400f8  sb          $a0, 0xF8($v1)
    ctx->pc = 0x1f7508u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 248), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f750c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f750cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7510: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7514: 0x8c630230  lw          $v1, 0x230($v1)
    ctx->pc = 0x1f7514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 560)));
    // 0x1f7518: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7518u;
    {
        const bool branch_taken_0x1f7518 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7518) {
            ctx->pc = 0x1F7544u;
            goto label_1f7544;
        }
    }
    ctx->pc = 0x1F7520u;
    // 0x1f7520: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f752c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f752cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7530: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7534: 0xc07df0c  jal         func_1F7C30
    ctx->pc = 0x1F7534u;
    SET_GPR_U32(ctx, 31, 0x1F753Cu);
    ctx->pc = 0x1F7C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C30u, 0x1F7534u, 0x1F753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F753Cu;
label_1f753c:
    // 0x1f753c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1F753Cu;
    {
        const bool branch_taken_0x1f753c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f753c) {
            ctx->pc = 0x1F75E4u;
            goto label_1f75e4;
        }
    }
    ctx->pc = 0x1F7544u;
label_1f7544:
    // 0x1f7544: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f7544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7548: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f754c: 0x8c630234  lw          $v1, 0x234($v1)
    ctx->pc = 0x1f754cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 564)));
    // 0x1f7550: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7550u;
    {
        const bool branch_taken_0x1f7550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7550) {
            ctx->pc = 0x1F757Cu;
            goto label_1f757c;
        }
    }
    ctx->pc = 0x1F7558u;
    // 0x1f7558: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f755c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f755cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7564: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f7564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7568: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7568u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f756c: 0xc07df7c  jal         func_1F7DF0
    ctx->pc = 0x1F756Cu;
    SET_GPR_U32(ctx, 31, 0x1F7574u);
    ctx->pc = 0x1F7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF0u, 0x1F756Cu, 0x1F7574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7574u;
label_1f7574:
    // 0x1f7574: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F7574u;
    {
        const bool branch_taken_0x1f7574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7574) {
            ctx->pc = 0x1F75E4u;
            goto label_1f75e4;
        }
    }
    ctx->pc = 0x1F757Cu;
label_1f757c:
    // 0x1f757c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f757cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7580: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7584: 0x8c630238  lw          $v1, 0x238($v1)
    ctx->pc = 0x1f7584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 568)));
    // 0x1f7588: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7588u;
    {
        const bool branch_taken_0x1f7588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7588) {
            ctx->pc = 0x1F75B4u;
            goto label_1f75b4;
        }
    }
    ctx->pc = 0x1F7590u;
    // 0x1f7590: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f759c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f759cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f75a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75a4: 0xc07dfec  jal         func_1F7FB0
    ctx->pc = 0x1F75A4u;
    SET_GPR_U32(ctx, 31, 0x1F75ACu);
    ctx->pc = 0x1F7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB0u, 0x1F75A4u, 0x1F75ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F75ACu;
label_1f75ac:
    // 0x1f75ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F75ACu;
    {
        const bool branch_taken_0x1f75ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f75ac) {
            ctx->pc = 0x1F75E4u;
            goto label_1f75e4;
        }
    }
    ctx->pc = 0x1F75B4u;
label_1f75b4:
    // 0x1f75b4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f75b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f75b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f75bc: 0x8c63023c  lw          $v1, 0x23C($v1)
    ctx->pc = 0x1f75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 572)));
    // 0x1f75c0: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F75C0u;
    {
        const bool branch_taken_0x1f75c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f75c0) {
            ctx->pc = 0x1F75E4u;
            goto label_1f75e4;
        }
    }
    ctx->pc = 0x1F75C8u;
    // 0x1f75c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f75c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f75cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f75ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f75d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f75d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f75d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f75dc: 0xc07e05c  jal         func_1F8170
    ctx->pc = 0x1F75DCu;
    SET_GPR_U32(ctx, 31, 0x1F75E4u);
    ctx->pc = 0x1F8170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8170u, 0x1F75DCu, 0x1F75E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F75E4u;
label_1f75e4:
    // 0x1f75e4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1F75E4u;
    {
        const bool branch_taken_0x1f75e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f75e4) {
            ctx->pc = 0x1F777Cu;
            goto label_1f777c;
        }
    }
    ctx->pc = 0x1F75ECu;
label_1f75ec:
    // 0x1f75ec: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1f75ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f75f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f75f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f75f8: 0x24640104  addiu       $a0, $v1, 0x104
    ctx->pc = 0x1f75f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x1f75fc: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f75fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7600: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F7600u;
    SET_GPR_U32(ctx, 31, 0x1F7608u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F7600u, 0x1F7608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7608u;
label_1f7608:
    // 0x1f7608: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f7608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f760c: 0x16030058  bne         $s0, $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1F760Cu;
    {
        const bool branch_taken_0x1f760c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f760c) {
            ctx->pc = 0x1F7770u;
            goto label_1f7770;
        }
    }
    ctx->pc = 0x1F7614u;
    // 0x1f7614: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1f7614u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7618: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f761c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f761cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7620: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x1f7620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1f7624: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f7624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7628: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F7628u;
    SET_GPR_U32(ctx, 31, 0x1F7630u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F7628u, 0x1F7630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7630u;
label_1f7630:
    // 0x1f7630: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1f7630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1f7634: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7638: 0x8c6200fc  lw          $v0, 0xFC($v1)
    ctx->pc = 0x1f7638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x1f763c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f763cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f7640: 0xac6200fc  sw          $v0, 0xFC($v1)
    ctx->pc = 0x1f7640u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 252), GPR_U32(ctx, 2));
    // 0x1f7644: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7648: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f7648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f764c: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x1f764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1f7650: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f7650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f7654: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F7654u;
    SET_GPR_U32(ctx, 31, 0x1F765Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F7654u, 0x1F765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F765Cu;
label_1f765c:
    // 0x1f765c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f765cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7660: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f7660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7664: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7664u;
    {
        const bool branch_taken_0x1f7664 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7664) {
            ctx->pc = 0x1F7690u;
            goto label_1f7690;
        }
    }
    ctx->pc = 0x1F766Cu;
    // 0x1f766c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7670: 0x8c6400fc  lw          $a0, 0xFC($v1)
    ctx->pc = 0x1f7670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x1f7674: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7678: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x1f7678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1f767c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F767Cu;
    {
        const bool branch_taken_0x1f767c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f767c) {
            ctx->pc = 0x1F7690u;
            goto label_1f7690;
        }
    }
    ctx->pc = 0x1F7684u;
    // 0x1f7684: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f7684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7688: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f768c: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x1f768cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
label_1f7690:
    // 0x1f7690: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f7690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7694: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7698: 0x8c630230  lw          $v1, 0x230($v1)
    ctx->pc = 0x1f7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 560)));
    // 0x1f769c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F769Cu;
    {
        const bool branch_taken_0x1f769c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f769c) {
            ctx->pc = 0x1F76C8u;
            goto label_1f76c8;
        }
    }
    ctx->pc = 0x1F76A4u;
    // 0x1f76a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f76a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f76a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f76a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f76acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f76b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f76b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f76b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76b8: 0xc07df0c  jal         func_1F7C30
    ctx->pc = 0x1F76B8u;
    SET_GPR_U32(ctx, 31, 0x1F76C0u);
    ctx->pc = 0x1F7C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C30u, 0x1F76B8u, 0x1F76C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76C0u;
label_1f76c0:
    // 0x1f76c0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1F76C0u;
    {
        const bool branch_taken_0x1f76c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f76c0) {
            ctx->pc = 0x1F7768u;
            goto label_1f7768;
        }
    }
    ctx->pc = 0x1F76C8u;
label_1f76c8:
    // 0x1f76c8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f76c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f76cc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f76d0: 0x8c630234  lw          $v1, 0x234($v1)
    ctx->pc = 0x1f76d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 564)));
    // 0x1f76d4: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F76D4u;
    {
        const bool branch_taken_0x1f76d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f76d4) {
            ctx->pc = 0x1F7700u;
            goto label_1f7700;
        }
    }
    ctx->pc = 0x1F76DCu;
    // 0x1f76dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f76dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f76e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f76e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f76e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f76e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f76ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f76ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f76f0: 0xc07df7c  jal         func_1F7DF0
    ctx->pc = 0x1F76F0u;
    SET_GPR_U32(ctx, 31, 0x1F76F8u);
    ctx->pc = 0x1F7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF0u, 0x1F76F0u, 0x1F76F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76F8u;
label_1f76f8:
    // 0x1f76f8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F76F8u;
    {
        const bool branch_taken_0x1f76f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f76f8) {
            ctx->pc = 0x1F7768u;
            goto label_1f7768;
        }
    }
    ctx->pc = 0x1F7700u;
label_1f7700:
    // 0x1f7700: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f7700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7704: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7708: 0x8c630238  lw          $v1, 0x238($v1)
    ctx->pc = 0x1f7708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 568)));
    // 0x1f770c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F770Cu;
    {
        const bool branch_taken_0x1f770c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f770c) {
            ctx->pc = 0x1F7738u;
            goto label_1f7738;
        }
    }
    ctx->pc = 0x1F7714u;
    // 0x1f7714: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f771c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f771cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7720: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f7720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f7724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7728: 0xc07dfec  jal         func_1F7FB0
    ctx->pc = 0x1F7728u;
    SET_GPR_U32(ctx, 31, 0x1F7730u);
    ctx->pc = 0x1F7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB0u, 0x1F7728u, 0x1F7730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7730u;
label_1f7730:
    // 0x1f7730: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F7730u;
    {
        const bool branch_taken_0x1f7730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7730) {
            ctx->pc = 0x1F7768u;
            goto label_1f7768;
        }
    }
    ctx->pc = 0x1F7738u;
label_1f7738:
    // 0x1f7738: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f7738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f773c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f773cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7740: 0x8c63023c  lw          $v1, 0x23C($v1)
    ctx->pc = 0x1f7740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 572)));
    // 0x1f7744: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7744u;
    {
        const bool branch_taken_0x1f7744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f7744) {
            ctx->pc = 0x1F7768u;
            goto label_1f7768;
        }
    }
    ctx->pc = 0x1F774Cu;
    // 0x1f774c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f774cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7758: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f7758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f775c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f775cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7760: 0xc07e05c  jal         func_1F8170
    ctx->pc = 0x1F7760u;
    SET_GPR_U32(ctx, 31, 0x1F7768u);
    ctx->pc = 0x1F8170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8170u, 0x1F7760u, 0x1F7768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7768u;
label_1f7768:
    // 0x1f7768: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7768u;
    {
        const bool branch_taken_0x1f7768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7768) {
            ctx->pc = 0x1F777Cu;
            goto label_1f777c;
        }
    }
    ctx->pc = 0x1F7770u;
label_1f7770:
    // 0x1f7770: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f7770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7774: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7778: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x1f7778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
label_1f777c:
    // 0x1f777c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f777cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f7780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7784: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f7784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f7788: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7790u;
}
