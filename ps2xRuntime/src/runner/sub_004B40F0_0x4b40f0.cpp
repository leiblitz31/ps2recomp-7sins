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

// Function: sub_004B40F0
// Address: 0x4b40f0 - 0x4b4148
void sub_004B40F0_0x4b40f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B40F0_0x4b40f0");
#endif

    switch (ctx->pc) {
        case 0x4b4120u: goto label_4b4120;
        case 0x4b4134u: goto label_4b4134;
        default: break;
    }

    ctx->pc = 0x4b40f0u;

    // 0x4b40f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b40f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b40f4: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x4b40f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
    // 0x4b40f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b40f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4b40fc: 0x2508ee68  addiu       $t0, $t0, -0x1198
    ctx->pc = 0x4b40fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962792));
    // 0x4b4100: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x4b4100u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x4b4104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b4104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b4108: 0x2610ee50  addiu       $s0, $s0, -0x11B0
    ctx->pc = 0x4b4108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962768));
    // 0x4b410c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b410cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4110: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4b4110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4114: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x4b4114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x4b4118: 0xc12d1d6  jal         func_4B4758
    ctx->pc = 0x4B4118u;
    SET_GPR_U32(ctx, 31, 0x4B4120u);
    ctx->pc = 0x4B411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4118u;
    // 0x4b411c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4758u, 0x4B4118u, 0x4B4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4120u;
label_4b4120:
    // 0x4b4120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b4120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b4124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4128: 0x24065400  addiu       $a2, $zero, 0x5400
    ctx->pc = 0x4b4128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21504));
    // 0x4b412c: 0xc12d448  jal         func_4B5120
    ctx->pc = 0x4B412Cu;
    SET_GPR_U32(ctx, 31, 0x4B4134u);
    ctx->pc = 0x4B4130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B412Cu;
    // 0x4b4130: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5120u, 0x4B412Cu, 0x4B4134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4134u;
label_4b4134:
    // 0x4b4134: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b4134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b4138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b413c: 0x3e00008  jr          $ra
    ctx->pc = 0x4B413Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B413Cu;
        // 0x4b4140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B413Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4144u;
    // 0x4b4144: 0x0  nop
    ctx->pc = 0x4b4144u;
    // NOP
    ctx->pc = 0x4b4148u;
}
