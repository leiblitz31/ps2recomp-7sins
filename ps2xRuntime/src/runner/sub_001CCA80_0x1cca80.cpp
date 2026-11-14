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

// Function: sub_001CCA80
// Address: 0x1cca80 - 0x1cce60
void sub_001CCA80_0x1cca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCA80_0x1cca80");
#endif

    switch (ctx->pc) {
        case 0x1ccaacu: goto label_1ccaac;
        case 0x1ccaccu: goto label_1ccacc;
        case 0x1ccadcu: goto label_1ccadc;
        case 0x1ccaf0u: goto label_1ccaf0;
        case 0x1ccb20u: goto label_1ccb20;
        case 0x1ccb34u: goto label_1ccb34;
        case 0x1ccb40u: goto label_1ccb40;
        case 0x1ccb4cu: goto label_1ccb4c;
        case 0x1ccb7cu: goto label_1ccb7c;
        case 0x1ccb90u: goto label_1ccb90;
        case 0x1ccb9cu: goto label_1ccb9c;
        case 0x1ccba8u: goto label_1ccba8;
        case 0x1ccbd8u: goto label_1ccbd8;
        case 0x1ccbecu: goto label_1ccbec;
        case 0x1ccbf8u: goto label_1ccbf8;
        case 0x1ccc04u: goto label_1ccc04;
        case 0x1ccc34u: goto label_1ccc34;
        case 0x1ccc48u: goto label_1ccc48;
        case 0x1ccc54u: goto label_1ccc54;
        case 0x1ccc60u: goto label_1ccc60;
        case 0x1ccc90u: goto label_1ccc90;
        case 0x1ccca4u: goto label_1ccca4;
        case 0x1cccb0u: goto label_1cccb0;
        case 0x1cccbcu: goto label_1cccbc;
        case 0x1cccecu: goto label_1cccec;
        case 0x1ccd00u: goto label_1ccd00;
        case 0x1ccd0cu: goto label_1ccd0c;
        case 0x1ccd18u: goto label_1ccd18;
        case 0x1ccd48u: goto label_1ccd48;
        case 0x1ccd5cu: goto label_1ccd5c;
        case 0x1ccd68u: goto label_1ccd68;
        case 0x1ccd74u: goto label_1ccd74;
        case 0x1ccda4u: goto label_1ccda4;
        case 0x1ccdb8u: goto label_1ccdb8;
        case 0x1ccdc4u: goto label_1ccdc4;
        case 0x1ccdf4u: goto label_1ccdf4;
        case 0x1cce08u: goto label_1cce08;
        case 0x1cce14u: goto label_1cce14;
        case 0x1cce20u: goto label_1cce20;
        default: break;
    }

    ctx->pc = 0x1cca80u;

    // 0x1cca80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cca84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cca88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cca8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cca90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cca94: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1cca94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1cca98: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1cca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1cca9c: 0x24720054  addiu       $s2, $v1, 0x54
    ctx->pc = 0x1cca9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x1ccaa0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ccaa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccaa4: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1CCAA4u;
    {
        const bool branch_taken_0x1ccaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccaa4) {
            ctx->pc = 0x1CCE2Cu;
            goto label_1cce2c;
        }
    }
    ctx->pc = 0x1CCAACu;
