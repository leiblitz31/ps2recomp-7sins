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

// Function: sub_00193840
// Address: 0x193840 - 0x1939a0
void sub_00193840_0x193840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193840_0x193840");
#endif

    switch (ctx->pc) {
        case 0x19387cu: goto label_19387c;
        case 0x193894u: goto label_193894;
        case 0x1938a8u: goto label_1938a8;
        case 0x1938c0u: goto label_1938c0;
        case 0x1938d8u: goto label_1938d8;
        case 0x1938ecu: goto label_1938ec;
        case 0x193900u: goto label_193900;
        case 0x193918u: goto label_193918;
        case 0x19392cu: goto label_19392c;
        case 0x193944u: goto label_193944;
        case 0x19395cu: goto label_19395c;
        case 0x193970u: goto label_193970;
        default: break;
    }

    ctx->pc = 0x193840u;

    // 0x193840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x193840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x193844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x193844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x193848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19384c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19384cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x193850: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x193850u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x193854: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x193854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193858: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x193858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x19385c: 0x10030044  beq         $zero, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x19385Cu;
    {
        const bool branch_taken_0x19385c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x19385c) {
            ctx->pc = 0x193970u;
            goto label_193970;
        }
    }
    ctx->pc = 0x193864u;
    // 0x193864: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x193864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193868: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x193868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19386c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x19386cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x193870: 0x24a55ab0  addiu       $a1, $a1, 0x5AB0
    ctx->pc = 0x193870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23216));
    // 0x193874: 0xc05621c  jal         func_158870
    ctx->pc = 0x193874u;
    SET_GPR_U32(ctx, 31, 0x19387Cu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x193874u, 0x19387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19387Cu;
label_19387c:
    // 0x19387c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19387cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193880: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x193880u;
    {
        const bool branch_taken_0x193880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x193880) {
            ctx->pc = 0x1938A8u;
            goto label_1938a8;
        }
    }
    ctx->pc = 0x193888u;
    // 0x193888: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x193888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19388c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x19388Cu;
    SET_GPR_U32(ctx, 31, 0x193894u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x19388Cu, 0x193894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193894u;
label_193894:
    // 0x193894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19389c: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x19389cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1938a0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1938A0u;
    SET_GPR_U32(ctx, 31, 0x1938A8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1938A0u, 0x1938A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1938A8u;
label_1938a8:
    // 0x1938a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1938a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1938ac: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1938acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1938b0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1938b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1938b4: 0x24a55a40  addiu       $a1, $a1, 0x5A40
    ctx->pc = 0x1938b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23104));
    // 0x1938b8: 0xc05621c  jal         func_158870
    ctx->pc = 0x1938B8u;
    SET_GPR_U32(ctx, 31, 0x1938C0u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1938B8u, 0x1938C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1938C0u;
label_1938c0:
    // 0x1938c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1938c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938c4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1938C4u;
    {
        const bool branch_taken_0x1938c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1938c4) {
            ctx->pc = 0x1938ECu;
            goto label_1938ec;
        }
    }
    ctx->pc = 0x1938CCu;
    // 0x1938cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1938ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1938d0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1938D0u;
    SET_GPR_U32(ctx, 31, 0x1938D8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1938D0u, 0x1938D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1938D8u;
label_1938d8:
    // 0x1938d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1938d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1938dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938e0: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1938e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1938e4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1938E4u;
    SET_GPR_U32(ctx, 31, 0x1938ECu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1938E4u, 0x1938ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1938ECu;
label_1938ec:
    // 0x1938ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1938ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1938f0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1938f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1938f4: 0x27859240  addiu       $a1, $gp, -0x6DC0
    ctx->pc = 0x1938f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939200));
    // 0x1938f8: 0xc05621c  jal         func_158870
    ctx->pc = 0x1938F8u;
    SET_GPR_U32(ctx, 31, 0x193900u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x1938F8u, 0x193900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193900u;
label_193900:
    // 0x193900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193904: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x193904u;
    {
        const bool branch_taken_0x193904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x193904) {
            ctx->pc = 0x19392Cu;
            goto label_19392c;
        }
    }
    ctx->pc = 0x19390Cu;
    // 0x19390c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19390cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193910: 0xc06479c  jal         func_191E70
    ctx->pc = 0x193910u;
    SET_GPR_U32(ctx, 31, 0x193918u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x193910u, 0x193918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193918u;
label_193918:
    // 0x193918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19391c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19391cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193920: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x193920u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193924: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x193924u;
    SET_GPR_U32(ctx, 31, 0x19392Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x193924u, 0x19392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19392Cu;
label_19392c:
    // 0x19392c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193930: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x193930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x193934: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x193934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x193938: 0x24a55ac0  addiu       $a1, $a1, 0x5AC0
    ctx->pc = 0x193938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23232));
    // 0x19393c: 0xc05621c  jal         func_158870
    ctx->pc = 0x19393Cu;
    SET_GPR_U32(ctx, 31, 0x193944u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x19393Cu, 0x193944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193944u;
label_193944:
    // 0x193944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193948: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x193948u;
    {
        const bool branch_taken_0x193948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x193948) {
            ctx->pc = 0x193970u;
            goto label_193970;
        }
    }
    ctx->pc = 0x193950u;
    // 0x193950: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x193950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193954: 0xc06479c  jal         func_191E70
    ctx->pc = 0x193954u;
    SET_GPR_U32(ctx, 31, 0x19395Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x193954u, 0x19395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19395Cu;
label_19395c:
    // 0x19395c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19395cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193960: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193964: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x193964u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193968: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x193968u;
    SET_GPR_U32(ctx, 31, 0x193970u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x193968u, 0x193970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193970u;
label_193970:
    // 0x193970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193978: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x193978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19397c: 0x3e00008  jr          $ra
    ctx->pc = 0x19397Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19397Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193984u;
    // 0x193984: 0x0  nop
    ctx->pc = 0x193984u;
    // NOP
    // 0x193988: 0x0  nop
    ctx->pc = 0x193988u;
    // NOP
    // 0x19398c: 0x0  nop
    ctx->pc = 0x19398cu;
    // NOP
    // 0x193990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193994: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x193994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x193998: 0x3e00008  jr          $ra
    ctx->pc = 0x193998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1939A0u;
}
