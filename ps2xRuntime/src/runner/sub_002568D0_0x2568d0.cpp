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

// Function: sub_002568D0
// Address: 0x2568d0 - 0x256a30
void sub_002568D0_0x2568d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002568D0_0x2568d0");
#endif

    switch (ctx->pc) {
        case 0x2568fcu: goto label_2568fc;
        case 0x256910u: goto label_256910;
        case 0x256920u: goto label_256920;
        case 0x256928u: goto label_256928;
        case 0x256934u: goto label_256934;
        case 0x256948u: goto label_256948;
        case 0x256968u: goto label_256968;
        case 0x25697cu: goto label_25697c;
        case 0x25698cu: goto label_25698c;
        case 0x2569acu: goto label_2569ac;
        case 0x2569bcu: goto label_2569bc;
        case 0x2569d4u: goto label_2569d4;
        case 0x2569e8u: goto label_2569e8;
        case 0x256a08u: goto label_256a08;
        default: break;
    }

    ctx->pc = 0x2568d0u;

    // 0x2568d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2568d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2568d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2568d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2568d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2568d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2568dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2568dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2568e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2568e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2568e4: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2568e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2568e8: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2568e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2568ec: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2568ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x2568f0: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2568f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2568f4: 0xc09573c  jal         func_255CF0
    ctx->pc = 0x2568F4u;
    SET_GPR_U32(ctx, 31, 0x2568FCu);
    ctx->pc = 0x255CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255CF0u, 0x2568F4u, 0x2568FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2568FCu;
label_2568fc:
    // 0x2568fc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2568fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256900: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x256900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x256904: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x256904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x256908: 0xc095410  jal         func_255040
    ctx->pc = 0x256908u;
    SET_GPR_U32(ctx, 31, 0x256910u);
    ctx->pc = 0x255040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255040u, 0x256908u, 0x256910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256910u;
label_256910:
    // 0x256910: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x256910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x256914: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x256914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x256918: 0xc09572c  jal         func_255CB0
    ctx->pc = 0x256918u;
    SET_GPR_U32(ctx, 31, 0x256920u);
    ctx->pc = 0x255CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255CB0u, 0x256918u, 0x256920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256920u;
label_256920:
    // 0x256920: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x256920u;
    {
        const bool branch_taken_0x256920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256920) {
            ctx->pc = 0x256968u;
            goto label_256968;
        }
    }
    ctx->pc = 0x256928u;
label_256928:
    // 0x256928: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x256928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x25692c: 0xc095408  jal         func_255020
    ctx->pc = 0x25692Cu;
    SET_GPR_U32(ctx, 31, 0x256934u);
    ctx->pc = 0x255020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255020u, 0x25692Cu, 0x256934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256934u;
label_256934:
    // 0x256934: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x256934u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256938: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x256938u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25693c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x25693cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256940: 0xc09138c  jal         func_244E30
    ctx->pc = 0x256940u;
    SET_GPR_U32(ctx, 31, 0x256948u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x256940u, 0x256948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256948u;
label_256948:
    // 0x256948: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x256948u;
    {
        const bool branch_taken_0x256948 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x256948) {
            ctx->pc = 0x25695Cu;
            goto label_25695c;
        }
    }
    ctx->pc = 0x256950u;
    // 0x256950: 0xafb1005c  sw          $s1, 0x5C($sp)
    ctx->pc = 0x256950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 17));
    // 0x256954: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x256954u;
    {
        const bool branch_taken_0x256954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256954) {
            ctx->pc = 0x256994u;
            goto label_256994;
        }
    }
    ctx->pc = 0x25695Cu;
label_25695c:
    // 0x25695c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x25695cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x256960: 0xc0953cc  jal         func_254F30
    ctx->pc = 0x256960u;
    SET_GPR_U32(ctx, 31, 0x256968u);
    ctx->pc = 0x254F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F30u, 0x256960u, 0x256968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256968u;
label_256968:
    // 0x256968: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x256968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25696c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x256970: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x256970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x256974: 0xc0953a0  jal         func_254E80
    ctx->pc = 0x256974u;
    SET_GPR_U32(ctx, 31, 0x25697Cu);
    ctx->pc = 0x254E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254E80u, 0x256974u, 0x25697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25697Cu;
label_25697c:
    // 0x25697c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x25697cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x256980: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x256980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x256984: 0xc041998  jal         func_106660
    ctx->pc = 0x256984u;
    SET_GPR_U32(ctx, 31, 0x25698Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x256984u, 0x25698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25698Cu;
label_25698c:
    // 0x25698c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x25698Cu;
    {
        const bool branch_taken_0x25698c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25698c) {
            ctx->pc = 0x256928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_256928;
        }
    }
    ctx->pc = 0x256994u;
label_256994:
    // 0x256994: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x256994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x256998: 0x1402001b  bne         $zero, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x256998u;
    {
        const bool branch_taken_0x256998 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x256998) {
            ctx->pc = 0x256A08u;
            goto label_256a08;
        }
    }
    ctx->pc = 0x2569A0u;
    // 0x2569a0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2569a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2569a4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2569A4u;
    SET_GPR_U32(ctx, 31, 0x2569ACu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2569A4u, 0x2569ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2569ACu;
label_2569ac:
    // 0x2569ac: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2569acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2569b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2569b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2569b4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2569B4u;
    SET_GPR_U32(ctx, 31, 0x2569BCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2569B4u, 0x2569BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2569BCu;
label_2569bc:
    // 0x2569bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2569bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2569c0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2569C0u;
    {
        const bool branch_taken_0x2569c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2569c0) {
            ctx->pc = 0x2569D8u;
            goto label_2569d8;
        }
    }
    ctx->pc = 0x2569C8u;
    // 0x2569c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2569c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2569cc: 0xc095ac0  jal         func_256B00
    ctx->pc = 0x2569CCu;
    SET_GPR_U32(ctx, 31, 0x2569D4u);
    ctx->pc = 0x256B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256B00u, 0x2569CCu, 0x2569D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2569D4u;
label_2569d4:
    // 0x2569d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2569d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2569d8:
    // 0x2569d8: 0xafb0005c  sw          $s0, 0x5C($sp)
    ctx->pc = 0x2569d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 16));
    // 0x2569dc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2569dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2569e0: 0xc09138c  jal         func_244E30
    ctx->pc = 0x2569E0u;
    SET_GPR_U32(ctx, 31, 0x2569E8u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x2569E0u, 0x2569E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2569E8u;
label_2569e8:
    // 0x2569e8: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x2569e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2569ec: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2569ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2569f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2569f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2569f4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2569f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2569f8: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x2569f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2569fc: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x2569fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x256a00: 0xc095a8c  jal         func_256A30
    ctx->pc = 0x256A00u;
    SET_GPR_U32(ctx, 31, 0x256A08u);
    ctx->pc = 0x256A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256A30u, 0x256A00u, 0x256A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A08u;
label_256a08:
    // 0x256a08: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x256a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x256a0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x256a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x256a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256a1c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x256a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x256a20: 0x3e00008  jr          $ra
    ctx->pc = 0x256A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256A28u;
    // 0x256a28: 0x0  nop
    ctx->pc = 0x256a28u;
    // NOP
    // 0x256a2c: 0x0  nop
    ctx->pc = 0x256a2cu;
    // NOP
    ctx->pc = 0x256a30u;
}