label_1ccaac:
    // 0x1ccaac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ccaacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ccab0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1ccab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1ccab4: 0x244277e0  addiu       $v0, $v0, 0x77E0
    ctx->pc = 0x1ccab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
    // 0x1ccab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ccab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ccabc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ccabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ccac0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ccac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccac4: 0xc040304  jal         func_100C10
    ctx->pc = 0x1CCAC4u;
    SET_GPR_U32(ctx, 31, 0x1CCACCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1CCAC4u, 0x1CCACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCACCu;
label_1ccacc:
    // 0x1ccacc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccad0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1ccad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ccad4: 0xc05c618  jal         func_171860
    ctx->pc = 0x1CCAD4u;
    SET_GPR_U32(ctx, 31, 0x1CCADCu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x1CCAD4u, 0x1CCADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCADCu;
label_1ccadc:
    // 0x1ccadc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ccadcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccae0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ccae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ccae4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ccae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ccae8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1CCAE8u;
    SET_GPR_U32(ctx, 31, 0x1CCAF0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1CCAE8u, 0x1CCAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCAF0u;
label_1ccaf0:
    // 0x1ccaf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ccaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ccaf4: 0x122300cc  beq         $s1, $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x1CCAF4u;
    {
        const bool branch_taken_0x1ccaf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ccaf4) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCAFCu;
    // 0x1ccafc: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x1ccafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1ccb00: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ccb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ccb04: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1ccb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1ccb08: 0x244277e0  addiu       $v0, $v0, 0x77E0
    ctx->pc = 0x1ccb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
    // 0x1ccb0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ccb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ccb10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ccb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccb14: 0x27859668  addiu       $a1, $gp, -0x6998
    ctx->pc = 0x1ccb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940264));
    // 0x1ccb18: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1CCB18u;
    SET_GPR_U32(ctx, 31, 0x1CCB20u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1CCB18u, 0x1CCB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB20u;
label_1ccb20:
    // 0x1ccb20: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CCB20u;
    {
        const bool branch_taken_0x1ccb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb20) {
            ctx->pc = 0x1CCB5Cu;
            goto label_1ccb5c;
        }
    }
    ctx->pc = 0x1CCB28u;
    // 0x1ccb28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb2c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CCB2Cu;
    SET_GPR_U32(ctx, 31, 0x1CCB34u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CCB2Cu, 0x1CCB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB34u;
label_1ccb34:
    // 0x1ccb34: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1ccb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ccb38: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1CCB38u;
    SET_GPR_U32(ctx, 31, 0x1CCB40u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1CCB38u, 0x1CCB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB40u;
label_1ccb40:
    // 0x1ccb40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb44: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1CCB44u;
    SET_GPR_U32(ctx, 31, 0x1CCB4Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1CCB44u, 0x1CCB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB4Cu;
label_1ccb4c:
    // 0x1ccb4c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ccb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ccb50: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1ccb50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1ccb54: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1CCB54u;
    {
        const bool branch_taken_0x1ccb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb54) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCB5Cu;
label_1ccb5c:
    // 0x1ccb5c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ccb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ccb60: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1ccb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1ccb64: 0x244277e0  addiu       $v0, $v0, 0x77E0
    ctx->pc = 0x1ccb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
    // 0x1ccb68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ccb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ccb6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ccb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccb70: 0x2785966c  addiu       $a1, $gp, -0x6994
    ctx->pc = 0x1ccb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940268));
    // 0x1ccb74: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1CCB74u;
    SET_GPR_U32(ctx, 31, 0x1CCB7Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1CCB74u, 0x1CCB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB7Cu;
label_1ccb7c:
    // 0x1ccb7c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CCB7Cu;
    {
        const bool branch_taken_0x1ccb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb7c) {
            ctx->pc = 0x1CCBB8u;
            goto label_1ccbb8;
        }
    }
    ctx->pc = 0x1CCB84u;
    // 0x1ccb84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb88: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CCB88u;
    SET_GPR_U32(ctx, 31, 0x1CCB90u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CCB88u, 0x1CCB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB90u;
label_1ccb90:
    // 0x1ccb90: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1ccb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ccb94: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1CCB94u;
    SET_GPR_U32(ctx, 31, 0x1CCB9Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1CCB94u, 0x1CCB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB9Cu;
label_1ccb9c:
    // 0x1ccb9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccba0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1CCBA0u;
    SET_GPR_U32(ctx, 31, 0x1CCBA8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1CCBA0u, 0x1CCBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBA8u;
label_1ccba8:
    // 0x1ccba8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ccba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ccbac: 0xe46000e0  swc1        $f0, 0xE0($v1)
    ctx->pc = 0x1ccbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x1ccbb0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1CCBB0u;
    {
        const bool branch_taken_0x1ccbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccbb0) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCBB8u;
label_1ccbb8:
    // 0x1ccbb8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ccbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ccbbc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1ccbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1ccbc0: 0x244277e0  addiu       $v0, $v0, 0x77E0
    ctx->pc = 0x1ccbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
    // 0x1ccbc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ccbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ccbc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ccbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccbcc: 0x27859670  addiu       $a1, $gp, -0x6990
    ctx->pc = 0x1ccbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940272));
    // 0x1ccbd0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1CCBD0u;
    SET_GPR_U32(ctx, 31, 0x1CCBD8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1CCBD0u, 0x1CCBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBD8u;
label_1ccbd8:
    // 0x1ccbd8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CCBD8u;
    {
        const bool branch_taken_0x1ccbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccbd8) {
            ctx->pc = 0x1CCC14u;
            goto label_1ccc14;
        }
    }
    ctx->pc = 0x1CCBE0u;
    // 0x1ccbe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbe4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CCBE4u;
    SET_GPR_U32(ctx, 31, 0x1CCBECu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CCBE4u, 0x1CCBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBECu;
label_1ccbec:
    // 0x1ccbec: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1ccbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ccbf0: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1CCBF0u;
    SET_GPR_U32(ctx, 31, 0x1CCBF8u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1CCBF0u, 0x1CCBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBF8u;
label_1ccbf8:
    // 0x1ccbf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbfc: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1CCBFCu;
    SET_GPR_U32(ctx, 31, 0x1CCC04u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1CCBFCu, 0x1CCC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC04u;
label_1ccc04:
    // 0x1ccc04: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ccc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ccc08: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x1ccc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x1ccc0c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1CCC0Cu;
    {
        const bool branch_taken_0x1ccc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc0c) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCC14u;
label_1ccc14:
    // 0x1ccc14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ccc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ccc18: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1ccc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1ccc1c: 0x244277e0  addiu       $v0, $v0, 0x77E0
    ctx->pc = 0x1ccc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
    // 0x1ccc20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ccc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ccc24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ccc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccc28: 0x27859674  addiu       $a1, $gp, -0x698C
    ctx->pc = 0x1ccc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940276));
    // 0x1ccc2c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1CCC2Cu;
    SET_GPR_U32(ctx, 31, 0x1CCC34u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1CCC2Cu, 0x1CCC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC34u;
label_1ccc34:
    // 0x1ccc34: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CCC34u;
    {
        const bool branch_taken_0x1ccc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc34) {
            ctx->pc = 0x1CCC70u;
            goto label_1ccc70;
        }
    }
    ctx->pc = 0x1CCC3Cu;
    // 0x1ccc3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc40: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CCC40u;
    SET_GPR_U32(ctx, 31, 0x1CCC48u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CCC40u, 0x1CCC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC48u;
label_1ccc48:
    // 0x1ccc48: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1ccc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ccc4c: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1CCC4Cu;
    SET_GPR_U32(ctx, 31, 0x1CCC54u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1CCC4Cu, 0x1CCC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC54u;
label_1ccc54:
    // 0x1ccc54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc58: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1CCC58u;
    SET_GPR_U32(ctx, 31, 0x1CCC60u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1CCC58u, 0x1CCC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC60u;
label_1ccc60:
    // 0x1ccc60: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ccc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ccc64: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1ccc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
    // 0x1ccc68: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1CCC68u;
    {
        const bool branch_taken_0x1ccc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc68) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCC70u;
label_1ccc70:
    // 0x1ccc70: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ccc70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ccc74: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1ccc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1ccc78: 0x244277e0  addiu       $v0, $v0, 0x77E0
    ctx->pc = 0x1ccc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
    // 0x1ccc7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ccc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ccc80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ccc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccc84: 0x27859678  addiu       $a1, $gp, -0x6988
    ctx->pc = 0x1ccc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940280));
    // 0x1ccc88: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1CCC88u;
    SET_GPR_U32(ctx, 31, 0x1CCC90u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1CCC88u, 0x1CCC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC90u;
label_1ccc90:
    // 0x1ccc90: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CCC90u;
    {
        const bool branch_taken_0x1ccc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc90) {
            ctx->pc = 0x1CCCCCu;
            goto label_1ccccc;
        }
    }
    ctx->pc = 0x1CCC98u;
    // 0x1ccc98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc9c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CCC9Cu;
    SET_GPR_U32(ctx, 31, 0x1CCCA4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CCC9Cu, 0x1CCCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCA4u;
label_1ccca4:
    // 0x1ccca4: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1ccca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ccca8: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1CCCA8u;
    SET_GPR_U32(ctx, 31, 0x1CCCB0u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1CCCA8u, 0x1CCCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCB0u;
label_1cccb0:
    // 0x1cccb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccb4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1CCCB4u;
    SET_GPR_U32(ctx, 31, 0x1CCCBCu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1CCCB4u, 0x1CCCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCBCu;
label_1cccbc:
    // 0x1cccbc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1cccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cccc0: 0xe46000ec  swc1        $f0, 0xEC($v1)
    ctx->pc = 0x1cccc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x1cccc4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1CCCC4u;
    {
        const bool branch_taken_0x1cccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cccc4) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCCCCu;
label_1ccccc:
    // 0x1ccccc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1cccccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cccd0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1cccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1cccd4: 0x244277e0  addiu       $v0, $v0, 0x77E0
    ctx->pc = 0x1cccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
    // 0x1cccd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cccdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccce0: 0x2785967c  addiu       $a1, $gp, -0x6984
    ctx->pc = 0x1ccce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940284));
    // 0x1ccce4: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1CCCE4u;
    SET_GPR_U32(ctx, 31, 0x1CCCECu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1CCCE4u, 0x1CCCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCECu;
label_1cccec:
    // 0x1cccec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CCCECu;
    {
        const bool branch_taken_0x1cccec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cccec) {
            ctx->pc = 0x1CCD28u;
            goto label_1ccd28;
        }
    }
    ctx->pc = 0x1CCCF4u;
    // 0x1cccf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccf8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CCCF8u;
    SET_GPR_U32(ctx, 31, 0x1CCD00u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CCCF8u, 0x1CCD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD00u;
label_1ccd00:
    // 0x1ccd00: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1ccd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ccd04: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1CCD04u;
    SET_GPR_U32(ctx, 31, 0x1CCD0Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1CCD04u, 0x1CCD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD0Cu;
label_1ccd0c:
    // 0x1ccd0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd10: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1CCD10u;
    SET_GPR_U32(ctx, 31, 0x1CCD18u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1CCD10u, 0x1CCD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD18u;
label_1ccd18:
    // 0x1ccd18: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ccd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ccd1c: 0xe46000f0  swc1        $f0, 0xF0($v1)
    ctx->pc = 0x1ccd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 240), bits); }
    // 0x1ccd20: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1CCD20u;
    {
        const bool branch_taken_0x1ccd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd20) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCD28u;
label_1ccd28:
    // 0x1ccd28: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ccd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ccd2c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1ccd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1ccd30: 0x244277e0  addiu       $v0, $v0, 0x77E0
    ctx->pc = 0x1ccd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
    // 0x1ccd34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ccd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ccd38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ccd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccd3c: 0x27859680  addiu       $a1, $gp, -0x6980
    ctx->pc = 0x1ccd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940288));
    // 0x1ccd40: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1CCD40u;
    SET_GPR_U32(ctx, 31, 0x1CCD48u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1CCD40u, 0x1CCD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD48u;
label_1ccd48:
    // 0x1ccd48: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CCD48u;
    {
        const bool branch_taken_0x1ccd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd48) {
            ctx->pc = 0x1CCD84u;
            goto label_1ccd84;
        }
    }
    ctx->pc = 0x1CCD50u;
    // 0x1ccd50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd54: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CCD54u;
    SET_GPR_U32(ctx, 31, 0x1CCD5Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CCD54u, 0x1CCD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD5Cu;
label_1ccd5c:
    // 0x1ccd5c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1ccd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ccd60: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1CCD60u;
    SET_GPR_U32(ctx, 31, 0x1CCD68u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1CCD60u, 0x1CCD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD68u;
label_1ccd68:
    // 0x1ccd68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd6c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1CCD6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD74u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1CCD6Cu, 0x1CCD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD74u;
label_1ccd74:
    // 0x1ccd74: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ccd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ccd78: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x1ccd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x1ccd7c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1CCD7Cu;
    {
        const bool branch_taken_0x1ccd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd7c) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCD84u;
label_1ccd84:
    // 0x1ccd84: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ccd84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ccd88: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1ccd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1ccd8c: 0x244277e0  addiu       $v0, $v0, 0x77E0
    ctx->pc = 0x1ccd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
    // 0x1ccd90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ccd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ccd94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ccd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccd98: 0x27859684  addiu       $a1, $gp, -0x697C
    ctx->pc = 0x1ccd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940292));
    // 0x1ccd9c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1CCD9Cu;
    SET_GPR_U32(ctx, 31, 0x1CCDA4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1CCD9Cu, 0x1CCDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDA4u;
label_1ccda4:
    // 0x1ccda4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CCDA4u;
    {
        const bool branch_taken_0x1ccda4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccda4) {
            ctx->pc = 0x1CCDD4u;
            goto label_1ccdd4;
        }
    }
    ctx->pc = 0x1CCDACu;
    // 0x1ccdac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccdb0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CCDB0u;
    SET_GPR_U32(ctx, 31, 0x1CCDB8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CCDB0u, 0x1CCDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDB8u;
label_1ccdb8:
    // 0x1ccdb8: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1ccdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ccdbc: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1CCDBCu;
    SET_GPR_U32(ctx, 31, 0x1CCDC4u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1CCDBCu, 0x1CCDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDC4u;
label_1ccdc4:
    // 0x1ccdc4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ccdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ccdc8: 0xac6200fc  sw          $v0, 0xFC($v1)
    ctx->pc = 0x1ccdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 252), GPR_U32(ctx, 2));
    // 0x1ccdcc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1CCDCCu;
    {
        const bool branch_taken_0x1ccdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccdcc) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCDD4u;
label_1ccdd4:
    // 0x1ccdd4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ccdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ccdd8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1ccdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1ccddc: 0x244277e0  addiu       $v0, $v0, 0x77E0
    ctx->pc = 0x1ccddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
    // 0x1ccde0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ccde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ccde4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ccde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccde8: 0x27859688  addiu       $a1, $gp, -0x6978
    ctx->pc = 0x1ccde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940296));
    // 0x1ccdec: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1CCDECu;
    SET_GPR_U32(ctx, 31, 0x1CCDF4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1CCDECu, 0x1CCDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCDF4u;
label_1ccdf4:
    // 0x1ccdf4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CCDF4u;
    {
        const bool branch_taken_0x1ccdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccdf4) {
            ctx->pc = 0x1CCE28u;
            goto label_1cce28;
        }
    }
    ctx->pc = 0x1CCDFCu;
    // 0x1ccdfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce00: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CCE00u;
    SET_GPR_U32(ctx, 31, 0x1CCE08u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CCE00u, 0x1CCE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE08u;
label_1cce08:
    // 0x1cce08: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1cce08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1cce0c: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1CCE0Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE14u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1CCE0Cu, 0x1CCE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE14u;
label_1cce14:
    // 0x1cce14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cce14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce18: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1CCE18u;
    SET_GPR_U32(ctx, 31, 0x1CCE20u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1CCE18u, 0x1CCE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE20u;
label_1cce20:
    // 0x1cce20: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1cce20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cce24: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1cce24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_1cce28:
    // 0x1cce28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cce28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cce2c:
    // 0x1cce2c: 0x2e030009  sltiu       $v1, $s0, 0x9
    ctx->pc = 0x1cce2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1cce30: 0x1460ff1e  bnez        $v1, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x1CCE30u;
    {
        const bool branch_taken_0x1cce30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cce30) {
            ctx->pc = 0x1CCAACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccaac;
        }
    }
    ctx->pc = 0x1CCE38u;
    // 0x1cce38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cce38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cce3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cce3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cce40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cce40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cce44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cce44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce48: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1cce48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cce4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCE54u;
    // 0x1cce54: 0x0  nop
    ctx->pc = 0x1cce54u;
    // NOP
    // 0x1cce58: 0x0  nop
    ctx->pc = 0x1cce58u;
    // NOP
    // 0x1cce5c: 0x0  nop
    ctx->pc = 0x1cce5cu;
    // NOP
    ctx->pc = 0x1cce60u;
}
