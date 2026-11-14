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

// Function: sub_002BDD50
// Address: 0x2bdd50 - 0x2bde00
void sub_002BDD50_0x2bdd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDD50_0x2bdd50");
#endif

    switch (ctx->pc) {
        case 0x2bdd78u: goto label_2bdd78;
        case 0x2bdd8cu: goto label_2bdd8c;
        case 0x2bdda0u: goto label_2bdda0;
        case 0x2bddb4u: goto label_2bddb4;
        case 0x2bddd0u: goto label_2bddd0;
        case 0x2bdde0u: goto label_2bdde0;
        default: break;
    }

    ctx->pc = 0x2bdd50u;

    // 0x2bdd50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bdd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bdd54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bdd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bdd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bdd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bdd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bdd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bdd60: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2bdd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2bdd64: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2bdd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2bdd68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bdd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bdd6c: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2bdd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2bdd70: 0xc068ea0  jal         func_1A3A80
    ctx->pc = 0x2BDD70u;
    SET_GPR_U32(ctx, 31, 0x2BDD78u);
    ctx->pc = 0x1A3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A80u, 0x2BDD70u, 0x2BDD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD78u;
label_2bdd78:
    // 0x2bdd78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bdd78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdd7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bdd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bdd80: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2bdd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2bdd84: 0xc068e98  jal         func_1A3A60
    ctx->pc = 0x2BDD84u;
    SET_GPR_U32(ctx, 31, 0x2BDD8Cu);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x2BDD84u, 0x2BDD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD8Cu;
label_2bdd8c:
    // 0x2bdd8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bdd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdd90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bdd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdd94: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2bdd94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bdd98: 0xc0b2a50  jal         func_2CA940
    ctx->pc = 0x2BDD98u;
    SET_GPR_U32(ctx, 31, 0x2BDDA0u);
    ctx->pc = 0x2CA940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA940u, 0x2BDD98u, 0x2BDDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDDA0u;
label_2bdda0:
    // 0x2bdda0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bdda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdda4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bdda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bdda8: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2bdda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2bddac: 0xc068e98  jal         func_1A3A60
    ctx->pc = 0x2BDDACu;
    SET_GPR_U32(ctx, 31, 0x2BDDB4u);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x2BDDACu, 0x2BDDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDDB4u;
label_2bddb4:
    // 0x2bddb4: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BDDB4u;
    {
        const bool branch_taken_0x2bddb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bddb4) {
            ctx->pc = 0x2BDDE0u;
            goto label_2bdde0;
        }
    }
    ctx->pc = 0x2BDDBCu;
    // 0x2bddbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bddc0: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2bddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2bddc4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2bddc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bddc8: 0xc068d74  jal         func_1A35D0
    ctx->pc = 0x2BDDC8u;
    SET_GPR_U32(ctx, 31, 0x2BDDD0u);
    ctx->pc = 0x1A35D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A35D0u, 0x2BDDC8u, 0x2BDDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDDD0u;
label_2bddd0:
    // 0x2bddd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2bddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bddd4: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2bddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2bddd8: 0xc0af780  jal         func_2BDE00
    ctx->pc = 0x2BDDD8u;
    SET_GPR_U32(ctx, 31, 0x2BDDE0u);
    ctx->pc = 0x2BDE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDE00u, 0x2BDDD8u, 0x2BDDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDDE0u;
label_2bdde0:
    // 0x2bdde0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bdde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdde4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bdde4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdde8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bdde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bddec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2bddecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bddf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDDF8u;
    // 0x2bddf8: 0x0  nop
    ctx->pc = 0x2bddf8u;
    // NOP
    // 0x2bddfc: 0x0  nop
    ctx->pc = 0x2bddfcu;
    // NOP
    ctx->pc = 0x2bde00u;
}
