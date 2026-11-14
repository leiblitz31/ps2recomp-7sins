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

// Function: sub_00127FC0
// Address: 0x127fc0 - 0x128060
void sub_00127FC0_0x127fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127FC0_0x127fc0");
#endif

    switch (ctx->pc) {
        case 0x127fe0u: goto label_127fe0;
        case 0x128000u: goto label_128000;
        case 0x128010u: goto label_128010;
        default: break;
    }

    ctx->pc = 0x127fc0u;

    // 0x127fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x127fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x127fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x127fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x127fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x127fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x127fd0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x127fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x127fd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x127fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127fd8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x127FD8u;
    {
        const bool branch_taken_0x127fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127fd8) {
            ctx->pc = 0x128028u;
            goto label_128028;
        }
    }
    ctx->pc = 0x127FE0u;
label_127fe0:
    // 0x127fe0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x127fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x127fe4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127fe8: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x127fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x127fec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127ff0: 0x24510020  addiu       $s1, $v0, 0x20
    ctx->pc = 0x127ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x127ff4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x127ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127ff8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x127FF8u;
    SET_GPR_U32(ctx, 31, 0x128000u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x127FF8u, 0x128000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128000u;
label_128000:
    // 0x128000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x128000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128004: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x128004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128008: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x128008u;
    SET_GPR_U32(ctx, 31, 0x128010u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x128008u, 0x128010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128010u;
label_128010:
    // 0x128010: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x128010u;
    {
        const bool branch_taken_0x128010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128010) {
            ctx->pc = 0x128024u;
            goto label_128024;
        }
    }
    ctx->pc = 0x128018u;
    // 0x128018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x128018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12801c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12801Cu;
    {
        const bool branch_taken_0x12801c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12801c) {
            ctx->pc = 0x12803Cu;
            goto label_12803c;
        }
    }
    ctx->pc = 0x128024u;
label_128024:
    // 0x128024: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x128024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_128028:
    // 0x128028: 0x8f82ba14  lw          $v0, -0x45EC($gp)
    ctx->pc = 0x128028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949396)));
    // 0x12802c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x12802cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x128030: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x128030u;
    {
        const bool branch_taken_0x128030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128030) {
            ctx->pc = 0x127FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127fe0;
        }
    }
    ctx->pc = 0x128038u;
    // 0x128038: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x128038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12803c:
    // 0x12803c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12803cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x128040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x128044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128048: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x128048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12804c: 0x3e00008  jr          $ra
    ctx->pc = 0x12804Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12804Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128054u;
    // 0x128054: 0x0  nop
    ctx->pc = 0x128054u;
    // NOP
    // 0x128058: 0x0  nop
    ctx->pc = 0x128058u;
    // NOP
    // 0x12805c: 0x0  nop
    ctx->pc = 0x12805cu;
    // NOP
    ctx->pc = 0x128060u;
}
