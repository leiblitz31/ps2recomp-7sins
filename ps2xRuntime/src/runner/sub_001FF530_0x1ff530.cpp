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

// Function: sub_001FF530
// Address: 0x1ff530 - 0x1ff590
void sub_001FF530_0x1ff530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF530_0x1ff530");
#endif

    ctx->pc = 0x1ff530u;

    // 0x1ff530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff534: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ff534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ff538: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ff538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ff53c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff540: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1ff540u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ff544: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff548: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x1ff548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x1ff54c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff550: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF550u;
    {
        const bool branch_taken_0x1ff550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ff550) {
            ctx->pc = 0x1FF570u;
            goto label_1ff570;
        }
    }
    ctx->pc = 0x1FF558u;
    // 0x1ff558: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ff558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff55c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1ff55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ff560: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff564: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF564u;
    {
        const bool branch_taken_0x1ff564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ff564) {
            ctx->pc = 0x1FF570u;
            goto label_1ff570;
        }
    }
    ctx->pc = 0x1FF56Cu;
    // 0x1ff56c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ff56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff570:
    // 0x1ff570: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ff570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff578: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ff578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ff57c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF584u;
    // 0x1ff584: 0x0  nop
    ctx->pc = 0x1ff584u;
    // NOP
    // 0x1ff588: 0x0  nop
    ctx->pc = 0x1ff588u;
    // NOP
    // 0x1ff58c: 0x0  nop
    ctx->pc = 0x1ff58cu;
    // NOP
    ctx->pc = 0x1ff590u;
}
