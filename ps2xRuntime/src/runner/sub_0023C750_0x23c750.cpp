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

// Function: sub_0023C750
// Address: 0x23c750 - 0x23cb80
void sub_0023C750_0x23c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C750_0x23c750");
#endif

    switch (ctx->pc) {
        case 0x23c7b0u: goto label_23c7b0;
        case 0x23c7c4u: goto label_23c7c4;
        case 0x23c7d4u: goto label_23c7d4;
        case 0x23c7f4u: goto label_23c7f4;
        case 0x23c828u: goto label_23c828;
        case 0x23c858u: goto label_23c858;
        case 0x23c8a4u: goto label_23c8a4;
        case 0x23c8b8u: goto label_23c8b8;
        case 0x23c8ccu: goto label_23c8cc;
        case 0x23c8dcu: goto label_23c8dc;
        case 0x23c910u: goto label_23c910;
        case 0x23c928u: goto label_23c928;
        case 0x23c934u: goto label_23c934;
        case 0x23c94cu: goto label_23c94c;
        case 0x23c960u: goto label_23c960;
        case 0x23c97cu: goto label_23c97c;
        case 0x23c988u: goto label_23c988;
        case 0x23c99cu: goto label_23c99c;
        case 0x23c9c8u: goto label_23c9c8;
        case 0x23c9d4u: goto label_23c9d4;
        case 0x23c9ecu: goto label_23c9ec;
        case 0x23c9f8u: goto label_23c9f8;
        case 0x23c9fcu: goto label_23c9fc;
        case 0x23ca4cu: goto label_23ca4c;
        case 0x23ca60u: goto label_23ca60;
        case 0x23ca78u: goto label_23ca78;
        case 0x23ca90u: goto label_23ca90;
        case 0x23caa4u: goto label_23caa4;
        case 0x23cb44u: goto label_23cb44;
        default: break;
    }

    ctx->pc = 0x23c750u;

    // 0x23c750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c754: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23c754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23c758: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23c758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c75c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23c75cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23c760: 0x3e00008  jr          $ra
    ctx->pc = 0x23C760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C768u;
    // 0x23c768: 0x0  nop
    ctx->pc = 0x23c768u;
    // NOP
    // 0x23c76c: 0x0  nop
    ctx->pc = 0x23c76cu;
    // NOP
    // 0x23c770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c778: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23c778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23c77c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23c77cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23c780: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c784: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x23C784u;
    {
        const bool branch_taken_0x23c784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c784) {
            ctx->pc = 0x23C7F4u;
            goto label_23c7f4;
        }
    }
    ctx->pc = 0x23C78Cu;
    // 0x23c78c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x23c790: 0x24635660  addiu       $v1, $v1, 0x5660
    ctx->pc = 0x23c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22112));
    // 0x23c794: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c798: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23c798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23c79c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c7a0: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x23c7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x23c7a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23c7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23c7a8: 0xc08ef9c  jal         func_23BE70
    ctx->pc = 0x23C7A8u;
    SET_GPR_U32(ctx, 31, 0x23C7B0u);
    ctx->pc = 0x23BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BE70u, 0x23C7A8u, 0x23C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7B0u;
label_23c7b0:
    // 0x23c7b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c7b4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23c7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23c7b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23c7bc: 0xc08f044  jal         func_23C110
    ctx->pc = 0x23C7BCu;
    SET_GPR_U32(ctx, 31, 0x23C7C4u);
    ctx->pc = 0x23C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C110u, 0x23C7BCu, 0x23C7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7C4u;
