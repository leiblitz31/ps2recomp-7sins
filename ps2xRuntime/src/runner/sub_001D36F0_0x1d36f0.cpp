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

// Function: sub_001D36F0
// Address: 0x1d36f0 - 0x1d3b80
void sub_001D36F0_0x1d36f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D36F0_0x1d36f0");
#endif

    switch (ctx->pc) {
        case 0x1d3730u: goto label_1d3730;
        case 0x1d3750u: goto label_1d3750;
        case 0x1d3760u: goto label_1d3760;
        case 0x1d3774u: goto label_1d3774;
        case 0x1d37a4u: goto label_1d37a4;
        case 0x1d37b8u: goto label_1d37b8;
        case 0x1d37c4u: goto label_1d37c4;
        case 0x1d37d0u: goto label_1d37d0;
        case 0x1d3800u: goto label_1d3800;
        case 0x1d3814u: goto label_1d3814;
        case 0x1d3820u: goto label_1d3820;
        case 0x1d384cu: goto label_1d384c;
        case 0x1d3860u: goto label_1d3860;
        case 0x1d386cu: goto label_1d386c;
        case 0x1d389cu: goto label_1d389c;
        case 0x1d38b0u: goto label_1d38b0;
        case 0x1d38bcu: goto label_1d38bc;
        case 0x1d3908u: goto label_1d3908;
        case 0x1d391cu: goto label_1d391c;
        case 0x1d3928u: goto label_1d3928;
        case 0x1d3934u: goto label_1d3934;
        case 0x1d3960u: goto label_1d3960;
        case 0x1d3974u: goto label_1d3974;
        case 0x1d3980u: goto label_1d3980;
        case 0x1d3998u: goto label_1d3998;
        case 0x1d3a2cu: goto label_1d3a2c;
        case 0x1d3a78u: goto label_1d3a78;
        case 0x1d3a88u: goto label_1d3a88;
        case 0x1d3ab8u: goto label_1d3ab8;
        case 0x1d3ac8u: goto label_1d3ac8;
        case 0x1d3b58u: goto label_1d3b58;
        case 0x1d3b68u: goto label_1d3b68;
        default: break;
    }

    ctx->pc = 0x1d36f0u;

    // 0x1d36f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d36f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d36f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1d36f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1d36f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d36f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d36fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d36fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1d3700: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d3700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d3704: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d3704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d3708: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d3708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d370c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d370cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d3710: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d3710u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d3714: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1d3714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1d3718: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x1d3718u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d371c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1d371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1d3720: 0x24520054  addiu       $s2, $v0, 0x54
    ctx->pc = 0x1d3720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x1d3724: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d3724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3728: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x1D3728u;
    {
        const bool branch_taken_0x1d3728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3728) {
            ctx->pc = 0x1D3940u;
            goto label_1d3940;
        }
    }
    ctx->pc = 0x1D3730u;
