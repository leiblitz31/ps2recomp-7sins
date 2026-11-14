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

// Function: sub_004AC1A0
// Address: 0x4ac1a0 - 0x4ac210
void sub_004AC1A0_0x4ac1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC1A0_0x4ac1a0");
#endif

    switch (ctx->pc) {
        case 0x4ac1bcu: goto label_4ac1bc;
        case 0x4ac1d4u: goto label_4ac1d4;
        case 0x4ac1f4u: goto label_4ac1f4;
        default: break;
    }

    ctx->pc = 0x4ac1a0u;

    // 0x4ac1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ac1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ac1a4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ac1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4ac1a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4ac1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4ac1ac: 0x245089e8  addiu       $s0, $v0, -0x7618
    ctx->pc = 0x4ac1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937064));
    // 0x4ac1b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ac1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ac1b4: 0xc1275de  jal         func_49D778
    ctx->pc = 0x4AC1B4u;
    SET_GPR_U32(ctx, 31, 0x4AC1BCu);
    ctx->pc = 0x4AC1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC1B4u;
    // 0x4ac1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D778u, 0x4AC1B4u, 0x4AC1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC1BCu;
label_4ac1bc:
    // 0x4ac1bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4AC1BCu;
    {
        const bool branch_taken_0x4ac1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC1BCu;
        // 0x4ac1c0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac1bc) {
            ctx->pc = 0x4AC1FCu;
            goto label_4ac1fc;
        }
    }
    ctx->pc = 0x4AC1C4u;
    // 0x4ac1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac1c8: 0x24a529f0  addiu       $a1, $a1, 0x29F0
    ctx->pc = 0x4ac1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10736));
    // 0x4ac1cc: 0xc1275ba  jal         func_49D6E8
    ctx->pc = 0x4AC1CCu;
    SET_GPR_U32(ctx, 31, 0x4AC1D4u);
    ctx->pc = 0x4AC1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC1CCu;
    // 0x4ac1d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D6E8u, 0x4AC1CCu, 0x4AC1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC1D4u;
label_4ac1d4:
    // 0x4ac1d4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4ac1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x4ac1d8: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4ac1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
    // 0x4ac1dc: 0x24a56d78  addiu       $a1, $a1, 0x6D78
    ctx->pc = 0x4ac1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28024));
    // 0x4ac1e0: 0x24e76e18  addiu       $a3, $a3, 0x6E18
    ctx->pc = 0x4ac1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28184));
    // 0x4ac1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac1e8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4ac1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4ac1ec: 0xc12776a  jal         func_49DDA8
    ctx->pc = 0x4AC1ECu;
    SET_GPR_U32(ctx, 31, 0x4AC1F4u);
    ctx->pc = 0x4AC1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC1ECu;
    // 0x4ac1f0: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DDA8u, 0x4AC1ECu, 0x4AC1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC1F4u;
label_4ac1f4:
    // 0x4ac1f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AC1F4u;
    {
        const bool branch_taken_0x4ac1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC1F4u;
        // 0x4ac1f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac1f4) {
            ctx->pc = 0x4AC200u;
            goto label_4ac200;
        }
    }
    ctx->pc = 0x4AC1FCu;
label_4ac1fc:
    // 0x4ac1fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ac1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ac200:
    // 0x4ac200: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ac200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ac204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac208: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC208u;
        // 0x4ac20c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC210u;
}
