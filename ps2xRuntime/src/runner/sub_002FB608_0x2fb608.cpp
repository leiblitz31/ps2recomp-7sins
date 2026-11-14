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

// Function: sub_002FB608
// Address: 0x2fb608 - 0x2fb670
void sub_002FB608_0x2fb608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB608_0x2fb608");
#endif

    switch (ctx->pc) {
        case 0x2fb628u: goto label_2fb628;
        case 0x2fb638u: goto label_2fb638;
        case 0x2fb654u: goto label_2fb654;
        case 0x2fb65cu: goto label_2fb65c;
        default: break;
    }

    ctx->pc = 0x2fb608u;

    // 0x2fb608: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fb608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2fb60c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x2fb60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x2fb610: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fb610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fb614: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x2fb614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x2fb618: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2fb618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2fb61c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2fb61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2fb620: 0xc0beca4  jal         func_2FB290
    ctx->pc = 0x2FB620u;
    SET_GPR_U32(ctx, 31, 0x2FB628u);
    ctx->pc = 0x2FB624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB620u;
    // 0x2fb624: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB290u, 0x2FB620u, 0x2FB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB628u;
label_2fb628:
    // 0x2fb628: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2fb628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fb62c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x2fb62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2fb630: 0xc0beca4  jal         func_2FB290
    ctx->pc = 0x2FB630u;
    SET_GPR_U32(ctx, 31, 0x2FB638u);
    ctx->pc = 0x2FB634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB630u;
    // 0x2fb634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB290u, 0x2FB630u, 0x2FB638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB638u;
label_2fb638:
    // 0x2fb638: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fb638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb63c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2fb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2fb640: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fb640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb644: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2fb644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fb648: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2fb648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fb64c: 0xc0becd4  jal         func_2FB350
    ctx->pc = 0x2FB64Cu;
    SET_GPR_U32(ctx, 31, 0x2FB654u);
    ctx->pc = 0x2FB650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB64Cu;
    // 0x2fb650: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB350u, 0x2FB64Cu, 0x2FB654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB654u;
label_2fb654:
    // 0x2fb654: 0xc0bec6e  jal         func_2FB1B8
    ctx->pc = 0x2FB654u;
    SET_GPR_U32(ctx, 31, 0x2FB65Cu);
    ctx->pc = 0x2FB658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB654u;
    // 0x2fb658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB1B8u, 0x2FB654u, 0x2FB65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB65Cu;
label_2fb65c:
    // 0x2fb65c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2fb65cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fb660: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2fb660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2fb664: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB664u;
        // 0x2fb668: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB66Cu;
    // 0x2fb66c: 0x0  nop
    ctx->pc = 0x2fb66cu;
    // NOP
    ctx->pc = 0x2fb670u;
}
