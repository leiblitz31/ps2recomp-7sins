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

// Function: sub_0011AC00
// Address: 0x11ac00 - 0x11acb0
void sub_0011AC00_0x11ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AC00_0x11ac00");
#endif

    switch (ctx->pc) {
        case 0x11ac18u: goto label_11ac18;
        case 0x11ac24u: goto label_11ac24;
        case 0x11ac54u: goto label_11ac54;
        case 0x11ac6cu: goto label_11ac6c;
        case 0x11ac8cu: goto label_11ac8c;
        default: break;
    }

    ctx->pc = 0x11ac00u;

    // 0x11ac00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11ac04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ac08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11ac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11ac0c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x11ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x11ac10: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x11AC10u;
    SET_GPR_U32(ctx, 31, 0x11AC18u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x11AC10u, 0x11AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC18u;
label_11ac18:
    // 0x11ac18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac1c: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x11AC1Cu;
    SET_GPR_U32(ctx, 31, 0x11AC24u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x11AC1Cu, 0x11AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC24u;
label_11ac24:
    // 0x11ac24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ac28: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AC28u;
    {
        const bool branch_taken_0x11ac28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x11ac28) {
            ctx->pc = 0x11AC40u;
            goto label_11ac40;
        }
    }
    ctx->pc = 0x11AC30u;
    // 0x11ac30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AC30u;
    {
        const bool branch_taken_0x11ac30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ac30) {
            ctx->pc = 0x11AC40u;
            goto label_11ac40;
        }
    }
    ctx->pc = 0x11AC38u;
    // 0x11ac38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11AC38u;
    {
        const bool branch_taken_0x11ac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ac38) {
            ctx->pc = 0x11AC8Cu;
            goto label_11ac8c;
        }
    }
    ctx->pc = 0x11AC40u;
label_11ac40:
    // 0x11ac40: 0x8f82b9d0  lw          $v0, -0x4630($gp)
    ctx->pc = 0x11ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949328)));
    // 0x11ac44: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x11ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11ac48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11ac48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ac4c: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x11AC4Cu;
    SET_GPR_U32(ctx, 31, 0x11AC54u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11AC4Cu, 0x11AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC54u;
label_11ac54:
    // 0x11ac54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11ac54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac58: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x11AC58u;
    {
        const bool branch_taken_0x11ac58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ac58) {
            ctx->pc = 0x11AC8Cu;
            goto label_11ac8c;
        }
    }
    ctx->pc = 0x11AC60u;
    // 0x11ac60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ac60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac64: 0xc05e738  jal         func_179CE0
    ctx->pc = 0x11AC64u;
    SET_GPR_U32(ctx, 31, 0x11AC6Cu);
    ctx->pc = 0x179CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179CE0u, 0x11AC64u, 0x11AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC6Cu;
label_11ac6c:
    // 0x11ac6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AC6Cu;
    {
        const bool branch_taken_0x11ac6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ac6c) {
            ctx->pc = 0x11AC8Cu;
            goto label_11ac8c;
        }
    }
    ctx->pc = 0x11AC74u;
    // 0x11ac74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ac78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x11ac78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x11ac7c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x11ac7cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11ac80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac84: 0xc05e498  jal         func_179260
    ctx->pc = 0x11AC84u;
    SET_GPR_U32(ctx, 31, 0x11AC8Cu);
    ctx->pc = 0x179260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179260u, 0x11AC84u, 0x11AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AC8Cu;
label_11ac8c:
    // 0x11ac8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ac90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ac90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ac94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ac94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ac98: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x11ac98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11ac9c: 0x3e00008  jr          $ra
    ctx->pc = 0x11AC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ACA4u;
    // 0x11aca4: 0x0  nop
    ctx->pc = 0x11aca4u;
    // NOP
    // 0x11aca8: 0x0  nop
    ctx->pc = 0x11aca8u;
    // NOP
    // 0x11acac: 0x0  nop
    ctx->pc = 0x11acacu;
    // NOP
    ctx->pc = 0x11acb0u;
}