label_1d3730:
    // 0x1d3730: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d3730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d3734: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1d3734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1d3738: 0x24427ae0  addiu       $v0, $v0, 0x7AE0
    ctx->pc = 0x1d3738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31456));
    // 0x1d373c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3740: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d3740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d3744: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d3744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3748: 0xc040304  jal         func_100C10
    ctx->pc = 0x1D3748u;
    SET_GPR_U32(ctx, 31, 0x1D3750u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1D3748u, 0x1D3750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3750u;
label_1d3750:
    // 0x1d3750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d3750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3754: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1d3754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d3758: 0xc05c618  jal         func_171860
    ctx->pc = 0x1D3758u;
    SET_GPR_U32(ctx, 31, 0x1D3760u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x1D3758u, 0x1D3760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3760u;
label_1d3760:
    // 0x1d3760: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3764: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1d3764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d3768: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d3768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d376c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1D376Cu;
    SET_GPR_U32(ctx, 31, 0x1D3774u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1D376Cu, 0x1D3774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3774u;
label_1d3774:
    // 0x1d3774: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d3774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3778: 0x12220070  beq         $s1, $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1D3778u;
    {
        const bool branch_taken_0x1d3778 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d3778) {
            ctx->pc = 0x1D393Cu;
            goto label_1d393c;
        }
    }
    ctx->pc = 0x1D3780u;
    // 0x1d3780: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x1d3780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1d3784: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d3784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d3788: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1d3788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1d378c: 0x24427ae0  addiu       $v0, $v0, 0x7AE0
    ctx->pc = 0x1d378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31456));
    // 0x1d3790: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3794: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d3794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3798: 0x278596fc  addiu       $a1, $gp, -0x6904
    ctx->pc = 0x1d3798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940412));
    // 0x1d379c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1D379Cu;
    SET_GPR_U32(ctx, 31, 0x1D37A4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1D379Cu, 0x1D37A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37A4u;
label_1d37a4:
    // 0x1d37a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D37A4u;
    {
        const bool branch_taken_0x1d37a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d37a4) {
            ctx->pc = 0x1D37E0u;
            goto label_1d37e0;
        }
    }
    ctx->pc = 0x1D37ACu;
    // 0x1d37ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d37acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37b0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1D37B0u;
    SET_GPR_U32(ctx, 31, 0x1D37B8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D37B0u, 0x1D37B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37B8u;
label_1d37b8:
    // 0x1d37b8: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1d37b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d37bc: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1D37BCu;
    SET_GPR_U32(ctx, 31, 0x1D37C4u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D37BCu, 0x1D37C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37C4u;
label_1d37c4:
    // 0x1d37c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d37c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d37c8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1D37C8u;
    SET_GPR_U32(ctx, 31, 0x1D37D0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D37C8u, 0x1D37D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D37D0u;
label_1d37d0:
    // 0x1d37d0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1d37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d37d4: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x1d37d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x1d37d8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1D37D8u;
    {
        const bool branch_taken_0x1d37d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d37d8) {
            ctx->pc = 0x1D393Cu;
            goto label_1d393c;
        }
    }
    ctx->pc = 0x1D37E0u;
label_1d37e0:
    // 0x1d37e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d37e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d37e4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1d37e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1d37e8: 0x24427ae0  addiu       $v0, $v0, 0x7AE0
    ctx->pc = 0x1d37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31456));
    // 0x1d37ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d37f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d37f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d37f4: 0x27859700  addiu       $a1, $gp, -0x6900
    ctx->pc = 0x1d37f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940416));
    // 0x1d37f8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1D37F8u;
    SET_GPR_U32(ctx, 31, 0x1D3800u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1D37F8u, 0x1D3800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3800u;
label_1d3800:
    // 0x1d3800: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3800u;
    {
        const bool branch_taken_0x1d3800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3800) {
            ctx->pc = 0x1D382Cu;
            goto label_1d382c;
        }
    }
    ctx->pc = 0x1D3808u;
    // 0x1d3808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d3808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d380c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1D380Cu;
    SET_GPR_U32(ctx, 31, 0x1D3814u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D380Cu, 0x1D3814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3814u;
label_1d3814:
    // 0x1d3814: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1d3814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d3818: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1D3818u;
    SET_GPR_U32(ctx, 31, 0x1D3820u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1D3818u, 0x1D3820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3820u;
label_1d3820:
    // 0x1d3820: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d3820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3824: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1D3824u;
    {
        const bool branch_taken_0x1d3824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3824) {
            ctx->pc = 0x1D393Cu;
            goto label_1d393c;
        }
    }
    ctx->pc = 0x1D382Cu;
label_1d382c:
    // 0x1d382c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d382cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d3830: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1d3830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1d3834: 0x24427ae0  addiu       $v0, $v0, 0x7AE0
    ctx->pc = 0x1d3834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31456));
    // 0x1d3838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d383c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d383cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3840: 0x27859704  addiu       $a1, $gp, -0x68FC
    ctx->pc = 0x1d3840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940420));
    // 0x1d3844: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1D3844u;
    SET_GPR_U32(ctx, 31, 0x1D384Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1D3844u, 0x1D384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D384Cu;
label_1d384c:
    // 0x1d384c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D384Cu;
    {
        const bool branch_taken_0x1d384c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d384c) {
            ctx->pc = 0x1D387Cu;
            goto label_1d387c;
        }
    }
    ctx->pc = 0x1D3854u;
    // 0x1d3854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d3854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3858: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1D3858u;
    SET_GPR_U32(ctx, 31, 0x1D3860u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D3858u, 0x1D3860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3860u;
label_1d3860:
    // 0x1d3860: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1d3860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d3864: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1D3864u;
    SET_GPR_U32(ctx, 31, 0x1D386Cu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1D3864u, 0x1D386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D386Cu;
label_1d386c:
    // 0x1d386c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1d386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d3870: 0xac6200dc  sw          $v0, 0xDC($v1)
    ctx->pc = 0x1d3870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 2));
    // 0x1d3874: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1D3874u;
    {
        const bool branch_taken_0x1d3874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3874) {
            ctx->pc = 0x1D393Cu;
            goto label_1d393c;
        }
    }
    ctx->pc = 0x1D387Cu;
