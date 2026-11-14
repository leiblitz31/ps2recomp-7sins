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

// Function: sub_004B4148
// Address: 0x4b4148 - 0x4b4188
void sub_004B4148_0x4b4148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4148_0x4b4148");
#endif

    switch (ctx->pc) {
        case 0x4b4170u: goto label_4b4170;
        case 0x4b4178u: goto label_4b4178;
        default: break;
    }

    ctx->pc = 0x4b4148u;

    // 0x4b4148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b4148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b414c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b414cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4150: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b4150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b4154: 0x24065400  addiu       $a2, $zero, 0x5400
    ctx->pc = 0x4b4154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21504));
    // 0x4b4158: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x4b4158u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x4b415c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b4160: 0x2610ee50  addiu       $s0, $s0, -0x11B0
    ctx->pc = 0x4b4160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962768));
    // 0x4b4164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b4164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4168: 0xc12d448  jal         func_4B5120
    ctx->pc = 0x4B4168u;
    SET_GPR_U32(ctx, 31, 0x4B4170u);
    ctx->pc = 0x4B416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4168u;
    // 0x4b416c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5120u, 0x4B4168u, 0x4B4170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4170u;
label_4b4170:
    // 0x4b4170: 0xc12d424  jal         func_4B5090
    ctx->pc = 0x4B4170u;
    SET_GPR_U32(ctx, 31, 0x4B4178u);
    ctx->pc = 0x4B4174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4170u;
    // 0x4b4174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5090u, 0x4B4170u, 0x4B4178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4178u;
label_4b4178:
    // 0x4b4178: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b4178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b417c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b417cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4180: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4180u;
        // 0x4b4184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4188u;
}