label_23c7c4:
    // 0x23c7c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c7c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c7cc: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x23C7CCu;
    SET_GPR_U32(ctx, 31, 0x23C7D4u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x23C7CCu, 0x23C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7D4u;
label_23c7d4:
    // 0x23c7d4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23c7d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c7d8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23c7dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23c7dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23c7e0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23C7E0u;
    {
        const bool branch_taken_0x23c7e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23c7e0) {
            ctx->pc = 0x23C7F4u;
            goto label_23c7f4;
        }
    }
    ctx->pc = 0x23C7E8u;
    // 0x23c7e8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c7ec: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23C7ECu;
    SET_GPR_U32(ctx, 31, 0x23C7F4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23C7ECu, 0x23C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C7F4u;
label_23c7f4:
    // 0x23c7f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c7fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23c7fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23c800: 0x3e00008  jr          $ra
    ctx->pc = 0x23C800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C808u;
    // 0x23c808: 0x0  nop
    ctx->pc = 0x23c808u;
    // NOP
    // 0x23c80c: 0x0  nop
    ctx->pc = 0x23c80cu;
    // NOP
    // 0x23c810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23c818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23c81c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c820: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x23C820u;
    SET_GPR_U32(ctx, 31, 0x23C828u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x23C820u, 0x23C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C828u;
label_23c828:
    // 0x23c828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c82c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23c82cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23c830: 0x3e00008  jr          $ra
    ctx->pc = 0x23C830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C838u;
    // 0x23c838: 0x0  nop
    ctx->pc = 0x23c838u;
    // NOP
    // 0x23c83c: 0x0  nop
    ctx->pc = 0x23c83cu;
    // NOP
    // 0x23c840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23c848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23c84c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23c84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c850: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x23C850u;
    SET_GPR_U32(ctx, 31, 0x23C858u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x23C850u, 0x23C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C858u;
label_23c858:
    // 0x23c858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c85c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23c85cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23c860: 0x3e00008  jr          $ra
    ctx->pc = 0x23C860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C868u;
    // 0x23c868: 0x0  nop
    ctx->pc = 0x23c868u;
    // NOP
    // 0x23c86c: 0x0  nop
    ctx->pc = 0x23c86cu;
    // NOP
    // 0x23c870: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x23c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x23c874: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x23c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x23c878: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x23c878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x23c87c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x23c87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x23c880: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x23c880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x23c884: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x23c884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x23c888: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23c888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23c88c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23c88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x23c890: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x23c890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23c894: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x23c894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x23c898: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x23c898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23c89c: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x23C89Cu;
    SET_GPR_U32(ctx, 31, 0x23C8A4u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x23C89Cu, 0x23C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8A4u;
label_23c8a4:
    // 0x23c8a4: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x23c8a4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23c8a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23c8ac: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23c8b0: 0xc08f49c  jal         func_23D270
    ctx->pc = 0x23C8B0u;
    SET_GPR_U32(ctx, 31, 0x23C8B8u);
    ctx->pc = 0x23D270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D270u, 0x23C8B0u, 0x23C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8B8u;
label_23c8b8:
    // 0x23c8b8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23c8bc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23c8c0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x23c8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23c8c4: 0xc08f8ec  jal         func_23E3B0
    ctx->pc = 0x23C8C4u;
    SET_GPR_U32(ctx, 31, 0x23C8CCu);
    ctx->pc = 0x23E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E3B0u, 0x23C8C4u, 0x23C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8CCu;
label_23c8cc:
    // 0x23c8cc: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x23c8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x23c8d0: 0x24c6bd00  addiu       $a2, $a2, -0x4300
    ctx->pc = 0x23c8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
    // 0x23c8d4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x23c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23c8d8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x23c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23c8dc:
    // 0x23c8dc: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x23c8dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23c8e0: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x23c8e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x23c8e4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x23c8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x23c8e8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23c8ec: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x23c8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23c8f0: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x23c8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x23c8f4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x23c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x23c8f8: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23C8F8u;
    {
        const bool branch_taken_0x23c8f8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x23c8f8) {
            ctx->pc = 0x23C8DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c8dc;
        }
    }
    ctx->pc = 0x23C900u;
    // 0x23c900: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x23c900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23c904: 0x27859da4  addiu       $a1, $gp, -0x625C
    ctx->pc = 0x23c904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942116));
    // 0x23c908: 0xc0f0ab6  jal         func_3C2AD8
    ctx->pc = 0x23C908u;
    SET_GPR_U32(ctx, 31, 0x23C910u);
    ctx->pc = 0x3C2AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AD8u, 0x23C908u, 0x23C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C910u;
label_23c910:
    // 0x23c910: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x23c910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c914: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c91c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x23c91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c920: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x23C920u;
    SET_GPR_U32(ctx, 31, 0x23C928u);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x23C920u, 0x23C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C928u;
label_23c928:
    // 0x23c928: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c92c: 0xc0f0ba4  jal         func_3C2E90
    ctx->pc = 0x23C92Cu;
    SET_GPR_U32(ctx, 31, 0x23C934u);
    ctx->pc = 0x3C2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E90u, 0x23C92Cu, 0x23C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C934u;
label_23c934:
    // 0x23c934: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23c934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c938: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c93c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23c940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c944: 0xc0f0b30  jal         func_3C2CC0
    ctx->pc = 0x23C944u;
    SET_GPR_U32(ctx, 31, 0x23C94Cu);
    ctx->pc = 0x3C2CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2CC0u, 0x23C944u, 0x23C94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C94Cu;
label_23c94c:
    // 0x23c94c: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x23c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x23c950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23c950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c954: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23c954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c958: 0xc08f46c  jal         func_23D1B0
    ctx->pc = 0x23C958u;
    SET_GPR_U32(ctx, 31, 0x23C960u);
    ctx->pc = 0x23D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D1B0u, 0x23C958u, 0x23C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C960u;
label_23c960:
    // 0x23c960: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23c960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23c964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c968: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23c968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c96c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23c96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c970: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23c970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c974: 0xc0f0b08  jal         func_3C2C20
    ctx->pc = 0x23C974u;
    SET_GPR_U32(ctx, 31, 0x23C97Cu);
    ctx->pc = 0x3C2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2C20u, 0x23C974u, 0x23C97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C97Cu;
label_23c97c:
    // 0x23c97c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23c97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c980: 0xc0f0af2  jal         func_3C2BC8
    ctx->pc = 0x23C980u;
    SET_GPR_U32(ctx, 31, 0x23C988u);
    ctx->pc = 0x3C2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2BC8u, 0x23C980u, 0x23C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C988u;
label_23c988:
    // 0x23c988: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23c988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c98c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23c98cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c990: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x23c990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c994: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x23C994u;
    {
        const bool branch_taken_0x23c994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c994) {
            ctx->pc = 0x23CB1Cu;
            goto label_23cb1c;
        }
    }
    ctx->pc = 0x23C99Cu;
