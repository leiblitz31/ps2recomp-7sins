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

// Function: sub_003293F8
// Address: 0x3293f8 - 0x329458
void sub_003293F8_0x3293f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003293F8_0x3293f8");
#endif

    switch (ctx->pc) {
        case 0x329428u: goto label_329428;
        case 0x32943cu: goto label_32943c;
        default: break;
    }

    ctx->pc = 0x3293f8u;

    // 0x3293f8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x3293f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x3293fc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3293fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x329400: 0x8c432320  lw          $v1, 0x2320($v0)
    ctx->pc = 0x329400u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4F2320u));
    // 0x329404: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x329404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x329408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32940c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x32940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x329410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329414: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329418: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x329418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x32941c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x32941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x329420: 0xc0ca556  jal         func_329558
    ctx->pc = 0x329420u;
    SET_GPR_U32(ctx, 31, 0x329428u);
    ctx->pc = 0x329424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329420u;
    // 0x329424: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329558u, 0x329420u, 0x329428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329428u;
label_329428:
    // 0x329428: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x329428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32942c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32942Cu;
    {
        const bool branch_taken_0x32942c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x329430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32942Cu;
        // 0x329430: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32942c) {
            ctx->pc = 0x329440u;
            goto label_329440;
        }
    }
    ctx->pc = 0x329434u;
    // 0x329434: 0xc0ca0cc  jal         func_328330
    ctx->pc = 0x329434u;
    SET_GPR_U32(ctx, 31, 0x32943Cu);
    ctx->pc = 0x328330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328330u, 0x329434u, 0x32943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32943Cu;
label_32943c:
    // 0x32943c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32943cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_329440:
    // 0x329440: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x329440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329444: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x329444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32944c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32944cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329450: 0x3e00008  jr          $ra
    ctx->pc = 0x329450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329450u;
        // 0x329454: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329458u;
}
