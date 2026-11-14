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

// Function: sub_002D07D0
// Address: 0x2d07d0 - 0x2d0a40
void sub_002D07D0_0x2d07d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D07D0_0x2d07d0");
#endif

    switch (ctx->pc) {
        case 0x2d0830u: goto label_2d0830;
        case 0x2d0844u: goto label_2d0844;
        case 0x2d0854u: goto label_2d0854;
        case 0x2d0874u: goto label_2d0874;
        case 0x2d08acu: goto label_2d08ac;
        case 0x2d08ccu: goto label_2d08cc;
        case 0x2d0908u: goto label_2d0908;
        case 0x2d0944u: goto label_2d0944;
        case 0x2d0950u: goto label_2d0950;
        case 0x2d0968u: goto label_2d0968;
        case 0x2d0974u: goto label_2d0974;
        case 0x2d098cu: goto label_2d098c;
        case 0x2d09a4u: goto label_2d09a4;
        case 0x2d09b4u: goto label_2d09b4;
        case 0x2d09c0u: goto label_2d09c0;
        case 0x2d09d8u: goto label_2d09d8;
        case 0x2d09e4u: goto label_2d09e4;
        case 0x2d09fcu: goto label_2d09fc;
        case 0x2d0a14u: goto label_2d0a14;
        case 0x2d0a20u: goto label_2d0a20;
        default: break;
    }

    ctx->pc = 0x2d07d0u;

    // 0x2d07d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d07d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d07d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d07d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d07d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d07dc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d07dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d07e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D07E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D07E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D07E8u;
    // 0x2d07e8: 0x0  nop
    ctx->pc = 0x2d07e8u;
    // NOP
    // 0x2d07ec: 0x0  nop
    ctx->pc = 0x2d07ecu;
    // NOP
    // 0x2d07f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d07f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d07f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d07f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d07f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d07f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d07fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2d07fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d0800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0804: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D0804u;
    {
        const bool branch_taken_0x2d0804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0804) {
            ctx->pc = 0x2D0874u;
            goto label_2d0874;
        }
    }
    ctx->pc = 0x2D080Cu;
    // 0x2d080c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d080cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d0810: 0x24636820  addiu       $v1, $v1, 0x6820
    ctx->pc = 0x2d0810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26656));
    // 0x2d0814: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0818: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d0818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d081c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0820: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d0820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d0824: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d0824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d0828: 0xc0b403c  jal         func_2D00F0
    ctx->pc = 0x2D0828u;
    SET_GPR_U32(ctx, 31, 0x2D0830u);
    ctx->pc = 0x2D00F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D00F0u, 0x2D0828u, 0x2D0830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0830u;
label_2d0830:
    // 0x2d0830: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0834: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d0834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d0838: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d0838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d083c: 0xc0b40c4  jal         func_2D0310
    ctx->pc = 0x2D083Cu;
    SET_GPR_U32(ctx, 31, 0x2D0844u);
    ctx->pc = 0x2D0310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0310u, 0x2D083Cu, 0x2D0844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0844u;
label_2d0844:
    // 0x2d0844: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d0848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d084c: 0xc04f5bc  jal         func_13D6F0
    ctx->pc = 0x2D084Cu;
    SET_GPR_U32(ctx, 31, 0x2D0854u);
    ctx->pc = 0x13D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D6F0u, 0x2D084Cu, 0x2D0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0854u;
