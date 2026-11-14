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

// Function: sub_00215570
// Address: 0x215570 - 0x215630
void sub_00215570_0x215570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215570_0x215570");
#endif

    switch (ctx->pc) {
        case 0x215598u: goto label_215598;
        case 0x2155acu: goto label_2155ac;
        case 0x2155c0u: goto label_2155c0;
        case 0x2155d4u: goto label_2155d4;
        case 0x2155fcu: goto label_2155fc;
        default: break;
    }

    ctx->pc = 0x215570u;

    // 0x215570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x215570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x215574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x215574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x215578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x215578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21557c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21557cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x215580: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x215580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x215584: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x215584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x215588: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x215588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21558c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x21558cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x215590: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x215590u;
    SET_GPR_U32(ctx, 31, 0x215598u);
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x215590u, 0x215598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215598u;
label_215598:
    // 0x215598: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x215598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21559c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x21559cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2155a0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2155a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2155a4: 0xc041144  jal         func_104510
    ctx->pc = 0x2155A4u;
    SET_GPR_U32(ctx, 31, 0x2155ACu);
    ctx->pc = 0x104510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104510u, 0x2155A4u, 0x2155ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2155ACu;
label_2155ac:
    // 0x2155ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2155acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2155b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155b4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2155b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2155b8: 0xc085704  jal         func_215C10
    ctx->pc = 0x2155B8u;
    SET_GPR_U32(ctx, 31, 0x2155C0u);
    ctx->pc = 0x215C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215C10u, 0x2155B8u, 0x2155C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2155C0u;
label_2155c0:
    // 0x2155c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2155c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2155c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2155c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2155c8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2155c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2155cc: 0xc041144  jal         func_104510
    ctx->pc = 0x2155CCu;
    SET_GPR_U32(ctx, 31, 0x2155D4u);
    ctx->pc = 0x104510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104510u, 0x2155CCu, 0x2155D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2155D4u;
label_2155d4:
    // 0x2155d4: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2155D4u;
    {
        const bool branch_taken_0x2155d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2155d4) {
            ctx->pc = 0x215608u;
            goto label_215608;
        }
    }
    ctx->pc = 0x2155DCu;
    // 0x2155dc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2155dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2155e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2155e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2155e4: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x2155e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x2155e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2155e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2155ec: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2155ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2155f0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2155f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2155f4: 0xc08558c  jal         func_215630
    ctx->pc = 0x2155F4u;
    SET_GPR_U32(ctx, 31, 0x2155FCu);
    ctx->pc = 0x215630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215630u, 0x2155F4u, 0x2155FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2155FCu;
label_2155fc:
    // 0x2155fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2155fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215600: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x215600u;
    {
        const bool branch_taken_0x215600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215600) {
            ctx->pc = 0x21560Cu;
            goto label_21560c;
        }
    }
    ctx->pc = 0x215608u;
label_215608:
    // 0x215608: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x215608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21560c:
    // 0x21560c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21560cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215610: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x215610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x215614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215618: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x215618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21561c: 0x3e00008  jr          $ra
    ctx->pc = 0x21561Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21561Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215624u;
    // 0x215624: 0x0  nop
    ctx->pc = 0x215624u;
    // NOP
    // 0x215628: 0x0  nop
    ctx->pc = 0x215628u;
    // NOP
    // 0x21562c: 0x0  nop
    ctx->pc = 0x21562cu;
    // NOP
    ctx->pc = 0x215630u;
}