label_1d387c:
    // 0x1d387c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d387cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d3880: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1d3880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1d3884: 0x24427ae0  addiu       $v0, $v0, 0x7AE0
    ctx->pc = 0x1d3884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31456));
    // 0x1d3888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d388c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d388cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3890: 0x27859708  addiu       $a1, $gp, -0x68F8
    ctx->pc = 0x1d3890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940424));
    // 0x1d3894: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1D3894u;
    SET_GPR_U32(ctx, 31, 0x1D389Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1D3894u, 0x1D389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D389Cu;
label_1d389c:
    // 0x1d389c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D389Cu;
    {
        const bool branch_taken_0x1d389c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d389c) {
            ctx->pc = 0x1D38E8u;
            goto label_1d38e8;
        }
    }
    ctx->pc = 0x1D38A4u;
    // 0x1d38a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d38a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38a8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1D38A8u;
    SET_GPR_U32(ctx, 31, 0x1D38B0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D38A8u, 0x1D38B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38B0u;
label_1d38b0:
    // 0x1d38b0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1d38b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d38b4: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1D38B4u;
    SET_GPR_U32(ctx, 31, 0x1D38BCu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1D38B4u, 0x1D38BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D38BCu;
label_1d38bc:
    // 0x1d38bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D38BCu;
    {
        const bool branch_taken_0x1d38bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d38bc) {
            ctx->pc = 0x1D38D4u;
            goto label_1d38d4;
        }
    }
    ctx->pc = 0x1D38C4u;
    // 0x1d38c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d38c8: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1d38c8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d38cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D38CCu;
    {
        const bool branch_taken_0x1d38cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d38cc) {
            ctx->pc = 0x1D38D8u;
            goto label_1d38d8;
        }
    }
    ctx->pc = 0x1D38D4u;
label_1d38d4:
    // 0x1d38d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d38d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d38d8:
    // 0x1d38d8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1d38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d38dc: 0xa05500ed  sb          $s5, 0xED($v0)
    ctx->pc = 0x1d38dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 237), (uint8_t)GPR_U32(ctx, 21));
    // 0x1d38e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D38E0u;
    {
        const bool branch_taken_0x1d38e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d38e0) {
            ctx->pc = 0x1D393Cu;
            goto label_1d393c;
        }
    }
    ctx->pc = 0x1D38E8u;
