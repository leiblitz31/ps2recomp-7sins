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

// Function: sub_004141C8
// Address: 0x4141c8 - 0x414220
void sub_004141C8_0x4141c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004141C8_0x4141c8");
#endif

    switch (ctx->pc) {
        case 0x4141ecu: goto label_4141ec;
        case 0x414204u: goto label_414204;
        default: break;
    }

    ctx->pc = 0x4141c8u;

    // 0x4141c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4141C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4141CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4141C8u;
        // 0x4141cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4141C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4141D0u;
    // 0x4141d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4141d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4141d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4141d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4141d8: 0xa68818  mult        $s1, $a1, $a2
    ctx->pc = 0x4141d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x4141dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4141dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4141e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4141e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4141e4: 0xc104f36  jal         func_413CD8
    ctx->pc = 0x4141E4u;
    SET_GPR_U32(ctx, 31, 0x4141ECu);
    ctx->pc = 0x4141E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4141E4u;
    // 0x4141e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413CD8u, 0x4141E4u, 0x4141ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4141ECu;
label_4141ec:
    // 0x4141ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4141ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4141f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4141F0u;
    {
        const bool branch_taken_0x4141f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4141F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4141F0u;
        // 0x4141f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4141f0) {
            ctx->pc = 0x414204u;
            goto label_414204;
        }
    }
    ctx->pc = 0x4141F8u;
    // 0x4141f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4141f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4141fc: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4141FCu;
    SET_GPR_U32(ctx, 31, 0x414204u);
    ctx->pc = 0x414200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4141FCu;
    // 0x414200: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4141FCu, 0x414204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x414204u;
label_414204:
    // 0x414204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x414204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x414208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x414208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41420c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41420cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x414210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414214: 0x3e00008  jr          $ra
    ctx->pc = 0x414214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414214u;
        // 0x414218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41421Cu;
    // 0x41421c: 0x0  nop
    ctx->pc = 0x41421cu;
    // NOP
    ctx->pc = 0x414220u;
}