label_23c99c:
    // 0x23c99c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x23c99cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23c9a0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x23c9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x23c9a4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x23c9a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x23c9a8: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x23c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x23c9ac: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x23C9ACu;
    {
        const bool branch_taken_0x23c9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23c9ac) {
            ctx->pc = 0x23CB1Cu;
            goto label_23cb1c;
        }
    }
    ctx->pc = 0x23C9B4u;
    // 0x23c9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9b8: 0x27859da8  addiu       $a1, $gp, -0x6258
    ctx->pc = 0x23c9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942120));
    // 0x23c9bc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x23c9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23c9c0: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x23C9C0u;
    SET_GPR_U32(ctx, 31, 0x23C9C8u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x23C9C0u, 0x23C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9C8u;
label_23c9c8:
    // 0x23c9c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x23c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23c9cc: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x23C9CCu;
    SET_GPR_U32(ctx, 31, 0x23C9D4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x23C9CCu, 0x23C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9D4u;
label_23c9d4:
    // 0x23c9d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23c9d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x23c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x23c9dc: 0xa0400080  sb          $zero, 0x80($v0)
    ctx->pc = 0x23c9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x23c9e0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x23c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23c9e4: 0xc0bc65a  jal         func_2F1968
    ctx->pc = 0x23C9E4u;
    SET_GPR_U32(ctx, 31, 0x23C9ECu);
    ctx->pc = 0x2F1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1968u, 0x23C9E4u, 0x23C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9ECu;
label_23c9ec:
    // 0x23c9ec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x23c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23c9f0: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x23C9F0u;
    SET_GPR_U32(ctx, 31, 0x23C9F8u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x23C9F0u, 0x23C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C9F8u;
label_23c9f8:
    // 0x23c9f8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23c9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_23c9fc:
    // 0x23c9fc: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x23c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23ca00: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x23ca00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23ca04: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x23CA04u;
    {
        const bool branch_taken_0x23ca04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ca04) {
            ctx->pc = 0x23CA48u;
            goto label_23ca48;
        }
    }
    ctx->pc = 0x23CA0Cu;
    // 0x23ca0c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x23ca0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23ca10: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x23ca10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x23ca14: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x23ca14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x23ca18: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x23ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x23ca1c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23CA1Cu;
    {
        const bool branch_taken_0x23ca1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ca1c) {
            ctx->pc = 0x23CA3Cu;
            goto label_23ca3c;
        }
    }
    ctx->pc = 0x23CA24u;
    // 0x23ca24: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x23ca24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x23ca28: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x23ca28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x23ca2c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x23ca2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x23ca30: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23ca34: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CA34u;
    {
        const bool branch_taken_0x23ca34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23ca34) {
            ctx->pc = 0x23CA48u;
            goto label_23ca48;
        }
    }
    ctx->pc = 0x23CA3Cu;
label_23ca3c:
    // 0x23ca3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23ca3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23ca40: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x23CA40u;
    {
        const bool branch_taken_0x23ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ca40) {
            ctx->pc = 0x23C9FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c9fc;
        }
    }
    ctx->pc = 0x23CA48u;
label_23ca48:
    // 0x23ca48: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x23ca48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_23ca4c:
    // 0x23ca4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca50: 0x27859db0  addiu       $a1, $gp, -0x6250
    ctx->pc = 0x23ca50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942128));
    // 0x23ca54: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x23ca54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x23ca58: 0xc0bc408  jal         func_2F1020
    ctx->pc = 0x23CA58u;
    SET_GPR_U32(ctx, 31, 0x23CA60u);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x23CA58u, 0x23CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA60u;
