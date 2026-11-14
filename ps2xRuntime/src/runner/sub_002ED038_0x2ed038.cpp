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

// Function: sub_002ED038
// Address: 0x2ed038 - 0x2ed058
void sub_002ED038_0x2ed038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED038_0x2ed038");
#endif

    ctx->pc = 0x2ed038u;

    // 0x2ed038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed03c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2ed03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2ed040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed044: 0x8c44ea90  lw          $a0, -0x1570($v0)
    ctx->pc = 0x2ed044u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2ed048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed04c: 0x80bb400  j           func_2ED000
    ctx->pc = 0x2ED04Cu;
    ctx->pc = 0x2ED050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED04Cu;
    // 0x2ed050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED000u, 0x2ED04Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2ED054u;
    // 0x2ed054: 0x0  nop
    ctx->pc = 0x2ed054u;
    // NOP
    ctx->pc = 0x2ed058u;
}
