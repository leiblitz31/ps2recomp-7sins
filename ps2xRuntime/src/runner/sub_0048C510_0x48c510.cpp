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

// Function: sub_0048C510
// Address: 0x48c510 - 0x48c580
void sub_0048C510_0x48c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C510_0x48c510");
#endif

    switch (ctx->pc) {
        case 0x48c548u: goto label_48c548;
        case 0x48c568u: goto label_48c568;
        default: break;
    }

    ctx->pc = 0x48c510u;

    // 0x48c510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48c514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48c518: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48c518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48c51c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c520: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48c524: 0x14020004  bne         $zero, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48C524u;
    {
        const bool branch_taken_0x48c524 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x48c524) {
            ctx->pc = 0x48C538u;
            goto label_48c538;
        }
    }
    ctx->pc = 0x48C52Cu;
    // 0x48c52c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48c52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c530: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x48C530u;
    {
        const bool branch_taken_0x48c530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c530) {
            ctx->pc = 0x48C56Cu;
            goto label_48c56c;
        }
    }
    ctx->pc = 0x48C538u;
label_48c538:
    // 0x48c538: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c53c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48c540: 0xc0e20da  jal         func_388368
    ctx->pc = 0x48C540u;
    SET_GPR_U32(ctx, 31, 0x48C548u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x48C540u, 0x48C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C548u;
label_48c548:
    // 0x48c548: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c54c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48c550: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48C550u;
    {
        const bool branch_taken_0x48c550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c550) {
            ctx->pc = 0x48C568u;
            goto label_48c568;
        }
    }
    ctx->pc = 0x48C558u;
    // 0x48c558: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48c558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c55c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48c560: 0xc123160  jal         func_48C580
    ctx->pc = 0x48C560u;
    SET_GPR_U32(ctx, 31, 0x48C568u);
    ctx->pc = 0x48C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C580u, 0x48C560u, 0x48C568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C568u;
label_48c568:
    // 0x48c568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48c56c:
    // 0x48c56c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48c56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c570: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48c570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48c574: 0x3e00008  jr          $ra
    ctx->pc = 0x48C574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C57Cu;
    // 0x48c57c: 0x0  nop
    ctx->pc = 0x48c57cu;
    // NOP
    ctx->pc = 0x48c580u;
}
