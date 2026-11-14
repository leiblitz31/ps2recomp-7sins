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

// Function: sub_00310730
// Address: 0x310730 - 0x310798
void sub_00310730_0x310730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310730_0x310730");
#endif

    switch (ctx->pc) {
        case 0x310768u: goto label_310768;
        default: break;
    }

    ctx->pc = 0x310730u;

    // 0x310730: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x310730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x310734: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310734u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310738: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x310738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x31073c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x31073cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x310740: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x310744: 0x24427e40  addiu       $v0, $v0, 0x7E40
    ctx->pc = 0x310744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32320));
    // 0x310748: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x310748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31074c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x31074cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x310750: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x310750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310754: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x310754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x310758: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x310758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x31075c: 0x24850100  addiu       $a1, $a0, 0x100
    ctx->pc = 0x31075cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x310760: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x310760u;
    SET_GPR_U32(ctx, 31, 0x310768u);
    ctx->pc = 0x310764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310760u;
    // 0x310764: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x310760u, 0x310768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310768u;
label_310768:
    // 0x310768: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x310768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31076c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x31076cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x310770: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x310770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x310774: 0x8ca3007c  lw          $v1, 0x7C($a1)
    ctx->pc = 0x310774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x310778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31077c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x31077cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x310780: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x310780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x310784: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x310784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x310788: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x310788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31078c: 0x3e00008  jr          $ra
    ctx->pc = 0x31078Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31078Cu;
        // 0x310790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31078Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310794u;
    // 0x310794: 0x0  nop
    ctx->pc = 0x310794u;
    // NOP
    ctx->pc = 0x310798u;
}
