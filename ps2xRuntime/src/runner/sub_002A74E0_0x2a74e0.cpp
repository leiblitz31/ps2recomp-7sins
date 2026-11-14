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

// Function: sub_002A74E0
// Address: 0x2a74e0 - 0x2a7680
void sub_002A74E0_0x2a74e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A74E0_0x2a74e0");
#endif

    switch (ctx->pc) {
        case 0x2a7540u: goto label_2a7540;
        case 0x2a7554u: goto label_2a7554;
        case 0x2a756cu: goto label_2a756c;
        case 0x2a757cu: goto label_2a757c;
        case 0x2a75a4u: goto label_2a75a4;
        case 0x2a75b8u: goto label_2a75b8;
        case 0x2a75ccu: goto label_2a75cc;
        case 0x2a75e0u: goto label_2a75e0;
        case 0x2a75f8u: goto label_2a75f8;
        case 0x2a7608u: goto label_2a7608;
        case 0x2a7614u: goto label_2a7614;
        case 0x2a7624u: goto label_2a7624;
        case 0x2a7630u: goto label_2a7630;
        case 0x2a7650u: goto label_2a7650;
        default: break;
    }

    ctx->pc = 0x2a74e0u;

    // 0x2a74e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2a74e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2a74e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a74e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a74e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a74e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a74ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a74ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a74f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a74f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a74f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a74f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a74f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a74f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a74fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a74fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a7500: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a7504: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x2a7504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x2a7508: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x2a7508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a750c: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x2a750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2a7510: 0x1002004f  beq         $zero, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2A7510u;
    {
        const bool branch_taken_0x2a7510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a7510) {
            ctx->pc = 0x2A7650u;
            goto label_2a7650;
        }
    }
    ctx->pc = 0x2A7518u;
    // 0x2a7518: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x2a7518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2a751c: 0x804200a0  lb          $v0, 0xA0($v0)
    ctx->pc = 0x2a751cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2a7520: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2a7520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2a7524: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2a7524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2a7528: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A7528u;
    {
        const bool branch_taken_0x2a7528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7528) {
            ctx->pc = 0x2A7594u;
            goto label_2a7594;
        }
    }
    ctx->pc = 0x2A7530u;
    // 0x2a7530: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x2a7530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2a7534: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2a7534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2a7538: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x2A7538u;
    SET_GPR_U32(ctx, 31, 0x2A7540u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x2A7538u, 0x2A7540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7540u;
label_2a7540:
    // 0x2a7540: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2a7540u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7544: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2a7544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2a7548: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2a7548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a754c: 0xc121e9c  jal         func_487A70
    ctx->pc = 0x2A754Cu;
    SET_GPR_U32(ctx, 31, 0x2A7554u);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x2A754Cu, 0x2A7554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7554u;
label_2a7554:
    // 0x2a7554: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a7554u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7558: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a7558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a755c: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x2a755cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x2a7560: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a7560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7564: 0xc106784  jal         func_419E10
    ctx->pc = 0x2A7564u;
    SET_GPR_U32(ctx, 31, 0x2A756Cu);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x2A7564u, 0x2A756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A756Cu;
label_2a756c:
    // 0x2a756c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a756cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7570: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2a7570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2a7574: 0xc041d58  jal         func_107560
    ctx->pc = 0x2A7574u;
    SET_GPR_U32(ctx, 31, 0x2A757Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A7574u, 0x2A757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A757Cu;
label_2a757c:
    // 0x2a757c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2a757cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2a7580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7584: 0x0  nop
    ctx->pc = 0x2a7584u;
    // NOP
    // 0x2a7588: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a7588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2a758c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2A758Cu;
    {
        const bool branch_taken_0x2a758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a758c) {
            ctx->pc = 0x2A7624u;
            goto label_2a7624;
        }
    }
    ctx->pc = 0x2A7594u;
label_2a7594:
    // 0x2a7594: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x2a7594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2a7598: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2a7598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2a759c: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x2A759Cu;
    SET_GPR_U32(ctx, 31, 0x2A75A4u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x2A759Cu, 0x2A75A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A75A4u;
label_2a75a4:
    // 0x2a75a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a75a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75a8: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2a75a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2a75ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a75acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75b0: 0xc121e9c  jal         func_487A70
    ctx->pc = 0x2A75B0u;
    SET_GPR_U32(ctx, 31, 0x2A75B8u);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x2A75B0u, 0x2A75B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A75B8u;
label_2a75b8:
    // 0x2a75b8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a75b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75bc: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x2a75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2a75c0: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x2a75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2a75c4: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x2A75C4u;
    SET_GPR_U32(ctx, 31, 0x2A75CCu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x2A75C4u, 0x2A75CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A75CCu;
label_2a75cc:
    // 0x2a75cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a75ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75d0: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2a75d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2a75d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a75d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75d8: 0xc121e9c  jal         func_487A70
    ctx->pc = 0x2A75D8u;
    SET_GPR_U32(ctx, 31, 0x2A75E0u);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x2A75D8u, 0x2A75E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A75E0u;
label_2a75e0:
    // 0x2a75e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a75e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a75e8: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x2a75e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x2a75ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a75ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75f0: 0xc106784  jal         func_419E10
    ctx->pc = 0x2A75F0u;
    SET_GPR_U32(ctx, 31, 0x2A75F8u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x2A75F0u, 0x2A75F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A75F8u;
label_2a75f8:
    // 0x2a75f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2a75f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a75fc: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2a75fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2a7600: 0xc041d58  jal         func_107560
    ctx->pc = 0x2A7600u;
    SET_GPR_U32(ctx, 31, 0x2A7608u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A7600u, 0x2A7608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7608u;
label_2a7608:
    // 0x2a7608: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a760c: 0xc106784  jal         func_419E10
    ctx->pc = 0x2A760Cu;
    SET_GPR_U32(ctx, 31, 0x2A7614u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x2A760Cu, 0x2A7614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7614u;
label_2a7614:
    // 0x2a7614: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x2a7614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2a7618: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2a7618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2a761c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2A761Cu;
    SET_GPR_U32(ctx, 31, 0x2A7624u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A761Cu, 0x2A7624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7624u;
label_2a7624:
    // 0x2a7624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7628: 0xc09d234  jal         func_2748D0
    ctx->pc = 0x2A7628u;
    SET_GPR_U32(ctx, 31, 0x2A7630u);
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x2A7628u, 0x2A7630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7630u;
label_2a7630:
    // 0x2a7630: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x2a7630u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a7634: 0x8f84bbf0  lw          $a0, -0x4410($gp)
    ctx->pc = 0x2a7634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949872)));
    // 0x2a7638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a763c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2a763cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a7640: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a7640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7644: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a7644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7648: 0xc08febc  jal         func_23FAF0
    ctx->pc = 0x2A7648u;
    SET_GPR_U32(ctx, 31, 0x2A7650u);
    ctx->pc = 0x23FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAF0u, 0x2A7648u, 0x2A7650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7650u;
label_2a7650:
    // 0x2a7650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a7650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7654: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a7654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a7658: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a7658u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a765c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a765cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7660: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a7660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a7664: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a7664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7668: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a7668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a766c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a766cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a7670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7674: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2a7674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a7678: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7680u;
}
