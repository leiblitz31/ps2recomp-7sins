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

// Function: sub_00168630
// Address: 0x168630 - 0x1686f0
void sub_00168630_0x168630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168630_0x168630");
#endif

    switch (ctx->pc) {
        case 0x168694u: goto label_168694;
        case 0x1686a8u: goto label_1686a8;
        case 0x1686b8u: goto label_1686b8;
        case 0x1686c8u: goto label_1686c8;
        default: break;
    }

    ctx->pc = 0x168630u;

    // 0x168630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x168634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16863c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x16863cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x168640: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x168640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x168644: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x168644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168648: 0x10100022  beq         $zero, $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x168648u;
    {
        const bool branch_taken_0x168648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x168648) {
            ctx->pc = 0x1686D4u;
            goto label_1686d4;
        }
    }
    ctx->pc = 0x168650u;
    // 0x168650: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x168650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x168654: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x168654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168658: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x168658u;
    {
        const bool branch_taken_0x168658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x168658) {
            ctx->pc = 0x1686D0u;
            goto label_1686d0;
        }
    }
    ctx->pc = 0x168660u;
    // 0x168660: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168664: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x168664u;
    {
        const bool branch_taken_0x168664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x168664) {
            ctx->pc = 0x168674u;
            goto label_168674;
        }
    }
    ctx->pc = 0x16866Cu;
    // 0x16866c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16866Cu;
    {
        const bool branch_taken_0x16866c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16866c) {
            ctx->pc = 0x1686D4u;
            goto label_1686d4;
        }
    }
    ctx->pc = 0x168674u;
label_168674:
    // 0x168674: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x168674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x168678: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x168678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16867c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16867cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x168680: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x168680u;
    {
        const bool branch_taken_0x168680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168680) {
            ctx->pc = 0x1686D4u;
            goto label_1686d4;
        }
    }
    ctx->pc = 0x168688u;
    // 0x168688: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x168688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16868c: 0xc088560  jal         func_221580
    ctx->pc = 0x16868Cu;
    SET_GPR_U32(ctx, 31, 0x168694u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x16868Cu, 0x168694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168694u;
label_168694:
    // 0x168694: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x168694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168698: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x168698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x16869c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x16869cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1686a0: 0xc040924  jal         func_102490
    ctx->pc = 0x1686A0u;
    SET_GPR_U32(ctx, 31, 0x1686A8u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x1686A0u, 0x1686A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1686A8u;
label_1686a8:
    // 0x1686a8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1686a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1686ac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1686acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1686b0: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x1686B0u;
    SET_GPR_U32(ctx, 31, 0x1686B8u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1686B0u, 0x1686B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1686B8u;
label_1686b8:
    // 0x1686b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1686b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1686bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1686bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1686c0: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x1686C0u;
    SET_GPR_U32(ctx, 31, 0x1686C8u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x1686C0u, 0x1686C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1686C8u;
label_1686c8:
    // 0x1686c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1686C8u;
    {
        const bool branch_taken_0x1686c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1686c8) {
            ctx->pc = 0x1686D4u;
            goto label_1686d4;
        }
    }
    ctx->pc = 0x1686D0u;
label_1686d0:
    // 0x1686d0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1686d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_1686d4:
    // 0x1686d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1686d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1686d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1686d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1686dc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1686dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1686e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1686E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1686E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1686E8u;
    // 0x1686e8: 0x0  nop
    ctx->pc = 0x1686e8u;
    // NOP
    // 0x1686ec: 0x0  nop
    ctx->pc = 0x1686ecu;
    // NOP
    ctx->pc = 0x1686f0u;
}
