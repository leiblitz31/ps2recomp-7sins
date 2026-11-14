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

// Function: sub_00296A40
// Address: 0x296a40 - 0x296af0
void sub_00296A40_0x296a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296A40_0x296a40");
#endif

    switch (ctx->pc) {
        case 0x296aa8u: goto label_296aa8;
        case 0x296ac8u: goto label_296ac8;
        default: break;
    }

    ctx->pc = 0x296a40u;

    // 0x296a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x296a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x296a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x296a4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x296a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x296a50: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x296a50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x296a54: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x296a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296a58: 0x906300b0  lbu         $v1, 0xB0($v1)
    ctx->pc = 0x296a58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x296a5c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x296A5Cu;
    {
        const bool branch_taken_0x296a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296a5c) {
            ctx->pc = 0x296AD0u;
            goto label_296ad0;
        }
    }
    ctx->pc = 0x296A64u;
    // 0x296a64: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x296a64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296a68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296A68u;
    {
        const bool branch_taken_0x296a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296a68) {
            ctx->pc = 0x296A7Cu;
            goto label_296a7c;
        }
    }
    ctx->pc = 0x296A70u;
    // 0x296a70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x296a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x296A74u;
    {
        const bool branch_taken_0x296a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296a74) {
            ctx->pc = 0x296A9Cu;
            goto label_296a9c;
        }
    }
    ctx->pc = 0x296A7Cu;
label_296a7c:
    // 0x296a7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x296a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296a80: 0x904200b1  lbu         $v0, 0xB1($v0)
    ctx->pc = 0x296a80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 177)));
    // 0x296a84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296A84u;
    {
        const bool branch_taken_0x296a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296a84) {
            ctx->pc = 0x296A98u;
            goto label_296a98;
        }
    }
    ctx->pc = 0x296A8Cu;
    // 0x296a8c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x296a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296a90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x296A90u;
    {
        const bool branch_taken_0x296a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296a90) {
            ctx->pc = 0x296A9Cu;
            goto label_296a9c;
        }
    }
    ctx->pc = 0x296A98u;
label_296a98:
    // 0x296a98: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x296a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_296a9c:
    // 0x296a9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x296a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296aa0: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x296AA0u;
    SET_GPR_U32(ctx, 31, 0x296AA8u);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x296AA0u, 0x296AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AA8u;
label_296aa8:
    // 0x296aa8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x296aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296aac: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x296aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296ab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ab4: 0x24a50034  addiu       $a1, $a1, 0x34
    ctx->pc = 0x296ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x296ab8: 0x90660038  lbu         $a2, 0x38($v1)
    ctx->pc = 0x296ab8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x296abc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x296abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ac0: 0xc0a6ee8  jal         func_29BBA0
    ctx->pc = 0x296AC0u;
    SET_GPR_U32(ctx, 31, 0x296AC8u);
    ctx->pc = 0x29BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BBA0u, 0x296AC0u, 0x296AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AC8u;
label_296ac8:
    // 0x296ac8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x296ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296acc: 0xa06200b1  sb          $v0, 0xB1($v1)
    ctx->pc = 0x296accu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 177), (uint8_t)GPR_U32(ctx, 2));
label_296ad0:
    // 0x296ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296ad8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x296ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x296adc: 0x3e00008  jr          $ra
    ctx->pc = 0x296ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296AE4u;
    // 0x296ae4: 0x0  nop
    ctx->pc = 0x296ae4u;
    // NOP
    // 0x296ae8: 0x0  nop
    ctx->pc = 0x296ae8u;
    // NOP
    // 0x296aec: 0x0  nop
    ctx->pc = 0x296aecu;
    // NOP
    ctx->pc = 0x296af0u;
}
