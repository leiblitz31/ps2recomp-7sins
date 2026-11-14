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

// Function: sub_003106C8
// Address: 0x3106c8 - 0x310730
void sub_003106C8_0x3106c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003106C8_0x3106c8");
#endif

    switch (ctx->pc) {
        case 0x310700u: goto label_310700;
        default: break;
    }

    ctx->pc = 0x3106c8u;

    // 0x3106c8: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x3106c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x3106cc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3106ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3106d0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x3106d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3106d4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3106d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x3106d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3106d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3106dc: 0x24427e40  addiu       $v0, $v0, 0x7E40
    ctx->pc = 0x3106dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32320));
    // 0x3106e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3106e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3106e4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3106e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3106e8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3106e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3106ec: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x3106ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x3106f0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3106f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3106f4: 0x248500ff  addiu       $a1, $a0, 0xFF
    ctx->pc = 0x3106f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x3106f8: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x3106F8u;
    SET_GPR_U32(ctx, 31, 0x310700u);
    ctx->pc = 0x3106FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3106F8u;
    // 0x3106fc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x3106F8u, 0x310700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310700u;
label_310700:
    // 0x310700: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x310700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310704: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x310704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x310708: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x310708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x31070c: 0x8ca3007c  lw          $v1, 0x7C($a1)
    ctx->pc = 0x31070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x310710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310714: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x310714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x310718: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x310718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31071c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x31071cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x310720: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x310720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310724: 0x3e00008  jr          $ra
    ctx->pc = 0x310724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310724u;
        // 0x310728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31072Cu;
    // 0x31072c: 0x0  nop
    ctx->pc = 0x31072cu;
    // NOP
    ctx->pc = 0x310730u;
}
