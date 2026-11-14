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

// Function: sub_00113B70
// Address: 0x113b70 - 0x113c10
void sub_00113B70_0x113b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113B70_0x113b70");
#endif

    switch (ctx->pc) {
        case 0x113b94u: goto label_113b94;
        case 0x113bd8u: goto label_113bd8;
        case 0x113be8u: goto label_113be8;
        default: break;
    }

    ctx->pc = 0x113b70u;

    // 0x113b70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x113b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x113b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x113b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x113b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x113b7c: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x113b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x113b80: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x113b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x113b84: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x113b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x113b88: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x113b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x113b8c: 0xc045944  jal         func_116510
    ctx->pc = 0x113B8Cu;
    SET_GPR_U32(ctx, 31, 0x113B94u);
    ctx->pc = 0x116510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116510u, 0x113B8Cu, 0x113B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B94u;
label_113b94:
    // 0x113b94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b98: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113B98u;
    {
        const bool branch_taken_0x113b98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x113b98) {
            ctx->pc = 0x113BACu;
            goto label_113bac;
        }
    }
    ctx->pc = 0x113BA0u;
    // 0x113ba0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x113ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ba4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x113BA4u;
    {
        const bool branch_taken_0x113ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113ba4) {
            ctx->pc = 0x113BF4u;
            goto label_113bf4;
        }
    }
    ctx->pc = 0x113BACu;
label_113bac:
    // 0x113bac: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x113bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x113bb0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x113bb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113bb4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x113bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x113bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113bbc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x113BBCu;
    {
        const bool branch_taken_0x113bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x113bbc) {
            ctx->pc = 0x113BF0u;
            goto label_113bf0;
        }
    }
    ctx->pc = 0x113BC4u;
    // 0x113bc4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x113bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x113bc8: 0x27858990  addiu       $a1, $gp, -0x7670
    ctx->pc = 0x113bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936976));
    // 0x113bcc: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x113bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x113bd0: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x113BD0u;
    SET_GPR_U32(ctx, 31, 0x113BD8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x113BD0u, 0x113BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BD8u;
label_113bd8:
    // 0x113bd8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x113bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x113bdc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x113bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x113be0: 0xc045880  jal         func_116200
    ctx->pc = 0x113BE0u;
    SET_GPR_U32(ctx, 31, 0x113BE8u);
    ctx->pc = 0x116200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116200u, 0x113BE0u, 0x113BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BE8u;
label_113be8:
    // 0x113be8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113BE8u;
    {
        const bool branch_taken_0x113be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113be8) {
            ctx->pc = 0x113BF4u;
            goto label_113bf4;
        }
    }
    ctx->pc = 0x113BF0u;
label_113bf0:
    // 0x113bf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x113bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113bf4:
    // 0x113bf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x113bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x113bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113bfc: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x113bfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x113c00: 0x3e00008  jr          $ra
    ctx->pc = 0x113C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113C08u;
    // 0x113c08: 0x0  nop
    ctx->pc = 0x113c08u;
    // NOP
    // 0x113c0c: 0x0  nop
    ctx->pc = 0x113c0cu;
    // NOP
    ctx->pc = 0x113c10u;
}
