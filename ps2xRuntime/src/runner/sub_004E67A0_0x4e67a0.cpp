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

// Function: sub_004E67A0
// Address: 0x4e67a0 - 0x4e67b0
void sub_004E67A0_0x4e67a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E67A0_0x4e67a0");
#endif

    switch (ctx->pc) {
        case 0x4e67a0u: goto label_4e67a0;
        case 0x4e67a4u: goto label_4e67a4;
        case 0x4e67a8u: goto label_4e67a8;
        case 0x4e67acu: goto label_4e67ac;
        default: break;
    }

    ctx->pc = 0x4e67a0u;

label_4e67a0:
    // 0x4e67a0: 0x5f474d26  .word       0x5F474D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e67a4:
    if (ctx->pc == 0x4E67A4u) {
        ctx->pc = 0x4E67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E67A0u;
        // 0x4e67a4: 0x454d414e  .word       0x454D414E                   # INVALID     $t2, $t5, 0x414E # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xE at 0x4E67A4 raw=0x454D414E");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E67A8u;
        goto label_4e67a8;
    }
    ctx->pc = 0x4E67A0u;
    {
        const bool branch_taken_0x4e67a0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e67a0) {
            ctx->pc = 0x4E67A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E67A0u;
            // 0x4e67a4: 0x454d414e  .word       0x454D414E                   # INVALID     $t2, $t5, 0x414E # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xE at 0x4E67A4 raw=0x454D414E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9C3Cu;
            return;
        }
    }
    ctx->pc = 0x4E67A8u;
label_4e67a8:
    // 0x4e67a8: 0x4749465f  .word       0x4749465F                   # INVALID     $k0, $t1, 0x465F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e67a8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x1F at 0x4E67A8 raw=0x4749465F");
label_4e67ac:
    // 0x4e67ac: 0x5448  .word       0x00005448                   # jr          $zero # 00005440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4E67ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E67ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E67B4u;
}
