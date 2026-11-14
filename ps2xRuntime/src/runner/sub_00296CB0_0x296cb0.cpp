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

// Function: sub_00296CB0
// Address: 0x296cb0 - 0x296dc0
void sub_00296CB0_0x296cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296CB0_0x296cb0");
#endif

    switch (ctx->pc) {
        case 0x296cd8u: goto label_296cd8;
        case 0x296ce8u: goto label_296ce8;
        case 0x296cfcu: goto label_296cfc;
        case 0x296d1cu: goto label_296d1c;
        case 0x296d38u: goto label_296d38;
        case 0x296d54u: goto label_296d54;
        case 0x296d6cu: goto label_296d6c;
        case 0x296d78u: goto label_296d78;
        case 0x296d8cu: goto label_296d8c;
        default: break;
    }

    ctx->pc = 0x296cb0u;

    // 0x296cb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x296cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x296cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x296cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x296cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x296cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x296cc0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x296cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x296cc4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x296cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x296cc8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x296cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296ccc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x296cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x296cd0: 0xc0a5138  jal         func_2944E0
    ctx->pc = 0x296CD0u;
    SET_GPR_U32(ctx, 31, 0x296CD8u);
    ctx->pc = 0x2944E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944E0u, 0x296CD0u, 0x296CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296CD8u;
label_296cd8:
    // 0x296cd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x296cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cdc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x296cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ce0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x296CE0u;
    {
        const bool branch_taken_0x296ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296ce0) {
            ctx->pc = 0x296D98u;
            goto label_296d98;
        }
    }
    ctx->pc = 0x296CE8u;
label_296ce8:
    // 0x296ce8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x296ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296cec: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x296cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x296cf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x296cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296cf4: 0xc0a5b1c  jal         func_296C70
    ctx->pc = 0x296CF4u;
    SET_GPR_U32(ctx, 31, 0x296CFCu);
    ctx->pc = 0x296C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C70u, 0x296CF4u, 0x296CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296CFCu;
label_296cfc:
    // 0x296cfc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x296cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296d00: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x296d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296d04: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x296D04u;
    {
        const bool branch_taken_0x296d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x296d04) {
            ctx->pc = 0x296D94u;
            goto label_296d94;
        }
    }
    ctx->pc = 0x296D0Cu;
    // 0x296d0c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x296d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296d10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x296d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d14: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x296D14u;
    SET_GPR_U32(ctx, 31, 0x296D1Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x296D14u, 0x296D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D1Cu;
label_296d1c:
    // 0x296d1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x296d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296d20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x296d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x296d24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x296d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x296d28: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x296d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296d2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x296d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296d30: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x296D30u;
    SET_GPR_U32(ctx, 31, 0x296D38u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x296D30u, 0x296D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D38u;
label_296d38:
    // 0x296d38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x296d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296d3c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x296D3Cu;
    {
        const bool branch_taken_0x296d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296d3c) {
            ctx->pc = 0x296D8Cu;
            goto label_296d8c;
        }
    }
    ctx->pc = 0x296D44u;
    // 0x296d44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x296d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296d48: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x296d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x296d4c: 0xc0a58e0  jal         func_296380
    ctx->pc = 0x296D4Cu;
    SET_GPR_U32(ctx, 31, 0x296D54u);
    ctx->pc = 0x296380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296380u, 0x296D4Cu, 0x296D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D54u;
label_296d54:
    // 0x296d54: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x296d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x296d58: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x296d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296d5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x296d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296d60: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x296d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x296d64: 0xc0a5b70  jal         func_296DC0
    ctx->pc = 0x296D64u;
    SET_GPR_U32(ctx, 31, 0x296D6Cu);
    ctx->pc = 0x296DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DC0u, 0x296D64u, 0x296D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D6Cu;
label_296d6c:
    // 0x296d6c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x296d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296d70: 0xc056144  jal         func_158510
    ctx->pc = 0x296D70u;
    SET_GPR_U32(ctx, 31, 0x296D78u);
    ctx->pc = 0x158510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158510u, 0x296D70u, 0x296D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D78u;
label_296d78:
    // 0x296d78: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x296d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x296d7c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x296d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296d80: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x296d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296d84: 0xc07ea18  jal         func_1FA860
    ctx->pc = 0x296D84u;
    SET_GPR_U32(ctx, 31, 0x296D8Cu);
    ctx->pc = 0x1FA860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA860u, 0x296D84u, 0x296D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D8Cu;
label_296d8c:
    // 0x296d8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x296D8Cu;
    {
        const bool branch_taken_0x296d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296d8c) {
            ctx->pc = 0x296DA4u;
            goto label_296da4;
        }
    }
    ctx->pc = 0x296D94u;
label_296d94:
    // 0x296d94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_296d98:
    // 0x296d98: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x296d98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x296d9c: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x296D9Cu;
    {
        const bool branch_taken_0x296d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296d9c) {
            ctx->pc = 0x296CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296ce8;
        }
    }
    ctx->pc = 0x296DA4u;
label_296da4:
    // 0x296da4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x296da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296da8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296db0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x296db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x296db4: 0x3e00008  jr          $ra
    ctx->pc = 0x296DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296DBCu;
    // 0x296dbc: 0x0  nop
    ctx->pc = 0x296dbcu;
    // NOP
    ctx->pc = 0x296dc0u;
}