label_23ca60:
    // 0x23ca60: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23CA60u;
    {
        const bool branch_taken_0x23ca60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ca60) {
            ctx->pc = 0x23CAA4u;
            goto label_23caa4;
        }
    }
    ctx->pc = 0x23CA68u;
    // 0x23ca68: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x23ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x23ca6c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x23ca6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x23ca70: 0xc040304  jal         func_100C10
    ctx->pc = 0x23CA70u;
    SET_GPR_U32(ctx, 31, 0x23CA78u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x23CA70u, 0x23CA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA78u;
label_23ca78:
    // 0x23ca78: 0xc7b400bc  lwc1        $f20, 0xBC($sp)
    ctx->pc = 0x23ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23ca7c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x23ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23ca80: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x23ca80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x23ca84: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x23ca84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x23ca88: 0xc08f2f8  jal         func_23CBE0
    ctx->pc = 0x23CA88u;
    SET_GPR_U32(ctx, 31, 0x23CA90u);
    ctx->pc = 0x23CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CBE0u, 0x23CA88u, 0x23CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA90u;
label_23ca90:
    // 0x23ca90: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x23ca90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x23ca94: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x23ca94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x23ca98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23ca98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ca9c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x23CA9Cu;
    SET_GPR_U32(ctx, 31, 0x23CAA4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x23CA9Cu, 0x23CAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAA4u;
label_23caa4:
    // 0x23caa4: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x23caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23caa8: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x23caa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23caac: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x23CAACu;
    {
        const bool branch_taken_0x23caac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23caac) {
            ctx->pc = 0x23CAF0u;
            goto label_23caf0;
        }
    }
    ctx->pc = 0x23CAB4u;
    // 0x23cab4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x23cab4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23cab8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x23cab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x23cabc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x23cabcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x23cac0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x23cac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x23cac4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23CAC4u;
    {
        const bool branch_taken_0x23cac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cac4) {
            ctx->pc = 0x23CAE4u;
            goto label_23cae4;
        }
    }
    ctx->pc = 0x23CACCu;
    // 0x23cacc: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x23caccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x23cad0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x23cad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x23cad4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x23cad4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x23cad8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23cadc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CADCu;
    {
        const bool branch_taken_0x23cadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cadc) {
            ctx->pc = 0x23CAF0u;
            goto label_23caf0;
        }
    }
    ctx->pc = 0x23CAE4u;
label_23cae4:
    // 0x23cae4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23cae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x23cae8: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x23CAE8u;
    {
        const bool branch_taken_0x23cae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cae8) {
            ctx->pc = 0x23CAA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23caa4;
        }
    }
    ctx->pc = 0x23CAF0u;
label_23caf0:
    // 0x23caf0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x23caf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x23caf4: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x23caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23caf8: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x23caf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23cafc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x23CAFCu;
    {
        const bool branch_taken_0x23cafc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cafc) {
            ctx->pc = 0x23CB1Cu;
            goto label_23cb1c;
        }
    }
    ctx->pc = 0x23CB04u;
    // 0x23cb04: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x23cb04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23cb08: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x23cb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x23cb0c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x23cb0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x23cb10: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x23cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x23cb14: 0x1462ffcd  bne         $v1, $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x23CB14u;
    {
        const bool branch_taken_0x23cb14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cb14) {
            ctx->pc = 0x23CA4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ca4c;
        }
    }
    ctx->pc = 0x23CB1Cu;
label_23cb1c:
    // 0x23cb1c: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x23cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23cb20: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x23cb20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x23cb24: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x23CB24u;
    {
        const bool branch_taken_0x23cb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cb24) {
            ctx->pc = 0x23C99Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23c99c;
        }
    }
    ctx->pc = 0x23CB2Cu;
    // 0x23cb2c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23CB2Cu;
    {
        const bool branch_taken_0x23cb2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb2c) {
            ctx->pc = 0x23CB48u;
            goto label_23cb48;
        }
    }
    ctx->pc = 0x23CB34u;
    // 0x23cb34: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x23cb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x23cb38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23cb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb3c: 0xc08f2e0  jal         func_23CB80
    ctx->pc = 0x23CB3Cu;
    SET_GPR_U32(ctx, 31, 0x23CB44u);
    ctx->pc = 0x23CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CB80u, 0x23CB3Cu, 0x23CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB44u;
label_23cb44:
    // 0x23cb44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23cb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23cb48:
    // 0x23cb48: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x23cb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb4c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x23cb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23cb50: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x23cb50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23cb54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x23cb54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23cb58: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x23cb58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23cb5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x23cb5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23cb60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23cb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cb64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23cb64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cb68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x23cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23cb6c: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x23cb6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x23cb70: 0x3e00008  jr          $ra
    ctx->pc = 0x23CB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CB78u;
    // 0x23cb78: 0x0  nop
    ctx->pc = 0x23cb78u;
    // NOP
    // 0x23cb7c: 0x0  nop
    ctx->pc = 0x23cb7cu;
    // NOP
    ctx->pc = 0x23cb80u;
}
