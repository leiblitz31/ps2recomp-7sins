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

// Function: sub_00177CB0
// Address: 0x177cb0 - 0x177d80
void sub_00177CB0_0x177cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177CB0_0x177cb0");
#endif

    switch (ctx->pc) {
        case 0x177cd8u: goto label_177cd8;
        case 0x177cf0u: goto label_177cf0;
        case 0x177d10u: goto label_177d10;
        case 0x177d24u: goto label_177d24;
        case 0x177d38u: goto label_177d38;
        case 0x177d48u: goto label_177d48;
        case 0x177d64u: goto label_177d64;
        default: break;
    }

    ctx->pc = 0x177cb0u;

    // 0x177cb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x177cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x177cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177cbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x177cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x177cc0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x177cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x177cc4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x177cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x177cc8: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x177cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177ccc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177cd0: 0xc05dec4  jal         func_177B10
    ctx->pc = 0x177CD0u;
    SET_GPR_U32(ctx, 31, 0x177CD8u);
    ctx->pc = 0x177B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B10u, 0x177CD0u, 0x177CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CD8u;
label_177cd8:
    // 0x177cd8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x177cd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x177cdc: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x177CDCu;
    {
        const bool branch_taken_0x177cdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x177cdc) {
            ctx->pc = 0x177D2Cu;
            goto label_177d2c;
        }
    }
    ctx->pc = 0x177CE4u;
    // 0x177ce4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177ce8: 0xc05dee4  jal         func_177B90
    ctx->pc = 0x177CE8u;
    SET_GPR_U32(ctx, 31, 0x177CF0u);
    ctx->pc = 0x177B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B90u, 0x177CE8u, 0x177CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177CF0u;
label_177cf0:
    // 0x177cf0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x177cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177cf4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x177cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x177cf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x177cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x177cfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x177cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x177d00: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x177d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177d04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177d08: 0xc05dfc0  jal         func_177F00
    ctx->pc = 0x177D08u;
    SET_GPR_U32(ctx, 31, 0x177D10u);
    ctx->pc = 0x177F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F00u, 0x177D08u, 0x177D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D10u;
label_177d10:
    // 0x177d10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177d14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x177d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d1c: 0xc05df70  jal         func_177DC0
    ctx->pc = 0x177D1Cu;
    SET_GPR_U32(ctx, 31, 0x177D24u);
    ctx->pc = 0x177DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177DC0u, 0x177D1Cu, 0x177D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D24u;
label_177d24:
    // 0x177d24: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x177D24u;
    {
        const bool branch_taken_0x177d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177d24) {
            ctx->pc = 0x177D64u;
            goto label_177d64;
        }
    }
    ctx->pc = 0x177D2Cu;
label_177d2c:
    // 0x177d2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177d30: 0xc05dfc0  jal         func_177F00
    ctx->pc = 0x177D30u;
    SET_GPR_U32(ctx, 31, 0x177D38u);
    ctx->pc = 0x177F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F00u, 0x177D30u, 0x177D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D38u;
label_177d38:
    // 0x177d38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177d40: 0xc05dec4  jal         func_177B10
    ctx->pc = 0x177D40u;
    SET_GPR_U32(ctx, 31, 0x177D48u);
    ctx->pc = 0x177B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B10u, 0x177D40u, 0x177D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D48u;
label_177d48:
    // 0x177d48: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x177d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177d4c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x177d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x177d50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177d54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d58: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x177d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177d5c: 0xc05df60  jal         func_177D80
    ctx->pc = 0x177D5Cu;
    SET_GPR_U32(ctx, 31, 0x177D64u);
    ctx->pc = 0x177D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177D80u, 0x177D5Cu, 0x177D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177D64u;
label_177d64:
    // 0x177d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x177d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177d6c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x177d6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x177d70: 0x3e00008  jr          $ra
    ctx->pc = 0x177D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177D78u;
    // 0x177d78: 0x0  nop
    ctx->pc = 0x177d78u;
    // NOP
    // 0x177d7c: 0x0  nop
    ctx->pc = 0x177d7cu;
    // NOP
    ctx->pc = 0x177d80u;
}
