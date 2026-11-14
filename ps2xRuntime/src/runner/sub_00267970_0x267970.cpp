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

// Function: sub_00267970
// Address: 0x267970 - 0x267a20
void sub_00267970_0x267970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267970_0x267970");
#endif

    switch (ctx->pc) {
        case 0x267998u: goto label_267998;
        case 0x2679a4u: goto label_2679a4;
        case 0x2679d8u: goto label_2679d8;
        case 0x2679f8u: goto label_2679f8;
        default: break;
    }

    ctx->pc = 0x267970u;

    // 0x267970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x267970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x267974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x267978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26797c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26797cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x267980: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x267980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x267984: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x267984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x267988: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x267988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26798c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x26798cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x267990: 0xc099efc  jal         func_267BF0
    ctx->pc = 0x267990u;
    SET_GPR_U32(ctx, 31, 0x267998u);
    ctx->pc = 0x267BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267BF0u, 0x267990u, 0x267998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267998u;
label_267998:
    // 0x267998: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26799c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26799Cu;
    {
        const bool branch_taken_0x26799c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26799c) {
            ctx->pc = 0x2679E8u;
            goto label_2679e8;
        }
    }
    ctx->pc = 0x2679A4u;
label_2679a4:
    // 0x2679a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2679a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2679a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2679a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2679ac: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2679ACu;
    {
        const bool branch_taken_0x2679ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2679ac) {
            ctx->pc = 0x2679E4u;
            goto label_2679e4;
        }
    }
    ctx->pc = 0x2679B4u;
    // 0x2679b4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2679b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2679b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2679b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2679bc: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2679BCu;
    {
        const bool branch_taken_0x2679bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2679bc) {
            ctx->pc = 0x2679E4u;
            goto label_2679e4;
        }
    }
    ctx->pc = 0x2679C4u;
    // 0x2679c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2679c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2679c8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2679c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2679cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2679ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2679d0: 0xc099e90  jal         func_267A40
    ctx->pc = 0x2679D0u;
    SET_GPR_U32(ctx, 31, 0x2679D8u);
    ctx->pc = 0x267A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A40u, 0x2679D0u, 0x2679D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2679D8u;
label_2679d8:
    // 0x2679d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2679d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2679dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2679DCu;
    {
        const bool branch_taken_0x2679dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2679dc) {
            ctx->pc = 0x2679E8u;
            goto label_2679e8;
        }
    }
    ctx->pc = 0x2679E4u;
label_2679e4:
    // 0x2679e4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2679e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2679e8:
    // 0x2679e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2679e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2679ec: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2679ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2679f0: 0xc099e88  jal         func_267A20
    ctx->pc = 0x2679F0u;
    SET_GPR_U32(ctx, 31, 0x2679F8u);
    ctx->pc = 0x267A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A20u, 0x2679F0u, 0x2679F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2679F8u;
label_2679f8:
    // 0x2679f8: 0x1602ffea  bne         $s0, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2679F8u;
    {
        const bool branch_taken_0x2679f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2679f8) {
            ctx->pc = 0x2679A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2679a4;
        }
    }
    ctx->pc = 0x267A00u;
    // 0x267a00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x267a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267a04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267a08: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x267a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x267a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x267A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267A14u;
    // 0x267a14: 0x0  nop
    ctx->pc = 0x267a14u;
    // NOP
    // 0x267a18: 0x0  nop
    ctx->pc = 0x267a18u;
    // NOP
    // 0x267a1c: 0x0  nop
    ctx->pc = 0x267a1cu;
    // NOP
    ctx->pc = 0x267a20u;
}
