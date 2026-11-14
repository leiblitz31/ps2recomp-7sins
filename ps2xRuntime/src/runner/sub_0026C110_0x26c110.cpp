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

// Function: sub_0026C110
// Address: 0x26c110 - 0x26c1e0
void sub_0026C110_0x26c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C110_0x26c110");
#endif

    switch (ctx->pc) {
        case 0x26c150u: goto label_26c150;
        case 0x26c168u: goto label_26c168;
        case 0x26c18cu: goto label_26c18c;
        case 0x26c1b0u: goto label_26c1b0;
        default: break;
    }

    ctx->pc = 0x26c110u;

    // 0x26c110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26c114: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26c114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26c118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26c11c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26c120: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26c120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26c124: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x26c124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x26c128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c12c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x26c12cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26c130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c134: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x26c134u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26c138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c13c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x26c13cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26c140: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c144: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x26c144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x26c148: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x26C148u;
    SET_GPR_U32(ctx, 31, 0x26C150u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x26C148u, 0x26C150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C150u;
label_26c150:
    // 0x26c150: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26C150u;
    {
        const bool branch_taken_0x26c150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c150) {
            ctx->pc = 0x26C174u;
            goto label_26c174;
        }
    }
    ctx->pc = 0x26C158u;
    // 0x26c158: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26c158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c15c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x26c15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x26c160: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x26C160u;
    SET_GPR_U32(ctx, 31, 0x26C168u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x26C160u, 0x26C168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C168u;
label_26c168:
    // 0x26c168: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26C168u;
    {
        const bool branch_taken_0x26c168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c168) {
            ctx->pc = 0x26C174u;
            goto label_26c174;
        }
    }
    ctx->pc = 0x26C170u;
    // 0x26c170: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26c170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c174:
    // 0x26c174: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26C174u;
    {
        const bool branch_taken_0x26c174 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c174) {
            ctx->pc = 0x26C198u;
            goto label_26c198;
        }
    }
    ctx->pc = 0x26C17Cu;
    // 0x26c17c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c180: 0x24440088  addiu       $a0, $v0, 0x88
    ctx->pc = 0x26c180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x26c184: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x26C184u;
    SET_GPR_U32(ctx, 31, 0x26C18Cu);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x26C184u, 0x26C18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C18Cu;
label_26c18c:
    // 0x26c18c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26C18Cu;
    {
        const bool branch_taken_0x26c18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c18c) {
            ctx->pc = 0x26C198u;
            goto label_26c198;
        }
    }
    ctx->pc = 0x26C194u;
    // 0x26c194: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26c194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c198:
    // 0x26c198: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26C198u;
    {
        const bool branch_taken_0x26c198 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c198) {
            ctx->pc = 0x26C1BCu;
            goto label_26c1bc;
        }
    }
    ctx->pc = 0x26C1A0u;
    // 0x26c1a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c1a4: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26c1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26c1a8: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x26C1A8u;
    SET_GPR_U32(ctx, 31, 0x26C1B0u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x26C1A8u, 0x26C1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1B0u;
label_26c1b0:
    // 0x26c1b0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26C1B0u;
    {
        const bool branch_taken_0x26c1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c1b0) {
            ctx->pc = 0x26C1BCu;
            goto label_26c1bc;
        }
    }
    ctx->pc = 0x26C1B8u;
    // 0x26c1b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26c1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c1bc:
    // 0x26c1bc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x26c1bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c1c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26c1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c1c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26c1c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c1c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26c1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c1cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c1d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26c1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26c1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x26C1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C1DCu;
    // 0x26c1dc: 0x0  nop
    ctx->pc = 0x26c1dcu;
    // NOP
    ctx->pc = 0x26c1e0u;
}