label_1d38e8:
    // 0x1d38e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d38e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d38ec: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1d38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1d38f0: 0x24427ae0  addiu       $v0, $v0, 0x7AE0
    ctx->pc = 0x1d38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31456));
    // 0x1d38f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d38f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d38f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d38fc: 0x2785970c  addiu       $a1, $gp, -0x68F4
    ctx->pc = 0x1d38fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940428));
    // 0x1d3900: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1D3900u;
    SET_GPR_U32(ctx, 31, 0x1D3908u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1D3900u, 0x1D3908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3908u;
label_1d3908:
    // 0x1d3908: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D3908u;
    {
        const bool branch_taken_0x1d3908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3908) {
            ctx->pc = 0x1D393Cu;
            goto label_1d393c;
        }
    }
    ctx->pc = 0x1D3910u;
    // 0x1d3910: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d3910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3914: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1D3914u;
    SET_GPR_U32(ctx, 31, 0x1D391Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D3914u, 0x1D391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D391Cu;
label_1d391c:
    // 0x1d391c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1d391cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d3920: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1D3920u;
    SET_GPR_U32(ctx, 31, 0x1D3928u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D3920u, 0x1D3928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3928u;
label_1d3928:
    // 0x1d3928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d392c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1D392Cu;
    SET_GPR_U32(ctx, 31, 0x1D3934u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D392Cu, 0x1D3934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3934u;
label_1d3934:
    // 0x1d3934: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1d3934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d3938: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x1d3938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_1d393c:
    // 0x1d393c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d393cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d3940:
    // 0x1d3940: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x1d3940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d3944: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x1D3944u;
    {
        const bool branch_taken_0x1d3944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3944) {
            ctx->pc = 0x1D3730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3730;
        }
    }
    ctx->pc = 0x1D394Cu;
    // 0x1d394c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1d394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d3950: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1d3950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1d3954: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d3954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3958: 0xc056708  jal         func_159C20
    ctx->pc = 0x1D3958u;
    SET_GPR_U32(ctx, 31, 0x1D3960u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1D3958u, 0x1D3960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3960u;
label_1d3960:
    // 0x1d3960: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1d3960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d3964: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1d3964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1d3968: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d3968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d396c: 0xc05f298  jal         func_17CA60
    ctx->pc = 0x1D396Cu;
    SET_GPR_U32(ctx, 31, 0x1D3974u);
    ctx->pc = 0x17CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA60u, 0x1D396Cu, 0x1D3974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3974u;
label_1d3974:
    // 0x1d3974: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d3974u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3978: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3978u;
    {
        const bool branch_taken_0x1d3978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3978) {
            ctx->pc = 0x1D39A0u;
            goto label_1d39a0;
        }
    }
    ctx->pc = 0x1D3980u;
label_1d3980:
    // 0x1d3980: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d3980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d3984: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1d3984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d3988: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1d3988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1d398c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d398cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3990: 0xc05f1a8  jal         func_17C6A0
    ctx->pc = 0x1D3990u;
    SET_GPR_U32(ctx, 31, 0x1D3998u);
    ctx->pc = 0x17C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C6A0u, 0x1D3990u, 0x1D3998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3998u;
label_1d3998:
    // 0x1d3998: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1d3998u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d399c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d399cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d39a0:
    // 0x1d39a0: 0x293182b  sltu        $v1, $s4, $s3
    ctx->pc = 0x1d39a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d39a4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D39A4u;
    {
        const bool branch_taken_0x1d39a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d39a4) {
            ctx->pc = 0x1D3980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3980;
        }
    }
    ctx->pc = 0x1D39ACu;
    // 0x1d39ac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1d39acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d39b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d39b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d39b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d39b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d39b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d39b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d39bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d39bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d39c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d39c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d39c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d39c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d39c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d39c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d39cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1d39ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d39d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D39D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D39D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D39D8u;
    // 0x1d39d8: 0x0  nop
    ctx->pc = 0x1d39d8u;
    // NOP
    // 0x1d39dc: 0x0  nop
    ctx->pc = 0x1d39dcu;
    // NOP
    // 0x1d39e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d39e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d39e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d39e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d39e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d39e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d39ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1d39ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1d39f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d39f4: 0x904200e0  lbu         $v0, 0xE0($v0)
    ctx->pc = 0x1d39f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x1d39f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D39F8u;
    {
        const bool branch_taken_0x1d39f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d39f8) {
            ctx->pc = 0x1D3A10u;
            goto label_1d3a10;
        }
    }
    ctx->pc = 0x1D3A00u;
    // 0x1d3a00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d3a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3a04: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1d3a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1d3a08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3A08u;
    {
        const bool branch_taken_0x1d3a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3a08) {
            ctx->pc = 0x1D3A1Cu;
            goto label_1d3a1c;
        }
    }
    ctx->pc = 0x1D3A10u;
label_1d3a10:
    // 0x1d3a10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d3a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3a14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3a18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1d3a1c:
    // 0x1d3a1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d3a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3a20: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1d3a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3a24: 0xc064e74  jal         func_1939D0
    ctx->pc = 0x1D3A24u;
    SET_GPR_U32(ctx, 31, 0x1D3A2Cu);
    ctx->pc = 0x1939D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1939D0u, 0x1D3A24u, 0x1D3A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3A2Cu;
