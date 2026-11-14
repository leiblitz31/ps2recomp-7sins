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

// Function: sub_00458C80
// Address: 0x458c80 - 0x458d80
void sub_00458C80_0x458c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458C80_0x458c80");
#endif

    switch (ctx->pc) {
        case 0x458c94u: goto label_458c94;
        case 0x458cb0u: goto label_458cb0;
        case 0x458cc4u: goto label_458cc4;
        case 0x458ce0u: goto label_458ce0;
        case 0x458cf4u: goto label_458cf4;
        case 0x458d14u: goto label_458d14;
        case 0x458d2cu: goto label_458d2c;
        case 0x458d3cu: goto label_458d3c;
        case 0x458d54u: goto label_458d54;
        default: break;
    }

    ctx->pc = 0x458c80u;

    // 0x458c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x458c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x458c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x458c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x458c88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x458c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x458c8c: 0xc119914  jal         func_466450
    ctx->pc = 0x458C8Cu;
    SET_GPR_U32(ctx, 31, 0x458C94u);
    ctx->pc = 0x466450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466450u, 0x458C8Cu, 0x458C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458C94u;
label_458c94:
    // 0x458c94: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x458C94u;
    {
        const bool branch_taken_0x458c94 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x458c94) {
            ctx->pc = 0x458CBCu;
            goto label_458cbc;
        }
    }
    ctx->pc = 0x458C9Cu;
    // 0x458c9c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x458c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x458ca0: 0x2484e610  addiu       $a0, $a0, -0x19F0
    ctx->pc = 0x458ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960656));
    // 0x458ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x458ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458ca8: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x458CA8u;
    SET_GPR_U32(ctx, 31, 0x458CB0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x458CA8u, 0x458CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458CB0u;
label_458cb0:
    // 0x458cb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x458cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x458cb4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x458CB4u;
    {
        const bool branch_taken_0x458cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458cb4) {
            ctx->pc = 0x458D60u;
            goto label_458d60;
        }
    }
    ctx->pc = 0x458CBCu;
label_458cbc:
    // 0x458cbc: 0xc115bb8  jal         func_456EE0
    ctx->pc = 0x458CBCu;
    SET_GPR_U32(ctx, 31, 0x458CC4u);
    ctx->pc = 0x456EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456EE0u, 0x458CBCu, 0x458CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458CC4u;
label_458cc4:
    // 0x458cc4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x458CC4u;
    {
        const bool branch_taken_0x458cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458cc4) {
            ctx->pc = 0x458CECu;
            goto label_458cec;
        }
    }
    ctx->pc = 0x458CCCu;
    // 0x458ccc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x458cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x458cd0: 0x2484e660  addiu       $a0, $a0, -0x19A0
    ctx->pc = 0x458cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960736));
    // 0x458cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x458cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458cd8: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x458CD8u;
    SET_GPR_U32(ctx, 31, 0x458CE0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x458CD8u, 0x458CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458CE0u;
label_458ce0:
    // 0x458ce0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x458ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x458ce4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x458CE4u;
    {
        const bool branch_taken_0x458ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458ce4) {
            ctx->pc = 0x458D60u;
            goto label_458d60;
        }
    }
    ctx->pc = 0x458CECu;
label_458cec:
    // 0x458cec: 0xc115aec  jal         func_456BB0
    ctx->pc = 0x458CECu;
    SET_GPR_U32(ctx, 31, 0x458CF4u);
    ctx->pc = 0x456BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456BB0u, 0x458CECu, 0x458CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458CF4u;
label_458cf4:
    // 0x458cf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x458cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x458cf8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x458CF8u;
    {
        const bool branch_taken_0x458cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458cf8) {
            ctx->pc = 0x458D20u;
            goto label_458d20;
        }
    }
    ctx->pc = 0x458D00u;
    // 0x458d00: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x458d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x458d04: 0x2484e6b0  addiu       $a0, $a0, -0x1950
    ctx->pc = 0x458d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960816));
    // 0x458d08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x458d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458d0c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x458D0Cu;
    SET_GPR_U32(ctx, 31, 0x458D14u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x458D0Cu, 0x458D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458D14u;
label_458d14:
    // 0x458d14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x458d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x458d18: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x458D18u;
    {
        const bool branch_taken_0x458d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458d18) {
            ctx->pc = 0x458D60u;
            goto label_458d60;
        }
    }
    ctx->pc = 0x458D20u;
label_458d20:
    // 0x458d20: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x458d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x458d24: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x458D24u;
    SET_GPR_U32(ctx, 31, 0x458D2Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x458D24u, 0x458D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458D2Cu;
label_458d2c:
    // 0x458d2c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x458d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x458d30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x458d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458d34: 0xc0400e0  jal         func_100380
    ctx->pc = 0x458D34u;
    SET_GPR_U32(ctx, 31, 0x458D3Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x458D34u, 0x458D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458D3Cu;
label_458d3c:
    // 0x458d3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x458d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458d40: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x458D40u;
    {
        const bool branch_taken_0x458d40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x458d40) {
            ctx->pc = 0x458D58u;
            goto label_458d58;
        }
    }
    ctx->pc = 0x458D48u;
    // 0x458d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x458d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458d4c: 0xc0514a8  jal         func_1452A0
    ctx->pc = 0x458D4Cu;
    SET_GPR_U32(ctx, 31, 0x458D54u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x458D4Cu, 0x458D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458D54u;
label_458d54:
    // 0x458d54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x458d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_458d58:
    // 0x458d58: 0xaf90bf40  sw          $s0, -0x40C0($gp)
    ctx->pc = 0x458d58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950720), GPR_U32(ctx, 16));
    // 0x458d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x458d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_458d60:
    // 0x458d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x458d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x458d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458d68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x458d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x458d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x458D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458D74u;
    // 0x458d74: 0x0  nop
    ctx->pc = 0x458d74u;
    // NOP
    // 0x458d78: 0x0  nop
    ctx->pc = 0x458d78u;
    // NOP
    // 0x458d7c: 0x0  nop
    ctx->pc = 0x458d7cu;
    // NOP
    ctx->pc = 0x458d80u;
}
