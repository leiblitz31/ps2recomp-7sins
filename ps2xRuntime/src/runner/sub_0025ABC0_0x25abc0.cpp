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

// Function: sub_0025ABC0
// Address: 0x25abc0 - 0x25ac70
void sub_0025ABC0_0x25abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025ABC0_0x25abc0");
#endif

    switch (ctx->pc) {
        case 0x25ac08u: goto label_25ac08;
        case 0x25ac14u: goto label_25ac14;
        case 0x25ac4cu: goto label_25ac4c;
        default: break;
    }

    ctx->pc = 0x25abc0u;

    // 0x25abc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25abc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25abc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25abcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25abccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25abd0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25abd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x25abd4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x25abd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25abd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25abdc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x25abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25abe0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25ABE0u;
    {
        const bool branch_taken_0x25abe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25abe0) {
            ctx->pc = 0x25ABF8u;
            goto label_25abf8;
        }
    }
    ctx->pc = 0x25ABE8u;
    // 0x25abe8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25abec: 0xac60010c  sw          $zero, 0x10C($v1)
    ctx->pc = 0x25abecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 0));
    // 0x25abf0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25ABF0u;
    {
        const bool branch_taken_0x25abf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25abf0) {
            ctx->pc = 0x25AC54u;
            goto label_25ac54;
        }
    }
    ctx->pc = 0x25ABF8u;
label_25abf8:
    // 0x25abf8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25abfc: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x25abfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x25ac00: 0xc095a2c  jal         func_2568B0
    ctx->pc = 0x25AC00u;
    SET_GPR_U32(ctx, 31, 0x25AC08u);
    ctx->pc = 0x2568B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2568B0u, 0x25AC00u, 0x25AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AC08u;
label_25ac08:
    // 0x25ac08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ac08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ac0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25AC0Cu;
    {
        const bool branch_taken_0x25ac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac0c) {
            ctx->pc = 0x25AC3Cu;
            goto label_25ac3c;
        }
    }
    ctx->pc = 0x25AC14u;
label_25ac14:
    // 0x25ac14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25ac18: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x25ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ac1c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25AC1Cu;
    {
        const bool branch_taken_0x25ac1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x25ac1c) {
            ctx->pc = 0x25AC34u;
            goto label_25ac34;
        }
    }
    ctx->pc = 0x25AC24u;
    // 0x25ac24: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x25ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ac28: 0xac71010c  sw          $s1, 0x10C($v1)
    ctx->pc = 0x25ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 17));
    // 0x25ac2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25AC2Cu;
    {
        const bool branch_taken_0x25ac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac2c) {
            ctx->pc = 0x25AC54u;
            goto label_25ac54;
        }
    }
    ctx->pc = 0x25AC34u;
label_25ac34:
    // 0x25ac34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25ac34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25ac38: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x25ac38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_25ac3c:
    // 0x25ac3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ac40: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x25ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x25ac44: 0xc095a24  jal         func_256890
    ctx->pc = 0x25AC44u;
    SET_GPR_U32(ctx, 31, 0x25AC4Cu);
    ctx->pc = 0x256890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x256890u, 0x25AC44u, 0x25AC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AC4Cu;
label_25ac4c:
    // 0x25ac4c: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x25AC4Cu;
    {
        const bool branch_taken_0x25ac4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ac4c) {
            ctx->pc = 0x25AC14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25ac14;
        }
    }
    ctx->pc = 0x25AC54u;
label_25ac54:
    // 0x25ac54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25ac54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ac58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ac58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ac5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ac5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ac60: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25ac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ac64: 0x3e00008  jr          $ra
    ctx->pc = 0x25AC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AC6Cu;
    // 0x25ac6c: 0x0  nop
    ctx->pc = 0x25ac6cu;
    // NOP
    ctx->pc = 0x25ac70u;
}