label_1d3a2c:
    // 0x1d3a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3a30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d3a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d3a34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3A3Cu;
    // 0x1d3a3c: 0x0  nop
    ctx->pc = 0x1d3a3cu;
    // NOP
    // 0x1d3a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3a44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d3a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1d3a48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1d3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3a4c: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x1d3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1d3a50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d3a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d3a54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3A5Cu;
    // 0x1d3a5c: 0x0  nop
    ctx->pc = 0x1d3a5cu;
    // NOP
    // 0x1d3a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3a68: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1d3a68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d3a6c: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x1d3a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x1d3a70: 0xc04fc3c  jal         func_13F0F0
    ctx->pc = 0x1D3A70u;
    SET_GPR_U32(ctx, 31, 0x1D3A78u);
    ctx->pc = 0x13F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F0F0u, 0x1D3A70u, 0x1D3A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3A78u;
label_1d3a78:
    // 0x1d3a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a7c: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1d3a7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3a80: 0xc0ad924  jal         func_2B6490
    ctx->pc = 0x1D3A80u;
    SET_GPR_U32(ctx, 31, 0x1D3A88u);
    ctx->pc = 0x2B6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6490u, 0x1D3A80u, 0x1D3A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3A88u;
label_1d3a88:
    // 0x1d3a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3a8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d3a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d3a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3A98u;
    // 0x1d3a98: 0x0  nop
    ctx->pc = 0x1d3a98u;
    // NOP
    // 0x1d3a9c: 0x0  nop
    ctx->pc = 0x1d3a9cu;
    // NOP
    // 0x1d3aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3aa8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1d3aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d3aac: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x1d3aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x1d3ab0: 0xc04fc3c  jal         func_13F0F0
    ctx->pc = 0x1D3AB0u;
    SET_GPR_U32(ctx, 31, 0x1D3AB8u);
    ctx->pc = 0x13F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F0F0u, 0x1D3AB0u, 0x1D3AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AB8u;
label_1d3ab8:
    // 0x1d3ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3abc: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1d3abcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3ac0: 0xc0ad928  jal         func_2B64A0
    ctx->pc = 0x1D3AC0u;
    SET_GPR_U32(ctx, 31, 0x1D3AC8u);
    ctx->pc = 0x2B64A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B64A0u, 0x1D3AC0u, 0x1D3AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AC8u;
label_1d3ac8:
    // 0x1d3ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3acc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d3accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d3ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3AD8u;
    // 0x1d3ad8: 0x0  nop
    ctx->pc = 0x1d3ad8u;
    // NOP
    // 0x1d3adc: 0x0  nop
    ctx->pc = 0x1d3adcu;
    // NOP
    // 0x1d3ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3ae4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d3ae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3AF0u;
    // 0x1d3af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3af4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d3af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3af8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3B00u;
    // 0x1d3b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3b04: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d3b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3b08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3B10u;
    // 0x1d3b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3b14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d3b14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3b18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3B20u;
    // 0x1d3b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3b24: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d3b24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3b28: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3B30u;
    // 0x1d3b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3b34: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d3b34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3B40u;
    // 0x1d3b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3b48: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1d3b48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d3b4c: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x1d3b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x1d3b50: 0xc04fc3c  jal         func_13F0F0
    ctx->pc = 0x1D3B50u;
    SET_GPR_U32(ctx, 31, 0x1D3B58u);
    ctx->pc = 0x13F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F0F0u, 0x1D3B50u, 0x1D3B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B58u;
label_1d3b58:
    // 0x1d3b58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b5c: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1d3b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d3b60: 0xc0ad730  jal         func_2B5CC0
    ctx->pc = 0x1D3B60u;
    SET_GPR_U32(ctx, 31, 0x1D3B68u);
    ctx->pc = 0x2B5CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5CC0u, 0x1D3B60u, 0x1D3B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B68u;
label_1d3b68:
    // 0x1d3b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3b6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d3b6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d3b70: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3B78u;
    // 0x1d3b78: 0x0  nop
    ctx->pc = 0x1d3b78u;
    // NOP
    // 0x1d3b7c: 0x0  nop
    ctx->pc = 0x1d3b7cu;
    // NOP
    ctx->pc = 0x1d3b80u;
}
