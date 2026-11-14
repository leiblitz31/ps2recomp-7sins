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

// Function: sub_002EFD40
// Address: 0x2efd40 - 0x2efda8
void sub_002EFD40_0x2efd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFD40_0x2efd40");
#endif

    switch (ctx->pc) {
        case 0x2efd6cu: goto label_2efd6c;
        case 0x2efd7cu: goto label_2efd7c;
        case 0x2efd88u: goto label_2efd88;
        default: break;
    }

    ctx->pc = 0x2efd40u;

    // 0x2efd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2efd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2efd44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2efd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2efd48: 0x3c10004f  lui         $s0, 0x4F
    ctx->pc = 0x2efd48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)79 << 16));
    // 0x2efd4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2efd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2efd50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2efd50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2efd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2efd58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2efd58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2efd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2efd60: 0x2610ea90  addiu       $s0, $s0, -0x1570
    ctx->pc = 0x2efd60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961808));
    // 0x2efd64: 0xc0bb816  jal         func_2EE058
    ctx->pc = 0x2EFD64u;
    SET_GPR_U32(ctx, 31, 0x2EFD6Cu);
    ctx->pc = 0x2EFD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD64u;
    // 0x2efd68: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE058u, 0x2EFD64u, 0x2EFD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFD6Cu;
label_2efd6c:
    // 0x2efd6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2efd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2efd70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2efd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd74: 0xc0bbf6a  jal         func_2EFDA8
    ctx->pc = 0x2EFD74u;
    SET_GPR_U32(ctx, 31, 0x2EFD7Cu);
    ctx->pc = 0x2EFD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD74u;
    // 0x2efd78: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFDA8u, 0x2EFD74u, 0x2EFD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFD7Cu;
label_2efd7c:
    // 0x2efd7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2efd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2efd80: 0xc0bb836  jal         func_2EE0D8
    ctx->pc = 0x2EFD80u;
    SET_GPR_U32(ctx, 31, 0x2EFD88u);
    ctx->pc = 0x2EFD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFD80u;
    // 0x2efd84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE0D8u, 0x2EFD80u, 0x2EFD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFD88u;
label_2efd88:
    // 0x2efd88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2efd88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2efd8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efd90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2efd90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2efd94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2efd94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efd98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2efd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2efd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD9Cu;
        // 0x2efda0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFDA4u;
    // 0x2efda4: 0x0  nop
    ctx->pc = 0x2efda4u;
    // NOP
    ctx->pc = 0x2efda8u;
}