label_2d0854:
    // 0x2d0854: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2d0854u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0858: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d0858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d085c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d085cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d0860: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0860u;
    {
        const bool branch_taken_0x2d0860 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d0860) {
            ctx->pc = 0x2D0874u;
            goto label_2d0874;
        }
    }
    ctx->pc = 0x2D0868u;
    // 0x2d0868: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d0868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d086c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2D086Cu;
    SET_GPR_U32(ctx, 31, 0x2D0874u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2D086Cu, 0x2D0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0874u;
label_2d0874:
    // 0x2d0874: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d0874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d087c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d087cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d0880: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0888u;
    // 0x2d0888: 0x0  nop
    ctx->pc = 0x2d0888u;
    // NOP
    // 0x2d088c: 0x0  nop
    ctx->pc = 0x2d088cu;
    // NOP
    // 0x2d0890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d089c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d089cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d08a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d08a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d08a4: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x2D08A4u;
    SET_GPR_U32(ctx, 31, 0x2D08ACu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x2D08A4u, 0x2D08ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D08ACu;
label_2d08ac:
    // 0x2d08ac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d08acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d08b0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D08B0u;
    {
        const bool branch_taken_0x2d08b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d08b0) {
            ctx->pc = 0x2D08CCu;
            goto label_2d08cc;
        }
    }
    ctx->pc = 0x2D08B8u;
    // 0x2d08b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2d08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d08bc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d08bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d08c0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2d08c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d08c4: 0xc0b63ac  jal         func_2D8EB0
    ctx->pc = 0x2D08C4u;
    SET_GPR_U32(ctx, 31, 0x2D08CCu);
    ctx->pc = 0x2D8EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8EB0u, 0x2D08C4u, 0x2D08CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D08CCu;
label_2d08cc:
    // 0x2d08cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d08ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d08d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d08d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d08d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d08d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d08d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d08d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d08dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D08DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D08DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D08E4u;
    // 0x2d08e4: 0x0  nop
    ctx->pc = 0x2d08e4u;
    // NOP
    // 0x2d08e8: 0x0  nop
    ctx->pc = 0x2d08e8u;
    // NOP
    // 0x2d08ec: 0x0  nop
    ctx->pc = 0x2d08ecu;
    // NOP
    // 0x2d08f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d08f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d08f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d08f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d08f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d08f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d08fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d08fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0900: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x2D0900u;
    SET_GPR_U32(ctx, 31, 0x2D0908u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x2D0900u, 0x2D0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0908u;
label_2d0908:
    // 0x2d0908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d090c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d090cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0910: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0918u;
    // 0x2d0918: 0x0  nop
    ctx->pc = 0x2d0918u;
    // NOP
    // 0x2d091c: 0x0  nop
    ctx->pc = 0x2d091cu;
    // NOP
    // 0x2d0920: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d0920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d0924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d0924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d0928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d092c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d092cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d0930: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d0930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d0934: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d0934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0938: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d0938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d093c: 0xc0b436c  jal         func_2D0DB0
    ctx->pc = 0x2D093Cu;
    SET_GPR_U32(ctx, 31, 0x2D0944u);
    ctx->pc = 0x2D0DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DB0u, 0x2D093Cu, 0x2D0944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0944u;
label_2d0944:
    // 0x2d0944: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d0944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0948: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D0948u;
    {
        const bool branch_taken_0x2d0948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0948) {
            ctx->pc = 0x2D097Cu;
            goto label_2d097c;
        }
    }
    ctx->pc = 0x2D0950u;
label_2d0950:
    // 0x2d0950: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2d0950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d0954: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0954u;
    {
        const bool branch_taken_0x2d0954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0954) {
            ctx->pc = 0x2D0978u;
            goto label_2d0978;
        }
    }
    ctx->pc = 0x2D095Cu;
    // 0x2d095c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d095cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d0960: 0xc0b4340  jal         func_2D0D00
    ctx->pc = 0x2D0960u;
    SET_GPR_U32(ctx, 31, 0x2D0968u);
    ctx->pc = 0x2D0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0D00u, 0x2D0960u, 0x2D0968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0968u;
