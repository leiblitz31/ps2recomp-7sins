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

// Function: sub_00458EE0
// Address: 0x458ee0 - 0x458f80
void sub_00458EE0_0x458ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458EE0_0x458ee0");
#endif

    switch (ctx->pc) {
        case 0x458f00u: goto label_458f00;
        case 0x458f14u: goto label_458f14;
        case 0x458f20u: goto label_458f20;
        case 0x458f30u: goto label_458f30;
        default: break;
    }

    ctx->pc = 0x458ee0u;

    // 0x458ee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x458ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x458ee4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x458ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x458ee8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x458ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x458eec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x458eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x458ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x458ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x458ef4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x458ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x458ef8: 0xc11639c  jal         func_458E70
    ctx->pc = 0x458EF8u;
    SET_GPR_U32(ctx, 31, 0x458F00u);
    ctx->pc = 0x458E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458E70u, 0x458EF8u, 0x458F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458F00u;
label_458f00:
    // 0x458f00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x458f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458f04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x458f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458f08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x458f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458f0c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x458F0Cu;
    {
        const bool branch_taken_0x458f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458f0c) {
            ctx->pc = 0x458F48u;
            goto label_458f48;
        }
    }
    ctx->pc = 0x458F14u;
label_458f14:
    // 0x458f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x458f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458f18: 0xc1163a8  jal         func_458EA0
    ctx->pc = 0x458F18u;
    SET_GPR_U32(ctx, 31, 0x458F20u);
    ctx->pc = 0x458EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458EA0u, 0x458F18u, 0x458F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458F20u;
label_458f20:
    // 0x458f20: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x458f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x458f24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x458f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458f28: 0xc048c30  jal         func_1230C0
    ctx->pc = 0x458F28u;
    SET_GPR_U32(ctx, 31, 0x458F30u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x458F28u, 0x458F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458F30u;
label_458f30:
    // 0x458f30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x458F30u;
    {
        const bool branch_taken_0x458f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458f30) {
            ctx->pc = 0x458F44u;
            goto label_458f44;
        }
    }
    ctx->pc = 0x458F38u;
    // 0x458f38: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x458f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x458f3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x458F3Cu;
    {
        const bool branch_taken_0x458f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458f3c) {
            ctx->pc = 0x458F48u;
            goto label_458f48;
        }
    }
    ctx->pc = 0x458F44u;
label_458f44:
    // 0x458f44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x458f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_458f48:
    // 0x458f48: 0x212082b  sltu        $at, $s0, $s2
    ctx->pc = 0x458f48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x458f4c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x458F4Cu;
    {
        const bool branch_taken_0x458f4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x458f4c) {
            ctx->pc = 0x458F5Cu;
            goto label_458f5c;
        }
    }
    ctx->pc = 0x458F54u;
    // 0x458f54: 0x1220ffef  beqz        $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x458F54u;
    {
        const bool branch_taken_0x458f54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x458f54) {
            ctx->pc = 0x458F14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458f14;
        }
    }
    ctx->pc = 0x458F5Cu;
label_458f5c:
    // 0x458f5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x458f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458f60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x458f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x458f64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x458f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x458f68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x458f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x458f6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x458f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x458f70: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x458f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x458f74: 0x3e00008  jr          $ra
    ctx->pc = 0x458F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x458F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x458F7Cu;
    // 0x458f7c: 0x0  nop
    ctx->pc = 0x458f7cu;
    // NOP
    ctx->pc = 0x458f80u;
}
