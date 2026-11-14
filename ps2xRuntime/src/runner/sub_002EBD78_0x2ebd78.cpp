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

// Function: sub_002EBD78
// Address: 0x2ebd78 - 0x2ebdb8
void sub_002EBD78_0x2ebd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBD78_0x2ebd78");
#endif

    ctx->pc = 0x2ebd78u;

label_2ebd78:
    // 0x2ebd78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ebd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ebd7c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2ebd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2ebd80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebd84: 0x24a5ba90  addiu       $a1, $a1, -0x4570
    ctx->pc = 0x2ebd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949520));
    // 0x2ebd88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebd8c: 0x80bb3b6  j           func_2ECED8
    ctx->pc = 0x2EBD8Cu;
    ctx->pc = 0x2EBD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBD8Cu;
    // 0x2ebd90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECED8u;
    sub_002ECED8_0x2eced8(rdram, ctx, runtime); return;
    ctx->pc = 0x2EBD94u;
    // 0x2ebd94: 0x0  nop
    ctx->pc = 0x2ebd94u;
    // NOP
    // 0x2ebd98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ebd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ebd9c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2ebd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2ebda0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ebda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ebda4: 0x8c44ea90  lw          $a0, -0x1570($v0)
    ctx->pc = 0x2ebda4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4EEA90u));
    // 0x2ebda8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ebda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebdac: 0x80baf5e  j           func_2EBD78
    ctx->pc = 0x2EBDACu;
    ctx->pc = 0x2EBDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBDACu;
    // 0x2ebdb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBD78u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_2ebd78;
    ctx->pc = 0x2EBDB4u;
    // 0x2ebdb4: 0x0  nop
    ctx->pc = 0x2ebdb4u;
    // NOP
    ctx->pc = 0x2ebdb8u;
}