label_2d0968:
    // 0x2d0968: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d0968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d096c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2D096Cu;
    SET_GPR_U32(ctx, 31, 0x2D0974u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2D096Cu, 0x2D0974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0974u;
label_2d0974:
    // 0x2d0974: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2d0974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2d0978:
    // 0x2d0978: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d0978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d097c:
    // 0x2d097c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0980: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d0980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d0984: 0xc0b4338  jal         func_2D0CE0
    ctx->pc = 0x2D0984u;
    SET_GPR_U32(ctx, 31, 0x2D098Cu);
    ctx->pc = 0x2D0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0CE0u, 0x2D0984u, 0x2D098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D098Cu;
label_2d098c:
    // 0x2d098c: 0x1622fff0  bne         $s1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2D098Cu;
    {
        const bool branch_taken_0x2d098c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d098c) {
            ctx->pc = 0x2D0950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0950;
        }
    }
    ctx->pc = 0x2D0994u;
    // 0x2d0994: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d0994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0998: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2d0998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2d099c: 0xc0b42f4  jal         func_2D0BD0
    ctx->pc = 0x2D099Cu;
    SET_GPR_U32(ctx, 31, 0x2D09A4u);
    ctx->pc = 0x2D0BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BD0u, 0x2D099Cu, 0x2D09A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09A4u;
label_2d09a4:
    // 0x2d09a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d09a8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d09a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d09ac: 0xc0b42ec  jal         func_2D0BB0
    ctx->pc = 0x2D09ACu;
    SET_GPR_U32(ctx, 31, 0x2D09B4u);
    ctx->pc = 0x2D0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BB0u, 0x2D09ACu, 0x2D09B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09B4u;
label_2d09b4:
    // 0x2d09b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d09b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d09b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D09B8u;
    {
        const bool branch_taken_0x2d09b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d09b8) {
            ctx->pc = 0x2D09ECu;
            goto label_2d09ec;
        }
    }
    ctx->pc = 0x2D09C0u;
label_2d09c0:
    // 0x2d09c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d09c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D09C4u;
    {
        const bool branch_taken_0x2d09c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d09c4) {
            ctx->pc = 0x2D09E8u;
            goto label_2d09e8;
        }
    }
    ctx->pc = 0x2D09CCu;
    // 0x2d09cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d09ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d09d0: 0xc0b42dc  jal         func_2D0B70
    ctx->pc = 0x2D09D0u;
    SET_GPR_U32(ctx, 31, 0x2D09D8u);
    ctx->pc = 0x2D0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B70u, 0x2D09D0u, 0x2D09D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09D8u;
label_2d09d8:
    // 0x2d09d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d09d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d09dc: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2D09DCu;
    SET_GPR_U32(ctx, 31, 0x2D09E4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2D09DCu, 0x2D09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09E4u;
label_2d09e4:
    // 0x2d09e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d09e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d09e8:
    // 0x2d09e8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d09e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d09ec:
    // 0x2d09ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d09f0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d09f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d09f4: 0xc0b42d4  jal         func_2D0B50
    ctx->pc = 0x2D09F4u;
    SET_GPR_U32(ctx, 31, 0x2D09FCu);
    ctx->pc = 0x2D0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B50u, 0x2D09F4u, 0x2D09FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D09FCu;
label_2d09fc:
    // 0x2d09fc: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2D09FCu;
    {
        const bool branch_taken_0x2d09fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d09fc) {
            ctx->pc = 0x2D09C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d09c0;
        }
    }
    ctx->pc = 0x2D0A04u;
    // 0x2d0a04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0a08: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2d0a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2d0a0c: 0xc0b4290  jal         func_2D0A40
    ctx->pc = 0x2D0A0Cu;
    SET_GPR_U32(ctx, 31, 0x2D0A14u);
    ctx->pc = 0x2D0A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0A40u, 0x2D0A0Cu, 0x2D0A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A14u;
label_2d0a14:
    // 0x2d0a14: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d0a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0a18: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x2D0A18u;
    SET_GPR_U32(ctx, 31, 0x2D0A20u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x2D0A18u, 0x2D0A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0A20u;
label_2d0a20:
    // 0x2d0a20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d0a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0a24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0a24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0a28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0a2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d0a2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d0a30: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0A38u;
    // 0x2d0a38: 0x0  nop
    ctx->pc = 0x2d0a38u;
    // NOP
    // 0x2d0a3c: 0x0  nop
    ctx->pc = 0x2d0a3cu;
    // NOP
    ctx->pc = 0x2d0a40u;
}
